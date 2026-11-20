// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from can_driver:srv/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
#define CAN_DRIVER__SRV__DETAIL__MOTOR_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__can_driver__srv__MotorCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__srv__MotorCommand_Request __declspec(deprecated)
#endif

namespace can_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorCommand_Request_
{
  using Type = MotorCommand_Request_<ContainerAllocator>;

  explicit MotorCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->command = 0;
      this->value = 0.0;
    }
  }

  explicit MotorCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->command = 0;
      this->value = 0.0;
    }
  }

  // field types and members
  using _motor_id_type =
    uint16_t;
  _motor_id_type motor_id;
  using _command_type =
    uint8_t;
  _command_type command;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint16_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CMD_ENABLE =
    0u;
  static constexpr uint8_t CMD_DISABLE =
    1u;
  static constexpr uint8_t CMD_STOP =
    2u;
  static constexpr uint8_t CMD_SET_MODE =
    3u;

  // pointer types
  using RawPtr =
    can_driver::srv::MotorCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::srv::MotorCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::srv::MotorCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::srv::MotorCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::MotorCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::MotorCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::MotorCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::MotorCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::srv::MotorCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::srv::MotorCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__srv__MotorCommand_Request
    std::shared_ptr<can_driver::srv::MotorCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__srv__MotorCommand_Request
    std::shared_ptr<can_driver::srv::MotorCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommand_Request_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommand_Request_

// alias to use template instance with default allocator
using MotorCommand_Request =
  can_driver::srv::MotorCommand_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorCommand_Request_<ContainerAllocator>::CMD_ENABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorCommand_Request_<ContainerAllocator>::CMD_DISABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorCommand_Request_<ContainerAllocator>::CMD_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorCommand_Request_<ContainerAllocator>::CMD_SET_MODE;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace can_driver


#ifndef _WIN32
# define DEPRECATED__can_driver__srv__MotorCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__srv__MotorCommand_Response __declspec(deprecated)
#endif

namespace can_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorCommand_Response_
{
  using Type = MotorCommand_Response_<ContainerAllocator>;

  explicit MotorCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit MotorCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    can_driver::srv::MotorCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::srv::MotorCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::srv::MotorCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::srv::MotorCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::MotorCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::MotorCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::MotorCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::MotorCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::srv::MotorCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::srv::MotorCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__srv__MotorCommand_Response
    std::shared_ptr<can_driver::srv::MotorCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__srv__MotorCommand_Response
    std::shared_ptr<can_driver::srv::MotorCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommand_Response_

// alias to use template instance with default allocator
using MotorCommand_Response =
  can_driver::srv::MotorCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace can_driver

namespace can_driver
{

namespace srv
{

struct MotorCommand
{
  using Request = can_driver::srv::MotorCommand_Request;
  using Response = can_driver::srv::MotorCommand_Response;
};

}  // namespace srv

}  // namespace can_driver

#endif  // CAN_DRIVER__SRV__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
