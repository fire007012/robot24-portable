// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from can_driver:srv/Init.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__INIT__BUILDER_HPP_
#define CAN_DRIVER__SRV__DETAIL__INIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "can_driver/srv/detail/init__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace can_driver
{

namespace srv
{

namespace builder
{

class Init_Init_Request_loopback
{
public:
  explicit Init_Init_Request_loopback(::can_driver::srv::Init_Request & msg)
  : msg_(msg)
  {}
  ::can_driver::srv::Init_Request loopback(::can_driver::srv::Init_Request::_loopback_type arg)
  {
    msg_.loopback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::srv::Init_Request msg_;
};

class Init_Init_Request_device
{
public:
  Init_Init_Request_device()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Init_Request_loopback device(::can_driver::srv::Init_Request::_device_type arg)
  {
    msg_.device = std::move(arg);
    return Init_Init_Request_loopback(msg_);
  }

private:
  ::can_driver::srv::Init_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::srv::Init_Request>()
{
  return can_driver::srv::builder::Init_Init_Request_device();
}

}  // namespace can_driver


namespace can_driver
{

namespace srv
{

namespace builder
{

class Init_Init_Response_message
{
public:
  explicit Init_Init_Response_message(::can_driver::srv::Init_Response & msg)
  : msg_(msg)
  {}
  ::can_driver::srv::Init_Response message(::can_driver::srv::Init_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::srv::Init_Response msg_;
};

class Init_Init_Response_success
{
public:
  Init_Init_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Init_Response_message success(::can_driver::srv::Init_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Init_Response_message(msg_);
  }

private:
  ::can_driver::srv::Init_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::srv::Init_Response>()
{
  return can_driver::srv::builder::Init_Init_Response_success();
}

}  // namespace can_driver

#endif  // CAN_DRIVER__SRV__DETAIL__INIT__BUILDER_HPP_
