// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_hardware:srv/Maintain.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__SRV__DETAIL__MAINTAIN__BUILDER_HPP_
#define ROBOT_HARDWARE__SRV__DETAIL__MAINTAIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_hardware/srv/detail/maintain__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_hardware
{

namespace srv
{

namespace builder
{

class Init_Maintain_Request_save
{
public:
  explicit Init_Maintain_Request_save(::robot_hardware::srv::Maintain_Request & msg)
  : msg_(msg)
  {}
  ::robot_hardware::srv::Maintain_Request save(::robot_hardware::srv::Maintain_Request::_save_type arg)
  {
    msg_.save = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_hardware::srv::Maintain_Request msg_;
};

class Init_Maintain_Request_upper
{
public:
  explicit Init_Maintain_Request_upper(::robot_hardware::srv::Maintain_Request & msg)
  : msg_(msg)
  {}
  Init_Maintain_Request_save upper(::robot_hardware::srv::Maintain_Request::_upper_type arg)
  {
    msg_.upper = std::move(arg);
    return Init_Maintain_Request_save(msg_);
  }

private:
  ::robot_hardware::srv::Maintain_Request msg_;
};

class Init_Maintain_Request_lower
{
public:
  explicit Init_Maintain_Request_lower(::robot_hardware::srv::Maintain_Request & msg)
  : msg_(msg)
  {}
  Init_Maintain_Request_upper lower(::robot_hardware::srv::Maintain_Request::_lower_type arg)
  {
    msg_.lower = std::move(arg);
    return Init_Maintain_Request_upper(msg_);
  }

private:
  ::robot_hardware::srv::Maintain_Request msg_;
};

class Init_Maintain_Request_operation
{
public:
  explicit Init_Maintain_Request_operation(::robot_hardware::srv::Maintain_Request & msg)
  : msg_(msg)
  {}
  Init_Maintain_Request_lower operation(::robot_hardware::srv::Maintain_Request::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return Init_Maintain_Request_lower(msg_);
  }

private:
  ::robot_hardware::srv::Maintain_Request msg_;
};

class Init_Maintain_Request_joint
{
public:
  Init_Maintain_Request_joint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Maintain_Request_operation joint(::robot_hardware::srv::Maintain_Request::_joint_type arg)
  {
    msg_.joint = std::move(arg);
    return Init_Maintain_Request_operation(msg_);
  }

private:
  ::robot_hardware::srv::Maintain_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_hardware::srv::Maintain_Request>()
{
  return robot_hardware::srv::builder::Init_Maintain_Request_joint();
}

}  // namespace robot_hardware


namespace robot_hardware
{

namespace srv
{

namespace builder
{

class Init_Maintain_Response_message
{
public:
  explicit Init_Maintain_Response_message(::robot_hardware::srv::Maintain_Response & msg)
  : msg_(msg)
  {}
  ::robot_hardware::srv::Maintain_Response message(::robot_hardware::srv::Maintain_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_hardware::srv::Maintain_Response msg_;
};

class Init_Maintain_Response_success
{
public:
  Init_Maintain_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Maintain_Response_message success(::robot_hardware::srv::Maintain_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Maintain_Response_message(msg_);
  }

private:
  ::robot_hardware::srv::Maintain_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_hardware::srv::Maintain_Response>()
{
  return robot_hardware::srv::builder::Init_Maintain_Response_success();
}

}  // namespace robot_hardware

#endif  // ROBOT_HARDWARE__SRV__DETAIL__MAINTAIN__BUILDER_HPP_
