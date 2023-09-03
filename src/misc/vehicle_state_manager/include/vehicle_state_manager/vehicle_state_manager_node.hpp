#ifndef ROAR__VEHICLE_STATE_MANAGER_NODE_HPP_
#define ROAR__VEHICLE_STATE_MANAGER_NODE_HPP_

#include "nav2_util/lifecycle_node.hpp"

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

    private:
        void on_update();
        rclcpp::TimerBase::SharedPtr update_timer;
        void update_callback();
    };
}

#endif // ROAR__VEHICLE_STATE_MANAGER_NODE_HPP_