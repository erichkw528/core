// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_interfaces:action/TrajectoryGeneration.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__ACTION__DETAIL__TRAJECTORY_GENERATION__BUILDER_HPP_
#define PLANNING_INTERFACES__ACTION__DETAIL__TRAJECTORY_GENERATION__BUILDER_HPP_

#include "planning_interfaces/action/detail/trajectory_generation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace planning_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryGeneration_Goal_footprint
{
public:
  explicit Init_TrajectoryGeneration_Goal_footprint(::planning_interfaces::action::TrajectoryGeneration_Goal & msg)
  : msg_(msg)
  {}
  ::planning_interfaces::action::TrajectoryGeneration_Goal footprint(::planning_interfaces::action::TrajectoryGeneration_Goal::_footprint_type arg)
  {
    msg_.footprint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_Goal msg_;
};

class Init_TrajectoryGeneration_Goal_next_waypoint
{
public:
  explicit Init_TrajectoryGeneration_Goal_next_waypoint(::planning_interfaces::action::TrajectoryGeneration_Goal & msg)
  : msg_(msg)
  {}
  Init_TrajectoryGeneration_Goal_footprint next_waypoint(::planning_interfaces::action::TrajectoryGeneration_Goal::_next_waypoint_type arg)
  {
    msg_.next_waypoint = std::move(arg);
    return Init_TrajectoryGeneration_Goal_footprint(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_Goal msg_;
};

class Init_TrajectoryGeneration_Goal_global_path
{
public:
  explicit Init_TrajectoryGeneration_Goal_global_path(::planning_interfaces::action::TrajectoryGeneration_Goal & msg)
  : msg_(msg)
  {}
  Init_TrajectoryGeneration_Goal_next_waypoint global_path(::planning_interfaces::action::TrajectoryGeneration_Goal::_global_path_type arg)
  {
    msg_.global_path = std::move(arg);
    return Init_TrajectoryGeneration_Goal_next_waypoint(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_Goal msg_;
};

class Init_TrajectoryGeneration_Goal_odom
{
public:
  explicit Init_TrajectoryGeneration_Goal_odom(::planning_interfaces::action::TrajectoryGeneration_Goal & msg)
  : msg_(msg)
  {}
  Init_TrajectoryGeneration_Goal_global_path odom(::planning_interfaces::action::TrajectoryGeneration_Goal::_odom_type arg)
  {
    msg_.odom = std::move(arg);
    return Init_TrajectoryGeneration_Goal_global_path(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_Goal msg_;
};

class Init_TrajectoryGeneration_Goal_costmap
{
public:
  Init_TrajectoryGeneration_Goal_costmap()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryGeneration_Goal_odom costmap(::planning_interfaces::action::TrajectoryGeneration_Goal::_costmap_type arg)
  {
    msg_.costmap = std::move(arg);
    return Init_TrajectoryGeneration_Goal_odom(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::action::TrajectoryGeneration_Goal>()
{
  return planning_interfaces::action::builder::Init_TrajectoryGeneration_Goal_costmap();
}

}  // namespace planning_interfaces


namespace planning_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryGeneration_Result_trajectories
{
public:
  Init_TrajectoryGeneration_Result_trajectories()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::planning_interfaces::action::TrajectoryGeneration_Result trajectories(::planning_interfaces::action::TrajectoryGeneration_Result::_trajectories_type arg)
  {
    msg_.trajectories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::action::TrajectoryGeneration_Result>()
{
  return planning_interfaces::action::builder::Init_TrajectoryGeneration_Result_trajectories();
}

}  // namespace planning_interfaces


namespace planning_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryGeneration_Feedback_trajectory
{
public:
  Init_TrajectoryGeneration_Feedback_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::planning_interfaces::action::TrajectoryGeneration_Feedback trajectory(::planning_interfaces::action::TrajectoryGeneration_Feedback::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::action::TrajectoryGeneration_Feedback>()
{
  return planning_interfaces::action::builder::Init_TrajectoryGeneration_Feedback_trajectory();
}

}  // namespace planning_interfaces


namespace planning_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryGeneration_SendGoal_Request_goal
{
public:
  explicit Init_TrajectoryGeneration_SendGoal_Request_goal(::planning_interfaces::action::TrajectoryGeneration_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::planning_interfaces::action::TrajectoryGeneration_SendGoal_Request goal(::planning_interfaces::action::TrajectoryGeneration_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_SendGoal_Request msg_;
};

class Init_TrajectoryGeneration_SendGoal_Request_goal_id
{
public:
  Init_TrajectoryGeneration_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryGeneration_SendGoal_Request_goal goal_id(::planning_interfaces::action::TrajectoryGeneration_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TrajectoryGeneration_SendGoal_Request_goal(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::action::TrajectoryGeneration_SendGoal_Request>()
{
  return planning_interfaces::action::builder::Init_TrajectoryGeneration_SendGoal_Request_goal_id();
}

}  // namespace planning_interfaces


namespace planning_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryGeneration_SendGoal_Response_stamp
{
public:
  explicit Init_TrajectoryGeneration_SendGoal_Response_stamp(::planning_interfaces::action::TrajectoryGeneration_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::planning_interfaces::action::TrajectoryGeneration_SendGoal_Response stamp(::planning_interfaces::action::TrajectoryGeneration_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_SendGoal_Response msg_;
};

class Init_TrajectoryGeneration_SendGoal_Response_accepted
{
public:
  Init_TrajectoryGeneration_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryGeneration_SendGoal_Response_stamp accepted(::planning_interfaces::action::TrajectoryGeneration_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TrajectoryGeneration_SendGoal_Response_stamp(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::action::TrajectoryGeneration_SendGoal_Response>()
{
  return planning_interfaces::action::builder::Init_TrajectoryGeneration_SendGoal_Response_accepted();
}

}  // namespace planning_interfaces


namespace planning_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryGeneration_GetResult_Request_goal_id
{
public:
  Init_TrajectoryGeneration_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::planning_interfaces::action::TrajectoryGeneration_GetResult_Request goal_id(::planning_interfaces::action::TrajectoryGeneration_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::action::TrajectoryGeneration_GetResult_Request>()
{
  return planning_interfaces::action::builder::Init_TrajectoryGeneration_GetResult_Request_goal_id();
}

}  // namespace planning_interfaces


namespace planning_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryGeneration_GetResult_Response_result
{
public:
  explicit Init_TrajectoryGeneration_GetResult_Response_result(::planning_interfaces::action::TrajectoryGeneration_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::planning_interfaces::action::TrajectoryGeneration_GetResult_Response result(::planning_interfaces::action::TrajectoryGeneration_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_GetResult_Response msg_;
};

class Init_TrajectoryGeneration_GetResult_Response_status
{
public:
  Init_TrajectoryGeneration_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryGeneration_GetResult_Response_result status(::planning_interfaces::action::TrajectoryGeneration_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TrajectoryGeneration_GetResult_Response_result(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::action::TrajectoryGeneration_GetResult_Response>()
{
  return planning_interfaces::action::builder::Init_TrajectoryGeneration_GetResult_Response_status();
}

}  // namespace planning_interfaces


namespace planning_interfaces
{

namespace action
{

namespace builder
{

class Init_TrajectoryGeneration_FeedbackMessage_feedback
{
public:
  explicit Init_TrajectoryGeneration_FeedbackMessage_feedback(::planning_interfaces::action::TrajectoryGeneration_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::planning_interfaces::action::TrajectoryGeneration_FeedbackMessage feedback(::planning_interfaces::action::TrajectoryGeneration_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_FeedbackMessage msg_;
};

class Init_TrajectoryGeneration_FeedbackMessage_goal_id
{
public:
  Init_TrajectoryGeneration_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryGeneration_FeedbackMessage_feedback goal_id(::planning_interfaces::action::TrajectoryGeneration_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TrajectoryGeneration_FeedbackMessage_feedback(msg_);
  }

private:
  ::planning_interfaces::action::TrajectoryGeneration_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::action::TrajectoryGeneration_FeedbackMessage>()
{
  return planning_interfaces::action::builder::Init_TrajectoryGeneration_FeedbackMessage_goal_id();
}

}  // namespace planning_interfaces

#endif  // PLANNING_INTERFACES__ACTION__DETAIL__TRAJECTORY_GENERATION__BUILDER_HPP_
