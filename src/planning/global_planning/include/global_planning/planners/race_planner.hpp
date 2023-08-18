#include "global_planning/global_planner_interface.hpp"

namespace ROAR
{
    namespace GlobalPlanning
    {
        class RacePlanner : public GlobalPlannerInterface
        {
        public:
            RacePlanner(nav2_util::LifecycleNode *node);
            ~RacePlanner();
            void initialize();
            void step();

        private:
        };
    }
}