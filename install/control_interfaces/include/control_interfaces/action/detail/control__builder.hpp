// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_interfaces:action/Control.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__ACTION__DETAIL__CONTROL__BUILDER_HPP_
#define CONTROL_INTERFACES__ACTION__DETAIL__CONTROL__BUILDER_HPP_

#include "control_interfaces/action/detail/control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_Goal_overwrite_previous
{
public:
  explicit Init_Control_Goal_overwrite_previous(::control_interfaces::action::Control_Goal & msg)
  : msg_(msg)
  {}
  ::control_interfaces::action::Control_Goal overwrite_previous(::control_interfaces::action::Control_Goal::_overwrite_previous_type arg)
  {
    msg_.overwrite_previous = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::Control_Goal msg_;
};

class Init_Control_Goal_target_spd
{
public:
  explicit Init_Control_Goal_target_spd(::control_interfaces::action::Control_Goal & msg)
  : msg_(msg)
  {}
  Init_Control_Goal_overwrite_previous target_spd(::control_interfaces::action::Control_Goal::_target_spd_type arg)
  {
    msg_.target_spd = std::move(arg);
    return Init_Control_Goal_overwrite_previous(msg_);
  }

private:
  ::control_interfaces::action::Control_Goal msg_;
};

class Init_Control_Goal_path
{
public:
  Init_Control_Goal_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_Goal_target_spd path(::control_interfaces::action::Control_Goal::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_Control_Goal_target_spd(msg_);
  }

private:
  ::control_interfaces::action::Control_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::Control_Goal>()
{
  return control_interfaces::action::builder::Init_Control_Goal_path();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_Result_status
{
public:
  Init_Control_Result_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::action::Control_Result status(::control_interfaces::action::Control_Result::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::Control_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::Control_Result>()
{
  return control_interfaces::action::builder::Init_Control_Result_status();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_Feedback_curr_index
{
public:
  Init_Control_Feedback_curr_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::action::Control_Feedback curr_index(::control_interfaces::action::Control_Feedback::_curr_index_type arg)
  {
    msg_.curr_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::Control_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::Control_Feedback>()
{
  return control_interfaces::action::builder::Init_Control_Feedback_curr_index();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_SendGoal_Request_goal
{
public:
  explicit Init_Control_SendGoal_Request_goal(::control_interfaces::action::Control_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::control_interfaces::action::Control_SendGoal_Request goal(::control_interfaces::action::Control_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::Control_SendGoal_Request msg_;
};

class Init_Control_SendGoal_Request_goal_id
{
public:
  Init_Control_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_SendGoal_Request_goal goal_id(::control_interfaces::action::Control_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Control_SendGoal_Request_goal(msg_);
  }

private:
  ::control_interfaces::action::Control_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::Control_SendGoal_Request>()
{
  return control_interfaces::action::builder::Init_Control_SendGoal_Request_goal_id();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_SendGoal_Response_stamp
{
public:
  explicit Init_Control_SendGoal_Response_stamp(::control_interfaces::action::Control_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::control_interfaces::action::Control_SendGoal_Response stamp(::control_interfaces::action::Control_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::Control_SendGoal_Response msg_;
};

class Init_Control_SendGoal_Response_accepted
{
public:
  Init_Control_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_SendGoal_Response_stamp accepted(::control_interfaces::action::Control_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Control_SendGoal_Response_stamp(msg_);
  }

private:
  ::control_interfaces::action::Control_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::Control_SendGoal_Response>()
{
  return control_interfaces::action::builder::Init_Control_SendGoal_Response_accepted();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_GetResult_Request_goal_id
{
public:
  Init_Control_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::action::Control_GetResult_Request goal_id(::control_interfaces::action::Control_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::Control_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::Control_GetResult_Request>()
{
  return control_interfaces::action::builder::Init_Control_GetResult_Request_goal_id();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_GetResult_Response_result
{
public:
  explicit Init_Control_GetResult_Response_result(::control_interfaces::action::Control_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::control_interfaces::action::Control_GetResult_Response result(::control_interfaces::action::Control_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::Control_GetResult_Response msg_;
};

class Init_Control_GetResult_Response_status
{
public:
  Init_Control_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_GetResult_Response_result status(::control_interfaces::action::Control_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Control_GetResult_Response_result(msg_);
  }

private:
  ::control_interfaces::action::Control_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::Control_GetResult_Response>()
{
  return control_interfaces::action::builder::Init_Control_GetResult_Response_status();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_FeedbackMessage_feedback
{
public:
  explicit Init_Control_FeedbackMessage_feedback(::control_interfaces::action::Control_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::control_interfaces::action::Control_FeedbackMessage feedback(::control_interfaces::action::Control_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::Control_FeedbackMessage msg_;
};

class Init_Control_FeedbackMessage_goal_id
{
public:
  Init_Control_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_FeedbackMessage_feedback goal_id(::control_interfaces::action::Control_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Control_FeedbackMessage_feedback(msg_);
  }

private:
  ::control_interfaces::action::Control_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::Control_FeedbackMessage>()
{
  return control_interfaces::action::builder::Init_Control_FeedbackMessage_goal_id();
}

}  // namespace control_interfaces

#endif  // CONTROL_INTERFACES__ACTION__DETAIL__CONTROL__BUILDER_HPP_
