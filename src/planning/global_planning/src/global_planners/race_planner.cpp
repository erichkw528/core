#include "global_planning/global_planner_interface.hpp"
#include "global_planning/planners/race_planner.hpp"

namespace ROAR
{
    namespace GlobalPlanning
    {
        RacePlanner::RacePlanner(nav2_util::LifecycleNode *node) : GlobalPlannerInterface(node)
        {
        }
        RacePlanner::~RacePlanner()
        {
        }

        void RacePlanner::initialize()
        {
        }

        void RacePlanner::step()
        {
            RCLCPP_DEBUG(rclcpp::get_logger("RacePlanner"), "RacePlanner Stepped");
        }

    }
}