// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roar_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
#define ROAR_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_

#include "roar_msgs/msg/detail/vehicle_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<roar_msgs::msg::VehicleStatus>()
{
  return "roar_msgs::msg::VehicleStatus";
}

template<>
inline const char * name<roar_msgs::msg::VehicleStatus>()
{
  return "roar_msgs/msg/VehicleStatus";
}

template<>
struct has_fixed_size<roar_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<roar_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<roar_msgs::msg::VehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROAR_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
