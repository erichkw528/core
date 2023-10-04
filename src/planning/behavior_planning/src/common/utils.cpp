#include "behavior_planning/common/utils.hpp"

namespace roar
{
    namespace planning
    {
        namespace behavior_planning
        {
            namespace utils
            {
                double distance(const geometry_msgs::msg::Pose::SharedPtr &pose1, const geometry_msgs::msg::Pose::SharedPtr &pose2)
                {
                    // check null
                    if (!pose1 || !pose2)
                    {
                        return -1;
                    }
                    return std::sqrt(std::pow(pose1->position.x - pose2->position.x, 2) + std::pow(pose1->position.y - pose2->position.y, 2));
                }
            } // namespace utils
        }     // namespace behavior_planning
    }         // namespace planning
} // namespace roar