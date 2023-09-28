// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_interfaces:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_
#define PLANNING_INTERFACES__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_

#include "planning_interfaces/srv/detail/load_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::srv::LoadMap_Request>()
{
  return "planning_interfaces::srv::LoadMap_Request";
}

template<>
inline const char * name<planning_interfaces::srv::LoadMap_Request>()
{
  return "planning_interfaces/srv/LoadMap_Request";
}

template<>
struct has_fixed_size<planning_interfaces::srv::LoadMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planning_interfaces::srv::LoadMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<planning_interfaces::srv::LoadMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::srv::LoadMap_Response>()
{
  return "planning_interfaces::srv::LoadMap_Response";
}

template<>
inline const char * name<planning_interfaces::srv::LoadMap_Response>()
{
  return "planning_interfaces/srv/LoadMap_Response";
}

template<>
struct has_fixed_size<planning_interfaces::srv::LoadMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<planning_interfaces::srv::LoadMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<planning_interfaces::srv::LoadMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::srv::LoadMap>()
{
  return "planning_interfaces::srv::LoadMap";
}

template<>
inline const char * name<planning_interfaces::srv::LoadMap>()
{
  return "planning_interfaces/srv/LoadMap";
}

template<>
struct has_fixed_size<planning_interfaces::srv::LoadMap>
  : std::integral_constant<
    bool,
    has_fixed_size<planning_interfaces::srv::LoadMap_Request>::value &&
    has_fixed_size<planning_interfaces::srv::LoadMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<planning_interfaces::srv::LoadMap>
  : std::integral_constant<
    bool,
    has_bounded_size<planning_interfaces::srv::LoadMap_Request>::value &&
    has_bounded_size<planning_interfaces::srv::LoadMap_Response>::value
  >
{
};

template<>
struct is_service<planning_interfaces::srv::LoadMap>
  : std::true_type
{
};

template<>
struct is_service_request<planning_interfaces::srv::LoadMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<planning_interfaces::srv::LoadMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANNING_INTERFACES__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_
