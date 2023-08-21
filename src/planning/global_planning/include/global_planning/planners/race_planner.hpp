#include "global_planning/global_planner_interface.hpp"
#include <nav_msgs/msg/odometry.hpp>
#include <vector>

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
            std::pair<double, double> calculateCTEAndLookahead(const std::vector<std::vector<double>> &cte_config, double currentCTE)
            {
                double bestLookahead = -1.0;                                    // Default value if no suitable lookahead is found
                double smallestDifference = std::numeric_limits<double>::max(); // Initialize with a large value

                for (const auto &config : cte_config)
                {
                    double lookahead = config[0];
                    double desiredCTE = config[1];
                    double difference = std::abs(currentCTE - desiredCTE);

                    if (difference < smallestDifference)
                    {
                        smallestDifference = difference;
                        bestLookahead = lookahead;
                    }
                }

                return std::make_pair(currentCTE, bestLookahead);
            }

        private:
            void read_waypoints(const std::string &file_path);
            void read_cte_config(const std::string &file_path);

            std::vector<nav_msgs::msg::Odometry>
                waypoints_;
            nav_msgs::msg::Path::SharedPtr global_path_msg = nullptr;

            // cte -> lookahead distance
            std::vector<std::vector<double>> cte_config = {
                {0.5, 5.0}};
        };
    }
}