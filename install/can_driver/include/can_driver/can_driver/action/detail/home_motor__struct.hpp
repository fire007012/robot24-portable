// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from can_driver:action/HomeMotor.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__ACTION__DETAIL__HOME_MOTOR__STRUCT_HPP_
#define CAN_DRIVER__ACTION__DETAIL__HOME_MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__can_driver__action__HomeMotor_Goal __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__action__HomeMotor_Goal __declspec(deprecated)
#endif

namespace can_driver
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HomeMotor_Goal_
{
  using Type = HomeMotor_Goal_<ContainerAllocator>;

  explicit HomeMotor_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->search_positive = false;
      this->timeout = 0.0;
    }
  }

  explicit HomeMotor_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->search_positive = false;
      this->timeout = 0.0;
    }
  }

  // field types and members
  using _motor_id_type =
    uint16_t;
  _motor_id_type motor_id;
  using _search_positive_type =
    bool;
  _search_positive_type search_positive;
  using _timeout_type =
    double;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint16_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__search_positive(
    const bool & _arg)
  {
    this->search_positive = _arg;
    return *this;
  }
  Type & set__timeout(
    const double & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    can_driver::action::HomeMotor_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::action::HomeMotor_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__action__HomeMotor_Goal
    std::shared_ptr<can_driver::action::HomeMotor_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__action__HomeMotor_Goal
    std::shared_ptr<can_driver::action::HomeMotor_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HomeMotor_Goal_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->search_positive != other.search_positive) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const HomeMotor_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HomeMotor_Goal_

// alias to use template instance with default allocator
using HomeMotor_Goal =
  can_driver::action::HomeMotor_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace can_driver


#ifndef _WIN32
# define DEPRECATED__can_driver__action__HomeMotor_Result __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__action__HomeMotor_Result __declspec(deprecated)
#endif

