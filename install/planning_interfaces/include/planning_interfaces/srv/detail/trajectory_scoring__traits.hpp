// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_interfaces:srv/TrajectoryScoring.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__SRV__DETAIL__TRAJECTORY_SCORING__TRAITS_HPP_
#define PLANNING_INTERFACES__SRV__DETAIL__TRAJECTORY_SCORING__TRAITS_HPP_

#include "planning_interfaces/srv/detail/trajectory_scoring__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'trajectory'
#include "nav_msgs/msg/detail/path__traits.hpp"
// Member 'costmap'
#include "nav2_msgs/msg/detail/costmap__traits.hpp"
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__traits.hpp"
// Member 'next_waypoint'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::srv::TrajectoryScoring_Request>()
{
  return "planning_interfaces::srv::TrajectoryScoring_Request";
}

template<>
inline const char * name<planning_interfaces::srv::TrajectoryScoring_Request>()
{
  return "planning_interfaces/srv/TrajectoryScoring_Request";
}

template<>
struct has_fixed_size<planning_interfaces::srv::TrajectoryScoring_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value && has_fixed_size<nav2_msgs::msg::Costmap>::value && has_fixed_size<nav_msgs::msg::Odometry>::value && has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<planning_interfaces::srv::TrajectoryScoring_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value && has_bounded_size<nav2_msgs::msg::Costmap>::value && has_bounded_size<nav_msgs::msg::Odometry>::value && has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<planning_interfaces::srv::TrajectoryScoring_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'score'
#include "planning_interfaces/msg/detail/trajectory_score__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::srv::TrajectoryScoring_Response>()
{
  return "planning_interfaces::srv::TrajectoryScoring_Response";
}

template<>
inline const char * name<planning_interfaces::srv::TrajectoryScoring_Response>()
{
  return "planning_interfaces/srv/TrajectoryScoring_Response";
}

template<>
struct has_fixed_size<planning_interfaces::srv::TrajectoryScoring_Response>
  : std::integral_constant<bool, has_fixed_size<planning_interfaces::msg::TrajectoryScore>::value> {};

template<>
struct has_bounded_size<planning_interfaces::srv::TrajectoryScoring_Response>
  : std::integral_constant<bool, has_bounded_size<planning_interfaces::msg::TrajectoryScore>::value> {};

template<>
struct is_message<planning_interfaces::srv::TrajectoryScoring_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::srv::TrajectoryScoring>()
{
  return "planning_interfaces::srv::TrajectoryScoring";
}

template<>
inline const char * name<planning_interfaces::srv::TrajectoryScoring>()
{
  return "planning_interfaces/srv/TrajectoryScoring";
}

template<>
struct has_fixed_size<planning_interfaces::srv::TrajectoryScoring>
  : std::integral_constant<
    bool,
    has_fixed_size<planning_interfaces::srv::TrajectoryScoring_Request>::value &&
    has_fixed_size<planning_interfaces::srv::TrajectoryScoring_Response>::value
  >
{
};

template<>
struct has_bounded_size<planning_interfaces::srv::TrajectoryScoring>
  : std::integral_constant<
    bool,
    has_bounded_size<planning_interfaces::srv::TrajectoryScoring_Request>::value &&
    has_bounded_size<planning_interfaces::srv::TrajectoryScoring_Response>::value
  >
{
};

template<>
struct is_service<planning_interfaces::srv::TrajectoryScoring>
  : std::true_type
{
};

template<>
struct is_service_request<planning_interfaces::srv::TrajectoryScoring_Request>
  : std::true_type
{
};

template<>
struct is_service_response<planning_interfaces::srv::TrajectoryScoring_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANNING_INTERFACES__SRV__DETAIL__TRAJECTORY_SCORING__TRAITS_HPP_
