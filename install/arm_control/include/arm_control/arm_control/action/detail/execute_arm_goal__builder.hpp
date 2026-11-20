// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arm_control:action/ExecuteArmGoal.idl
// generated code does not contain a copyright notice

#ifndef ARM_CONTROL__ACTION__DETAIL__EXECUTE_ARM_GOAL__BUILDER_HPP_
#define ARM_CONTROL__ACTION__DETAIL__EXECUTE_ARM_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arm_control/action/detail/execute_arm_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arm_control
{

namespace action
{

namespace builder
{

class Init_ExecuteArmGoal_Goal_pose_target
{
public:
  explicit Init_ExecuteArmGoal_Goal_pose_target(::arm_control::action::ExecuteArmGoal_Goal & msg)
  : msg_(msg)
  {}
  ::arm_control::action::ExecuteArmGoal_Goal pose_target(::arm_control::action::ExecuteArmGoal_Goal::_pose_target_type arg)
  {
    msg_.pose_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_Goal msg_;
};

class Init_ExecuteArmGoal_Goal_named_target
{
public:
  explicit Init_ExecuteArmGoal_Goal_named_target(::arm_control::action::ExecuteArmGoal_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteArmGoal_Goal_pose_target named_target(::arm_control::action::ExecuteArmGoal_Goal::_named_target_type arg)
  {
    msg_.named_target = std::move(arg);
    return Init_ExecuteArmGoal_Goal_pose_target(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_Goal msg_;
};

class Init_ExecuteArmGoal_Goal_joint_positions
{
public:
  explicit Init_ExecuteArmGoal_Goal_joint_positions(::arm_control::action::ExecuteArmGoal_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteArmGoal_Goal_named_target joint_positions(::arm_control::action::ExecuteArmGoal_Goal::_joint_positions_type arg)
  {
    msg_.joint_positions = std::move(arg);
    return Init_ExecuteArmGoal_Goal_named_target(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_Goal msg_;
};

class Init_ExecuteArmGoal_Goal_joint_names
{
public:
  explicit Init_ExecuteArmGoal_Goal_joint_names(::arm_control::action::ExecuteArmGoal_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteArmGoal_Goal_joint_positions joint_names(::arm_control::action::ExecuteArmGoal_Goal::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_ExecuteArmGoal_Goal_joint_positions(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_Goal msg_;
};

class Init_ExecuteArmGoal_Goal_target_type
{
public:
  Init_ExecuteArmGoal_Goal_target_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteArmGoal_Goal_joint_names target_type(::arm_control::action::ExecuteArmGoal_Goal::_target_type_type arg)
  {
    msg_.target_type = std::move(arg);
    return Init_ExecuteArmGoal_Goal_joint_names(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_control::action::ExecuteArmGoal_Goal>()
{
  return arm_control::action::builder::Init_ExecuteArmGoal_Goal_target_type();
}

}  // namespace arm_control


namespace arm_control
{

namespace action
{

namespace builder
{

class Init_ExecuteArmGoal_Result_message
{
public:
  explicit Init_ExecuteArmGoal_Result_message(::arm_control::action::ExecuteArmGoal_Result & msg)
  : msg_(msg)
  {}
  ::arm_control::action::ExecuteArmGoal_Result message(::arm_control::action::ExecuteArmGoal_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_Result msg_;
};

class Init_ExecuteArmGoal_Result_error_code
{
public:
  explicit Init_ExecuteArmGoal_Result_error_code(::arm_control::action::ExecuteArmGoal_Result & msg)
  : msg_(msg)
  {}
  Init_ExecuteArmGoal_Result_message error_code(::arm_control::action::ExecuteArmGoal_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_ExecuteArmGoal_Result_message(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_Result msg_;
};

class Init_ExecuteArmGoal_Result_success
{
public:
  Init_ExecuteArmGoal_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteArmGoal_Result_error_code success(::arm_control::action::ExecuteArmGoal_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteArmGoal_Result_error_code(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_control::action::ExecuteArmGoal_Result>()
{
  return arm_control::action::builder::Init_ExecuteArmGoal_Result_success();
}

}  // namespace arm_control


namespace arm_control
{

namespace action
{

namespace builder
{

class Init_ExecuteArmGoal_Feedback_message
{
public:
  explicit Init_ExecuteArmGoal_Feedback_message(::arm_control::action::ExecuteArmGoal_Feedback & msg)
  : msg_(msg)
  {}
  ::arm_control::action::ExecuteArmGoal_Feedback message(::arm_control::action::ExecuteArmGoal_Feedback::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_Feedback msg_;
};

class Init_ExecuteArmGoal_Feedback_phase
{
public:
  Init_ExecuteArmGoal_Feedback_phase()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteArmGoal_Feedback_message phase(::arm_control::action::ExecuteArmGoal_Feedback::_phase_type arg)
  {
    msg_.phase = std::move(arg);
    return Init_ExecuteArmGoal_Feedback_message(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_control::action::ExecuteArmGoal_Feedback>()
{
  return arm_control::action::builder::Init_ExecuteArmGoal_Feedback_phase();
}

}  // namespace arm_control


namespace arm_control
{

namespace action
{

namespace builder
{

class Init_ExecuteArmGoal_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteArmGoal_SendGoal_Request_goal(::arm_control::action::ExecuteArmGoal_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::arm_control::action::ExecuteArmGoal_SendGoal_Request goal(::arm_control::action::ExecuteArmGoal_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_SendGoal_Request msg_;
};

class Init_ExecuteArmGoal_SendGoal_Request_goal_id
{
public:
  Init_ExecuteArmGoal_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteArmGoal_SendGoal_Request_goal goal_id(::arm_control::action::ExecuteArmGoal_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteArmGoal_SendGoal_Request_goal(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_control::action::ExecuteArmGoal_SendGoal_Request>()
{
  return arm_control::action::builder::Init_ExecuteArmGoal_SendGoal_Request_goal_id();
}

}  // namespace arm_control


namespace arm_control
{

namespace action
{

namespace builder
{

class Init_ExecuteArmGoal_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteArmGoal_SendGoal_Response_stamp(::arm_control::action::ExecuteArmGoal_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::arm_control::action::ExecuteArmGoal_SendGoal_Response stamp(::arm_control::action::ExecuteArmGoal_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_SendGoal_Response msg_;
};

class Init_ExecuteArmGoal_SendGoal_Response_accepted
{
public:
  Init_ExecuteArmGoal_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteArmGoal_SendGoal_Response_stamp accepted(::arm_control::action::ExecuteArmGoal_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteArmGoal_SendGoal_Response_stamp(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_control::action::ExecuteArmGoal_SendGoal_Response>()
{
  return arm_control::action::builder::Init_ExecuteArmGoal_SendGoal_Response_accepted();
}

}  // namespace arm_control


namespace arm_control
{

namespace action
{

namespace builder
{

class Init_ExecuteArmGoal_GetResult_Request_goal_id
{
public:
  Init_ExecuteArmGoal_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arm_control::action::ExecuteArmGoal_GetResult_Request goal_id(::arm_control::action::ExecuteArmGoal_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_control::action::ExecuteArmGoal_GetResult_Request>()
{
  return arm_control::action::builder::Init_ExecuteArmGoal_GetResult_Request_goal_id();
}

}  // namespace arm_control


namespace arm_control
{

namespace action
{

namespace builder
{

class Init_ExecuteArmGoal_GetResult_Response_result
{
public:
  explicit Init_ExecuteArmGoal_GetResult_Response_result(::arm_control::action::ExecuteArmGoal_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::arm_control::action::ExecuteArmGoal_GetResult_Response result(::arm_control::action::ExecuteArmGoal_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_GetResult_Response msg_;
};

class Init_ExecuteArmGoal_GetResult_Response_status
{
public:
  Init_ExecuteArmGoal_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteArmGoal_GetResult_Response_result status(::arm_control::action::ExecuteArmGoal_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteArmGoal_GetResult_Response_result(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_control::action::ExecuteArmGoal_GetResult_Response>()
{
  return arm_control::action::builder::Init_ExecuteArmGoal_GetResult_Response_status();
}

}  // namespace arm_control


namespace arm_control
{

namespace action
{

namespace builder
{

class Init_ExecuteArmGoal_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteArmGoal_FeedbackMessage_feedback(::arm_control::action::ExecuteArmGoal_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::arm_control::action::ExecuteArmGoal_FeedbackMessage feedback(::arm_control::action::ExecuteArmGoal_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_FeedbackMessage msg_;
};

class Init_ExecuteArmGoal_FeedbackMessage_goal_id
{
public:
  Init_ExecuteArmGoal_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteArmGoal_FeedbackMessage_feedback goal_id(::arm_control::action::ExecuteArmGoal_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteArmGoal_FeedbackMessage_feedback(msg_);
  }

private:
  ::arm_control::action::ExecuteArmGoal_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_control::action::ExecuteArmGoal_FeedbackMessage>()
{
  return arm_control::action::builder::Init_ExecuteArmGoal_FeedbackMessage_goal_id();
}

}  // namespace arm_control

#endif  // ARM_CONTROL__ACTION__DETAIL__EXECUTE_ARM_GOAL__BUILDER_HPP_
