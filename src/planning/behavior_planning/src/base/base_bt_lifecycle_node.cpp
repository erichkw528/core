#include "behavior_planning/base/base_bt_lifecycle_node.hpp"

#include "behavior_planning/bt_nodes/condition_nodes/if_goal_reached.hpp"

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
                    RegisterTreeNodes();
                    bt_tree_ = factory_.createTreeFromFile("/home/michael/Desktop/projects/roar-gokart-ws/src/core/core/src/planning/behavior_planning/param/test.xml", blackboard_);
                    std::string groot_ip = "192.168.50.200";
                    groot_monitor_ =
                        std::make_unique<BT::PublisherZMQ>(
                            bt_tree_,
                            static_cast<unsigned>(100),
                            static_cast<unsigned>(1666),
                            static_cast<unsigned>(1667));
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

                void BehaviorPlannerBTLifeCycleNode::RegisterTreeNodes()
                {
                    RegisterTreeNodeLogClock<roar::planning::behavior::condition::IfGoalReached>("IfGoalReached");
                }

                template <typename T>
                void BehaviorPlannerBTLifeCycleNode::RegisterTreeNodeLogClock(const std::string &node_name)
                {
                    BT::NodeBuilder builder =
                        [&](const std::string &name, const BT::NodeConfiguration &config)
                    {
                        return std::make_unique<T>(
                            name, config, this->get_logger(), *this->get_clock());
                    };
                    factory_.registerBuilder<T>(
                        node_name,
                        builder);
                }
            } // namespace base
        }     // namespace behavior_planning
    }         // namespace behavior_planning
} // namespace roar
