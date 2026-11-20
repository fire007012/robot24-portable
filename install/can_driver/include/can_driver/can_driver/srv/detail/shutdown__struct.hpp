// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from can_driver:srv/Shutdown.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__SHUTDOWN__STRUCT_HPP_
#define CAN_DRIVER__SRV__DETAIL__SHUTDOWN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__can_driver__srv__Shutdown_Request __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__srv__Shutdown_Request __declspec(deprecated)
#endif

namespace can_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Shutdown_Request_
{
  using Type = Shutdown_Request_<ContainerAllocator>;

  explicit Shutdown_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force = false;
    }
  }

  explicit Shutdown_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force = false;
    }
  }

  // field types and members
  using _force_type =
    bool;
  _force_type force;

  // setters for named parameter idiom
  Type & set__force(
    const bool & _arg)
  {
    this->force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    can_driver::srv::Shutdown_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::srv::Shutdown_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::srv::Shutdown_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::srv::Shutdown_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::Shutdown_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::Shutdown_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::Shutdown_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::Shutdown_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::srv::Shutdown_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::srv::Shutdown_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__srv__Shutdown_Request
    std::shared_ptr<can_driver::srv::Shutdown_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__srv__Shutdown_Request
    std::shared_ptr<can_driver::srv::Shutdown_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Shutdown_Request_ & other) const
  {
    if (this->force != other.force) {
      return false;
    }
    return true;
  }
  bool operator!=(const Shutdown_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Shutdown_Request_

// alias to use template instance with default allocator
using Shutdown_Request =
  can_driver::srv::Shutdown_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace can_driver


#ifndef _WIN32
# define DEPRECATED__can_driver__srv__Shutdown_Response __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__srv__Shutdown_Response __declspec(deprecated)
#endif

namespace can_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Shutdown_Response_
{
  using Type = Shutdown_Response_<ContainerAllocator>;

  explicit Shutdown_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Shutdown_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    can_driver::srv::Shutdown_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::srv::Shutdown_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::srv::Shutdown_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::srv::Shutdown_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::Shutdown_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::Shutdown_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::Shutdown_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::Shutdown_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::srv::Shutdown_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::srv::Shutdown_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__srv__Shutdown_Response
    std::shared_ptr<can_driver::srv::Shutdown_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__srv__Shutdown_Response
    std::shared_ptr<can_driver::srv::Shutdown_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Shutdown_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Shutdown_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Shutdown_Response_

// alias to use template instance with default allocator
using Shutdown_Response =
  can_driver::srv::Shutdown_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace can_driver

namespace can_driver
{

namespace srv
{

struct Shutdown
{
  using Request = can_driver::srv::Shutdown_Request;
  using Response = can_driver::srv::Shutdown_Response;
};

}  // namespace srv

}  // namespace can_driver

#endif  // CAN_DRIVER__SRV__DETAIL__SHUTDOWN__STRUCT_HPP_
