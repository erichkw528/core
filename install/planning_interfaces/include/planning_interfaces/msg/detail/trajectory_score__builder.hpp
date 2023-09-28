// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_interfaces:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY_SCORE__BUILDER_HPP_
#define PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY_SCORE__BUILDER_HPP_

#include "planning_interfaces/msg/detail/trajectory_score__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace planning_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrajectoryScore_scale
{
public:
  explicit Init_TrajectoryScore_scale(::planning_interfaces::msg::TrajectoryScore & msg)
  : msg_(msg)
  {}
  ::planning_interfaces::msg::TrajectoryScore scale(::planning_interfaces::msg::TrajectoryScore::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::msg::TrajectoryScore msg_;
};

class Init_TrajectoryScore_raw_score
{
public:
  explicit Init_TrajectoryScore_raw_score(::planning_interfaces::msg::TrajectoryScore & msg)
  : msg_(msg)
  {}
  Init_TrajectoryScore_scale raw_score(::planning_interfaces::msg::TrajectoryScore::_raw_score_type arg)
  {
    msg_.raw_score = std::move(arg);
    return Init_TrajectoryScore_scale(msg_);
  }

private:
  ::planning_interfaces::msg::TrajectoryScore msg_;
};

class Init_TrajectoryScore_name
{
public:
  Init_TrajectoryScore_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryScore_raw_score name(::planning_interfaces::msg::TrajectoryScore::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TrajectoryScore_raw_score(msg_);
  }

private:
  ::planning_interfaces::msg::TrajectoryScore msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::msg::TrajectoryScore>()
{
  return planning_interfaces::msg::builder::Init_TrajectoryScore_name();
}

}  // namespace planning_interfaces

#endif  // PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORY_SCORE__BUILDER_HPP_
