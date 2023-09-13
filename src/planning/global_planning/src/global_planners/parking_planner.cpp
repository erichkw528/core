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

            return stepResult;
        }

        bool NavPlanner::checkGoalWithinGlobalMap()
        {
            return false;
        }

        NavPlannerGlobalPathFinderOutput NavPlanner::planTrajectory(const NavPlannerGlobalPathFinderInputs &inputs)
        {
            NavPlannerGlobalPathFinderOutput outputs;
            outputs.status = false;
            return outputs;
        }
        NavPlannerNextWaypointFinderOutputs NavPlanner::findNextWaypoint(const NavPlannerNextWaypointFinderInputs &inputs)
        {
            NavPlannerNextWaypointFinderOutputs outputs;
            outputs.status = false;
            return outputs;
        }

    }
}