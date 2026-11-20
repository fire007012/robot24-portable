// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_pkg:msg/ObstacleWarning.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__STRUCT_HPP_
#define VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vision_pkg__msg__ObstacleWarning __attribute__((deprecated))
#else
# define DEPRECATED__vision_pkg__msg__ObstacleWarning __declspec(deprecated)
#endif

namespace vision_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleWarning_
{
  using Type = ObstacleWarning_<ContainerAllocator>;

  explicit ObstacleWarning_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_dist = 0.0f;
      this->center_dist = 0.0f;
      this->right_dist = 0.0f;
      this->left_warn = false;
      this->center_warn = false;
      this->right_warn = false;
    }
  }

  explicit ObstacleWarning_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_dist = 0.0f;
      this->center_dist = 0.0f;
      this->right_dist = 0.0f;
      this->left_warn = false;
      this->center_warn = false;
      this->right_warn = false;
    }
  }

  // field types and members
  using _left_dist_type =
    float;
  _left_dist_type left_dist;
  using _center_dist_type =
    float;
  _center_dist_type center_dist;
  using _right_dist_type =
    float;
  _right_dist_type right_dist;
  using _left_warn_type =
    bool;
  _left_warn_type left_warn;
  using _center_warn_type =
    bool;
  _center_warn_type center_warn;
  using _right_warn_type =
    bool;
  _right_warn_type right_warn;

  // setters for named parameter idiom
  Type & set__left_dist(
    const float & _arg)
  {
    this->left_dist = _arg;
    return *this;
  }
  Type & set__center_dist(
    const float & _arg)
  {
    this->center_dist = _arg;
    return *this;
  }
  Type & set__right_dist(
    const float & _arg)
  {
    this->right_dist = _arg;
    return *this;
  }
  Type & set__left_warn(
    const bool & _arg)
  {
    this->left_warn = _arg;
    return *this;
  }
  Type & set__center_warn(
    const bool & _arg)
  {
    this->center_warn = _arg;
    return *this;
  }
  Type & set__right_warn(
    const bool & _arg)
  {
    this->right_warn = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_pkg::msg::ObstacleWarning_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_pkg::msg::ObstacleWarning_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_pkg::msg::ObstacleWarning_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_pkg::msg::ObstacleWarning_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_pkg::msg::ObstacleWarning_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_pkg::msg::ObstacleWarning_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_pkg::msg::ObstacleWarning_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_pkg::msg::ObstacleWarning_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_pkg::msg::ObstacleWarning_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_pkg::msg::ObstacleWarning_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_pkg__msg__ObstacleWarning
    std::shared_ptr<vision_pkg::msg::ObstacleWarning_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_pkg__msg__ObstacleWarning
    std::shared_ptr<vision_pkg::msg::ObstacleWarning_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleWarning_ & other) const
  {
    if (this->left_dist != other.left_dist) {
      return false;
    }
    if (this->center_dist != other.center_dist) {
      return false;
    }
    if (this->right_dist != other.right_dist) {
      return false;
    }
    if (this->left_warn != other.left_warn) {
      return false;
    }
    if (this->center_warn != other.center_warn) {
      return false;
    }
    if (this->right_warn != other.right_warn) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleWarning_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleWarning_

// alias to use template instance with default allocator
using ObstacleWarning =
  vision_pkg::msg::ObstacleWarning_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vision_pkg

#endif  // VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__STRUCT_HPP_
