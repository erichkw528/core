// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roar_msgs:srv/ToggleControlSafetySwitch.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__SRV__DETAIL__TOGGLE_CONTROL_SAFETY_SWITCH__TRAITS_HPP_
#define ROAR_MSGS__SRV__DETAIL__TOGGLE_CONTROL_SAFETY_SWITCH__TRAITS_HPP_

#include "roar_msgs/srv/detail/toggle_control_safety_switch__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<roar_msgs::srv::ToggleControlSafetySwitch_Request>()
{
  return "roar_msgs::srv::ToggleControlSafetySwitch_Request";
}

template<>
inline const char * name<roar_msgs::srv::ToggleControlSafetySwitch_Request>()
{
  return "roar_msgs/srv/ToggleControlSafetySwitch_Request";
}

template<>
struct has_fixed_size<roar_msgs::srv::ToggleControlSafetySwitch_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roar_msgs::srv::ToggleControlSafetySwitch_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roar_msgs::srv::ToggleControlSafetySwitch_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<roar_msgs::srv::ToggleControlSafetySwitch_Response>()
{
  return "roar_msgs::srv::ToggleControlSafetySwitch_Response";
}

template<>
inline const char * name<roar_msgs::srv::ToggleControlSafetySwitch_Response>()
{
  return "roar_msgs/srv/ToggleControlSafetySwitch_Response";
}

template<>
struct has_fixed_size<roar_msgs::srv::ToggleControlSafetySwitch_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roar_msgs::srv::ToggleControlSafetySwitch_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roar_msgs::srv::ToggleControlSafetySwitch_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<roar_msgs::srv::ToggleControlSafetySwitch>()
{
  return "roar_msgs::srv::ToggleControlSafetySwitch";
}

template<>
inline const char * name<roar_msgs::srv::ToggleControlSafetySwitch>()
{
  return "roar_msgs/srv/ToggleControlSafetySwitch";
}

template<>
struct has_fixed_size<roar_msgs::srv::ToggleControlSafetySwitch>
  : std::integral_constant<
    bool,
    has_fixed_size<roar_msgs::srv::ToggleControlSafetySwitch_Request>::value &&
    has_fixed_size<roar_msgs::srv::ToggleControlSafetySwitch_Response>::value
  >
{
};

template<>
struct has_bounded_size<roar_msgs::srv::ToggleControlSafetySwitch>
  : std::integral_constant<
    bool,
    has_bounded_size<roar_msgs::srv::ToggleControlSafetySwitch_Request>::value &&
    has_bounded_size<roar_msgs::srv::ToggleControlSafetySwitch_Response>::value
  >
{
};

template<>
struct is_service<roar_msgs::srv::ToggleControlSafetySwitch>
  : std::true_type
{
};

template<>
struct is_service_request<roar_msgs::srv::ToggleControlSafetySwitch_Request>
  : std::true_type
{
};

template<>
struct is_service_response<roar_msgs::srv::ToggleControlSafetySwitch_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROAR_MSGS__SRV__DETAIL__TOGGLE_CONTROL_SAFETY_SWITCH__TRAITS_HPP_
