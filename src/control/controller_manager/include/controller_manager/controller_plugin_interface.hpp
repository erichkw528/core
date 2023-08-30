#ifndef ROAR_CONTROL__PLUGIN_HPP_
#define ROAR_CONTROL__PLUGIN_HPP_

#include "rclcpp/rclcpp.hpp"
#include "nav2_util/lifecycle_node.hpp"
#include "controller_manager/controller_state.hpp"
#include "roar_msgs/msg/vehicle_control.hpp"
namespace roar
{
    namespace control
    {
        class ControllerPlugin
        {

        public:
            typedef std::shared_ptr<ControllerPlugin> SharedPtr;
            typedef std::unique_ptr<ControllerPlugin> UniquePtr;

            virtual ~ControllerPlugin() = default;
            virtual void initialize(nav2_util::LifecycleNode *node) = 0;
            virtual bool configure() { return true; }
            virtual bool update(const ControllerState *state) { return true; }
            virtual bool compute(roar_msgs::msg::VehicleControl::SharedPtr controlMsg) = 0;
            virtual const char *get_plugin_name()
            {
                return "default plugin name";
            }

        protected:
            rclcpp::Node &node() { return *m_node_; }

        private:
            rclcpp::Node *m_node_{};
        };

    } // namespace control
}
#endif // ROAR_CONTROL__PLUGIN_HPP_