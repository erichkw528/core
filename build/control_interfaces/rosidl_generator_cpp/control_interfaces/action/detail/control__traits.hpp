// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_interfaces:action/Control.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__ACTION__DETAIL__CONTROL__TRAITS_HPP_
#define CONTROL_INTERFACES__ACTION__DETAIL__CONTROL__TRAITS_HPP_

#include "control_interfaces/action/detail/control__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::action::Control_Goal>()
{
  return "control_interfaces::action::Control_Goal";
}

template<>
inline const char * name<control_interfaces::action::Control_Goal>()
{
  return "control_interfaces/action/Control_Goal";
}

template<>
struct has_fixed_size<control_interfaces::action::Control_Goal>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::Control_Goal>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<control_interfaces::action::Control_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::action::Control_Result>()
{
  return "control_interfaces::action::Control_Result";
}

template<>
inline const char * name<control_interfaces::action::Control_Result>()
{
  return "control_interfaces/action/Control_Result";
}

template<>
struct has_fixed_size<control_interfaces::action::Control_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_interfaces::action::Control_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_interfaces::action::Control_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::action::Control_Feedback>()
{
  return "control_interfaces::action::Control_Feedback";
}

template<>
inline const char * name<control_interfaces::action::Control_Feedback>()
{
  return "control_interfaces/action/Control_Feedback";
}

template<>
struct has_fixed_size<control_interfaces::action::Control_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_interfaces::action::Control_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_interfaces::action::Control_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "control_interfaces/action/detail/control__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::action::Control_SendGoal_Request>()
{
  return "control_interfaces::action::Control_SendGoal_Request";
}

template<>
inline const char * name<control_interfaces::action::Control_SendGoal_Request>()
{
  return "control_interfaces/action/Control_SendGoal_Request";
}

template<>
struct has_fixed_size<control_interfaces::action::Control_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<control_interfaces::action::Control_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::Control_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<control_interfaces::action::Control_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_interfaces::action::Control_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::action::Control_SendGoal_Response>()
{
  return "control_interfaces::action::Control_SendGoal_Response";
}

template<>
inline const char * name<control_interfaces::action::Control_SendGoal_Response>()
{
  return "control_interfaces/action/Control_SendGoal_Response";
}

template<>
struct has_fixed_size<control_interfaces::action::Control_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::Control_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<control_interfaces::action::Control_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::action::Control_SendGoal>()
{
  return "control_interfaces::action::Control_SendGoal";
}

template<>
inline const char * name<control_interfaces::action::Control_SendGoal>()
{
  return "control_interfaces/action/Control_SendGoal";
}

template<>
struct has_fixed_size<control_interfaces::action::Control_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<control_interfaces::action::Control_SendGoal_Request>::value &&
    has_fixed_size<control_interfaces::action::Control_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_interfaces::action::Control_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<control_interfaces::action::Control_SendGoal_Request>::value &&
    has_bounded_size<control_interfaces::action::Control_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<control_interfaces::action::Control_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<control_interfaces::action::Control_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_interfaces::action::Control_SendGoal_Response>
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
inline const char * data_type<control_interfaces::action::Control_GetResult_Request>()
{
  return "control_interfaces::action::Control_GetResult_Request";
}

template<>
inline const char * name<control_interfaces::action::Control_GetResult_Request>()
{
  return "control_interfaces/action/Control_GetResult_Request";
}

template<>
struct has_fixed_size<control_interfaces::action::Control_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::Control_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_interfaces::action::Control_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "control_interfaces/action/detail/control__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::action::Control_GetResult_Response>()
{
  return "control_interfaces::action::Control_GetResult_Response";
}

template<>
inline const char * name<control_interfaces::action::Control_GetResult_Response>()
{
  return "control_interfaces/action/Control_GetResult_Response";
}

template<>
struct has_fixed_size<control_interfaces::action::Control_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<control_interfaces::action::Control_Result>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::Control_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<control_interfaces::action::Control_Result>::value> {};

template<>
struct is_message<control_interfaces::action::Control_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::action::Control_GetResult>()
{
  return "control_interfaces::action::Control_GetResult";
}

template<>
inline const char * name<control_interfaces::action::Control_GetResult>()
{
  return "control_interfaces/action/Control_GetResult";
}

template<>
struct has_fixed_size<control_interfaces::action::Control_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<control_interfaces::action::Control_GetResult_Request>::value &&
    has_fixed_size<control_interfaces::action::Control_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_interfaces::action::Control_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<control_interfaces::action::Control_GetResult_Request>::value &&
    has_bounded_size<control_interfaces::action::Control_GetResult_Response>::value
  >
{
};

template<>
struct is_service<control_interfaces::action::Control_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<control_interfaces::action::Control_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_interfaces::action::Control_GetResult_Response>
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
// #include "control_interfaces/action/detail/control__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::action::Control_FeedbackMessage>()
{
  return "control_interfaces::action::Control_FeedbackMessage";
}

template<>
inline const char * name<control_interfaces::action::Control_FeedbackMessage>()
{
  return "control_interfaces/action/Control_FeedbackMessage";
}

template<>
struct has_fixed_size<control_interfaces::action::Control_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<control_interfaces::action::Control_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::Control_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<control_interfaces::action::Control_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_interfaces::action::Control_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<control_interfaces::action::Control>
  : std::true_type
{
};

template<>
struct is_action_goal<control_interfaces::action::Control_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<control_interfaces::action::Control_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<control_interfaces::action::Control_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CONTROL_INTERFACES__ACTION__DETAIL__CONTROL__TRAITS_HPP_
