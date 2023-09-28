// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
#define PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_

#include "planning_interfaces/msg/detail/trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'trajectory'
#include "nav_msgs/msg/detail/path__traits.hpp"
// Member 'score'
#include "planning_interfaces/msg/detail/trajectory_score__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::msg::Trajectory>()
{
  return "planning_interfaces::msg::Trajectory";
}

template<>
inline const char * name<planning_interfaces::msg::Trajectory>()
{
  return "planning_interfaces/msg/Trajectory";
}

template<>
struct has_fixed_size<planning_interfaces::msg::Trajectory>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::Path>::value && has_fixed_size<planning_interfaces::msg::TrajectoryScore>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<planning_interfaces::msg::Trajectory>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::Path>::value && has_bounded_size<planning_interfaces::msg::TrajectoryScore>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<planning_interfaces::msg::Trajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
