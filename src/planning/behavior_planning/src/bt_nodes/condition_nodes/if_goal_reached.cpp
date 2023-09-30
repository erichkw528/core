#include "behavior_planning/bt_nodes/condition_nodes/if_goal_reached.hpp"
#include "rclcpp/logging.hpp"
#include "behaviortree_cpp_v3/action_node.h"
#include "behaviortree_cpp_v3/tree_node.h"
#include "behaviortree_cpp_v3/basic_types.h"

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
                    RCLCPP_INFO(logger_, "IfGoalReached created");
                }

                BT::NodeStatus IfGoalReached::tick()
                {
                    RCLCPP_INFO(logger_, "IfGoalReached ticked");
                    return BT::NodeStatus::SUCCESS;
                }

                BT::PortsList IfGoalReached::providedPorts()
                {
                    return {
                        BT::InputPort<std::string>("goal"),
                        BT::InputPort<std::string>("current_pose"),
                        BT::OutputPort<std::string>("is_goal_reached"),
                    };
                }
            } // namespace condition
        }     // namespace behavior
    }         // namespace planning
} // namespace roar