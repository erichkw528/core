#include "behavior_planning/base/base_bt_lifecycle_node.hpp"

namespace roar
{
    namespace planning
    {
        namespace behavior_planning
        {
            namespace base
            {
                BehaviorPlannerBTLifeCycleNode::BehaviorPlannerBTLifeCycleNode(const rclcpp::NodeOptions &options) : BehaviorPlannerBaseLifecycleNode(options)
                {
                    RCLCPP_INFO(get_logger(), "BehaviorPlannerBTLifeCycleNode is now online.");
                }

                void BehaviorPlannerBTLifeCycleNode::Initialize()
                {
                    RCLCPP_INFO(this->get_logger(), "Initialized BT Base Node");
                    blackboard_ = BT::Blackboard::create();
                    bt_tree_ = factory_.createTreeFromFile("behavior_planning", blackboard_);
                    groot_monitor_ = std::make_unique<BT::PublisherZMQ>(bt_tree_);
                    groot_log_file_ = std::make_unique<BT::FileLogger>(bt_tree_, "bt_trace.fbl");
                }
                void BehaviorPlannerBTLifeCycleNode::PostRunTree()
                {
                }

                BT::Blackboard::Ptr &BehaviorPlannerBTLifeCycleNode::GetBlackboard()
                {
                    return blackboard_;
                }

                BT::Tree &BehaviorPlannerBTLifeCycleNode::GetBtTree()
                {
                    return bt_tree_;
                }
            }
        }
    }
} // namespace roar
