// Copyright 2023 Siddharth Saha

#ifndef ROAR__BEHAVIOR_PLANNING__BASE_LIFECYCLE_NODE_HPP_
#define ROAR__BEHAVIOR_PLANNING__BASE_LIFECYCLE_NODE_HPP_

#include <memory>
#include <cstdint>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "rclcpp_lifecycle/lifecycle_publisher.hpp"

namespace roar
{
    namespace planning
    {
        namespace behavior_planning
        {
            namespace base
            {
                class BehaviorPlannerBaseLifecycleNode : public rclcpp_lifecycle::LifecycleNode
                {
                public:
                    explicit BehaviorPlannerBaseLifecycleNode(const rclcpp::NodeOptions &options);
                    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
                    on_configure(
                        const rclcpp_lifecycle::State &previous_state) override;
                    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn on_activate(
                        const rclcpp_lifecycle::State &previous_state) override;
                    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn on_deactivate(
                        const rclcpp_lifecycle::State &previous_state) override;
                    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn on_shutdown(
                        const rclcpp_lifecycle::State &previous_state) override;
                    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn on_cleanup(
                        const rclcpp_lifecycle::State &previous_state) override;
                    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn on_error(
                        const rclcpp_lifecycle::State &previous_state) override;

                protected:
                    virtual void Initialize() = 0;
                };
            } // namespace base
        }     // namespace behavior_planning
    }         // namespace planning
} // namespace roar

#endif // ROAR__BEHAVIOR_PLANNING__BASE_LIFECYCLE_NODE_HPP_