// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_pkg:msg/DetectedObject3D.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D__STRUCT_HPP_
#define VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vision_pkg__msg__DetectedObject3D __attribute__((deprecated))
#else
# define DEPRECATED__vision_pkg__msg__DetectedObject3D __declspec(deprecated)
#endif

namespace vision_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObject3D_
{
  using Type = DetectedObject3D_<ContainerAllocator>;

  explicit DetectedObject3D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
      this->id = 0l;
      this->confidence = 0.0f;
    }
  }

  explicit DetectedObject3D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
      this->id = 0l;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;
  using _id_type =
    int32_t;
  _id_type id;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_pkg::msg::DetectedObject3D_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_pkg::msg::DetectedObject3D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_pkg::msg::DetectedObject3D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_pkg::msg::DetectedObject3D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_pkg::msg::DetectedObject3D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_pkg::msg::DetectedObject3D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_pkg::msg::DetectedObject3D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_pkg::msg::DetectedObject3D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_pkg::msg::DetectedObject3D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_pkg::msg::DetectedObject3D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_pkg__msg__DetectedObject3D
    std::shared_ptr<vision_pkg::msg::DetectedObject3D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_pkg__msg__DetectedObject3D
    std::shared_ptr<vision_pkg::msg::DetectedObject3D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObject3D_ & other) const
  {
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObject3D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObject3D_

// alias to use template instance with default allocator
using DetectedObject3D =
  vision_pkg::msg::DetectedObject3D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vision_pkg

#endif  // VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D__STRUCT_HPP_
