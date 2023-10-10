#ifndef ROAR__CONTROL__PLUGIN__LON_TRAPEZOIDAL_CONTROL_HPP_
#define ROAR__CONTROL__PLUGIN__LON_TRAPEZOIDAL_CONTROL_HPP_

#include "rclcpp/rclcpp.hpp"
#include "controller_manager/controller_plugin_interface.hpp"
#include "nav2_util/lifecycle_node.hpp"
#include "roar_msgs/msg/vehicle_control.hpp"
#include "controller_manager/controller_state.hpp"

using namespace roar::control;
namespace roar
{
    namespace control
    {
        struct LonTrapezoidalControllerPluginConfig
        {
            double accel_rate = 0.5; // m/s^2
            double decel_rate = 0.5; // m/s^2
            double target_speed = 5; // m/s

            double accel_time = 0.0;
            double accel_dist = 0.0;
            double decel_time = 0.0;
            double decel_dist = 0.0;
        };

        struct LonTrapezoidalControllerPluginState
        {
            double vehicle_x = 0.0;
            double vehicle_y = 0.0;
            double goal_x = 0.0;
            double goal_y = 0.0;
            double dt;
            uint32_t last_updated_time = 0;

            double prev_spd = 0.0;
        };

        class LonTrapezoidalControllerPlugin : public ControllerPlugin
        {
            typedef std::shared_ptr<LonTrapezoidalControllerPlugin> SharedPtr;
            typedef std::unique_ptr<LonTrapezoidalControllerPlugin> UniquePtr;

            const char *get_plugin_name() override
            {
                return "LonTrapezoidalControllerPlugin";
            }
            void initialize(nav2_util::LifecycleNode *node) override
            {
                ControllerPlugin::initialize(node); // Call the base class's initialize function
                auto defaultConfig = LonTrapezoidalControllerPluginConfig();
                config_ = LonTrapezoidalControllerPluginConfig{
                    this->node().declare_parameter<double>("lon_control.trapezoidal.accel_rate", defaultConfig.accel_rate),
                    this->node().declare_parameter<double>("lon_control.trapezoidal.decel_rate", defaultConfig.decel_rate),
                    this->node().declare_parameter<double>("lon_control.trapezoidal.target_speed", defaultConfig.target_speed)};
            }

            bool configure(const ControllerManagerConfig::SharedPtr config)
            {
                this->config_.accel_time = this->config_.target_speed / this->config_.accel_rate;
                this->config_.accel_dist = this->config_.target_speed * this->config_.accel_time / 2;
                this->config_.decel_time = this->config_.target_speed / this->config_.decel_rate;
                this->config_.decel_dist = this->config_.target_speed * this->config_.decel_time / 2;

                return true;
            }

            bool update(const ControllerManagerState::SharedPtr state)
            {
                this->state_.vehicle_x = 0.0;
                this->state_.vehicle_y = 0.0; // path is ego centric, then the vehicle must be at 0
                this->state_.goal_x = state->path_ego_centric.poses.back().pose.position.x;
                this->state_.goal_y = state->path_ego_centric.poses.back().pose.position.y;

                this->state_.dt = (state->vehicle_state->header.stamp.nanosec - this->state_.last_updated_time) / 1e9;

                return true;
            }
            bool compute(roar_msgs::msg::VehicleControl::SharedPtr controlMsg)
            {
                double dist = std::sqrt(std::pow(this->state_.goal_x - this->state_.vehicle_x, 2) + std::pow(this->state_.goal_y - this->state_.vehicle_y, 2));
                if (dist < this->config_.decel_dist)
                {
                    double time_left = dist * 2 / this->config_.target_speed;
                    controlMsg->target_speed = this->config_.decel_rate * time_left;
                    return true;
                }
                // accelerate until reaching target spd
                controlMsg->target_speed = std::max(this->state_.prev_spd + this->config_.accel_rate * this->state_.dt, this->config_.target_speed);

                this->state_.prev_spd = controlMsg->target_speed;
                return true;
            }

        private:
            LonTrapezoidalControllerPluginConfig config_;
            LonTrapezoidalControllerPluginState state_;
        };
    }
} // namespace roar

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(roar::control::LonTrapezoidalControllerPlugin, roar::control::ControllerPlugin)

#endif // ROAR__CONTROL__PLUGIN__LON_TRAPEZOIDAL_CONTROL_HPP_