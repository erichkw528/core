#ifndef ROAR_CONTROL__PLUGIN__STATE_HPP_
#define ROAR_CONTROL__PLUGIN__STATE_HPP_
#include "nav_msgs/msg/path.hpp"
namespace roar
{
    namespace control
    {
        struct ControllerManagerState
        {
            typedef std::shared_ptr<ControllerManagerState> SharedPtr;

            nav_msgs::msg::Path path_ego_centric;
        };

        struct ControllerManagerConfig
        {
            typedef std::shared_ptr<ControllerManagerConfig> SharedPtr;
            typedef std::unique_ptr<ControllerManagerConfig> UniquePtr;

            bool debug;
            double loop_rate_millis;

            double target_speed;
            double max_speed;
            std::string base_link_frame;
            std::string map_frame;

            double min_distance;
        };
    } // namespace control
} // namespace roar

#endif // ROAR_CONTROL__PLUGIN__STATE_HPP_