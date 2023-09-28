// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planning_interfaces:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_
#define PLANNING_INTERFACES__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_

#include "planning_interfaces/srv/detail/load_map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace planning_interfaces
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Request_map_url
{
public:
  Init_LoadMap_Request_map_url()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::planning_interfaces::srv::LoadMap_Request map_url(::planning_interfaces::srv::LoadMap_Request::_map_url_type arg)
  {
    msg_.map_url = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::srv::LoadMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::srv::LoadMap_Request>()
{
  return planning_interfaces::srv::builder::Init_LoadMap_Request_map_url();
}

}  // namespace planning_interfaces


namespace planning_interfaces
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Response_status
{
public:
  Init_LoadMap_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::planning_interfaces::srv::LoadMap_Response status(::planning_interfaces::srv::LoadMap_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planning_interfaces::srv::LoadMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::planning_interfaces::srv::LoadMap_Response>()
{
  return planning_interfaces::srv::builder::Init_LoadMap_Response_status();
}

}  // namespace planning_interfaces

#endif  // PLANNING_INTERFACES__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_
