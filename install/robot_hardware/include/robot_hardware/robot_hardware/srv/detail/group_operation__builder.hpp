// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_hardware:srv/GroupOperation.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__SRV__DETAIL__GROUP_OPERATION__BUILDER_HPP_
#define ROBOT_HARDWARE__SRV__DETAIL__GROUP_OPERATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_hardware/srv/detail/group_operation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_hardware
{

namespace srv
{

namespace builder
{

class Init_GroupOperation_Request_resource
{
public:
  explicit Init_GroupOperation_Request_resource(::robot_hardware::srv::GroupOperation_Request & msg)
  : msg_(msg)
  {}
  ::robot_hardware::srv::GroupOperation_Request resource(::robot_hardware::srv::GroupOperation_Request::_resource_type arg)
  {
    msg_.resource = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_hardware::srv::GroupOperation_Request msg_;
};

class Init_GroupOperation_Request_operation
{
public:
  explicit Init_GroupOperation_Request_operation(::robot_hardware::srv::GroupOperation_Request & msg)
  : msg_(msg)
  {}
  Init_GroupOperation_Request_resource operation(::robot_hardware::srv::GroupOperation_Request::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return Init_GroupOperation_Request_resource(msg_);
  }

private:
  ::robot_hardware::srv::GroupOperation_Request msg_;
};

class Init_GroupOperation_Request_groups
{
public:
  Init_GroupOperation_Request_groups()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroupOperation_Request_operation groups(::robot_hardware::srv::GroupOperation_Request::_groups_type arg)
  {
    msg_.groups = std::move(arg);
    return Init_GroupOperation_Request_operation(msg_);
  }

private:
  ::robot_hardware::srv::GroupOperation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_hardware::srv::GroupOperation_Request>()
{
  return robot_hardware::srv::builder::Init_GroupOperation_Request_groups();
}

}  // namespace robot_hardware


namespace robot_hardware
{

namespace srv
{

namespace builder
{

class Init_GroupOperation_Response_message
{
public:
  explicit Init_GroupOperation_Response_message(::robot_hardware::srv::GroupOperation_Response & msg)
  : msg_(msg)
  {}
  ::robot_hardware::srv::GroupOperation_Response message(::robot_hardware::srv::GroupOperation_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_hardware::srv::GroupOperation_Response msg_;
};

class Init_GroupOperation_Response_operation_id
{
public:
  explicit Init_GroupOperation_Response_operation_id(::robot_hardware::srv::GroupOperation_Response & msg)
  : msg_(msg)
  {}
  Init_GroupOperation_Response_message operation_id(::robot_hardware::srv::GroupOperation_Response::_operation_id_type arg)
  {
    msg_.operation_id = std::move(arg);
    return Init_GroupOperation_Response_message(msg_);
  }

private:
  ::robot_hardware::srv::GroupOperation_Response msg_;
};

class Init_GroupOperation_Response_success
{
public:
  Init_GroupOperation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroupOperation_Response_operation_id success(::robot_hardware::srv::GroupOperation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GroupOperation_Response_operation_id(msg_);
  }

private:
  ::robot_hardware::srv::GroupOperation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_hardware::srv::GroupOperation_Response>()
{
  return robot_hardware::srv::builder::Init_GroupOperation_Response_success();
}

}  // namespace robot_hardware

#endif  // ROBOT_HARDWARE__SRV__DETAIL__GROUP_OPERATION__BUILDER_HPP_
