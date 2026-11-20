// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from can_driver:srv/ApplyLimits.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__APPLY_LIMITS__STRUCT_HPP_
#define CAN_DRIVER__SRV__DETAIL__APPLY_LIMITS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__can_driver__srv__ApplyLimits_Request __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__srv__ApplyLimits_Request __declspec(deprecated)
#endif

namespace can_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplyLimits_Request_
{
  using Type = ApplyLimits_Request_<ContainerAllocator>;

  explicit ApplyLimits_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->min_position_rad = 0.0;
      this->max_position_rad = 0.0;
      this->use_urdf_limits = false;
      this->apply_to_motor = false;
      this->require_current_inside_limits = false;
    }
  }

  explicit ApplyLimits_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->min_position_rad = 0.0;
      this->max_position_rad = 0.0;
      this->use_urdf_limits = false;
      this->apply_to_motor = false;
      this->require_current_inside_limits = false;
    }
  }

  // field types and members
  using _motor_id_type =
    uint16_t;
  _motor_id_type motor_id;
  using _min_position_rad_type =
    double;
  _min_position_rad_type min_position_rad;
  using _max_position_rad_type =
    double;
  _max_position_rad_type max_position_rad;
  using _use_urdf_limits_type =
    bool;
  _use_urdf_limits_type use_urdf_limits;
  using _apply_to_motor_type =
    bool;
  _apply_to_motor_type apply_to_motor;
  using _require_current_inside_limits_type =
    bool;
  _require_current_inside_limits_type require_current_inside_limits;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint16_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__min_position_rad(
    const double & _arg)
  {
    this->min_position_rad = _arg;
    return *this;
  }
  Type & set__max_position_rad(
    const double & _arg)
  {
    this->max_position_rad = _arg;
    return *this;
  }
  Type & set__use_urdf_limits(
    const bool & _arg)
  {
    this->use_urdf_limits = _arg;
    return *this;
  }
  Type & set__apply_to_motor(
    const bool & _arg)
  {
    this->apply_to_motor = _arg;
    return *this;
  }
  Type & set__require_current_inside_limits(
    const bool & _arg)
  {
    this->require_current_inside_limits = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    can_driver::srv::ApplyLimits_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::srv::ApplyLimits_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::srv::ApplyLimits_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::srv::ApplyLimits_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::ApplyLimits_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::ApplyLimits_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::ApplyLimits_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::ApplyLimits_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::srv::ApplyLimits_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::srv::ApplyLimits_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__srv__ApplyLimits_Request
    std::shared_ptr<can_driver::srv::ApplyLimits_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__srv__ApplyLimits_Request
    std::shared_ptr<can_driver::srv::ApplyLimits_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyLimits_Request_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->min_position_rad != other.min_position_rad) {
      return false;
    }
    if (this->max_position_rad != other.max_position_rad) {
      return false;
    }
    if (this->use_urdf_limits != other.use_urdf_limits) {
      return false;
    }
    if (this->apply_to_motor != other.apply_to_motor) {
      return false;
    }
    if (this->require_current_inside_limits != other.require_current_inside_limits) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyLimits_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyLimits_Request_

// alias to use template instance with default allocator
using ApplyLimits_Request =
  can_driver::srv::ApplyLimits_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace can_driver


#ifndef _WIN32
# define DEPRECATED__can_driver__srv__ApplyLimits_Response __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__srv__ApplyLimits_Response __declspec(deprecated)
#endif

namespace can_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplyLimits_Response_
{
  using Type = ApplyLimits_Response_<ContainerAllocator>;

  explicit ApplyLimits_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->active_zero_offset_rad = 0.0;
      this->applied_min_rad = 0.0;
      this->applied_max_rad = 0.0;
      this->current_position_rad = 0.0;
    }
  }

  explicit ApplyLimits_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->active_zero_offset_rad = 0.0;
      this->applied_min_rad = 0.0;
      this->applied_max_rad = 0.0;
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
  using _active_zero_offset_rad_type =
    double;
  _active_zero_offset_rad_type active_zero_offset_rad;
  using _applied_min_rad_type =
    double;
  _applied_min_rad_type applied_min_rad;
  using _applied_max_rad_type =
    double;
  _applied_max_rad_type applied_max_rad;
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
  Type & set__active_zero_offset_rad(
    const double & _arg)
  {
    this->active_zero_offset_rad = _arg;
    return *this;
  }
  Type & set__applied_min_rad(
    const double & _arg)
  {
    this->applied_min_rad = _arg;
    return *this;
  }
  Type & set__applied_max_rad(
    const double & _arg)
  {
    this->applied_max_rad = _arg;
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
    can_driver::srv::ApplyLimits_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::srv::ApplyLimits_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::srv::ApplyLimits_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::srv::ApplyLimits_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::ApplyLimits_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::ApplyLimits_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::srv::ApplyLimits_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::srv::ApplyLimits_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::srv::ApplyLimits_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::srv::ApplyLimits_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__srv__ApplyLimits_Response
    std::shared_ptr<can_driver::srv::ApplyLimits_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__srv__ApplyLimits_Response
    std::shared_ptr<can_driver::srv::ApplyLimits_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyLimits_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->active_zero_offset_rad != other.active_zero_offset_rad) {
      return false;
    }
    if (this->applied_min_rad != other.applied_min_rad) {
      return false;
    }
    if (this->applied_max_rad != other.applied_max_rad) {
      return false;
    }
    if (this->current_position_rad != other.current_position_rad) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyLimits_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyLimits_Response_

// alias to use template instance with default allocator
using ApplyLimits_Response =
  can_driver::srv::ApplyLimits_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace can_driver

namespace can_driver
{

namespace srv
{

struct ApplyLimits
{
  using Request = can_driver::srv::ApplyLimits_Request;
  using Response = can_driver::srv::ApplyLimits_Response;
};

}  // namespace srv

}  // namespace can_driver

#endif  // CAN_DRIVER__SRV__DETAIL__APPLY_LIMITS__STRUCT_HPP_
