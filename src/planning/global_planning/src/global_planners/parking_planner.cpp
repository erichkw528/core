#include "global_planning/global_planner_interface.hpp"
#include "global_planning/planners/parking_planner.hpp"
#include "rclcpp/rclcpp.hpp"
#include "global_planning/planners/potential_field_algo.hpp"
#include "tf2/buffer_core.h"
namespace ROAR
{
    namespace GlobalPlanning
    {
        ParkingPlanner::ParkingPlanner(nav2_util::LifecycleNode *node) : GlobalPlannerInterface(node, "ParkingPlanner")
        {
            this->m_node_->declare_parameter("ParkingPlanner.map_frame", "map");
            this->m_node_->declare_parameter("ParkingPlanner.base_link_frame", "base_link");
            this->m_node_->declare_parameter("ParkingPlanner.path_step", 1.0);
            this->path_step = this->m_node_->get_parameter("ParkingPlanner.path_step").as_double();
            RCLCPP_INFO(m_logger_, "ParkingPlanner is initialized");
        }
        ParkingPlanner::~ParkingPlanner()
        {
        }

        void ParkingPlanner::initialize()
        {
            RCLCPP_INFO(m_logger_, "ParkingPlanner is initialized");
            tf_buffer_ =
                std::make_unique<tf2_ros::Buffer>(this->m_node_->get_clock());
            tf_listener_ =
                std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
        }

        bool ParkingPlanner::on_configure()
        {
            m_global_map_subscriber = this->m_node_->create_subscription<nav_msgs::msg::OccupancyGrid>(
                "/roar/map", rclcpp::QoS(rclcpp::KeepLast(1)).transient_local().reliable(),
                std::bind(&ParkingPlanner::onReceiveGlobalMap, this, std::placeholders::_1));
            m_goal_pose_subscriber = this->m_node_->create_subscription<geometry_msgs::msg::PoseStamped>(
                "/goal_pose", rclcpp::QoS(1).reliable(),
                std::bind(&ParkingPlanner::onReceiveGoalPose, this, std::placeholders::_1));
            RCLCPP_INFO(m_logger_, "ParkingPlanner is configured");
            return true;
        }

        bool ParkingPlanner::on_activate()
        {

            RCLCPP_INFO(m_logger_, "ParkingPlanner is activated");
            return true;
        }

        void ParkingPlanner::onReceiveGoalPose(const geometry_msgs::msg::PoseStamped::SharedPtr msg)
        {
            RCLCPP_INFO(m_logger_, "Received goal pose");
            m_goal_pose_stamped = msg;
            didGoalPoseUpdated = true;
            // std::string map_frame = this->m_node_->get_parameter("map_frame").as_string();
            // try
            // {

            //     // transform to map frame
            //     auto transformStamped = this->tf_buffer_->lookupTransform(map_frame, msg->header.frame_id, rclcpp::Time(0));
            //     geometry_msgs::msg::PoseStamped::SharedPtr transformed_goal_pose = std::make_shared<geometry_msgs::msg::PoseStamped>();
            //     tf2::doTransform(*msg, *transformed_goal_pose, transformStamped);

            // }
            // catch (const std::exception &e)
            // {
            //     RCLCPP_ERROR_STREAM(m_logger_, "Failed to transform goal pose to map frame: " << e.what());
            // }
        }

        StepResult ParkingPlanner::step(const StepInput input)
        {
            // RCLCPP_DEBUG_STREAM(m_logger_, "-----");

            StepResult stepResult;
            // RCLCPP_DEBUG_STREAM(m_logger_,
            //                     "\ndidGoalPoseUpdated: " << didGoalPoseUpdated
            //                                              << "\ndidReceiveGoalPose: " << didReceiveGoalPose()
            //                                              << "\ncheckGlobalMap: " << checkGlobalMap()
            //                                              << "\ncheckGoalWithinGlobalMap: " << checkGoalWithinGlobalMap()
            //                                              << "\ncheckVehicleStatus: " << checkVehicleStatus(input));
            if (didGoalPoseUpdated && didReceiveGoalPose() && checkGlobalMap() && checkGoalWithinGlobalMap() && checkVehicleStatus(input))
            {
                RCLCPP_DEBUG_STREAM(m_logger_, "Start planning global trajectory");
                // if have never computed global path, compute it
                NavPlannerGlobalPathFinderInputs planning_inputs;
                planning_inputs.odom = input.odom;
                planning_inputs.global_map = m_global_map;
                planning_inputs.goal_pose = m_goal_pose_stamped;
                NavPlannerGlobalPathFinderOutput planning_outputs = planTrajectory(planning_inputs);
                if (planning_outputs.status)
                {
                    RCLCPP_DEBUG_STREAM(m_logger_, "Path planned successfully: " << planning_outputs.global_path->poses.size() << " points");
                    m_global_path = planning_outputs.global_path;

                    stepResult.global_path = planning_outputs.global_path;
                    stepResult.status = true;
                }
                else
                {
                    RCLCPP_ERROR(m_logger_, "Failed to plan trajectory");
                    stepResult.status = false;
                    return stepResult;
                }
            }
            didGoalPoseUpdated = false; // indicate that this goal pose is processed

            if (m_global_path == nullptr)
            {
                // TODO: emit diagnois msg
                stepResult.status = false;
                return stepResult;
            }
            // p_debugPath(m_global_path);
            stepResult.status = true;
            stepResult.global_path = m_global_path;
            return stepResult;
        }

