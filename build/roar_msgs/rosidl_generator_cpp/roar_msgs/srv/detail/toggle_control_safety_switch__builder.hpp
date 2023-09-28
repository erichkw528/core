// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roar_msgs:srv/ToggleControlSafetySwitch.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__SRV__DETAIL__TOGGLE_CONTROL_SAFETY_SWITCH__BUILDER_HPP_
#define ROAR_MSGS__SRV__DETAIL__TOGGLE_CONTROL_SAFETY_SWITCH__BUILDER_HPP_

#include "roar_msgs/srv/detail/toggle_control_safety_switch__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace roar_msgs
{

namespace srv
{

namespace builder
{

class Init_ToggleControlSafetySwitch_Request_is_safety_on
{
public:
  Init_ToggleControlSafetySwitch_Request_is_safety_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::roar_msgs::srv::ToggleControlSafetySwitch_Request is_safety_on(::roar_msgs::srv::ToggleControlSafetySwitch_Request::_is_safety_on_type arg)
  {
    msg_.is_safety_on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roar_msgs::srv::ToggleControlSafetySwitch_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roar_msgs::srv::ToggleControlSafetySwitch_Request>()
{
  return roar_msgs::srv::builder::Init_ToggleControlSafetySwitch_Request_is_safety_on();
}

}  // namespace roar_msgs


namespace roar_msgs
{

namespace srv
{

namespace builder
{

class Init_ToggleControlSafetySwitch_Response_status
{
public:
  Init_ToggleControlSafetySwitch_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::roar_msgs::srv::ToggleControlSafetySwitch_Response status(::roar_msgs::srv::ToggleControlSafetySwitch_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roar_msgs::srv::ToggleControlSafetySwitch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roar_msgs::srv::ToggleControlSafetySwitch_Response>()
{
  return roar_msgs::srv::builder::Init_ToggleControlSafetySwitch_Response_status();
}

}  // namespace roar_msgs

#endif  // ROAR_MSGS__SRV__DETAIL__TOGGLE_CONTROL_SAFETY_SWITCH__BUILDER_HPP_
