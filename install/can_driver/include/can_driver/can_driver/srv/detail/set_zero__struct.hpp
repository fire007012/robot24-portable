// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from can_driver:srv/SetZero.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__SET_ZERO__STRUCT_HPP_
#define CAN_DRIVER__SRV__DETAIL__SET_ZERO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__can_driver__srv__SetZero_Request __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__srv__SetZero_Request __declspec(deprecated)
#endif

namespace can_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetZero_Request_
{
  using Type = SetZero_Request_<ContainerAllocator>;

  explicit SetZero_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->zero_offset_rad = 0.0;
      this->use_current_position_as_zero = false;
      this->apply_to_motor = false;
    }
  }

  explicit SetZero_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->zero_offset_rad = 0.0;
      this->use_current_position_as_zero = false;
      this->apply_to_motor = false;
    }
  }

  // field types and members
  using _motor_id_type =
    uint16_t;
  _motor_id_type motor_id;
  using _zero_offset_rad_type =
    double;
  _zero_offset_rad_type zero_offset_rad;
  using _use_current_position_as_zero_type =
    bool;
  _use_current_position_as_zero_type use_current_position_as_zero;
  using _apply_to_motor_type =
    bool;
  _apply_to_motor_type apply_to_motor;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint16_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__zero_offset_rad(
    const double & _arg)
  {
    this->zero_offset_rad = _arg;
    return *this;
  }
  Type & set__use_current_position_as_zero(
    const bool & _arg)
  {
    this->use_current_position_as_zero = _arg;
    return *this;
  }
  Type & set__apply_to_motor(
    const bool & _arg)
  {
    this->apply_to_motor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    can_driver::srv::SetZero_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::srv::SetZero_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::srv::SetZero_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::srv::SetZero_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::SetZero_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::SetZero_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::SetZero_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::SetZero_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::srv::SetZero_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::srv::SetZero_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__srv__SetZero_Request
    std::shared_ptr<can_driver::srv::SetZero_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__srv__SetZero_Request
    std::shared_ptr<can_driver::srv::SetZero_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetZero_Request_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->zero_offset_rad != other.zero_offset_rad) {
      return false;
    }
    if (this->use_current_position_as_zero != other.use_current_position_as_zero) {
      return false;
    }
    if (this->apply_to_motor != other.apply_to_motor) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetZero_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetZero_Request_

// alias to use template instance with default allocator
using SetZero_Request =
  can_driver::srv::SetZero_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace can_driver


#ifndef _WIN32
# define DEPRECATED__can_driver__srv__SetZero_Response __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__srv__SetZero_Response __declspec(deprecated)
#endif

namespace can_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetZero_Response_
{
  using Type = SetZero_Response_<ContainerAllocator>;

  explicit SetZero_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->previous_zero_offset_rad = 0.0;
      this->applied_zero_offset_rad = 0.0;
      this->current_position_rad = 0.0;
    }
  }

  explicit SetZero_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->previous_zero_offset_rad = 0.0;
      this->applied_zero_offset_rad = 0.0;
      this->current_position_rad = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _previous_zero_offset_rad_type =
    double;
  _previous_zero_offset_rad_type previous_zero_offset_rad;
  using _applied_zero_offset_rad_type =
    double;
  _applied_zero_offset_rad_type applied_zero_offset_rad;
  using _current_position_rad_type =
    double;
  _current_position_rad_type current_position_rad;

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
  Type & set__previous_zero_offset_rad(
    const double & _arg)
  {
    this->previous_zero_offset_rad = _arg;
    return *this;
  }
  Type & set__applied_zero_offset_rad(
    const double & _arg)
  {
    this->applied_zero_offset_rad = _arg;
    return *this;
  }
  Type & set__current_position_rad(
    const double & _arg)
  {
    this->current_position_rad = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    can_driver::srv::SetZero_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::srv::SetZero_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::srv::SetZero_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::srv::SetZero_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::SetZero_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::SetZero_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::SetZero_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::SetZero_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::srv::SetZero_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::srv::SetZero_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__srv__SetZero_Response
    std::shared_ptr<can_driver::srv::SetZero_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__srv__SetZero_Response
    std::shared_ptr<can_driver::srv::SetZero_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetZero_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->previous_zero_offset_rad != other.previous_zero_offset_rad) {
      return false;
    }
    if (this->applied_zero_offset_rad != other.applied_zero_offset_rad) {
      return false;
    }
    if (this->current_position_rad != other.current_position_rad) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetZero_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetZero_Response_

// alias to use template instance with default allocator
using SetZero_Response =
  can_driver::srv::SetZero_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace can_driver

namespace can_driver
{

namespace srv
{

struct SetZero
{
  using Request = can_driver::srv::SetZero_Request;
  using Response = can_driver::srv::SetZero_Response;
};

}  // namespace srv

}  // namespace can_driver

#endif  // CAN_DRIVER__SRV__DETAIL__SET_ZERO__STRUCT_HPP_
