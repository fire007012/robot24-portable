// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from can_driver:srv/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define CAN_DRIVER__SRV__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "can_driver/srv/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace can_driver
{

namespace srv
{

namespace builder
{

class Init_MotorCommand_Request_value
{
public:
  explicit Init_MotorCommand_Request_value(::can_driver::srv::MotorCommand_Request & msg)
  : msg_(msg)
  {}
  ::can_driver::srv::MotorCommand_Request value(::can_driver::srv::MotorCommand_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::srv::MotorCommand_Request msg_;
};

class Init_MotorCommand_Request_command
{
public:
  explicit Init_MotorCommand_Request_command(::can_driver::srv::MotorCommand_Request & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_Request_value command(::can_driver::srv::MotorCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_MotorCommand_Request_value(msg_);
  }

private:
  ::can_driver::srv::MotorCommand_Request msg_;
};

class Init_MotorCommand_Request_motor_id
{
public:
  Init_MotorCommand_Request_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_Request_command motor_id(::can_driver::srv::MotorCommand_Request::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_MotorCommand_Request_command(msg_);
  }

private:
  ::can_driver::srv::MotorCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::srv::MotorCommand_Request>()
{
  return can_driver::srv::builder::Init_MotorCommand_Request_motor_id();
}

}  // namespace can_driver


namespace can_driver
{

namespace srv
{

namespace builder
{

class Init_MotorCommand_Response_message
{
public:
  explicit Init_MotorCommand_Response_message(::can_driver::srv::MotorCommand_Response & msg)
  : msg_(msg)
  {}
  ::can_driver::srv::MotorCommand_Response message(::can_driver::srv::MotorCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::srv::MotorCommand_Response msg_;
};

class Init_MotorCommand_Response_success
{
public:
  Init_MotorCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_Response_message success(::can_driver::srv::MotorCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MotorCommand_Response_message(msg_);
  }

private:
  ::can_driver::srv::MotorCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::srv::MotorCommand_Response>()
{
  return can_driver::srv::builder::Init_MotorCommand_Response_success();
}

}  // namespace can_driver

#endif  // CAN_DRIVER__SRV__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
