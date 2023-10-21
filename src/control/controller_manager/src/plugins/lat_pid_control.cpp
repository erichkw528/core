#ifndef ROAR_CONTROL__PLUGIN__LAT_PID_CONTROL_HPP_
#define ROAR_CONTROL__PLUGIN__LAT_PID_CONTROL_HPP_

#include "rclcpp/rclcpp.hpp"
#include "controller_manager/controller_plugin_interface.hpp"
#include "nav2_util/lifecycle_node.hpp"
#include "roar_msgs/msg/vehicle_state.hpp"
#include "roar_msgs/msg/vehicle_control.h"
#include "roar_msgs/msg/vehicle_status.hpp"
#include "controller_manager/controller_state.hpp"
#include "controller_manager/pid_controller.hpp"
#include "nav_msgs/msg/path.hpp"
#include <iostream>
#include <fstream>
#include <chrono>
#include <functional>

using namespace roar::control;
namespace roar
{
    namespace control
    {
        struct LatConfig
        {
            PidCoefficients steering_pid_param;
        };

        struct LatControlState
        {
            double steering_error = 0.0;
            double steering_output = 0.0;
            double current_speed = 0.0;
            PidController steering_pid;
            rclcpp::Time last_pid_time;
        };

        class LatPIDControllerPlugin : public ControllerPlugin
        {
            typedef std::shared_ptr<LatPIDControllerPlugin> SharedPtr;
            typedef std::unique_ptr<LatPIDControllerPlugin> UniquePtr;

            const char *get_plugin_name() override
            {
                return "LatPIDControllerPlugin";
            }

        public:
            void initialize(nav2_util::LifecycleNode *node) override
            {
                ControllerPlugin::initialize(node); // Call the base class's initialize function
                config_ = LatConfig{
                    PidCoefficients{
                        this->node().declare_parameter<double>("lat_control.pid.kp", 0.5),
                        this->node().declare_parameter<double>("lat_control.pid.ki", 0.1),
                        this->node().declare_parameter<double>("lat_control.pid.kd", 0.5),
                        this->node().declare_parameter<double>("lat_control.pid.min_cmd", -30.0),
                        this->node().declare_parameter<double>("lat_control.pid.max_cmd", 30.0),
                        this->node().declare_parameter<double>("lat_control.pid.min_i", -10.0),
                        this->node().declare_parameter<double>("lat_control.pid.max_i", 10.0),
                    }};
                RCLCPP_INFO_STREAM(node->get_logger(), "[LatPIDControllerPlugin]: "
                                                           << "\nkp: " << config_.steering_pid_param.k_p
                                                           << "\nki: " << config_.steering_pid_param.k_i
                                                           << "\nkd: " << config_.steering_pid_param.k_d
                                                           << "\nmin_cmd: " << config_.steering_pid_param.min_cmd
                                                           << "\nmax_cmd: " << config_.steering_pid_param.max_cmd
                                                           << "\nmin_i: " << config_.steering_pid_param.min_i
                                                           << "\nmax_i: " << config_.steering_pid_param.max_i);
            }

            bool configure(const ControllerManagerConfig::SharedPtr config) override
            {
                lat_state().steering_pid = PidController("steering", config_.steering_pid_param);
                return true;
            }

            bool update(const ControllerManagerState::SharedPtr state) override
            {
                path_ = std::make_shared<nav_msgs::msg::Path>(state->path_ego_centric);

                lat_state().current_speed = state->vehicle_state->vehicle_status.speed;
                return true;
            }

            bool compute(roar_msgs::msg::VehicleControl::SharedPtr controlMsg)
            {
                if (path_ == nullptr)
                {
                    RCLCPP_ERROR_STREAM(node().get_logger(), "path is null");
                    return false;
                }

                if (lat_state().last_pid_time.seconds() == 0.0)
                {
                    RCLCPP_WARN_STREAM(node().get_logger(), "first iteration, dt uncomputable, not updating Lat PID");
                    lat_state().last_pid_time = node().now();
                    return false;
                }

                // update param
                p_updatePID();

                // find the next waypoint
                int next_waypoint = p_findNextWaypoint(*path_);
                // RCLCPP_DEBUG_STREAM(node().get_logger(),
                //                     "path[next_waypoint] x =" << path_->poses[next_waypoint].pose.position.x
                //   << " y = " << path_->poses[next_waypoint].pose.position.y);

                // find the steering error
                double steering_error = p_calcAngularError(*path_, next_waypoint);
                lat_state().steering_error = steering_error;

                // compute the steering cmd using PID
                auto this_pid_time = node().now();

                // dt in seconds + nano seconds
                const auto dt = this_pid_time - lat_state().last_pid_time;
                const double dt_sec = dt.seconds() + dt.nanoseconds() / 1e9;

                // execute PID
                double steering_output = lat_state().steering_pid.update(steering_error, dt_sec);

                // RCLCPP_DEBUG_STREAM(node().get_logger(), "steering_error: " << steering_error << " dt_sec: " << dt_sec << " steering_output: " << steering_output);
                // assign to controlMsg
                controlMsg->steering_angle = steering_output;

                // update the state
                lat_state().steering_error = steering_error;
                lat_state().steering_output = steering_output;
                lat_state().last_pid_time = this_pid_time;

                return true;
            }

            void p_updatePID()
            {

                double k_p_value = this->node().get_parameter("lat_control.pid.kp").as_double();
                double k_i_value = this->node().get_parameter("lat_control.pid.ki").as_double();
                double k_d_value = this->node().get_parameter("lat_control.pid.kd").as_double();

                RCLCPP_DEBUG_STREAM(node().get_logger(), "kp: " << k_p_value << " ki: " << k_i_value << " kd: " << k_d_value);
                this->config_.steering_pid_param.k_p = k_p_value;
                this->config_.steering_pid_param.k_i = k_i_value;
                this->config_.steering_pid_param.k_d = k_d_value;
            }

        private:
            nav_msgs::msg::Path::SharedPtr path_;

        protected:
            int p_findNextWaypoint(nav_msgs::msg::Path path)
            {
                float min_dist = 1.0;
                int next_waypoint = 0;
                for (int i = 0; i < path.poses.size(); i++)
                {
                    float dist = sqrt(pow(path.poses[i].pose.position.x, 2) + pow(path.poses[i].pose.position.y, 2));
                    if (dist > min_dist)
                    {
                        next_waypoint = i;
                        break;
                    }
                }
                return next_waypoint;
            }
            double p_calcAngularError(nav_msgs::msg::Path path, int next_waypoint)
            {
                double angular_error = 0.0;
                if (next_waypoint <= path.poses.size() - 1)
                {
                    angular_error = -1 * atan2(path.poses[next_waypoint].pose.position.y, path.poses[next_waypoint].pose.position.x);

                    // rad to deg
                    angular_error = angular_error * 180 / M_PI;
                }
                // RCLCPP_DEBUG_STREAM(node().get_logger(), "angular_error: " << angular_error);
                return angular_error;
            }

        private:
            LatConfig config_;
            LatControlState state_;

        protected:
            LatControlState &lat_state()
            {
                return state_;
            }
        };
    } // namespace control
} // roar

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(roar::control::LatPIDControllerPlugin, roar::control::ControllerPlugin)

#endif // ROAR_CONTROL__PLUGIN__LAT_PID_CONTROL_HPP_