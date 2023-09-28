// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
#define PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

#include "planning_interfaces/msg/detail/trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace planning_interfaces
{

namespace msg
{

namespace builder
{

class Init_Trajectory_score
{
public:
  explicit Init_Trajectory_score(::planning_interfaces::msg::Trajectory & msg)
  : msg_(msg)
  {}
  ::planning_interfaces::msg::Trajectory score(::planning_interfaces::msg::Trajectory::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::msg::Trajectory msg_;
};

class Init_Trajectory_trajectory
{
public:
  explicit Init_Trajectory_trajectory(::planning_interfaces::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_score trajectory(::planning_interfaces::msg::Trajectory::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_Trajectory_score(msg_);
  }

private:
  ::planning_interfaces::msg::Trajectory msg_;
};

class Init_Trajectory_header
{
public:
  Init_Trajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_trajectory header(::planning_interfaces::msg::Trajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Trajectory_trajectory(msg_);
  }

private:
  ::planning_interfaces::msg::Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::msg::Trajectory>()
{
  return planning_interfaces::msg::builder::Init_Trajectory_header();
}

}  // namespace planning_interfaces

#endif  // PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
