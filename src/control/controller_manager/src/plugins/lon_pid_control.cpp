#ifndef ROAR_CONTROL__PLUGIN__LONG_PID_CONTROL_HPP_
#define ROAR_CONTROL__PLUGIN__LONG_PID_CONTROL_HPP_

#include "rclcpp/rclcpp.hpp"
#include "controller_manager/controller_plugin_interface.hpp"
#include "nav2_util/lifecycle_node.hpp"
#include "roar_msgs/msg/vehicle_control.hpp"
#include "controller_manager/controller_state.hpp"

namespace roar
{
    namespace control
    {
        class LongPIDControllerPlugin : public ControllerPlugin
        {
            typedef std::shared_ptr<LongPIDControllerPlugin> SharedPtr;
            typedef std::unique_ptr<LongPIDControllerPlugin> UniquePtr;

            const char *get_plugin_name() override
            {
                return "LongPIDControllerPlugin";
            }
            void initialize(nav2_util::LifecycleNode *node) override
            {
                node_ = node;
            }

            bool configure()
            {
                return true;
            }
            bool update(const ControllerState *state)
            {
                return true;
            }
            bool compute(roar_msgs::msg::VehicleControl::SharedPtr controlMsg)
            {
                return true;
            }

        private:
            nav2_util::LifecycleNode *node_{};
        };
    } // namespace control
} // roar

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(roar::control::LongPIDControllerPlugin, roar::control::ControllerPlugin)

#endif // ROAR_CONTROL__PLUGIN__LONG_PID_CONTROL_HPP_