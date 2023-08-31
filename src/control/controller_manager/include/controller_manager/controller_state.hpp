#ifndef ROAR_CONTROL__PLUGIN__STATE_HPP_
#define ROAR_CONTROL__PLUGIN__STATE_HPP_
namespace roar
{
    namespace control
    {
        struct ControllerState
        {
            float current_speed;
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