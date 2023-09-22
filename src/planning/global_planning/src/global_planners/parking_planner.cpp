#include "global_planning/global_planner_interface.hpp"
#include "global_planning/planners/parking_planner.hpp"
#include "rclcpp/rclcpp.hpp"
#include "global_planning/planners/navfn.hpp"

namespace ROAR
{
    namespace GlobalPlanning
    {
        ParkingPlanner::ParkingPlanner(nav2_util::LifecycleNode *node) : GlobalPlannerInterface(node, "ParkingPlanner")
        {
            this->m_node_->declare_parameter("map_frame", "map");
            this->m_node_->declare_parameter("base_link_frame", "base_link");
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
                // TODO: emit diagnoise msg
                stepResult.status = false;
                return stepResult;
            }

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
            roar::global_planning::NavFn navfn(nx, ny);

            // set start
            int *start = new int[2]{
                int(inputs.odom->pose.pose.position.x / inputs.global_map->info.resolution),
                int(inputs.odom->pose.pose.position.y / inputs.global_map->info.resolution)};
            navfn.setStart(start);
            RCLCPP_DEBUG_STREAM(m_logger_, "Start: " << start[0] << ", " << start[1]);

            // set goal
            int *goal = new int[2]{
                int(inputs.goal_pose->pose.position.x / inputs.global_map->info.resolution),
                int(inputs.goal_pose->pose.position.y / inputs.global_map->info.resolution)};
            navfn.setGoal(goal);
            RCLCPP_DEBUG_STREAM(m_logger_, "Goal: " << goal[0] << ", " << goal[1]);

            // set up costmap
            navfn.setCostmap(reinterpret_cast<const unsigned char *>(inputs.global_map->data.data()), false, true);
            RCLCPP_DEBUG(m_logger_, "Costmap is set");

            // setup granularities
            navfn.pathStep = this->path_step;

            bool status = navfn.calcNavFnAstar();
            if (!status)
            {
                RCLCPP_ERROR(m_logger_, "Failed to calculate global path");
                outputs.status = false;
                return outputs;
            }
            int len = navfn.calcPath(nx * ny, NULL);

            if (len > 0)
            { // found plan
                RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "[NavFn] Path found, %d steps\n", len);
            }
            else
            {
                RCLCPP_DEBUG(rclcpp::get_logger("rclcpp"), "[NavFn] No path found\n");
            }

            // // print out path
            // this->p_debugPath(&navfn);

            // add it to output
            outputs.global_path = std::make_shared<nav_msgs::msg::Path>();
            auto timestamp = this->m_node_->get_clock()->now();
            std::string frame_id = this->m_node_->get_parameter("map_frame").as_string();
            outputs.global_path->header.stamp = timestamp;
            outputs.global_path->header.frame_id = frame_id;
            int pathLen = navfn.getPathLen();
            float *pathX = navfn.getPathX();
            float *pathY = navfn.getPathY();
            outputs.global_path->poses.resize(pathLen);
            for (int i = 0; i < pathLen; i++)
            {
                outputs.global_path->poses[i].header.stamp = timestamp;
                outputs.global_path->poses[i].header.frame_id = frame_id;
                outputs.global_path->poses[i].pose.position.x = pathX[i] * inputs.global_map->info.resolution;
                outputs.global_path->poses[i].pose.position.y = pathY[i] * inputs.global_map->info.resolution;
                outputs.global_path->poses[i].pose.position.z = 0;
                outputs.global_path->poses[i].pose.orientation.x = 0;
                outputs.global_path->poses[i].pose.orientation.y = 0;
                outputs.global_path->poses[i].pose.orientation.z = 0;
                outputs.global_path->poses[i].pose.orientation.w = 1;
            }
            outputs.status = true;
            return outputs;
        }
    }
}