// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_pkg:srv/SetDetectionEnabled.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__STRUCT_HPP_
#define VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vision_pkg__srv__SetDetectionEnabled_Request __attribute__((deprecated))
#else
# define DEPRECATED__vision_pkg__srv__SetDetectionEnabled_Request __declspec(deprecated)
#endif

namespace vision_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDetectionEnabled_Request_
{
  using Type = SetDetectionEnabled_Request_<ContainerAllocator>;

  explicit SetDetectionEnabled_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_all = false;
      this->enable_yolo = false;
      this->enable_qrcode = false;
      this->enable_motion = false;
      this->enable_obstacle_warning = false;
      this->enable_center_distance = false;
    }
  }

  explicit SetDetectionEnabled_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_all = false;
      this->enable_yolo = false;
      this->enable_qrcode = false;
      this->enable_motion = false;
      this->enable_obstacle_warning = false;
      this->enable_center_distance = false;
    }
  }

  // field types and members
  using _enable_all_type =
    bool;
  _enable_all_type enable_all;
  using _enable_yolo_type =
    bool;
  _enable_yolo_type enable_yolo;
  using _enable_qrcode_type =
    bool;
  _enable_qrcode_type enable_qrcode;
  using _enable_motion_type =
    bool;
  _enable_motion_type enable_motion;
  using _enable_obstacle_warning_type =
    bool;
  _enable_obstacle_warning_type enable_obstacle_warning;
  using _enable_center_distance_type =
    bool;
  _enable_center_distance_type enable_center_distance;

  // setters for named parameter idiom
  Type & set__enable_all(
    const bool & _arg)
  {
    this->enable_all = _arg;
    return *this;
  }
  Type & set__enable_yolo(
    const bool & _arg)
  {
    this->enable_yolo = _arg;
    return *this;
  }
  Type & set__enable_qrcode(
    const bool & _arg)
  {
    this->enable_qrcode = _arg;
    return *this;
  }
  Type & set__enable_motion(
    const bool & _arg)
  {
    this->enable_motion = _arg;
    return *this;
  }
  Type & set__enable_obstacle_warning(
    const bool & _arg)
  {
    this->enable_obstacle_warning = _arg;
    return *this;
  }
  Type & set__enable_center_distance(
    const bool & _arg)
  {
    this->enable_center_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_pkg::srv::SetDetectionEnabled_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_pkg::srv::SetDetectionEnabled_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_pkg::srv::SetDetectionEnabled_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_pkg::srv::SetDetectionEnabled_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_pkg::srv::SetDetectionEnabled_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_pkg::srv::SetDetectionEnabled_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_pkg::srv::SetDetectionEnabled_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_pkg::srv::SetDetectionEnabled_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_pkg::srv::SetDetectionEnabled_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_pkg::srv::SetDetectionEnabled_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_pkg__srv__SetDetectionEnabled_Request
    std::shared_ptr<vision_pkg::srv::SetDetectionEnabled_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_pkg__srv__SetDetectionEnabled_Request
    std::shared_ptr<vision_pkg::srv::SetDetectionEnabled_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDetectionEnabled_Request_ & other) const
  {
    if (this->enable_all != other.enable_all) {
      return false;
    }
    if (this->enable_yolo != other.enable_yolo) {
      return false;
    }
    if (this->enable_qrcode != other.enable_qrcode) {
      return false;
    }
    if (this->enable_motion != other.enable_motion) {
      return false;
    }
    if (this->enable_obstacle_warning != other.enable_obstacle_warning) {
      return false;
    }
    if (this->enable_center_distance != other.enable_center_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDetectionEnabled_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDetectionEnabled_Request_

// alias to use template instance with default allocator
using SetDetectionEnabled_Request =
  vision_pkg::srv::SetDetectionEnabled_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vision_pkg


#ifndef _WIN32
# define DEPRECATED__vision_pkg__srv__SetDetectionEnabled_Response __attribute__((deprecated))
#else
# define DEPRECATED__vision_pkg__srv__SetDetectionEnabled_Response __declspec(deprecated)
#endif

namespace vision_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDetectionEnabled_Response_
{
  using Type = SetDetectionEnabled_Response_<ContainerAllocator>;

  explicit SetDetectionEnabled_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->yolo_enabled = false;
      this->qrcode_enabled = false;
      this->motion_enabled = false;
      this->obstacle_warning_enabled = false;
      this->center_distance_enabled = false;
    }
  }

  explicit SetDetectionEnabled_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->yolo_enabled = false;
      this->qrcode_enabled = false;
      this->motion_enabled = false;
      this->obstacle_warning_enabled = false;
      this->center_distance_enabled = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _yolo_enabled_type =
    bool;
  _yolo_enabled_type yolo_enabled;
  using _qrcode_enabled_type =
    bool;
  _qrcode_enabled_type qrcode_enabled;
  using _motion_enabled_type =
    bool;
  _motion_enabled_type motion_enabled;
  using _obstacle_warning_enabled_type =
    bool;
  _obstacle_warning_enabled_type obstacle_warning_enabled;
  using _center_distance_enabled_type =
    bool;
  _center_distance_enabled_type center_distance_enabled;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__yolo_enabled(
    const bool & _arg)
  {
    this->yolo_enabled = _arg;
    return *this;
  }
  Type & set__qrcode_enabled(
    const bool & _arg)
  {
    this->qrcode_enabled = _arg;
    return *this;
  }
  Type & set__motion_enabled(
    const bool & _arg)
  {
    this->motion_enabled = _arg;
    return *this;
  }
  Type & set__obstacle_warning_enabled(
    const bool & _arg)
  {
    this->obstacle_warning_enabled = _arg;
    return *this;
  }
  Type & set__center_distance_enabled(
    const bool & _arg)
  {
    this->center_distance_enabled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_pkg::srv::SetDetectionEnabled_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_pkg::srv::SetDetectionEnabled_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_pkg::srv::SetDetectionEnabled_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_pkg::srv::SetDetectionEnabled_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_pkg::srv::SetDetectionEnabled_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_pkg::srv::SetDetectionEnabled_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_pkg::srv::SetDetectionEnabled_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_pkg::srv::SetDetectionEnabled_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_pkg::srv::SetDetectionEnabled_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_pkg::srv::SetDetectionEnabled_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_pkg__srv__SetDetectionEnabled_Response
    std::shared_ptr<vision_pkg::srv::SetDetectionEnabled_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_pkg__srv__SetDetectionEnabled_Response
    std::shared_ptr<vision_pkg::srv::SetDetectionEnabled_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDetectionEnabled_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->yolo_enabled != other.yolo_enabled) {
      return false;
    }
    if (this->qrcode_enabled != other.qrcode_enabled) {
      return false;
    }
    if (this->motion_enabled != other.motion_enabled) {
      return false;
    }
    if (this->obstacle_warning_enabled != other.obstacle_warning_enabled) {
      return false;
    }
    if (this->center_distance_enabled != other.center_distance_enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDetectionEnabled_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDetectionEnabled_Response_

// alias to use template instance with default allocator
using SetDetectionEnabled_Response =
  vision_pkg::srv::SetDetectionEnabled_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vision_pkg

namespace vision_pkg
{

namespace srv
{

struct SetDetectionEnabled
{
  using Request = vision_pkg::srv::SetDetectionEnabled_Request;
  using Response = vision_pkg::srv::SetDetectionEnabled_Response;
};

}  // namespace srv

}  // namespace vision_pkg

#endif  // VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__STRUCT_HPP_