        bool ParkingPlanner::checkGoalWithinGlobalMap()
        {
            if (m_global_map == nullptr || m_goal_pose_stamped == nullptr)
            {
                return false;
            }
            // check if goal pose is within global map
            if (m_goal_pose_stamped->pose.position.x < m_global_map->info.origin.position.x ||
                m_goal_pose_stamped->pose.position.y < m_global_map->info.origin.position.y ||
                m_goal_pose_stamped->pose.position.x > m_global_map->info.origin.position.x + m_global_map->info.width * m_global_map->info.resolution ||
                m_goal_pose_stamped->pose.position.y > m_global_map->info.origin.position.y + m_global_map->info.height * m_global_map->info.resolution)
            {
                RCLCPP_ERROR(m_logger_, "Goal pose is not within global map");
                return false;
            }
            return true;
        }

        NavPlannerGlobalPathFinderOutput ParkingPlanner::planTrajectory(const NavPlannerGlobalPathFinderInputs &inputs)
        {
            NavPlannerGlobalPathFinderOutput outputs;
            // check if inputs are all filled
            if (inputs.global_map == nullptr || inputs.odom == nullptr || inputs.goal_pose == nullptr)
            {
                outputs.status = false;
                RCLCPP_ERROR(m_logger_, "Inputs for global path finder is not valid");
                return outputs;
            }

            RCLCPP_DEBUG_STREAM(m_logger_, "Start planning global trajectory");
            // print debug infos
            p_debugGlobalTrajectoryInputs(inputs);
            int nx = inputs.global_map->info.width;
            int ny = inputs.global_map->info.height;
            ROAR::global_planning::PotentialFieldPlanning potentialFieldPlanning(nx, ny);

            // set start
            std::tuple<uint64_t, uint64_t> start = std::make_tuple(
                uint64_t(inputs.odom->pose.pose.position.x / inputs.global_map->info.resolution),
                uint64_t(inputs.odom->pose.pose.position.y / inputs.global_map->info.resolution));
            bool status = potentialFieldPlanning.setStart(start);
            if (!status)
            {
                RCLCPP_ERROR(m_logger_, "Failed to set start");
                outputs.status = false;
                return outputs;
            }
            RCLCPP_DEBUG_STREAM(m_logger_, "Start: " << std::get<0>(start) << ", " << std::get<1>(start));

            // set up costmap
            potentialFieldPlanning.setObstacles(inputs.global_map->data);
            RCLCPP_DEBUG(m_logger_, "Costmap is set");

            // inflate obstacles
            // potentialFieldPlanning.inflateObstacles(1, 1.0);

            // set goal
            std::tuple<uint64_t, uint64_t> goal = std::make_tuple(
                uint64_t(inputs.goal_pose->pose.position.x / inputs.global_map->info.resolution),
                uint64_t(inputs.goal_pose->pose.position.y / inputs.global_map->info.resolution));

            RCLCPP_DEBUG_STREAM(m_logger_, "Goal: " << std::get<0>(goal) << ", " << std::get<1>(goal));

            // set up input
            ROAR::global_planning::PotentialFieldPlanning::PotentialFieldPlanningInput::SharedPtr input = std::make_shared<ROAR::global_planning::PotentialFieldPlanning::PotentialFieldPlanningInput>();
            input->goal = goal;
            input->max_iter = nx * ny;
            input->goal_threshold = 10; // TODO: adjust according to resolution and inputs

            // calculate timing
            auto start_time = std::chrono::high_resolution_clock::now();
            ROAR::global_planning::PotentialFieldPlanning::PotentialFieldPlanningResult output = potentialFieldPlanning.plan(input);
            auto end_time = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

            RCLCPP_DEBUG_STREAM(m_logger_, "Path planned in: [" << duration.count() / 1000.0 << "] seconds");

            if (!output.status)
            {
                RCLCPP_ERROR(m_logger_, "Failed to plan");
                outputs.status = false;
                return outputs;
            }
            RCLCPP_DEBUG_STREAM(m_logger_, "Path found! Path length = " << output.path->size());
            // convert path to global path
            nav_msgs::msg::Path::SharedPtr global_path = std::make_shared<nav_msgs::msg::Path>();
            global_path->header.frame_id = inputs.global_map->header.frame_id;
            global_path->header.stamp = this->m_node_->get_clock()->now();
            for (auto &point : *output.path)
            {
                geometry_msgs::msg::PoseStamped pose_stamped;
                pose_stamped.header.frame_id = inputs.global_map->header.frame_id;
                pose_stamped.header.stamp = this->m_node_->get_clock()->now();
                pose_stamped.pose.position.x = std::get<0>(point) * inputs.global_map->info.resolution;
                pose_stamped.pose.position.y = std::get<1>(point) * inputs.global_map->info.resolution;
                pose_stamped.pose.position.z = 0;
                pose_stamped.pose.orientation.x = 0;
                pose_stamped.pose.orientation.y = 0;
                pose_stamped.pose.orientation.z = 0;
                pose_stamped.pose.orientation.w = 1;
                global_path->poses.push_back(pose_stamped);
            }
            outputs.global_path = global_path;

            // print out path
            p_debugPath(outputs.global_path);

            outputs.status = true;
            return outputs;
        }
    }
}