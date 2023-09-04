#ifndef ROAR__VEHICLE_STATE_MANAGER_NODE_HPP_
#define ROAR__VEHICLE_STATE_MANAGER_NODE_HPP_

#include "nav2_util/lifecycle_node.hpp"
#include "roar_msgs/msg/vehicle_state.hpp"
#include "roar_msgs/msg/vehicle_control.h"
namespace roar
{
    class VehicleStateManagerNode : public nav2_util::LifecycleNode
    {
    public:
        VehicleStateManagerNode();
        ~VehicleStateManagerNode();

    protected:
        nav2_util::CallbackReturn on_configure(const rclcpp_lifecycle::State &state) override;
        nav2_util::CallbackReturn on_activate(const rclcpp_lifecycle::State &state) override;
        nav2_util::CallbackReturn on_deactivate(const rclcpp_lifecycle::State &state) override;
        nav2_util::CallbackReturn on_cleanup(const rclcpp_lifecycle::State &state) override;
        nav2_util::CallbackReturn on_shutdown(const rclcpp_lifecycle::State &state) override;

        roar_msgs::msg::VehicleState::SharedPtr vehicle_state = nullptr;
        std::shared_ptr<rclcpp_lifecycle::LifecyclePublisher<roar_msgs::msg::VehicleState>> vehicle_state_pub_;

        rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscriber_;
        void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg);
        
        rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_subscriber_;
        void imu_callback(const sensor_msgs::msg::Imu::SharedPtr msg);

        rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr speedometer_sub_;
        void speedometer_callback(const std_msgs::msg::Float32::SharedPtr msg);

        rclcpp::Subscription<roar_msgs::msg::VehicleControl>::SharedPtr vehicle_control_sub_;
        void vehicle_control_callback(const roar_msgs::msg::VehicleControl::SharedPtr msg);

    private:
        rclcpp::TimerBase::SharedPtr update_timer;
        void update_callback();
    };
}

#endif // ROAR__VEHICLE_STATE_MANAGER_NODE_HPP_