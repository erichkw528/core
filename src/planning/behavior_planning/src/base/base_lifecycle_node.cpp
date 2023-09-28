#include "behavior_planning/base/base_lifecycle_node.hpp"

namespace roar
{
    namespace planning
    {
        namespace behavior_planning
        {
            namespace base
            {
                BehaviorPlannerBaseLifecycleNode::BehaviorPlannerBaseLifecycleNode(
                    const rclcpp::NodeOptions &options) : rclcpp_lifecycle::LifecycleNode("behavior_planner", options)
                {
                    RCLCPP_INFO(get_logger(), "BehaviorPlannerBaseLifecycleNode is now online.");
                }

                rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn BehaviorPlannerBaseLifecycleNode::on_configure(const rclcpp_lifecycle::State &previous_state)
                {
                    RCLCPP_INFO(get_logger(), "BehaviorPlannerBaseLifecycleNode is now configuring.");
                    Initialize();
                    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
                }

                rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn BehaviorPlannerBaseLifecycleNode::on_activate(const rclcpp_lifecycle::State &previous_state)
                {
                    RCLCPP_INFO(get_logger(), "BehaviorPlannerBaseLifecycleNode is now activating.");
                    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
                }

                rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn BehaviorPlannerBaseLifecycleNode::on_deactivate(const rclcpp_lifecycle::State &previous_state)
                {
                    RCLCPP_INFO(get_logger(), "BehaviorPlannerBaseLifecycleNode is now deactivating.");
                    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
                }

                rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn BehaviorPlannerBaseLifecycleNode::on_shutdown(const rclcpp_lifecycle::State &previous_state)
                {
                    RCLCPP_INFO(get_logger(), "BehaviorPlannerBaseLifecycleNode is now shutting down.");
                    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
                }

                rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn BehaviorPlannerBaseLifecycleNode::on_cleanup(const rclcpp_lifecycle::State &previous_state)
                {
                    RCLCPP_INFO(get_logger(), "BehaviorPlannerBaseLifecycleNode is now cleaning up.");
                    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
                }

                rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn BehaviorPlannerBaseLifecycleNode::on_error(const rclcpp_lifecycle::State &previous_state)
                {
                    RCLCPP_INFO(get_logger(), "BehaviorPlannerBaseLifecycleNode is now in error state.");
                    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
                }

                void BehaviorPlannerBaseLifecycleNode::Initialize()
                {
                    RCLCPP_INFO(get_logger(), "BehaviorPlannerBaseLifecycleNode is now initializing.");
                }

            } // namespace base
        }     // namespace behavior_planning
    }         // namespace planning
}