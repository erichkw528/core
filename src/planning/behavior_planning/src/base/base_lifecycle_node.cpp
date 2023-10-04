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
                    this->declare_parameter("loop_rate", 0.1);
                    loop_rate_ = this->get_parameter("loop_rate").as_double();
                    this->declare_parameter("debug", false);

                    if (this->get_parameter("debug").as_bool() == true)
                    {
                        auto ret = rcutils_logging_set_logger_level(get_logger().get_name(), RCUTILS_LOG_SEVERITY_DEBUG); // enable or disable debug
                    }

                    RCLCPP_INFO(get_logger(), "BehaviorPlannerBaseLifecycleNode is now online.");
                }

                rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn BehaviorPlannerBaseLifecycleNode::on_configure(const rclcpp_lifecycle::State &previous_state)
                {
                    RCLCPP_DEBUG(get_logger(), "BehaviorPlannerBaseLifecycleNode is now configuring.");
                    Initialize();

                    timer_ =
                        rclcpp::create_timer(
                            this, this->get_clock(), rclcpp::Duration::from_seconds(this->loop_rate_), std::bind(&BehaviorPlannerBaseLifecycleNode::on_timer_callback, this));
                    bt_inputs_ = std::make_shared<roar::planning::behavior::BTInputs>();

                    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
                }

                rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn BehaviorPlannerBaseLifecycleNode::on_activate(const rclcpp_lifecycle::State &previous_state)
                {
                    RCLCPP_DEBUG(get_logger(), "BehaviorPlannerBaseLifecycleNode is now activating.");
                    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
                }

                rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn BehaviorPlannerBaseLifecycleNode::on_deactivate(const rclcpp_lifecycle::State &previous_state)
                {
                    RCLCPP_DEBUG(get_logger(), "BehaviorPlannerBaseLifecycleNode is now deactivating.");
                    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
                }

                rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn BehaviorPlannerBaseLifecycleNode::on_shutdown(const rclcpp_lifecycle::State &previous_state)
                {
                    RCLCPP_DEBUG(get_logger(), "BehaviorPlannerBaseLifecycleNode is now shutting down.");
                    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
                }

                rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn BehaviorPlannerBaseLifecycleNode::on_cleanup(const rclcpp_lifecycle::State &previous_state)
                {
                    RCLCPP_DEBUG(get_logger(), "BehaviorPlannerBaseLifecycleNode is now cleaning up.");
                    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
                }

                rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn BehaviorPlannerBaseLifecycleNode::on_error(const rclcpp_lifecycle::State &previous_state)
                {
                    RCLCPP_DEBUG(get_logger(), "BehaviorPlannerBaseLifecycleNode is now in error state.");
                    return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
                }

                void BehaviorPlannerBaseLifecycleNode::Initialize()
                {
                    RCLCPP_DEBUG(get_logger(), "BehaviorPlannerBaseLifecycleNode is now initializing.");
                }

                void BehaviorPlannerBaseLifecycleNode::on_timer_callback()
                {
                    RCLCPP_DEBUG(get_logger(), "BehaviorPlannerBaseLifecycleNode is now stepping.");
                    // TODO: update params

                    try
                    {
                        bool status = this->on_step();

                        if (status == false)
                        {
                            RCLCPP_WARN(get_logger(), "BehaviorPlannerBaseLifecycleNode failed to step");
                        }
                    }
                    catch (const std::exception &e)
                    {
                        RCLCPP_ERROR(get_logger(), "BehaviorPlannerBaseLifecycleNode failed to step due to %s", e.what());
                    }
                }

                const roar::planning::behavior::BTInputs::ConstSharedPtr
                BehaviorPlannerBaseLifecycleNode::GetInputs()
                {
                    if (bt_inputs_ == nullptr)
                    {
                        bt_inputs_ = std::make_shared<roar::planning::behavior::BTInputs>();
                        RCLCPP_WARN(get_logger(), "BehaviorPlannerBaseLifecycleNode: bt_inputs_ was null");
                    }

                    return bt_inputs_;
                }

            } // namespace base
        }     // namespace behavior_planning
    }         // namespace planning
}