// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planning_interfaces:action/TrajectoryGeneration.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__ACTION__DETAIL__TRAJECTORY_GENERATION__TRAITS_HPP_
#define PLANNING_INTERFACES__ACTION__DETAIL__TRAJECTORY_GENERATION__TRAITS_HPP_

#include "planning_interfaces/action/detail/trajectory_generation__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'costmap'
#include "nav2_msgs/msg/detail/costmap__traits.hpp"
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__traits.hpp"
// Member 'global_path'
#include "nav_msgs/msg/detail/path__traits.hpp"
// Member 'next_waypoint'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'footprint'
#include "geometry_msgs/msg/detail/polygon_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::action::TrajectoryGeneration_Goal>()
{
  return "planning_interfaces::action::TrajectoryGeneration_Goal";
}

template<>
inline const char * name<planning_interfaces::action::TrajectoryGeneration_Goal>()
{
  return "planning_interfaces/action/TrajectoryGeneration_Goal";
}

template<>
struct has_fixed_size<planning_interfaces::action::TrajectoryGeneration_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PolygonStamped>::value && has_fixed_size<geometry_msgs::msg::PoseStamped>::value && has_fixed_size<nav2_msgs::msg::Costmap>::value && has_fixed_size<nav_msgs::msg::Odometry>::value && has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<planning_interfaces::action::TrajectoryGeneration_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PolygonStamped>::value && has_bounded_size<geometry_msgs::msg::PoseStamped>::value && has_bounded_size<nav2_msgs::msg::Costmap>::value && has_bounded_size<nav_msgs::msg::Odometry>::value && has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<planning_interfaces::action::TrajectoryGeneration_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'trajectories'
#include "planning_interfaces/msg/detail/trajectories__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::action::TrajectoryGeneration_Result>()
{
  return "planning_interfaces::action::TrajectoryGeneration_Result";
}

template<>
inline const char * name<planning_interfaces::action::TrajectoryGeneration_Result>()
{
  return "planning_interfaces/action/TrajectoryGeneration_Result";
}

template<>
struct has_fixed_size<planning_interfaces::action::TrajectoryGeneration_Result>
  : std::integral_constant<bool, has_fixed_size<planning_interfaces::msg::Trajectories>::value> {};

template<>
struct has_bounded_size<planning_interfaces::action::TrajectoryGeneration_Result>
  : std::integral_constant<bool, has_bounded_size<planning_interfaces::msg::Trajectories>::value> {};

template<>
struct is_message<planning_interfaces::action::TrajectoryGeneration_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'trajectory'
#include "planning_interfaces/msg/detail/trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::action::TrajectoryGeneration_Feedback>()
{
  return "planning_interfaces::action::TrajectoryGeneration_Feedback";
}

template<>
inline const char * name<planning_interfaces::action::TrajectoryGeneration_Feedback>()
{
  return "planning_interfaces/action/TrajectoryGeneration_Feedback";
}

template<>
struct has_fixed_size<planning_interfaces::action::TrajectoryGeneration_Feedback>
  : std::integral_constant<bool, has_fixed_size<planning_interfaces::msg::Trajectory>::value> {};

template<>
struct has_bounded_size<planning_interfaces::action::TrajectoryGeneration_Feedback>
  : std::integral_constant<bool, has_bounded_size<planning_interfaces::msg::Trajectory>::value> {};

template<>
struct is_message<planning_interfaces::action::TrajectoryGeneration_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "planning_interfaces/action/detail/trajectory_generation__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::action::TrajectoryGeneration_SendGoal_Request>()
{
  return "planning_interfaces::action::TrajectoryGeneration_SendGoal_Request";
}

template<>
inline const char * name<planning_interfaces::action::TrajectoryGeneration_SendGoal_Request>()
{
  return "planning_interfaces/action/TrajectoryGeneration_SendGoal_Request";
}

template<>
struct has_fixed_size<planning_interfaces::action::TrajectoryGeneration_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<planning_interfaces::action::TrajectoryGeneration_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<planning_interfaces::action::TrajectoryGeneration_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<planning_interfaces::action::TrajectoryGeneration_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<planning_interfaces::action::TrajectoryGeneration_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::action::TrajectoryGeneration_SendGoal_Response>()
{
  return "planning_interfaces::action::TrajectoryGeneration_SendGoal_Response";
}

template<>
inline const char * name<planning_interfaces::action::TrajectoryGeneration_SendGoal_Response>()
{
  return "planning_interfaces/action/TrajectoryGeneration_SendGoal_Response";
}

