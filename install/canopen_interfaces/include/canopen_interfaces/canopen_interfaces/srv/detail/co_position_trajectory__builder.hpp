// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from canopen_interfaces:srv/COPositionTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CANOPEN_INTERFACES__SRV__DETAIL__CO_POSITION_TRAJECTORY__BUILDER_HPP_
#define CANOPEN_INTERFACES__SRV__DETAIL__CO_POSITION_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "canopen_interfaces/srv/detail/co_position_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace canopen_interfaces
{

namespace srv
{

namespace builder
{

class Init_COPositionTrajectory_Request_times_from_start
{
public:
  explicit Init_COPositionTrajectory_Request_times_from_start(::canopen_interfaces::srv::COPositionTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::canopen_interfaces::srv::COPositionTrajectory_Request times_from_start(::canopen_interfaces::srv::COPositionTrajectory_Request::_times_from_start_type arg)
  {
    msg_.times_from_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::canopen_interfaces::srv::COPositionTrajectory_Request msg_;
};

class Init_COPositionTrajectory_Request_positions
{
public:
  explicit Init_COPositionTrajectory_Request_positions(::canopen_interfaces::srv::COPositionTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_COPositionTrajectory_Request_times_from_start positions(::canopen_interfaces::srv::COPositionTrajectory_Request::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_COPositionTrajectory_Request_times_from_start(msg_);
  }

private:
  ::canopen_interfaces::srv::COPositionTrajectory_Request msg_;
};

class Init_COPositionTrajectory_Request_epoch
{
public:
  Init_COPositionTrajectory_Request_epoch()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_COPositionTrajectory_Request_positions epoch(::canopen_interfaces::srv::COPositionTrajectory_Request::_epoch_type arg)
  {
    msg_.epoch = std::move(arg);
    return Init_COPositionTrajectory_Request_positions(msg_);
  }

private:
  ::canopen_interfaces::srv::COPositionTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::canopen_interfaces::srv::COPositionTrajectory_Request>()
{
  return canopen_interfaces::srv::builder::Init_COPositionTrajectory_Request_epoch();
}

}  // namespace canopen_interfaces


namespace canopen_interfaces
{

namespace srv
{

namespace builder
{

class Init_COPositionTrajectory_Response_message
{
public:
  explicit Init_COPositionTrajectory_Response_message(::canopen_interfaces::srv::COPositionTrajectory_Response & msg)
  : msg_(msg)
  {}
  ::canopen_interfaces::srv::COPositionTrajectory_Response message(::canopen_interfaces::srv::COPositionTrajectory_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::canopen_interfaces::srv::COPositionTrajectory_Response msg_;
};

class Init_COPositionTrajectory_Response_epoch
{
public:
  explicit Init_COPositionTrajectory_Response_epoch(::canopen_interfaces::srv::COPositionTrajectory_Response & msg)
  : msg_(msg)
  {}
  Init_COPositionTrajectory_Response_message epoch(::canopen_interfaces::srv::COPositionTrajectory_Response::_epoch_type arg)
  {
    msg_.epoch = std::move(arg);
    return Init_COPositionTrajectory_Response_message(msg_);
  }

private:
  ::canopen_interfaces::srv::COPositionTrajectory_Response msg_;
};

class Init_COPositionTrajectory_Response_success
{
public:
  Init_COPositionTrajectory_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_COPositionTrajectory_Response_epoch success(::canopen_interfaces::srv::COPositionTrajectory_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_COPositionTrajectory_Response_epoch(msg_);
  }

private:
  ::canopen_interfaces::srv::COPositionTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::canopen_interfaces::srv::COPositionTrajectory_Response>()
{
  return canopen_interfaces::srv::builder::Init_COPositionTrajectory_Response_success();
}

}  // namespace canopen_interfaces

#endif  // CANOPEN_INTERFACES__SRV__DETAIL__CO_POSITION_TRAJECTORY__BUILDER_HPP_
