// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_interfaces:srv/TrajectoryScoring.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__SRV__DETAIL__TRAJECTORY_SCORING__BUILDER_HPP_
#define PLANNING_INTERFACES__SRV__DETAIL__TRAJECTORY_SCORING__BUILDER_HPP_

#include "planning_interfaces/srv/detail/trajectory_scoring__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace planning_interfaces
{

namespace srv
{

namespace builder
{

class Init_TrajectoryScoring_Request_next_waypoint
{
public:
  explicit Init_TrajectoryScoring_Request_next_waypoint(::planning_interfaces::srv::TrajectoryScoring_Request & msg)
  : msg_(msg)
  {}
  ::planning_interfaces::srv::TrajectoryScoring_Request next_waypoint(::planning_interfaces::srv::TrajectoryScoring_Request::_next_waypoint_type arg)
  {
    msg_.next_waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::srv::TrajectoryScoring_Request msg_;
};

class Init_TrajectoryScoring_Request_odom
{
public:
  explicit Init_TrajectoryScoring_Request_odom(::planning_interfaces::srv::TrajectoryScoring_Request & msg)
  : msg_(msg)
  {}
  Init_TrajectoryScoring_Request_next_waypoint odom(::planning_interfaces::srv::TrajectoryScoring_Request::_odom_type arg)
  {
    msg_.odom = std::move(arg);
    return Init_TrajectoryScoring_Request_next_waypoint(msg_);
  }

private:
  ::planning_interfaces::srv::TrajectoryScoring_Request msg_;
};

class Init_TrajectoryScoring_Request_costmap
{
public:
  explicit Init_TrajectoryScoring_Request_costmap(::planning_interfaces::srv::TrajectoryScoring_Request & msg)
  : msg_(msg)
  {}
  Init_TrajectoryScoring_Request_odom costmap(::planning_interfaces::srv::TrajectoryScoring_Request::_costmap_type arg)
  {
    msg_.costmap = std::move(arg);
    return Init_TrajectoryScoring_Request_odom(msg_);
  }

private:
  ::planning_interfaces::srv::TrajectoryScoring_Request msg_;
};

class Init_TrajectoryScoring_Request_trajectory
{
public:
  Init_TrajectoryScoring_Request_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryScoring_Request_costmap trajectory(::planning_interfaces::srv::TrajectoryScoring_Request::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_TrajectoryScoring_Request_costmap(msg_);
  }

private:
  ::planning_interfaces::srv::TrajectoryScoring_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::srv::TrajectoryScoring_Request>()
{
  return planning_interfaces::srv::builder::Init_TrajectoryScoring_Request_trajectory();
}

}  // namespace planning_interfaces


namespace planning_interfaces
{

namespace srv
{

namespace builder
{

class Init_TrajectoryScoring_Response_score
{
public:
  Init_TrajectoryScoring_Response_score()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::planning_interfaces::srv::TrajectoryScoring_Response score(::planning_interfaces::srv::TrajectoryScoring_Response::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::srv::TrajectoryScoring_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::srv::TrajectoryScoring_Response>()
{
  return planning_interfaces::srv::builder::Init_TrajectoryScoring_Response_score();
}

}  // namespace planning_interfaces

#endif  // PLANNING_INTERFACES__SRV__DETAIL__TRAJECTORY_SCORING__BUILDER_HPP_
