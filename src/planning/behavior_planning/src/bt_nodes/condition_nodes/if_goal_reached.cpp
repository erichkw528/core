#include "behavior_planning/bt_nodes/condition_nodes/if_goal_reached.hpp"
#include "rclcpp/logging.hpp"
#include "behaviortree_cpp_v3/action_node.h"
#include "behaviortree_cpp_v3/tree_node.h"
#include "behaviortree_cpp_v3/basic_types.h"

#include "behavior_planning/common/utils.hpp"

namespace roar
{
    namespace planning
    {
        namespace behavior
        {
            namespace condition
            {
                IfGoalReached::IfGoalReached(
                    const std::string &condition_name,
                    const BT::NodeConfiguration &conf,
                    const rclcpp::Logger &logger,
                    rclcpp::Clock &clock) : BT::ConditionNode(condition_name, conf), logger_(logger), clock_(clock)
                {
                    RCLCPP_DEBUG(logger_, "IfGoalReached created");
                }

                BT::NodeStatus IfGoalReached::tick()
                {
                    RCLCPP_DEBUG(logger_, "IfGoalReached ticked");

                    // const std::shared_ptr<roar::planning::behavior::BTInputs> inputs =
                    auto inputs = config().blackboard->get<roar::planning::behavior::BTInputs::ConstSharedPtr>("inputs");
                    if (!inputs)
                    {
                        RCLCPP_ERROR(logger_, "IfGoalReached: no inputs");
                        return BT::NodeStatus::FAILURE;
                    }

                    if (!inputs->goal_pose)
                    {
                        RCLCPP_WARN(logger_, "IfGoalReached: no goal pose");
                        return BT::NodeStatus::FAILURE;
                    }

                    if (!inputs->current_pose)
                    {
                        RCLCPP_WARN(logger_, "IfGoalReached: no current pose");
                        return BT::NodeStatus::FAILURE;
                    }

                    float goal_radius = config().blackboard->get<float>("goal_radius");
                    if (goal_radius <= 0)
                    {
                        RCLCPP_ERROR(logger_, "IfGoalReached: goal_radius cannot be <= 0");
                        return BT::NodeStatus::FAILURE;
                    }

                    // if within a certain radius of the goal, return success
                    double distance = roar::planning::behavior::utils::distance(inputs->goal_pose, inputs->current_pose);
                    if (distance < 0)
                    {
                        RCLCPP_ERROR(logger_, "IfGoalReached: distance cannot be zero");
                        return BT::NodeStatus::FAILURE;
                    }
                    else if (distance <= goal_radius)
                    {
                        RCLCPP_INFO_STREAM(logger_, "IfGoalReached: distance: " << distance);
                        return BT::NodeStatus::SUCCESS;
                    }

                    return BT::NodeStatus::FAILURE;
                }

                BT::PortsList IfGoalReached::providedPorts()
                {
                    return {
                        BT::InputPort<float>("goal_radius"),
                        BT::InputPort<roar::planning::behavior::BTInputs::ConstSharedPtr>("inputs"),
                    };
                }

            } // namespace condition
        }     // namespace behavior
    }         // namespace planning
} // namespace roar