// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arm_control:action/ExecuteArmGoal.idl
// generated code does not contain a copyright notice

#ifndef ARM_CONTROL__ACTION__DETAIL__EXECUTE_ARM_GOAL__STRUCT_HPP_
#define ARM_CONTROL__ACTION__DETAIL__EXECUTE_ARM_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose_target'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_control__action__ExecuteArmGoal_Goal __attribute__((deprecated))
#else
# define DEPRECATED__arm_control__action__ExecuteArmGoal_Goal __declspec(deprecated)
#endif

namespace arm_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteArmGoal_Goal_
{
  using Type = ExecuteArmGoal_Goal_<ContainerAllocator>;

  explicit ExecuteArmGoal_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_target(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_type = 0;
      this->named_target = "";
    }
  }

  explicit ExecuteArmGoal_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : named_target(_alloc),
    pose_target(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_type = 0;
      this->named_target = "";
    }
  }

  // field types and members
  using _target_type_type =
    uint8_t;
  _target_type_type target_type;
  using _joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_names_type joint_names;
  using _joint_positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_positions_type joint_positions;
  using _named_target_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _named_target_type named_target;
  using _pose_target_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_target_type pose_target;

  // setters for named parameter idiom
  Type & set__target_type(
    const uint8_t & _arg)
  {
    this->target_type = _arg;
    return *this;
  }
  Type & set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_names = _arg;
    return *this;
  }
  Type & set__joint_positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_positions = _arg;
    return *this;
  }
  Type & set__named_target(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->named_target = _arg;
    return *this;
  }
  Type & set__pose_target(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose_target = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TARGET_JOINTS =
    1u;
  static constexpr uint8_t TARGET_NAMED =
    2u;
  static constexpr uint8_t TARGET_POSE =
    3u;

  // pointer types
  using RawPtr =
    arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_Goal
    std::shared_ptr<arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_Goal
    std::shared_ptr<arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteArmGoal_Goal_ & other) const
  {
    if (this->target_type != other.target_type) {
      return false;
    }
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->joint_positions != other.joint_positions) {
      return false;
    }
    if (this->named_target != other.named_target) {
      return false;
    }
    if (this->pose_target != other.pose_target) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteArmGoal_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteArmGoal_Goal_

// alias to use template instance with default allocator
using ExecuteArmGoal_Goal =
  arm_control::action::ExecuteArmGoal_Goal_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Goal_<ContainerAllocator>::TARGET_JOINTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Goal_<ContainerAllocator>::TARGET_NAMED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Goal_<ContainerAllocator>::TARGET_POSE;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace arm_control


#ifndef _WIN32
# define DEPRECATED__arm_control__action__ExecuteArmGoal_Result __attribute__((deprecated))
#else
# define DEPRECATED__arm_control__action__ExecuteArmGoal_Result __declspec(deprecated)
#endif

namespace arm_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteArmGoal_Result_
{
  using Type = ExecuteArmGoal_Result_<ContainerAllocator>;

