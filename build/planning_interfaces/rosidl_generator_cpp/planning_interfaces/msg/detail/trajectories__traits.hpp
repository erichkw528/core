// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_interfaces:msg/Trajectories.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__TRAITS_HPP_
#define PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__TRAITS_HPP_

#include "planning_interfaces/msg/detail/trajectories__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::msg::Trajectories>()
{
  return "planning_interfaces::msg::Trajectories";
}

template<>
inline const char * name<planning_interfaces::msg::Trajectories>()
{
  return "planning_interfaces/msg/Trajectories";
}

template<>
struct has_fixed_size<planning_interfaces::msg::Trajectories>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planning_interfaces::msg::Trajectories>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<planning_interfaces::msg::Trajectories>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__TRAITS_HPP_
