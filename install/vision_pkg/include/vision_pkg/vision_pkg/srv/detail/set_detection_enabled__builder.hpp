// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_pkg:srv/SetDetectionEnabled.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__BUILDER_HPP_
#define VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_pkg/srv/detail/set_detection_enabled__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_pkg
{

namespace srv
{

namespace builder
{

class Init_SetDetectionEnabled_Request_enable_center_distance
{
public:
  explicit Init_SetDetectionEnabled_Request_enable_center_distance(::vision_pkg::srv::SetDetectionEnabled_Request & msg)
  : msg_(msg)
  {}
  ::vision_pkg::srv::SetDetectionEnabled_Request enable_center_distance(::vision_pkg::srv::SetDetectionEnabled_Request::_enable_center_distance_type arg)
  {
    msg_.enable_center_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Request msg_;
};

class Init_SetDetectionEnabled_Request_enable_obstacle_warning
{
public:
  explicit Init_SetDetectionEnabled_Request_enable_obstacle_warning(::vision_pkg::srv::SetDetectionEnabled_Request & msg)
  : msg_(msg)
  {}
  Init_SetDetectionEnabled_Request_enable_center_distance enable_obstacle_warning(::vision_pkg::srv::SetDetectionEnabled_Request::_enable_obstacle_warning_type arg)
  {
    msg_.enable_obstacle_warning = std::move(arg);
    return Init_SetDetectionEnabled_Request_enable_center_distance(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Request msg_;
};

class Init_SetDetectionEnabled_Request_enable_motion
{
public:
  explicit Init_SetDetectionEnabled_Request_enable_motion(::vision_pkg::srv::SetDetectionEnabled_Request & msg)
  : msg_(msg)
  {}
  Init_SetDetectionEnabled_Request_enable_obstacle_warning enable_motion(::vision_pkg::srv::SetDetectionEnabled_Request::_enable_motion_type arg)
  {
    msg_.enable_motion = std::move(arg);
    return Init_SetDetectionEnabled_Request_enable_obstacle_warning(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Request msg_;
};

class Init_SetDetectionEnabled_Request_enable_qrcode
{
public:
  explicit Init_SetDetectionEnabled_Request_enable_qrcode(::vision_pkg::srv::SetDetectionEnabled_Request & msg)
  : msg_(msg)
  {}
  Init_SetDetectionEnabled_Request_enable_motion enable_qrcode(::vision_pkg::srv::SetDetectionEnabled_Request::_enable_qrcode_type arg)
  {
    msg_.enable_qrcode = std::move(arg);
    return Init_SetDetectionEnabled_Request_enable_motion(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Request msg_;
};

class Init_SetDetectionEnabled_Request_enable_yolo
{
public:
  explicit Init_SetDetectionEnabled_Request_enable_yolo(::vision_pkg::srv::SetDetectionEnabled_Request & msg)
  : msg_(msg)
  {}
  Init_SetDetectionEnabled_Request_enable_qrcode enable_yolo(::vision_pkg::srv::SetDetectionEnabled_Request::_enable_yolo_type arg)
  {
    msg_.enable_yolo = std::move(arg);
    return Init_SetDetectionEnabled_Request_enable_qrcode(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Request msg_;
};

class Init_SetDetectionEnabled_Request_enable_all
{
public:
  Init_SetDetectionEnabled_Request_enable_all()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDetectionEnabled_Request_enable_yolo enable_all(::vision_pkg::srv::SetDetectionEnabled_Request::_enable_all_type arg)
  {
    msg_.enable_all = std::move(arg);
    return Init_SetDetectionEnabled_Request_enable_yolo(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_pkg::srv::SetDetectionEnabled_Request>()
{
  return vision_pkg::srv::builder::Init_SetDetectionEnabled_Request_enable_all();
}

}  // namespace vision_pkg


namespace vision_pkg
{

namespace srv
{

namespace builder
{

class Init_SetDetectionEnabled_Response_center_distance_enabled
{
public:
  explicit Init_SetDetectionEnabled_Response_center_distance_enabled(::vision_pkg::srv::SetDetectionEnabled_Response & msg)
  : msg_(msg)
  {}
  ::vision_pkg::srv::SetDetectionEnabled_Response center_distance_enabled(::vision_pkg::srv::SetDetectionEnabled_Response::_center_distance_enabled_type arg)
  {
    msg_.center_distance_enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Response msg_;
};

class Init_SetDetectionEnabled_Response_obstacle_warning_enabled
{
public:
  explicit Init_SetDetectionEnabled_Response_obstacle_warning_enabled(::vision_pkg::srv::SetDetectionEnabled_Response & msg)
  : msg_(msg)
  {}
  Init_SetDetectionEnabled_Response_center_distance_enabled obstacle_warning_enabled(::vision_pkg::srv::SetDetectionEnabled_Response::_obstacle_warning_enabled_type arg)
  {
    msg_.obstacle_warning_enabled = std::move(arg);
    return Init_SetDetectionEnabled_Response_center_distance_enabled(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Response msg_;
};

class Init_SetDetectionEnabled_Response_motion_enabled
{
public:
  explicit Init_SetDetectionEnabled_Response_motion_enabled(::vision_pkg::srv::SetDetectionEnabled_Response & msg)
  : msg_(msg)
  {}
  Init_SetDetectionEnabled_Response_obstacle_warning_enabled motion_enabled(::vision_pkg::srv::SetDetectionEnabled_Response::_motion_enabled_type arg)
  {
    msg_.motion_enabled = std::move(arg);
    return Init_SetDetectionEnabled_Response_obstacle_warning_enabled(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Response msg_;
};

class Init_SetDetectionEnabled_Response_qrcode_enabled
{
public:
  explicit Init_SetDetectionEnabled_Response_qrcode_enabled(::vision_pkg::srv::SetDetectionEnabled_Response & msg)
  : msg_(msg)
  {}
  Init_SetDetectionEnabled_Response_motion_enabled qrcode_enabled(::vision_pkg::srv::SetDetectionEnabled_Response::_qrcode_enabled_type arg)
  {
    msg_.qrcode_enabled = std::move(arg);
    return Init_SetDetectionEnabled_Response_motion_enabled(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Response msg_;
};

class Init_SetDetectionEnabled_Response_yolo_enabled
{
public:
  explicit Init_SetDetectionEnabled_Response_yolo_enabled(::vision_pkg::srv::SetDetectionEnabled_Response & msg)
  : msg_(msg)
  {}
  Init_SetDetectionEnabled_Response_qrcode_enabled yolo_enabled(::vision_pkg::srv::SetDetectionEnabled_Response::_yolo_enabled_type arg)
  {
    msg_.yolo_enabled = std::move(arg);
    return Init_SetDetectionEnabled_Response_qrcode_enabled(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Response msg_;
};

class Init_SetDetectionEnabled_Response_message
{
public:
  explicit Init_SetDetectionEnabled_Response_message(::vision_pkg::srv::SetDetectionEnabled_Response & msg)
  : msg_(msg)
  {}
  Init_SetDetectionEnabled_Response_yolo_enabled message(::vision_pkg::srv::SetDetectionEnabled_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SetDetectionEnabled_Response_yolo_enabled(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Response msg_;
};

class Init_SetDetectionEnabled_Response_success
{
public:
  Init_SetDetectionEnabled_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDetectionEnabled_Response_message success(::vision_pkg::srv::SetDetectionEnabled_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetDetectionEnabled_Response_message(msg_);
  }

private:
  ::vision_pkg::srv::SetDetectionEnabled_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_pkg::srv::SetDetectionEnabled_Response>()
{
  return vision_pkg::srv::builder::Init_SetDetectionEnabled_Response_success();
}

}  // namespace vision_pkg

#endif  // VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__BUILDER_HPP_
