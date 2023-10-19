#ifndef ROAR__BEHAVIOR_PLANNING__ACTION_NODES__LAT_PID_TUNER_HPP_
#define ROAR__BEHAVIOR_PLANNING__ACTION_NODES__LAT_PID_TUNER_HPP_

#include "behaviortree_cpp_v3/action_node.h"
#include "behaviortree_cpp_v3/tree_node.h"
#include "behaviortree_cpp_v3/basic_types.h"

#include "rclcpp/clock.hpp"
#include "rclcpp/logger.hpp"

namespace roar
{
    namespace planning
    {
        namespace behavior
        {
            namespace action
            {
                class LatPIDtuner : public BT::SyncActionNode
                {
                public:
                    LatPIDtuner(
                        const std::string &action_name,
                        const BT::NodeConfiguration &conf,
                        const rclcpp::Logger &logger,
                        rclcpp::Clock &clock);
                    BT::NodeStatus tick() override;
                    static BT::PortsList providedPorts();

                private:
                    rclcpp::Logger logger_;
                    rclcpp::Clock &clock_;
                };
            } // namespace action
        }     // namespace behavior
    }         // namespace planning
} // namespace roar

#endif // ROAR__BEHAVIOR_PLANNING__ACTION_NODES__LAT_PID_TUNER_HPP_