#ifndef ROAR_CONTROL__PLUGIN__LAT_PID_CONTROL_HPP_
#define ROAR_CONTROL__PLUGIN__LAT_PID_CONTROL_HPP_

#include "rclcpp/rclcpp.hpp"
#include "controller_manager/controller_plugin_interface.hpp"
#include "nav2_util/lifecycle_node.hpp"
#include "roar_msgs/msg/vehicle_control.hpp"
#include "controller_manager/controller_state.hpp"
#include "controller_manager/pid_controller.hpp"
#include "nav_msgs/msg/path.hpp"
using namespace roar::control;
namespace roar
{
    namespace control
    {
        class LatPIDControllerPlugin : public ControllerPlugin
        {
            typedef std::shared_ptr<LatPIDControllerPlugin> SharedPtr;
            typedef std::unique_ptr<LatPIDControllerPlugin> UniquePtr;

            const char *get_plugin_name() override
            {
                return "LatPIDControllerPlugin";
            }
            void initialize(nav2_util::LifecycleNode *node) override
            {
                ControllerPlugin::initialize(node); // Call the base class's initialize function
            }

            bool configure(const ControllerManagerConfig::SharedPtr config) override
            {
                return true;
            }
            bool update(const ControllerManagerState::SharedPtr state) override
            {
                path_ = std::make_shared<nav_msgs::msg::Path>(state->path_ego_centric);
                return true;
            }
            bool compute(roar_msgs::msg::VehicleControl::SharedPtr controlMsg)
            {
                if (path_ == nullptr)
                {
                    RCLCPP_ERROR_STREAM(node().get_logger(), "path is null");
                    return false;
                }

                int next_waypoint = p_findNextWaypoint(*path_);
                double steering_angle = p_findSteeringAngle(*path_, next_waypoint);

                // TODO: add PID here
                controlMsg->steering_angle = steering_angle;

                return true;
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
            double p_findSteeringAngle(nav_msgs::msg::Path path, int next_waypoint)
            {
                double steering_angle = 0.0;
                if (next_waypoint <= path.poses.size() - 1)
                {
                    steering_angle = -1 * atan2(path.poses[next_waypoint].pose.position.y, path.poses[next_waypoint].pose.position.x);

                    // rad to deg
                    steering_angle = steering_angle * 180 / M_PI;
                }
                RCLCPP_DEBUG_STREAM(node().get_logger(), "steering angle: " << steering_angle);
                return steering_angle;
            }
        };
    } // namespace control
} // roar

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(roar::control::LatPIDControllerPlugin, roar::control::ControllerPlugin)

#endif // ROAR_CONTROL__PLUGIN__LAT_PID_CONTROL_HPP_