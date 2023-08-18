#include "global_planning/global_planner_interface.hpp"
#include "global_planning/planners/race_planner.hpp"

namespace ROAR
{
    namespace GlobalPlanning
    {
        RacePlanner::RacePlanner(nav2_util::LifecycleNode *node) : GlobalPlannerInterface(node, "RacePlanner")
        {
            this->m_node_->declare_parameter("waypoint_path", "waypoints.txt");
            RCLCPP_INFO_STREAM(m_logger_, "Waypoint_path: " << this->m_node_->get_parameter("waypoint_path").as_string());
        }
        RacePlanner::~RacePlanner()
        {
        }

        void RacePlanner::initialize()
        {
            // read in waypoints from waypoints.txt
        }

        void RacePlanner::step()
        {
            RCLCPP_DEBUG(m_logger_, "RacePlanner Stepped");
        }

    }
}