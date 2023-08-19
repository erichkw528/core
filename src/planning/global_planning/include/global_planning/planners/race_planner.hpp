#include "global_planning/global_planner_interface.hpp"
#include <nav_msgs/msg/odometry.hpp>

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
            StepResult step(const StepInput input);

        protected:
            size_t findNextWaypoint(const nav_msgs::msg::Odometry::SharedPtr odom);

        private:
            void read_waypoints(const std::string &file_path);
            std::vector<nav_msgs::msg::Odometry> waypoints_;
            nav_msgs::msg::Path::SharedPtr global_path_msg = nullptr;
       };
    }
}