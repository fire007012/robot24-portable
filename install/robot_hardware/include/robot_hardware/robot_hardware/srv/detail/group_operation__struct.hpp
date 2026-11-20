// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_hardware:srv/GroupOperation.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__SRV__DETAIL__GROUP_OPERATION__STRUCT_HPP_
#define ROBOT_HARDWARE__SRV__DETAIL__GROUP_OPERATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_hardware__srv__GroupOperation_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_hardware__srv__GroupOperation_Request __declspec(deprecated)
#endif

namespace robot_hardware
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GroupOperation_Request_
{
  using Type = GroupOperation_Request_<ContainerAllocator>;

  explicit GroupOperation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operation = "";
      this->resource = "";
    }
  }

  explicit GroupOperation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : operation(_alloc),
    resource(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operation = "";
      this->resource = "";
    }
  }

  // field types and members
  using _groups_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _groups_type groups;
  using _operation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operation_type operation;
  using _resource_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _resource_type resource;

  // setters for named parameter idiom
  Type & set__groups(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->groups = _arg;
    return *this;
  }
  Type & set__operation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operation = _arg;
    return *this;
  }
  Type & set__resource(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->resource = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_hardware::srv::GroupOperation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_hardware::srv::GroupOperation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_hardware::srv::GroupOperation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_hardware::srv::GroupOperation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_hardware::srv::GroupOperation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::srv::GroupOperation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_hardware::srv::GroupOperation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::srv::GroupOperation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_hardware::srv::GroupOperation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_hardware::srv::GroupOperation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_hardware__srv__GroupOperation_Request
    std::shared_ptr<robot_hardware::srv::GroupOperation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_hardware__srv__GroupOperation_Request
    std::shared_ptr<robot_hardware::srv::GroupOperation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroupOperation_Request_ & other) const
  {
    if (this->groups != other.groups) {
      return false;
    }
    if (this->operation != other.operation) {
      return false;
    }
    if (this->resource != other.resource) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroupOperation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroupOperation_Request_

// alias to use template instance with default allocator
using GroupOperation_Request =
  robot_hardware::srv::GroupOperation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_hardware


#ifndef _WIN32
# define DEPRECATED__robot_hardware__srv__GroupOperation_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_hardware__srv__GroupOperation_Response __declspec(deprecated)
#endif

namespace robot_hardware
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GroupOperation_Response_
{
  using Type = GroupOperation_Response_<ContainerAllocator>;

  explicit GroupOperation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->operation_id = "";
      this->message = "";
    }
  }

  explicit GroupOperation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : operation_id(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->operation_id = "";
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _operation_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operation_id_type operation_id;
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
  Type & set__operation_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operation_id = _arg;
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
    robot_hardware::srv::GroupOperation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_hardware::srv::GroupOperation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_hardware::srv::GroupOperation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_hardware::srv::GroupOperation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_hardware::srv::GroupOperation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::srv::GroupOperation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_hardware::srv::GroupOperation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_hardware::srv::GroupOperation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_hardware::srv::GroupOperation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_hardware::srv::GroupOperation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_hardware__srv__GroupOperation_Response
    std::shared_ptr<robot_hardware::srv::GroupOperation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_hardware__srv__GroupOperation_Response
    std::shared_ptr<robot_hardware::srv::GroupOperation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroupOperation_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->operation_id != other.operation_id) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroupOperation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroupOperation_Response_

// alias to use template instance with default allocator
using GroupOperation_Response =
  robot_hardware::srv::GroupOperation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_hardware

namespace robot_hardware
{

namespace srv
{

struct GroupOperation
{
  using Request = robot_hardware::srv::GroupOperation_Request;
  using Response = robot_hardware::srv::GroupOperation_Response;
};

}  // namespace srv

}  // namespace robot_hardware

#endif  // ROBOT_HARDWARE__SRV__DETAIL__GROUP_OPERATION__STRUCT_HPP_