namespace can_driver
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HomeMotor_Result_
{
  using Type = HomeMotor_Result_<ContainerAllocator>;

  explicit HomeMotor_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit HomeMotor_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    can_driver::action::HomeMotor_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::action::HomeMotor_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__action__HomeMotor_Result
    std::shared_ptr<can_driver::action::HomeMotor_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__action__HomeMotor_Result
    std::shared_ptr<can_driver::action::HomeMotor_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HomeMotor_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const HomeMotor_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HomeMotor_Result_

// alias to use template instance with default allocator
using HomeMotor_Result =
  can_driver::action::HomeMotor_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace can_driver


#ifndef _WIN32
# define DEPRECATED__can_driver__action__HomeMotor_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__action__HomeMotor_Feedback __declspec(deprecated)
#endif

namespace can_driver
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HomeMotor_Feedback_
{
  using Type = HomeMotor_Feedback_<ContainerAllocator>;

  explicit HomeMotor_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0;
      this->current_position = 0.0;
    }
  }

  explicit HomeMotor_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0;
      this->current_position = 0.0;
    }
  }

  // field types and members
  using _progress_type =
    double;
  _progress_type progress;
  using _current_position_type =
    double;
  _current_position_type current_position;

  // setters for named parameter idiom
  Type & set__progress(
    const double & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__current_position(
    const double & _arg)
  {
    this->current_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    can_driver::action::HomeMotor_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::action::HomeMotor_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__action__HomeMotor_Feedback
    std::shared_ptr<can_driver::action::HomeMotor_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__action__HomeMotor_Feedback
    std::shared_ptr<can_driver::action::HomeMotor_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HomeMotor_Feedback_ & other) const
  {
    if (this->progress != other.progress) {
      return false;
    }
    if (this->current_position != other.current_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const HomeMotor_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HomeMotor_Feedback_

// alias to use template instance with default allocator
using HomeMotor_Feedback =
  can_driver::action::HomeMotor_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace can_driver


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "can_driver/action/detail/home_motor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__can_driver__action__HomeMotor_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__action__HomeMotor_SendGoal_Request __declspec(deprecated)
#endif

namespace can_driver
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HomeMotor_SendGoal_Request_
{
  using Type = HomeMotor_SendGoal_Request_<ContainerAllocator>;

  explicit HomeMotor_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit HomeMotor_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    can_driver::action::HomeMotor_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const can_driver::action::HomeMotor_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    can_driver::action::HomeMotor_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::action::HomeMotor_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__action__HomeMotor_SendGoal_Request
    std::shared_ptr<can_driver::action::HomeMotor_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__action__HomeMotor_SendGoal_Request
    std::shared_ptr<can_driver::action::HomeMotor_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HomeMotor_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const HomeMotor_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HomeMotor_SendGoal_Request_

// alias to use template instance with default allocator
using HomeMotor_SendGoal_Request =
  can_driver::action::HomeMotor_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace can_driver


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__can_driver__action__HomeMotor_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__action__HomeMotor_SendGoal_Response __declspec(deprecated)
#endif

namespace can_driver
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HomeMotor_SendGoal_Response_
{
  using Type = HomeMotor_SendGoal_Response_<ContainerAllocator>;

  explicit HomeMotor_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit HomeMotor_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    can_driver::action::HomeMotor_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::action::HomeMotor_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__action__HomeMotor_SendGoal_Response
    std::shared_ptr<can_driver::action::HomeMotor_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__action__HomeMotor_SendGoal_Response
    std::shared_ptr<can_driver::action::HomeMotor_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HomeMotor_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const HomeMotor_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HomeMotor_SendGoal_Response_

// alias to use template instance with default allocator
using HomeMotor_SendGoal_Response =
  can_driver::action::HomeMotor_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace can_driver

namespace can_driver
{

namespace action
{

struct HomeMotor_SendGoal
{
  using Request = can_driver::action::HomeMotor_SendGoal_Request;
  using Response = can_driver::action::HomeMotor_SendGoal_Response;
};

}  // namespace action

}  // namespace can_driver


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__can_driver__action__HomeMotor_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__action__HomeMotor_GetResult_Request __declspec(deprecated)
#endif

namespace can_driver
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HomeMotor_GetResult_Request_
{
  using Type = HomeMotor_GetResult_Request_<ContainerAllocator>;

  explicit HomeMotor_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit HomeMotor_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    can_driver::action::HomeMotor_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::action::HomeMotor_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__action__HomeMotor_GetResult_Request
    std::shared_ptr<can_driver::action::HomeMotor_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__action__HomeMotor_GetResult_Request
    std::shared_ptr<can_driver::action::HomeMotor_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HomeMotor_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const HomeMotor_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HomeMotor_GetResult_Request_

// alias to use template instance with default allocator
using HomeMotor_GetResult_Request =
  can_driver::action::HomeMotor_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace can_driver


// Include directives for member types
// Member 'result'
// already included above
// #include "can_driver/action/detail/home_motor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__can_driver__action__HomeMotor_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__action__HomeMotor_GetResult_Response __declspec(deprecated)
#endif

namespace can_driver
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HomeMotor_GetResult_Response_
{
  using Type = HomeMotor_GetResult_Response_<ContainerAllocator>;

  explicit HomeMotor_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit HomeMotor_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    can_driver::action::HomeMotor_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const can_driver::action::HomeMotor_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    can_driver::action::HomeMotor_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::action::HomeMotor_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__action__HomeMotor_GetResult_Response
    std::shared_ptr<can_driver::action::HomeMotor_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__action__HomeMotor_GetResult_Response
    std::shared_ptr<can_driver::action::HomeMotor_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HomeMotor_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const HomeMotor_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HomeMotor_GetResult_Response_

// alias to use template instance with default allocator
using HomeMotor_GetResult_Response =
  can_driver::action::HomeMotor_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace can_driver

namespace can_driver
{

namespace action
{

struct HomeMotor_GetResult
{
  using Request = can_driver::action::HomeMotor_GetResult_Request;
  using Response = can_driver::action::HomeMotor_GetResult_Response;
};

}  // namespace action

}  // namespace can_driver


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "can_driver/action/detail/home_motor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__can_driver__action__HomeMotor_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__can_driver__action__HomeMotor_FeedbackMessage __declspec(deprecated)
#endif

namespace can_driver
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct HomeMotor_FeedbackMessage_
{
  using Type = HomeMotor_FeedbackMessage_<ContainerAllocator>;

  explicit HomeMotor_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit HomeMotor_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    can_driver::action::HomeMotor_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const can_driver::action::HomeMotor_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    can_driver::action::HomeMotor_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_driver::action::HomeMotor_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_driver::action::HomeMotor_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_driver::action::HomeMotor_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_driver::action::HomeMotor_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_driver::action::HomeMotor_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_driver__action__HomeMotor_FeedbackMessage
    std::shared_ptr<can_driver::action::HomeMotor_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_driver__action__HomeMotor_FeedbackMessage
    std::shared_ptr<can_driver::action::HomeMotor_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HomeMotor_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const HomeMotor_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HomeMotor_FeedbackMessage_

// alias to use template instance with default allocator
using HomeMotor_FeedbackMessage =
  can_driver::action::HomeMotor_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace can_driver

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace can_driver
{

namespace action
{

struct HomeMotor
{
  /// The goal message defined in the action definition.
  using Goal = can_driver::action::HomeMotor_Goal;
  /// The result message defined in the action definition.
  using Result = can_driver::action::HomeMotor_Result;
  /// The feedback message defined in the action definition.
  using Feedback = can_driver::action::HomeMotor_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = can_driver::action::HomeMotor_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = can_driver::action::HomeMotor_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = can_driver::action::HomeMotor_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct HomeMotor HomeMotor;

}  // namespace action

}  // namespace can_driver

#endif  // CAN_DRIVER__ACTION__DETAIL__HOME_MOTOR__STRUCT_HPP_
