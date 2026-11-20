// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_hardware:srv/Maintain.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__SRV__DETAIL__MAINTAIN__STRUCT_HPP_
#define ROBOT_HARDWARE__SRV__DETAIL__MAINTAIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_hardware__srv__Maintain_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_hardware__srv__Maintain_Request __declspec(deprecated)
#endif

namespace robot_hardware
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Maintain_Request_
{
  using Type = Maintain_Request_<ContainerAllocator>;

  explicit Maintain_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint = "";
      this->operation = "";
      this->lower = 0.0;
      this->upper = 0.0;
      this->save = false;
    }
  }

  explicit Maintain_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint(_alloc),
    operation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint = "";
      this->operation = "";
      this->lower = 0.0;
      this->upper = 0.0;
      this->save = false;
    }
  }

  // field types and members
  using _joint_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_type joint;
  using _operation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operation_type operation;
  using _lower_type =
    double;
  _lower_type lower;
  using _upper_type =
    double;
  _upper_type upper;
  using _save_type =
    bool;
  _save_type save;

  // setters for named parameter idiom
  Type & set__joint(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint = _arg;
    return *this;
  }
  Type & set__operation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operation = _arg;
    return *this;
  }
  Type & set__lower(
    const double & _arg)
  {
    this->lower = _arg;
    return *this;
  }
  Type & set__upper(
    const double & _arg)
  {
    this->upper = _arg;
    return *this;
  }
  Type & set__save(
    const bool & _arg)
  {
    this->save = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_hardware::srv::Maintain_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_hardware::srv::Maintain_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_hardware::srv::Maintain_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_hardware::srv::Maintain_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_hardware::srv::Maintain_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::srv::Maintain_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_hardware::srv::Maintain_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::srv::Maintain_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_hardware::srv::Maintain_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_hardware::srv::Maintain_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_hardware__srv__Maintain_Request
    std::shared_ptr<robot_hardware::srv::Maintain_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_hardware__srv__Maintain_Request
    std::shared_ptr<robot_hardware::srv::Maintain_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Maintain_Request_ & other) const
  {
    if (this->joint != other.joint) {
      return false;
    }
    if (this->operation != other.operation) {
      return false;
    }
    if (this->lower != other.lower) {
      return false;
    }
    if (this->upper != other.upper) {
      return false;
    }
    if (this->save != other.save) {
      return false;
    }
    return true;
  }
  bool operator!=(const Maintain_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Maintain_Request_

// alias to use template instance with default allocator
using Maintain_Request =
  robot_hardware::srv::Maintain_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_hardware


#ifndef _WIN32
# define DEPRECATED__robot_hardware__srv__Maintain_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_hardware__srv__Maintain_Response __declspec(deprecated)
#endif

namespace robot_hardware
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Maintain_Response_
{
  using Type = Maintain_Response_<ContainerAllocator>;

  explicit Maintain_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Maintain_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

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

  // constant declarations

  // pointer types
  using RawPtr =
    robot_hardware::srv::Maintain_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_hardware::srv::Maintain_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_hardware::srv::Maintain_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_hardware::srv::Maintain_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_hardware::srv::Maintain_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::srv::Maintain_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_hardware::srv::Maintain_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::srv::Maintain_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_hardware::srv::Maintain_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_hardware::srv::Maintain_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_hardware__srv__Maintain_Response
    std::shared_ptr<robot_hardware::srv::Maintain_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_hardware__srv__Maintain_Response
    std::shared_ptr<robot_hardware::srv::Maintain_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Maintain_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Maintain_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Maintain_Response_

// alias to use template instance with default allocator
using Maintain_Response =
  robot_hardware::srv::Maintain_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_hardware

namespace robot_hardware
{

namespace srv
{

struct Maintain
{
  using Request = robot_hardware::srv::Maintain_Request;
  using Response = robot_hardware::srv::Maintain_Response;
};

}  // namespace srv

}  // namespace robot_hardware

#endif  // ROBOT_HARDWARE__SRV__DETAIL__MAINTAIN__STRUCT_HPP_
