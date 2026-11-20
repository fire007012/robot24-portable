// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_pkg:msg/DetectedObject3DArray.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D_ARRAY__STRUCT_HPP_
#define VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'objects'
#include "vision_pkg/msg/detail/detected_object3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vision_pkg__msg__DetectedObject3DArray __attribute__((deprecated))
#else
# define DEPRECATED__vision_pkg__msg__DetectedObject3DArray __declspec(deprecated)
#endif

namespace vision_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObject3DArray_
{
  using Type = DetectedObject3DArray_<ContainerAllocator>;

  explicit DetectedObject3DArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DetectedObject3DArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _objects_type =
    std::vector<vision_pkg::msg::DetectedObject3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_pkg::msg::DetectedObject3D_<ContainerAllocator>>>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<vision_pkg::msg::DetectedObject3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_pkg::msg::DetectedObject3D_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_pkg::msg::DetectedObject3DArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_pkg::msg::DetectedObject3DArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_pkg::msg::DetectedObject3DArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_pkg::msg::DetectedObject3DArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_pkg::msg::DetectedObject3DArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_pkg::msg::DetectedObject3DArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_pkg::msg::DetectedObject3DArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_pkg::msg::DetectedObject3DArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_pkg::msg::DetectedObject3DArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_pkg::msg::DetectedObject3DArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_pkg__msg__DetectedObject3DArray
    std::shared_ptr<vision_pkg::msg::DetectedObject3DArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_pkg__msg__DetectedObject3DArray
    std::shared_ptr<vision_pkg::msg::DetectedObject3DArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObject3DArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObject3DArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObject3DArray_

// alias to use template instance with default allocator
using DetectedObject3DArray =
  vision_pkg::msg::DetectedObject3DArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vision_pkg

#endif  // VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D_ARRAY__STRUCT_HPP_
