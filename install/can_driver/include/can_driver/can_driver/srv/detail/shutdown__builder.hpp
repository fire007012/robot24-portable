// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from can_driver:srv/Shutdown.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__SHUTDOWN__BUILDER_HPP_
#define CAN_DRIVER__SRV__DETAIL__SHUTDOWN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "can_driver/srv/detail/shutdown__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace can_driver
{

namespace srv
{

namespace builder
{

class Init_Shutdown_Request_force
{
public:
  Init_Shutdown_Request_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::can_driver::srv::Shutdown_Request force(::can_driver::srv::Shutdown_Request::_force_type arg)
  {
    msg_.force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::srv::Shutdown_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::srv::Shutdown_Request>()
{
  return can_driver::srv::builder::Init_Shutdown_Request_force();
}

}  // namespace can_driver


namespace can_driver
{

namespace srv
{

namespace builder
{

class Init_Shutdown_Response_message
{
public:
  explicit Init_Shutdown_Response_message(::can_driver::srv::Shutdown_Response & msg)
  : msg_(msg)
  {}
  ::can_driver::srv::Shutdown_Response message(::can_driver::srv::Shutdown_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::srv::Shutdown_Response msg_;
};

class Init_Shutdown_Response_success
{
public:
  Init_Shutdown_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Shutdown_Response_message success(::can_driver::srv::Shutdown_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Shutdown_Response_message(msg_);
  }

private:
  ::can_driver::srv::Shutdown_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::srv::Shutdown_Response>()
{
  return can_driver::srv::builder::Init_Shutdown_Response_success();
}

}  // namespace can_driver

#endif  // CAN_DRIVER__SRV__DETAIL__SHUTDOWN__BUILDER_HPP_
