#ifndef GLOBAL_PLANNER_INTERFACE_HPP
#define GLOBAL_PLANNER_INTERFACE_HPP
#include <rclcpp/rclcpp.hpp>
#include "nav2_util/lifecycle_node.hpp"

namespace ROAR
{
    namespace GlobalPlanning
    {
        class GlobalPlannerInterface
        {
        public:
            GlobalPlannerInterface(nav2_util::LifecycleNode *node, std::string name = "GlobalPlannerInterface") : m_node_(node), m_logger_(rclcpp::get_logger(name))
            {
            }
            virtual ~GlobalPlannerInterface() = default;

            virtual void initialize() = 0;
            virtual void step() = 0;

        protected:
            nav2_util::LifecycleNode *m_node_{};
            rclcpp::Logger m_logger_;
        };
    }
} // namespace roar

#endif // GLOBAL_PLANNER_INTERFACE_HPP