// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_hardware:srv/SetProfile.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__SRV__DETAIL__SET_PROFILE__STRUCT_HPP_
#define ROBOT_HARDWARE__SRV__DETAIL__SET_PROFILE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_hardware__srv__SetProfile_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_hardware__srv__SetProfile_Request __declspec(deprecated)
#endif

namespace robot_hardware
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetProfile_Request_
{
  using Type = SetProfile_Request_<ContainerAllocator>;

  explicit SetProfile_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->profile = "";
    }
  }

  explicit SetProfile_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : profile(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->profile = "";
    }
  }

  // field types and members
  using _profile_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _profile_type profile;

  // setters for named parameter idiom
  Type & set__profile(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->profile = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_hardware::srv::SetProfile_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_hardware::srv::SetProfile_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_hardware::srv::SetProfile_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_hardware::srv::SetProfile_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_hardware::srv::SetProfile_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::srv::SetProfile_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_hardware::srv::SetProfile_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::srv::SetProfile_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_hardware::srv::SetProfile_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_hardware::srv::SetProfile_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_hardware__srv__SetProfile_Request
    std::shared_ptr<robot_hardware::srv::SetProfile_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_hardware__srv__SetProfile_Request
    std::shared_ptr<robot_hardware::srv::SetProfile_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetProfile_Request_ & other) const
  {
    if (this->profile != other.profile) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetProfile_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetProfile_Request_

// alias to use template instance with default allocator
using SetProfile_Request =
  robot_hardware::srv::SetProfile_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_hardware


#ifndef _WIN32
# define DEPRECATED__robot_hardware__srv__SetProfile_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_hardware__srv__SetProfile_Response __declspec(deprecated)
#endif

namespace robot_hardware
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetProfile_Response_
{
  using Type = SetProfile_Response_<ContainerAllocator>;

  explicit SetProfile_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetProfile_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    robot_hardware::srv::SetProfile_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_hardware::srv::SetProfile_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_hardware::srv::SetProfile_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_hardware::srv::SetProfile_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_hardware::srv::SetProfile_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::srv::SetProfile_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_hardware::srv::SetProfile_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::srv::SetProfile_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_hardware::srv::SetProfile_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_hardware::srv::SetProfile_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_hardware__srv__SetProfile_Response
    std::shared_ptr<robot_hardware::srv::SetProfile_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_hardware__srv__SetProfile_Response
    std::shared_ptr<robot_hardware::srv::SetProfile_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetProfile_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetProfile_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetProfile_Response_

// alias to use template instance with default allocator
using SetProfile_Response =
  robot_hardware::srv::SetProfile_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_hardware

namespace robot_hardware
{

namespace srv
{

struct SetProfile
{
  using Request = robot_hardware::srv::SetProfile_Request;
  using Response = robot_hardware::srv::SetProfile_Response;
};

}  // namespace srv

}  // namespace robot_hardware

#endif  // ROBOT_HARDWARE__SRV__DETAIL__SET_PROFILE__STRUCT_HPP_
