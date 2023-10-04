#ifndef ROAR__BEHAVIOR_PLANNING__UTILS_HPP_
#define ROAR__BEHAVIOR_PLANNING__UTILS_HPP_
#include <geometry_msgs/msg/pose.hpp>
#include <cmath>
namespace roar
{
    namespace planning
    {
        namespace behavior
        {
            struct BTInputs
            {
                typedef std::shared_ptr<BTInputs> SharedPtr;
                typedef std::shared_ptr<const BTInputs> ConstSharedPtr;
                typedef std::unique_ptr<BTInputs> UniquePtr;

                geometry_msgs::msg::Pose::SharedPtr goal_pose{};
                geometry_msgs::msg::Pose::SharedPtr current_pose{};
            };

            namespace utils
            {
                /**
                 * @brief calculate the distance between two poses
                 * @note if either pose is null, return -1
                 * @param pose1
                 * @param pose2
                 */
                double distance(const geometry_msgs::msg::Pose::SharedPtr &pose1, const geometry_msgs::msg::Pose::SharedPtr &pose2);
            } // namespace utils

        } // namespace behavior_planning
    }     // namespace planning
} // namespace roar

#endif // ROAR__BEHAVIOR_PLANNING__UTILS_HPP_