#ifndef ROAR_CONTROL__PLUGIN__STATE_HPP_
#define ROAR_CONTROL__PLUGIN__STATE_HPP_
namespace roar
{
    namespace control
    {
        struct ControllerState
        {
            float current_speed;
            float target_speed;
        };
    } // namespace control
} // namespace roar

#endif // ROAR_CONTROL__PLUGIN__STATE_HPP_