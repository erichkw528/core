#include "global_planning/global_planner_interface.hpp"

namespace ROAR
{
    namespace GlobalPlanning
    {
        class NavPlanner : public GlobalPlannerInterface
        {
        public:
            NavPlanner(nav2_util::LifecycleNode *node);
            ~NavPlanner();
            void initialize();
            StepResult step(const StepInput input);

        protected:
            bool checkGlobalMap();
            bool checkGoalWithinGlobalMap();
            bool checkVehicleStatus();
            bool planTrajectory();
        };
    }
} // namespace ROAR
