// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_pkg:msg/DetectedObject3D.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D__BUILDER_HPP_
#define VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_pkg/msg/detail/detected_object3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_pkg
{

namespace msg
{

namespace builder
{

class Init_DetectedObject3D_pose
{
public:
  explicit Init_DetectedObject3D_pose(::vision_pkg::msg::DetectedObject3D & msg)
  : msg_(msg)
  {}
  ::vision_pkg::msg::DetectedObject3D pose(::vision_pkg::msg::DetectedObject3D::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_pkg::msg::DetectedObject3D msg_;
};

class Init_DetectedObject3D_confidence
{
public:
  explicit Init_DetectedObject3D_confidence(::vision_pkg::msg::DetectedObject3D & msg)
  : msg_(msg)
  {}
  Init_DetectedObject3D_pose confidence(::vision_pkg::msg::DetectedObject3D::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_DetectedObject3D_pose(msg_);
  }

private:
  ::vision_pkg::msg::DetectedObject3D msg_;
};

class Init_DetectedObject3D_id
{
public:
  explicit Init_DetectedObject3D_id(::vision_pkg::msg::DetectedObject3D & msg)
  : msg_(msg)
  {}
  Init_DetectedObject3D_confidence id(::vision_pkg::msg::DetectedObject3D::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DetectedObject3D_confidence(msg_);
  }

private:
  ::vision_pkg::msg::DetectedObject3D msg_;
};

class Init_DetectedObject3D_class_name
{
public:
  Init_DetectedObject3D_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObject3D_id class_name(::vision_pkg::msg::DetectedObject3D::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_DetectedObject3D_id(msg_);
  }

private:
  ::vision_pkg::msg::DetectedObject3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_pkg::msg::DetectedObject3D>()
{
  return vision_pkg::msg::builder::Init_DetectedObject3D_class_name();
}

}  // namespace vision_pkg

#endif  // VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D__BUILDER_HPP_
