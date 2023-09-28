#include "behavior_planning/default_behavior_planner.hpp"
#include "rclcpp_components/register_node_macro.hpp"

namespace roar
{
    namespace planning
    {
        namespace behavior_planning
        {
            namespace impl
            {
                DefaultBehaviorPlanner::DefaultBehaviorPlanner(const rclcpp::NodeOptions &options)
                    : base::BehaviorPlannerBTLifeCycleNode(options)
                {
                    RCLCPP_INFO(get_logger(), "Constructing Default Behavior Planner");
                }

                void DefaultBehaviorPlanner::Initialize()
                {
                    base::BehaviorPlannerBTLifeCycleNode::Initialize();
                    RCLCPP_INFO(get_logger(), "Initializing Default Behavior Planner");
                }

                void DefaultBehaviorPlanner::RunTree()
                {
                    RCLCPP_INFO(get_logger(), "Running Default Behavior Planner");
                }

                void DefaultBehaviorPlanner::PostRunTree()
                {
                    RCLCPP_INFO(get_logger(), "Post Running Default Behavior Planner");
                }
            } // namespace impl
        }     // namespace behavior_planning
    }         // namespace planning
} // namespace roar

RCLCPP_COMPONENTS_REGISTER_NODE(
    roar::planning::behavior_planning::impl::DefaultBehaviorPlanner)