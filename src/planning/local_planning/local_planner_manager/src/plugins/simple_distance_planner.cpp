#ifndef ROAR_PLANNING__PLUGIN__DUMMY_PLANNER_PLUGIN_CPP_
#define ROAR_PLANNING__PLUGIN__DUMMY_PLANNER_PLUGIN_CPP_

#include "rclcpp/rclcpp.hpp"
#include "local_planner_manager/local_planner_manager_state.hpp"
#include "local_planner_manager/local_planner_plugin_interface.hpp"
#include "nav_msgs/msg/path.hpp"

using namespace std::chrono_literals;

namespace roar 
{
    namespace planning 
    {
        namespace local 
        {
            class SimpleDistancePlanner : public LocalPlannerPlugin
            {
            public:
                SimpleDistancePlanner() = default;
                ~SimpleDistancePlanner() = default;

                void initialize(nav2_util::LifecycleNode *node) override
                {
                    RCLCPP_INFO(node->get_logger(), "Initializing SimpleDistancePlanner");
                    node_ = node;
                }

                bool configure(const LocalPlannerManagerConfig::SharedPtr config) override
                {
                    RCLCPP_INFO(node_->get_logger(), "Configuring SimpleDistancePlanner");
                    return true;
                }

                bool update(const LocalPlannerManagerState::SharedPtr state) override
                {
                    RCLCPP_INFO(node_->get_logger(), "Updating SimpleDistancePlanner");
                    return true;
                }

                nav_msgs::msg::Path::SharedPtr compute() override
                {
                    RCLCPP_INFO(node_->get_logger(), "Computing SimpleDistancePlanner");
                    return std::make_shared<nav_msgs::msg::Path>();
                }

                const char *get_plugin_name() override
                {
                    return "SimpleDistancePlanner";
                }

                // geometry_msgs::msg::PoseStamped::SharedPtr LocalPlannerManagerNode::findNextWaypoint(const float next_waypoint_min_dist)
                // {
                //     if (this->m_state_ == nullptr)
                //     {
                //         RCLCPP_DEBUG_STREAM(this->get_logger(), "global_plan_ is null, not finding waypoint");
                //         return nullptr;
                //     }

                //     RCLCPP_DEBUG(this->get_logger(), "finding waypoint");

                //     // find closest waypoint
                //     // find the closest waypoint to the current position
                //     double min_distance = std::numeric_limits<double>::max();
                //     size_t closest_waypoint_index = 0;
                //     for (size_t i = 0; i < global_plan_->poses.size(); i++)
                //     {
                //         double distance = std::sqrt(std::pow(this->latest_odom->pose.pose.position.x - global_plan_->poses[i].pose.position.x, 2) +
                //                                     std::pow(this->latest_odom->pose.pose.position.y - global_plan_->poses[i].pose.position.y, 2) +
                //                                     std::pow(this->latest_odom->pose.pose.position.z - global_plan_->poses[i].pose.position.z, 2));
                //         if (distance < min_distance)
                //         {
                //             min_distance = distance;
                //             closest_waypoint_index = i;
                //         }
                //     }
                //     RCLCPP_DEBUG_STREAM(this->get_logger(), "closest waypoint index: " << closest_waypoint_index << ", distance: " << min_distance);

                //     // find the next waypoint, including looping back to the beginning
                //     // double next_waypoint_dist = cte_and_lookahead.second;
                //     double next_waypoint_dist = next_waypoint_min_dist;
                //     size_t next_waypoint_index = closest_waypoint_index;
                //     for (size_t i = 0; i < global_plan_->poses.size(); i++)
                //     {
                //         size_t next_index = (closest_waypoint_index + i) % global_plan_->poses.size();
                //         double distance = std::sqrt(std::pow(this->latest_odom->pose.pose.position.x - global_plan_->poses[next_index].pose.position.x, 2) +
                //                                     std::pow(this->latest_odom->pose.pose.position.y - global_plan_->poses[next_index].pose.position.y, 2) +
                //                                     std::pow(this->latest_odom->pose.pose.position.z - global_plan_->poses[next_index].pose.position.z, 2));
                //         if (distance > next_waypoint_dist)
                //         {
                //             next_waypoint_index = next_index;
                //             break;
                //         }
                //     }
                //     RCLCPP_DEBUG_STREAM(this->get_logger(), "next waypoint index: " << next_waypoint_index << ", next_waypoint_dist: " << next_waypoint_dist);
                //     geometry_msgs::msg::PoseStamped next_waypoint = this->global_plan_->poses[next_waypoint_index];

                //     return std::make_shared<geometry_msgs::msg::PoseStamped>(next_waypoint);
                // }

            private:
                nav2_util::LifecycleNode *node_{};
            };
        } // namespace local
    } // namespace planning
} // namespace roar

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(roar::planning::local::SimpleDistancePlanner, roar::planning::local::LocalPlannerPlugin)

#endif // ROAR_PLANNING__PLUGIN__DUMMY_PLANNER_PLUGIN_CPP_