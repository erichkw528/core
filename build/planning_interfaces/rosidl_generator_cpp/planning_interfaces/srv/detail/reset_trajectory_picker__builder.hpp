// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_interfaces:srv/ResetTrajectoryPicker.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__SRV__DETAIL__RESET_TRAJECTORY_PICKER__BUILDER_HPP_
#define PLANNING_INTERFACES__SRV__DETAIL__RESET_TRAJECTORY_PICKER__BUILDER_HPP_

#include "planning_interfaces/srv/detail/reset_trajectory_picker__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace planning_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetTrajectoryPicker_Request_request
{
public:
  Init_ResetTrajectoryPicker_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::planning_interfaces::srv::ResetTrajectoryPicker_Request request(::planning_interfaces::srv::ResetTrajectoryPicker_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::srv::ResetTrajectoryPicker_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::srv::ResetTrajectoryPicker_Request>()
{
  return planning_interfaces::srv::builder::Init_ResetTrajectoryPicker_Request_request();
}

}  // namespace planning_interfaces


namespace planning_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetTrajectoryPicker_Response_response
{
public:
  Init_ResetTrajectoryPicker_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::planning_interfaces::srv::ResetTrajectoryPicker_Response response(::planning_interfaces::srv::ResetTrajectoryPicker_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::srv::ResetTrajectoryPicker_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::srv::ResetTrajectoryPicker_Response>()
{
  return planning_interfaces::srv::builder::Init_ResetTrajectoryPicker_Response_response();
}

}  // namespace planning_interfaces

#endif  // PLANNING_INTERFACES__SRV__DETAIL__RESET_TRAJECTORY_PICKER__BUILDER_HPP_
