#ifndef ROAR_CONTROL__PLUGIN_HPP_
#define ROAR_CONTROL__PLUGIN_HPP_

#include "rclcpp/rclcpp.hpp"

namespace roar
{
    namespace control
    {
        class ControllerPlugin : public rclcpp::Node
        {

        public:
            typedef std::shared_ptr<ControllerPlugin> SharedPtr;
            typedef std::unique_ptr<ControllerPlugin> UniquePtr;

            ControllerPlugin(const std::string &name, const std::string &ns = "");
            virtual ~ControllerPlugin() = default;
            virtual void initialize(nav2_util::LifecycleNode *node) = 0;
            virtual bool configure() { return true; }
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