template<>
struct has_fixed_size<planning_interfaces::action::TrajectoryGeneration_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<planning_interfaces::action::TrajectoryGeneration_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<planning_interfaces::action::TrajectoryGeneration_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::action::TrajectoryGeneration_SendGoal>()
{
  return "planning_interfaces::action::TrajectoryGeneration_SendGoal";
}

template<>
inline const char * name<planning_interfaces::action::TrajectoryGeneration_SendGoal>()
{
  return "planning_interfaces/action/TrajectoryGeneration_SendGoal";
}

template<>
struct has_fixed_size<planning_interfaces::action::TrajectoryGeneration_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<planning_interfaces::action::TrajectoryGeneration_SendGoal_Request>::value &&
    has_fixed_size<planning_interfaces::action::TrajectoryGeneration_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<planning_interfaces::action::TrajectoryGeneration_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<planning_interfaces::action::TrajectoryGeneration_SendGoal_Request>::value &&
    has_bounded_size<planning_interfaces::action::TrajectoryGeneration_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<planning_interfaces::action::TrajectoryGeneration_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<planning_interfaces::action::TrajectoryGeneration_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<planning_interfaces::action::TrajectoryGeneration_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::action::TrajectoryGeneration_GetResult_Request>()
{
  return "planning_interfaces::action::TrajectoryGeneration_GetResult_Request";
}

template<>
inline const char * name<planning_interfaces::action::TrajectoryGeneration_GetResult_Request>()
{
  return "planning_interfaces/action/TrajectoryGeneration_GetResult_Request";
}

template<>
struct has_fixed_size<planning_interfaces::action::TrajectoryGeneration_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<planning_interfaces::action::TrajectoryGeneration_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<planning_interfaces::action::TrajectoryGeneration_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::action::TrajectoryGeneration_GetResult_Response>()
{
  return "planning_interfaces::action::TrajectoryGeneration_GetResult_Response";
}

template<>
inline const char * name<planning_interfaces::action::TrajectoryGeneration_GetResult_Response>()
{
  return "planning_interfaces/action/TrajectoryGeneration_GetResult_Response";
}

template<>
struct has_fixed_size<planning_interfaces::action::TrajectoryGeneration_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<planning_interfaces::action::TrajectoryGeneration_Result>::value> {};

template<>
struct has_bounded_size<planning_interfaces::action::TrajectoryGeneration_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<planning_interfaces::action::TrajectoryGeneration_Result>::value> {};

template<>
struct is_message<planning_interfaces::action::TrajectoryGeneration_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::action::TrajectoryGeneration_GetResult>()
{
  return "planning_interfaces::action::TrajectoryGeneration_GetResult";
}

template<>
inline const char * name<planning_interfaces::action::TrajectoryGeneration_GetResult>()
{
  return "planning_interfaces/action/TrajectoryGeneration_GetResult";
}

template<>
struct has_fixed_size<planning_interfaces::action::TrajectoryGeneration_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<planning_interfaces::action::TrajectoryGeneration_GetResult_Request>::value &&
    has_fixed_size<planning_interfaces::action::TrajectoryGeneration_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<planning_interfaces::action::TrajectoryGeneration_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<planning_interfaces::action::TrajectoryGeneration_GetResult_Request>::value &&
    has_bounded_size<planning_interfaces::action::TrajectoryGeneration_GetResult_Response>::value
  >
{
};

template<>
struct is_service<planning_interfaces::action::TrajectoryGeneration_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<planning_interfaces::action::TrajectoryGeneration_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<planning_interfaces::action::TrajectoryGeneration_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planning_interfaces::action::TrajectoryGeneration_FeedbackMessage>()
{
  return "planning_interfaces::action::TrajectoryGeneration_FeedbackMessage";
}

template<>
inline const char * name<planning_interfaces::action::TrajectoryGeneration_FeedbackMessage>()
{
  return "planning_interfaces/action/TrajectoryGeneration_FeedbackMessage";
}

template<>
struct has_fixed_size<planning_interfaces::action::TrajectoryGeneration_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<planning_interfaces::action::TrajectoryGeneration_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<planning_interfaces::action::TrajectoryGeneration_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<planning_interfaces::action::TrajectoryGeneration_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<planning_interfaces::action::TrajectoryGeneration_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<planning_interfaces::action::TrajectoryGeneration>
  : std::true_type
{
};

template<>
struct is_action_goal<planning_interfaces::action::TrajectoryGeneration_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<planning_interfaces::action::TrajectoryGeneration_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<planning_interfaces::action::TrajectoryGeneration_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PLANNING_INTERFACES__ACTION__DETAIL__TRAJECTORY_GENERATION__TRAITS_HPP_
