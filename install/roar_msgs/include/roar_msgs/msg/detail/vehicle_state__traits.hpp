// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roar_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
#define ROAR_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_

#include "roar_msgs/msg/detail/vehicle_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'odometry'
#include "nav_msgs/msg/detail/odometry__traits.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__traits.hpp"
// Member 'vehicle_status'
#include "roar_msgs/msg/detail/vehicle_status__traits.hpp"
// Member 'global_path'
#include "nav_msgs/msg/detail/path__traits.hpp"
// Member 'next_waypoint'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'vehicle_control'
#include "roar_msgs/msg/detail/vehicle_control__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<roar_msgs::msg::VehicleState>()
{
  return "roar_msgs::msg::VehicleState";
}

template<>
inline const char * name<roar_msgs::msg::VehicleState>()
{
  return "roar_msgs/msg/VehicleState";
}

template<>
struct has_fixed_size<roar_msgs::msg::VehicleState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value && has_fixed_size<nav_msgs::msg::Odometry>::value && has_fixed_size<nav_msgs::msg::Path>::value && has_fixed_size<roar_msgs::msg::VehicleControl>::value && has_fixed_size<roar_msgs::msg::VehicleStatus>::value && has_fixed_size<sensor_msgs::msg::Imu>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<roar_msgs::msg::VehicleState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value && has_bounded_size<nav_msgs::msg::Odometry>::value && has_bounded_size<nav_msgs::msg::Path>::value && has_bounded_size<roar_msgs::msg::VehicleControl>::value && has_bounded_size<roar_msgs::msg::VehicleStatus>::value && has_bounded_size<sensor_msgs::msg::Imu>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<roar_msgs::msg::VehicleState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROAR_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
