// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from can_driver:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_
#define CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__can_driver__msg__MotorState __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__msg__MotorState __declspec(deprecated)
#endif

namespace can_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorState_
{
  using Type = MotorState_<ContainerAllocator>;

  explicit MotorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->name = "";
      this->mode = 0;
      this->enabled = false;
      this->fault = false;
      this->position = 0l;
      this->velocity = 0l;
      this->current = 0;
      this->joint_position = 0.0;
      this->joint_velocity = 0.0;
      this->mode_valid = false;
      this->status_valid = false;
      this->position_valid = false;
      this->velocity_valid = false;
      this->current_valid = false;
      this->feedback_fresh = false;
    }
  }

  explicit MotorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->name = "";
      this->mode = 0;
      this->enabled = false;
      this->fault = false;
      this->position = 0l;
      this->velocity = 0l;
      this->current = 0;
      this->joint_position = 0.0;
      this->joint_velocity = 0.0;
      this->mode_valid = false;
      this->status_valid = false;
      this->position_valid = false;
      this->velocity_valid = false;
      this->current_valid = false;
      this->feedback_fresh = false;
    }
  }

  // field types and members
  using _motor_id_type =
    uint16_t;
  _motor_id_type motor_id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _fault_type =
    bool;
  _fault_type fault;
  using _position_type =
    int32_t;
  _position_type position;
  using _velocity_type =
    int32_t;
  _velocity_type velocity;
  using _current_type =
    int16_t;
  _current_type current;
  using _joint_position_type =
    double;
  _joint_position_type joint_position;
  using _joint_velocity_type =
    double;
  _joint_velocity_type joint_velocity;
  using _mode_valid_type =
    bool;
  _mode_valid_type mode_valid;
  using _status_valid_type =
    bool;
  _status_valid_type status_valid;
  using _position_valid_type =
    bool;
  _position_valid_type position_valid;
  using _velocity_valid_type =
    bool;
  _velocity_valid_type velocity_valid;
  using _current_valid_type =
    bool;
  _current_valid_type current_valid;
  using _feedback_fresh_type =
    bool;
  _feedback_fresh_type feedback_fresh;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint16_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__fault(
    const bool & _arg)
  {
    this->fault = _arg;
    return *this;
  }
  Type & set__position(
    const int32_t & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const int32_t & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__current(
    const int16_t & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__joint_position(
    const double & _arg)
  {
    this->joint_position = _arg;
    return *this;
  }
  Type & set__joint_velocity(
    const double & _arg)
  {
    this->joint_velocity = _arg;
    return *this;
  }
  Type & set__mode_valid(
    const bool & _arg)
  {
    this->mode_valid = _arg;
    return *this;
  }
  Type & set__status_valid(
    const bool & _arg)
  {
    this->status_valid = _arg;
    return *this;
  }
  Type & set__position_valid(
    const bool & _arg)
  {
    this->position_valid = _arg;
    return *this;
  }
  Type & set__velocity_valid(
    const bool & _arg)
  {
    this->velocity_valid = _arg;
    return *this;
  }
  Type & set__current_valid(
    const bool & _arg)
  {
    this->current_valid = _arg;
    return *this;
  }
  Type & set__feedback_fresh(
    const bool & _arg)
  {
    this->feedback_fresh = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MODE_UNKNOWN =
    0u;
  static constexpr uint8_t MODE_POSITION =
    1u;
  static constexpr uint8_t MODE_VELOCITY =
    2u;
  static constexpr uint8_t MODE_CSP =
    3u;

  // pointer types
  using RawPtr =
    can_driver::msg::MotorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::msg::MotorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::msg::MotorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::msg::MotorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::msg::MotorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::msg::MotorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::msg::MotorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::msg::MotorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::msg::MotorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::msg::MotorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__msg__MotorState
    std::shared_ptr<can_driver::msg::MotorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__msg__MotorState
    std::shared_ptr<can_driver::msg::MotorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorState_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->fault != other.fault) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->joint_position != other.joint_position) {
      return false;
    }
    if (this->joint_velocity != other.joint_velocity) {
      return false;
    }
    if (this->mode_valid != other.mode_valid) {
      return false;
    }
    if (this->status_valid != other.status_valid) {
      return false;
    }
    if (this->position_valid != other.position_valid) {
      return false;
    }
    if (this->velocity_valid != other.velocity_valid) {
      return false;
    }
    if (this->current_valid != other.current_valid) {
      return false;
    }
    if (this->feedback_fresh != other.feedback_fresh) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorState_

// alias to use template instance with default allocator
using MotorState =
  can_driver::msg::MotorState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorState_<ContainerAllocator>::MODE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorState_<ContainerAllocator>::MODE_POSITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorState_<ContainerAllocator>::MODE_VELOCITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorState_<ContainerAllocator>::MODE_CSP;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace can_driver

#endif  // CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_
