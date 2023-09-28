// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_interfaces:srv/ResetTrajectoryPicker.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__SRV__DETAIL__RESET_TRAJECTORY_PICKER__TRAITS_HPP_
#define PLANNING_INTERFACES__SRV__DETAIL__RESET_TRAJECTORY_PICKER__TRAITS_HPP_

#include "planning_interfaces/srv/detail/reset_trajectory_picker__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'request'
#include "std_msgs/msg/detail/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::srv::ResetTrajectoryPicker_Request>()
{
  return "planning_interfaces::srv::ResetTrajectoryPicker_Request";
}

template<>
inline const char * name<planning_interfaces::srv::ResetTrajectoryPicker_Request>()
{
  return "planning_interfaces/srv/ResetTrajectoryPicker_Request";
}

template<>
struct has_fixed_size<planning_interfaces::srv::ResetTrajectoryPicker_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<planning_interfaces::srv::ResetTrajectoryPicker_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

template<>
struct is_message<planning_interfaces::srv::ResetTrajectoryPicker_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
// already included above
// #include "std_msgs/msg/detail/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::srv::ResetTrajectoryPicker_Response>()
{
  return "planning_interfaces::srv::ResetTrajectoryPicker_Response";
}

template<>
inline const char * name<planning_interfaces::srv::ResetTrajectoryPicker_Response>()
{
  return "planning_interfaces/srv/ResetTrajectoryPicker_Response";
}

template<>
struct has_fixed_size<planning_interfaces::srv::ResetTrajectoryPicker_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<planning_interfaces::srv::ResetTrajectoryPicker_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

template<>
struct is_message<planning_interfaces::srv::ResetTrajectoryPicker_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::srv::ResetTrajectoryPicker>()
{
  return "planning_interfaces::srv::ResetTrajectoryPicker";
}

template<>
inline const char * name<planning_interfaces::srv::ResetTrajectoryPicker>()
{
  return "planning_interfaces/srv/ResetTrajectoryPicker";
}

template<>
struct has_fixed_size<planning_interfaces::srv::ResetTrajectoryPicker>
  : std::integral_constant<
    bool,
    has_fixed_size<planning_interfaces::srv::ResetTrajectoryPicker_Request>::value &&
    has_fixed_size<planning_interfaces::srv::ResetTrajectoryPicker_Response>::value
  >
{
};

template<>
struct has_bounded_size<planning_interfaces::srv::ResetTrajectoryPicker>
  : std::integral_constant<
    bool,
    has_bounded_size<planning_interfaces::srv::ResetTrajectoryPicker_Request>::value &&
    has_bounded_size<planning_interfaces::srv::ResetTrajectoryPicker_Response>::value
  >
{
};

template<>
struct is_service<planning_interfaces::srv::ResetTrajectoryPicker>
  : std::true_type
{
};

template<>
struct is_service_request<planning_interfaces::srv::ResetTrajectoryPicker_Request>
  : std::true_type
{
};

template<>
struct is_service_response<planning_interfaces::srv::ResetTrajectoryPicker_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANNING_INTERFACES__SRV__DETAIL__RESET_TRAJECTORY_PICKER__TRAITS_HPP_
