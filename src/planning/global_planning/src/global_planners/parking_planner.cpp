#include "global_planning/global_planner_interface.hpp"
#include "global_planning/planners/parking_planner.hpp"
#include "rclcpp/rclcpp.hpp"

namespace ROAR
{
    namespace GlobalPlanning
    {
        ParkingPlanner::ParkingPlanner(nav2_util::LifecycleNode *node) : GlobalPlannerInterface(node, "parking_planner")
        {
            RCLCPP_INFO(m_logger_, "ParkingPlanner is initialized");
        }
        ParkingPlanner::~ParkingPlanner()
        {
        }

        void ParkingPlanner::initialize()
        {
            this->m_node_->declare_parameter("map_frame", "map");
            this->m_node_->declare_parameter("base_link_frame", "base_link");
            RCLCPP_INFO(m_logger_, "ParkingPlanner is initialized");
        }

        bool ParkingPlanner::on_configure()
        {
            m_global_map_subscriber = this->m_node_->create_subscription<nav_msgs::msg::OccupancyGrid>(
                "/roar/map", rclcpp::QoS(rclcpp::KeepLast(1)).transient_local().reliable(),
                std::bind(&ParkingPlanner::onReceiveGlobalMap, this, std::placeholders::_1));
            
            RCLCPP_INFO(m_logger_, "ParkingPlanner is configured");
            return true;
        }

        StepResult ParkingPlanner::step(const StepInput input)
        {
            StepResult stepResult;
            if (didGoalPoseUpdated && didReceiveGoalPose() && checkGlobalMap() && checkGoalWithinGlobalMap() && checkVehicleStatus())
            {
                NavPlannerGlobalPathFinderInputs planning_inputs;
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

            NavPlannerNextWaypointFinderInputs next_waypoint_inputs;
            NavPlannerNextWaypointFinderOutputs next_waypoint_outputs = findNextWaypoint(next_waypoint_inputs);
            if (next_waypoint_outputs.status)
            {
                stepResult.next_waypoint_pose_stamped = next_waypoint_outputs.target_waypoint;
                stepResult.status = true;
            }
            else
            {
                RCLCPP_ERROR(m_logger_, "Failed to find next waypoint");
                stepResult.status = false;
                return stepResult;
            }

            return stepResult;
        }

        bool ParkingPlanner::checkGoalWithinGlobalMap()
        {
            return false;
        }

        NavPlannerGlobalPathFinderOutput ParkingPlanner::planTrajectory(const NavPlannerGlobalPathFinderInputs &inputs)
        {
            NavPlannerGlobalPathFinderOutput outputs;
            outputs.status = false;
            return outputs;
        }
        NavPlannerNextWaypointFinderOutputs ParkingPlanner::findNextWaypoint(const NavPlannerNextWaypointFinderInputs &inputs)
        {
            NavPlannerNextWaypointFinderOutputs outputs;

            if (inputs.current_pose == nullptr || inputs.global_path == nullptr)
            {
                RCLCPP_ERROR(m_logger_, "Inputs for next waypoint finder is not valid");
                outputs.status = false;
                return outputs;
            }
            outputs.target_waypoint = std::make_shared<geometry_msgs::msg::PoseStamped>();
            outputs.target_waypoint->header.stamp = this->m_node_->get_clock()->now();
            outputs.target_waypoint->header.frame_id = this->m_node_->get_parameter("map_frame").as_string();
            outputs.target_waypoint->pose = inputs.global_path->poses[0].pose; // TODO: find a better point
            outputs.status = true;
            return outputs;
        }

    }
}