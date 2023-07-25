#ifndef GLOBAL_PLANNER_NODE_HPP
#define GLOBAL_PLANNER_NODE_HPP

#include "nav2_util/lifecycle_node.hpp"
#include "nav_msgs/msg/path.hpp"
#include <visualization_msgs/msg/marker.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include "GeographicLib/Geocentric.hpp"
#include "GeographicLib/LocalCartesian.hpp"
#include "sensor_msgs/msg/nav_sat_fix.hpp"

namespace roar
{
    namespace global_planning
    {
        struct CartesianPosition
        {
            double x;
            double y;
            double z;
        };
        struct GeodeticPosition
        {
            double latitude;
            double longitude;
            double altitude;
        };

        class GlobalPlannerNode : public nav2_util::LifecycleNode
        {
        public:
            using LifecycleNode::LifecycleNode;
            GlobalPlannerNode();
            ~GlobalPlannerNode();

        protected:
            // Implement the necessary lifecycle functions

            // This function is called when the node transitions from inactive to active state
            nav2_util::CallbackReturn on_activate(const rclcpp_lifecycle::State &state) override;

            // This function is called when the node transitions from active to inactive state
            nav2_util::CallbackReturn on_deactivate(const rclcpp_lifecycle::State &state) override;

            // This function is called when the node transitions from finalized to initialized state
            nav2_util::CallbackReturn on_configure(const rclcpp_lifecycle::State &state) override;

            // This function is called when the node transitions from initialized to inactive state
            nav2_util::CallbackReturn on_cleanup(const rclcpp_lifecycle::State &state) override;

            // This function is called when the node transitions from inactive to finalized state
            nav2_util::CallbackReturn on_shutdown(const rclcpp_lifecycle::State &state) override;

            // private helper functions
            void timer_callback();
            void parse_datum();
            void convert_gnss_to_local_cartesian(GeodeticPosition inputGeoPosition, CartesianPosition &outputCartesianPosition);
            std::vector<GeodeticPosition> read_gnss_waypoints(const std::string &file_path);
            size_t findClosestWaypoint(const CartesianPosition &vehicle_position);

            // publishers
            std::shared_ptr<nav_msgs::msg::Path> waypoints_;
            std::shared_ptr<rclcpp_lifecycle::LifecyclePublisher<geometry_msgs::msg::Pose>> next_waypoint_publisher_;
            std::shared_ptr<rclcpp_lifecycle::LifecyclePublisher<visualization_msgs::msg::Marker>> next_waypoint_visualization_publisher_;
            std::shared_ptr<rclcpp_lifecycle::LifecyclePublisher<nav_msgs::msg::Path>> global_path_publisher_;
            rclcpp::TimerBase::SharedPtr global_path_publisher_timer_;

            // subscribers
            rclcpp::Subscription<sensor_msgs::msg::NavSatFix>::SharedPtr nav_sat_fix_subscriber_;
            void onGnssReceived(const sensor_msgs::msg::NavSatFix::SharedPtr msg);

            // private variables
            GeodeticPosition map_origin_;
            GeographicLib::LocalCartesian proj;
            std::vector<GeodeticPosition> gnss_waypoints_;
            std::vector<CartesianPosition> local_waypoints_;
            float next_waypoint_distance_threshold_ = 5.0;
            int curr_waypoint_index = -1;
        };

    } // namespace global_planning
} // namespace roar

#endif // GLOBAL_PLANNER_NODE_HPP