// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from canopen_interfaces:srv/COPositionTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CANOPEN_INTERFACES__SRV__DETAIL__CO_POSITION_TRAJECTORY__STRUCT_HPP_
#define CANOPEN_INTERFACES__SRV__DETAIL__CO_POSITION_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__canopen_interfaces__srv__COPositionTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__canopen_interfaces__srv__COPositionTrajectory_Request __declspec(deprecated)
#endif

namespace canopen_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct COPositionTrajectory_Request_
{
  using Type = COPositionTrajectory_Request_<ContainerAllocator>;

  explicit COPositionTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->epoch = 0ull;
    }
  }

  explicit COPositionTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->epoch = 0ull;
    }
  }

  // field types and members
  using _epoch_type =
    uint64_t;
  _epoch_type epoch;
  using _positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _positions_type positions;
  using _times_from_start_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _times_from_start_type times_from_start;

  // setters for named parameter idiom
  Type & set__epoch(
    const uint64_t & _arg)
  {
    this->epoch = _arg;
    return *this;
  }
  Type & set__positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }
  Type & set__times_from_start(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->times_from_start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    canopen_interfaces::srv::COPositionTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const canopen_interfaces::srv::COPositionTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<canopen_interfaces::srv::COPositionTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<canopen_interfaces::srv::COPositionTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      canopen_interfaces::srv::COPositionTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<canopen_interfaces::srv::COPositionTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      canopen_interfaces::srv::COPositionTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<canopen_interfaces::srv::COPositionTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<canopen_interfaces::srv::COPositionTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<canopen_interfaces::srv::COPositionTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__canopen_interfaces__srv__COPositionTrajectory_Request
    std::shared_ptr<canopen_interfaces::srv::COPositionTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__canopen_interfaces__srv__COPositionTrajectory_Request
    std::shared_ptr<canopen_interfaces::srv::COPositionTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const COPositionTrajectory_Request_ & other) const
  {
    if (this->epoch != other.epoch) {
      return false;
    }
    if (this->positions != other.positions) {
      return false;
    }
    if (this->times_from_start != other.times_from_start) {
      return false;
    }
    return true;
  }
  bool operator!=(const COPositionTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct COPositionTrajectory_Request_

// alias to use template instance with default allocator
using COPositionTrajectory_Request =
  canopen_interfaces::srv::COPositionTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace canopen_interfaces


#ifndef _WIN32
# define DEPRECATED__canopen_interfaces__srv__COPositionTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__canopen_interfaces__srv__COPositionTrajectory_Response __declspec(deprecated)
#endif

namespace canopen_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct COPositionTrajectory_Response_
{
  using Type = COPositionTrajectory_Response_<ContainerAllocator>;

  explicit COPositionTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->epoch = 0ull;
      this->message = "";
    }
  }

  explicit COPositionTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->epoch = 0ull;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _epoch_type =
    uint64_t;
  _epoch_type epoch;
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
  Type & set__epoch(
    const uint64_t & _arg)
  {
    this->epoch = _arg;
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
    canopen_interfaces::srv::COPositionTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const canopen_interfaces::srv::COPositionTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<canopen_interfaces::srv::COPositionTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<canopen_interfaces::srv::COPositionTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      canopen_interfaces::srv::COPositionTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<canopen_interfaces::srv::COPositionTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      canopen_interfaces::srv::COPositionTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<canopen_interfaces::srv::COPositionTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<canopen_interfaces::srv::COPositionTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<canopen_interfaces::srv::COPositionTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__canopen_interfaces__srv__COPositionTrajectory_Response
    std::shared_ptr<canopen_interfaces::srv::COPositionTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__canopen_interfaces__srv__COPositionTrajectory_Response
    std::shared_ptr<canopen_interfaces::srv::COPositionTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const COPositionTrajectory_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->epoch != other.epoch) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const COPositionTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct COPositionTrajectory_Response_

// alias to use template instance with default allocator
using COPositionTrajectory_Response =
  canopen_interfaces::srv::COPositionTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace canopen_interfaces

namespace canopen_interfaces
{

namespace srv
{

struct COPositionTrajectory
{
  using Request = canopen_interfaces::srv::COPositionTrajectory_Request;
  using Response = canopen_interfaces::srv::COPositionTrajectory_Response;
};

}  // namespace srv

}  // namespace canopen_interfaces

#endif  // CANOPEN_INTERFACES__SRV__DETAIL__CO_POSITION_TRAJECTORY__STRUCT_HPP_