  explicit ExecuteArmGoal_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_code = 0;
      this->message = "";
    }
  }

  explicit ExecuteArmGoal_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_code = 0;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_code_type =
    uint8_t;
  _error_code_type error_code;
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
  Type & set__error_code(
    const uint8_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ERROR_NONE =
    0u;
  static constexpr uint8_t ERROR_INVALID_GOAL =
    1u;
  static constexpr uint8_t ERROR_NOT_READY =
    2u;
  static constexpr uint8_t ERROR_TF_FAILED =
    3u;
  static constexpr uint8_t ERROR_PLANNING_FAILED =
    4u;
  static constexpr uint8_t ERROR_EXECUTION_FAILED =
    5u;
  static constexpr uint8_t ERROR_PREEMPTED =
    6u;

  // pointer types
  using RawPtr =
    arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_Result
    std::shared_ptr<arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_Result
    std::shared_ptr<arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteArmGoal_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteArmGoal_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteArmGoal_Result_

// alias to use template instance with default allocator
using ExecuteArmGoal_Result =
  arm_control::action::ExecuteArmGoal_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Result_<ContainerAllocator>::ERROR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Result_<ContainerAllocator>::ERROR_INVALID_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Result_<ContainerAllocator>::ERROR_NOT_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Result_<ContainerAllocator>::ERROR_TF_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Result_<ContainerAllocator>::ERROR_PLANNING_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Result_<ContainerAllocator>::ERROR_EXECUTION_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Result_<ContainerAllocator>::ERROR_PREEMPTED;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace arm_control


#ifndef _WIN32
# define DEPRECATED__arm_control__action__ExecuteArmGoal_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__arm_control__action__ExecuteArmGoal_Feedback __declspec(deprecated)
#endif

namespace arm_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteArmGoal_Feedback_
{
  using Type = ExecuteArmGoal_Feedback_<ContainerAllocator>;

  explicit ExecuteArmGoal_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->phase = 0;
      this->message = "";
    }
  }

  explicit ExecuteArmGoal_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->phase = 0;
      this->message = "";
    }
  }

  // field types and members
  using _phase_type =
    uint8_t;
  _phase_type phase;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__phase(
    const uint8_t & _arg)
  {
    this->phase = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PHASE_VALIDATING =
    1u;
  static constexpr uint8_t PHASE_WAITING_READY =
    2u;
  static constexpr uint8_t PHASE_PLANNING =
    3u;
  static constexpr uint8_t PHASE_EXECUTING =
    4u;
  static constexpr uint8_t PHASE_STOPPING =
    5u;

  // pointer types
  using RawPtr =
    arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_Feedback
    std::shared_ptr<arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_Feedback
    std::shared_ptr<arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteArmGoal_Feedback_ & other) const
  {
    if (this->phase != other.phase) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteArmGoal_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteArmGoal_Feedback_

// alias to use template instance with default allocator
using ExecuteArmGoal_Feedback =
  arm_control::action::ExecuteArmGoal_Feedback_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Feedback_<ContainerAllocator>::PHASE_VALIDATING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Feedback_<ContainerAllocator>::PHASE_WAITING_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Feedback_<ContainerAllocator>::PHASE_PLANNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Feedback_<ContainerAllocator>::PHASE_EXECUTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExecuteArmGoal_Feedback_<ContainerAllocator>::PHASE_STOPPING;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace arm_control


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "arm_control/action/detail/execute_arm_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_control__action__ExecuteArmGoal_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__arm_control__action__ExecuteArmGoal_SendGoal_Request __declspec(deprecated)
#endif

namespace arm_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteArmGoal_SendGoal_Request_
{
  using Type = ExecuteArmGoal_SendGoal_Request_<ContainerAllocator>;

  explicit ExecuteArmGoal_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ExecuteArmGoal_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const arm_control::action::ExecuteArmGoal_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_control::action::ExecuteArmGoal_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_control::action::ExecuteArmGoal_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_SendGoal_Request
    std::shared_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_SendGoal_Request
    std::shared_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteArmGoal_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteArmGoal_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteArmGoal_SendGoal_Request_

// alias to use template instance with default allocator
using ExecuteArmGoal_SendGoal_Request =
  arm_control::action::ExecuteArmGoal_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_control


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_control__action__ExecuteArmGoal_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__arm_control__action__ExecuteArmGoal_SendGoal_Response __declspec(deprecated)
#endif

namespace arm_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteArmGoal_SendGoal_Response_
{
  using Type = ExecuteArmGoal_SendGoal_Response_<ContainerAllocator>;

  explicit ExecuteArmGoal_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ExecuteArmGoal_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arm_control::action::ExecuteArmGoal_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_control::action::ExecuteArmGoal_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_SendGoal_Response
    std::shared_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_SendGoal_Response
    std::shared_ptr<arm_control::action::ExecuteArmGoal_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteArmGoal_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteArmGoal_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteArmGoal_SendGoal_Response_

// alias to use template instance with default allocator
using ExecuteArmGoal_SendGoal_Response =
  arm_control::action::ExecuteArmGoal_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_control

namespace arm_control
{

namespace action
{

struct ExecuteArmGoal_SendGoal
{
  using Request = arm_control::action::ExecuteArmGoal_SendGoal_Request;
  using Response = arm_control::action::ExecuteArmGoal_SendGoal_Response;
};

}  // namespace action

}  // namespace arm_control


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_control__action__ExecuteArmGoal_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__arm_control__action__ExecuteArmGoal_GetResult_Request __declspec(deprecated)
#endif

namespace arm_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteArmGoal_GetResult_Request_
{
  using Type = ExecuteArmGoal_GetResult_Request_<ContainerAllocator>;

  explicit ExecuteArmGoal_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ExecuteArmGoal_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arm_control::action::ExecuteArmGoal_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_control::action::ExecuteArmGoal_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_GetResult_Request
    std::shared_ptr<arm_control::action::ExecuteArmGoal_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_GetResult_Request
    std::shared_ptr<arm_control::action::ExecuteArmGoal_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteArmGoal_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteArmGoal_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteArmGoal_GetResult_Request_

// alias to use template instance with default allocator
using ExecuteArmGoal_GetResult_Request =
  arm_control::action::ExecuteArmGoal_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_control


// Include directives for member types
// Member 'result'
// already included above
// #include "arm_control/action/detail/execute_arm_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_control__action__ExecuteArmGoal_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__arm_control__action__ExecuteArmGoal_GetResult_Response __declspec(deprecated)
#endif

namespace arm_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteArmGoal_GetResult_Response_
{
  using Type = ExecuteArmGoal_GetResult_Response_<ContainerAllocator>;

  explicit ExecuteArmGoal_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ExecuteArmGoal_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const arm_control::action::ExecuteArmGoal_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_control::action::ExecuteArmGoal_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_control::action::ExecuteArmGoal_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_GetResult_Response
    std::shared_ptr<arm_control::action::ExecuteArmGoal_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_GetResult_Response
    std::shared_ptr<arm_control::action::ExecuteArmGoal_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteArmGoal_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteArmGoal_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteArmGoal_GetResult_Response_

// alias to use template instance with default allocator
using ExecuteArmGoal_GetResult_Response =
  arm_control::action::ExecuteArmGoal_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_control

namespace arm_control
{

namespace action
{

struct ExecuteArmGoal_GetResult
{
  using Request = arm_control::action::ExecuteArmGoal_GetResult_Request;
  using Response = arm_control::action::ExecuteArmGoal_GetResult_Response;
};

}  // namespace action

}  // namespace arm_control


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "arm_control/action/detail/execute_arm_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_control__action__ExecuteArmGoal_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__arm_control__action__ExecuteArmGoal_FeedbackMessage __declspec(deprecated)
#endif

namespace arm_control
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteArmGoal_FeedbackMessage_
{
  using Type = ExecuteArmGoal_FeedbackMessage_<ContainerAllocator>;

  explicit ExecuteArmGoal_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ExecuteArmGoal_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const arm_control::action::ExecuteArmGoal_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_control::action::ExecuteArmGoal_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_control::action::ExecuteArmGoal_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_control::action::ExecuteArmGoal_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_control::action::ExecuteArmGoal_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_control::action::ExecuteArmGoal_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_control::action::ExecuteArmGoal_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_FeedbackMessage
    std::shared_ptr<arm_control::action::ExecuteArmGoal_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_control__action__ExecuteArmGoal_FeedbackMessage
    std::shared_ptr<arm_control::action::ExecuteArmGoal_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteArmGoal_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteArmGoal_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteArmGoal_FeedbackMessage_

// alias to use template instance with default allocator
using ExecuteArmGoal_FeedbackMessage =
  arm_control::action::ExecuteArmGoal_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arm_control

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace arm_control
{

namespace action
{

struct ExecuteArmGoal
{
  /// The goal message defined in the action definition.
  using Goal = arm_control::action::ExecuteArmGoal_Goal;
  /// The result message defined in the action definition.
  using Result = arm_control::action::ExecuteArmGoal_Result;
  /// The feedback message defined in the action definition.
  using Feedback = arm_control::action::ExecuteArmGoal_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = arm_control::action::ExecuteArmGoal_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = arm_control::action::ExecuteArmGoal_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = arm_control::action::ExecuteArmGoal_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ExecuteArmGoal ExecuteArmGoal;

}  // namespace action

}  // namespace arm_control

#endif  // ARM_CONTROL__ACTION__DETAIL__EXECUTE_ARM_GOAL__STRUCT_HPP_
