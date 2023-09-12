#include "global_planning/global_planner_interface.hpp"
#include "global_planning/planners/parking_planner.hpp"

namespace ROAR
{
    namespace GlobalPlanning
    {
        NavPlanner::NavPlanner(nav2_util::LifecycleNode *node) : GlobalPlannerInterface(node, "NavPlanner")
        {
        }
        NavPlanner::~NavPlanner()
        {
        }

        void NavPlanner::initialize()
        {
        }

        StepResult NavPlanner::step(const StepInput input)
        {
            StepResult stepResult;
            stepResult.status = false;
            return stepResult;
        }

        bool NavPlanner::checkGlobalMap()
        {
            return true;
        }

        bool NavPlanner::checkGoalWithinGlobalMap()
        {
            return true;
        }

        bool NavPlanner::checkVehicleStatus()
        {
            return true;
        }

        bool NavPlanner::planTrajectory()
        {
            return true;
        }
    }
}