#ifndef LOCAL_PLANNER_MANAGER_NODE_HPP_
#define LOCAL_PLANNER_MANAGER_NODE_HPP_

#include "control_interfaces/action/control.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/polygon_stamped.hpp"
#include "nav2_util/lifecycle_node.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "nav_msgs/msg/path.hpp"
#include <nav2_msgs/msg/costmap_meta_data.hpp>
#include <nav2_msgs/srv/clear_entire_costmap.hpp>
#include <nav2_msgs/srv/get_costmap.hpp>
#include <nav_msgs/msg/occupancy_grid.hpp>
#include "diagnostic_msgs/msg/diagnostic_array.hpp"
#include "diagnostic_msgs/msg/diagnostic_status.hpp"
#include "diagnostic_msgs/msg/key_value.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "local_planner_manager/local_planner_manager_state.hpp"

namespace roar
{
    namespace planning
    {
        namespace local
        {
            class LocalPlannerManagerNode : public nav2_util::LifecycleNode
            {
                using ControlAction = control_interfaces::action::Control;
                using GoalHandleControlAction =
                    rclcpp_action::ClientGoalHandle<ControlAction>;

            public:
                LocalPlannerManagerNode();
                ~LocalPlannerManagerNode();

                void execute();
            private:
                roar::planning::local::LocalPlannerManagerConfig::SharedPtr m_config_;
                rclcpp::TimerBase::SharedPtr execution_timer;

            protected:
                // implement the lifecycle interface
                nav2_util::CallbackReturn
                on_configure(const rclcpp_lifecycle::State &state) override;

                nav2_util::CallbackReturn
                on_activate(const rclcpp_lifecycle::State &state) override;

                nav2_util::CallbackReturn
                on_deactivate(const rclcpp_lifecycle::State &state) override;

                nav2_util::CallbackReturn
                on_cleanup(const rclcpp_lifecycle::State &state) override;

                nav2_util::CallbackReturn
                on_shutdown(const rclcpp_lifecycle::State &state) override;

                /* execution */
                void p_execute();
                rclcpp::TimerBase::SharedPtr execute_timer;
                int num_execution = 0;
                bool didReceiveAllMessages();
                bool canExecute();

                /* footprint */
                std::shared_ptr<geometry_msgs::msg::PolygonStamped> latest_footprint_;
                rclcpp::Subscription<geometry_msgs::msg::PolygonStamped>::ConstSharedPtr
                    footprint_sub_;
                std::mutex footprint_mutex;
                void onLatestFootprintReceived(
                    geometry_msgs::msg::PolygonStamped::SharedPtr msg)
                {
                    std::lock_guard<std::mutex> lock(footprint_mutex);
                    latest_footprint_ = msg;
                }

                /* Odometry */
                std::shared_ptr<nav_msgs::msg::Odometry> latest_odom;
                rclcpp::Subscription<nav_msgs::msg::Odometry>::ConstSharedPtr odom_sub_;
                std::mutex odom_mutex_;
                void onLatestOdomReceived(nav_msgs::msg::Odometry::SharedPtr msg)
                {
                    std::lock_guard<std::mutex> lock(odom_mutex_);
                    latest_odom = msg;
                }

                /* Costmap */
                void p_updateLatestCostmap();
                std::shared_ptr<rclcpp::Node> costmap_node_;
                rclcpp::Client<nav2_msgs::srv::GetCostmap>::SharedPtr costmap_client_;
                void p_PrintCostMapInfo(const nav2_msgs::msg::Costmap::SharedPtr msg);
                std::shared_ptr<nav2_msgs::msg::Costmap> latest_costmap_;

                /* control client */
                rclcpp_action::Client<ControlAction>::SharedPtr control_action_client_;
                std::string controllerServerRoute;

                void control_action_goal_response_callback(
                    std::shared_future<GoalHandleControlAction::SharedPtr> future);
                void control_action_feedback_callback(
                    GoalHandleControlAction::SharedPtr future,
                    const std::shared_ptr<const ControlAction::Feedback> feedback);
                void control_action_result_callback(
                    const GoalHandleControlAction::WrappedResult &result);
                void control_send_goal(const nav_msgs::msg::Path::SharedPtr path,
                                       float target_spd);

                // diagnostic
                std::shared_ptr<rclcpp_lifecycle::LifecyclePublisher<diagnostic_msgs::msg::DiagnosticArray>> diagnostic_pub_;

                // global plan
                std::shared_ptr<nav_msgs::msg::Path> global_plan_;
                rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr global_plan_sub_;
                std::mutex global_plan_mutex_;
                void onLatestGlobalPlanReceived(nav_msgs::msg::Path::SharedPtr msg)
                {
                    if (msg->poses.size() == 0)
                    {
                        RCLCPP_WARN(get_logger(), "Global plan is empty, not accepting it.");
                        return;
                    }
                    std::lock_guard<std::mutex> lock(global_plan_mutex_);
                    global_plan_ = msg;
                }
                geometry_msgs::msg::PoseStamped::SharedPtr findNextWaypoint(const float next_waypoint_min_dist);
                rclcpp_lifecycle::LifecyclePublisher<geometry_msgs::msg::PoseStamped>::SharedPtr next_waypoint_publisher_;
            };
        } 
    }
}
#endif