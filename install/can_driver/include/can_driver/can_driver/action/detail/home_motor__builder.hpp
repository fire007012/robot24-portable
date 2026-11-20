// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from can_driver:action/HomeMotor.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__ACTION__DETAIL__HOME_MOTOR__BUILDER_HPP_
#define CAN_DRIVER__ACTION__DETAIL__HOME_MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "can_driver/action/detail/home_motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace can_driver
{

namespace action
{

namespace builder
{

class Init_HomeMotor_Goal_timeout
{
public:
  explicit Init_HomeMotor_Goal_timeout(::can_driver::action::HomeMotor_Goal & msg)
  : msg_(msg)
  {}
  ::can_driver::action::HomeMotor_Goal timeout(::can_driver::action::HomeMotor_Goal::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::action::HomeMotor_Goal msg_;
};

class Init_HomeMotor_Goal_search_positive
{
public:
  explicit Init_HomeMotor_Goal_search_positive(::can_driver::action::HomeMotor_Goal & msg)
  : msg_(msg)
  {}
  Init_HomeMotor_Goal_timeout search_positive(::can_driver::action::HomeMotor_Goal::_search_positive_type arg)
  {
    msg_.search_positive = std::move(arg);
    return Init_HomeMotor_Goal_timeout(msg_);
  }

private:
  ::can_driver::action::HomeMotor_Goal msg_;
};

class Init_HomeMotor_Goal_motor_id
{
public:
  Init_HomeMotor_Goal_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HomeMotor_Goal_search_positive motor_id(::can_driver::action::HomeMotor_Goal::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_HomeMotor_Goal_search_positive(msg_);
  }

private:
  ::can_driver::action::HomeMotor_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::action::HomeMotor_Goal>()
{
  return can_driver::action::builder::Init_HomeMotor_Goal_motor_id();
}

}  // namespace can_driver


namespace can_driver
{

namespace action
{

namespace builder
{

class Init_HomeMotor_Result_message
{
public:
  explicit Init_HomeMotor_Result_message(::can_driver::action::HomeMotor_Result & msg)
  : msg_(msg)
  {}
  ::can_driver::action::HomeMotor_Result message(::can_driver::action::HomeMotor_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::action::HomeMotor_Result msg_;
};

class Init_HomeMotor_Result_success
{
public:
  Init_HomeMotor_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HomeMotor_Result_message success(::can_driver::action::HomeMotor_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_HomeMotor_Result_message(msg_);
  }

private:
  ::can_driver::action::HomeMotor_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::action::HomeMotor_Result>()
{
  return can_driver::action::builder::Init_HomeMotor_Result_success();
}

}  // namespace can_driver


namespace can_driver
{

namespace action
{

namespace builder
{

class Init_HomeMotor_Feedback_current_position
{
public:
  explicit Init_HomeMotor_Feedback_current_position(::can_driver::action::HomeMotor_Feedback & msg)
  : msg_(msg)
  {}
  ::can_driver::action::HomeMotor_Feedback current_position(::can_driver::action::HomeMotor_Feedback::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::action::HomeMotor_Feedback msg_;
};

class Init_HomeMotor_Feedback_progress
{
public:
  Init_HomeMotor_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HomeMotor_Feedback_current_position progress(::can_driver::action::HomeMotor_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_HomeMotor_Feedback_current_position(msg_);
  }

private:
  ::can_driver::action::HomeMotor_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::action::HomeMotor_Feedback>()
{
  return can_driver::action::builder::Init_HomeMotor_Feedback_progress();
}

}  // namespace can_driver


namespace can_driver
{

namespace action
{

namespace builder
{

class Init_HomeMotor_SendGoal_Request_goal
{
public:
  explicit Init_HomeMotor_SendGoal_Request_goal(::can_driver::action::HomeMotor_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::can_driver::action::HomeMotor_SendGoal_Request goal(::can_driver::action::HomeMotor_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::action::HomeMotor_SendGoal_Request msg_;
};

class Init_HomeMotor_SendGoal_Request_goal_id
{
public:
  Init_HomeMotor_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HomeMotor_SendGoal_Request_goal goal_id(::can_driver::action::HomeMotor_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_HomeMotor_SendGoal_Request_goal(msg_);
  }

private:
  ::can_driver::action::HomeMotor_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::action::HomeMotor_SendGoal_Request>()
{
  return can_driver::action::builder::Init_HomeMotor_SendGoal_Request_goal_id();
}

}  // namespace can_driver


namespace can_driver
{

namespace action
{

namespace builder
{

class Init_HomeMotor_SendGoal_Response_stamp
{
public:
  explicit Init_HomeMotor_SendGoal_Response_stamp(::can_driver::action::HomeMotor_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::can_driver::action::HomeMotor_SendGoal_Response stamp(::can_driver::action::HomeMotor_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::action::HomeMotor_SendGoal_Response msg_;
};

class Init_HomeMotor_SendGoal_Response_accepted
{
public:
  Init_HomeMotor_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HomeMotor_SendGoal_Response_stamp accepted(::can_driver::action::HomeMotor_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_HomeMotor_SendGoal_Response_stamp(msg_);
  }

private:
  ::can_driver::action::HomeMotor_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::action::HomeMotor_SendGoal_Response>()
{
  return can_driver::action::builder::Init_HomeMotor_SendGoal_Response_accepted();
}

}  // namespace can_driver


namespace can_driver
{

namespace action
{

namespace builder
{

class Init_HomeMotor_GetResult_Request_goal_id
{
public:
  Init_HomeMotor_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::can_driver::action::HomeMotor_GetResult_Request goal_id(::can_driver::action::HomeMotor_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::action::HomeMotor_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::action::HomeMotor_GetResult_Request>()
{
  return can_driver::action::builder::Init_HomeMotor_GetResult_Request_goal_id();
}

}  // namespace can_driver


namespace can_driver
{

namespace action
{

namespace builder
{

class Init_HomeMotor_GetResult_Response_result
{
public:
  explicit Init_HomeMotor_GetResult_Response_result(::can_driver::action::HomeMotor_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::can_driver::action::HomeMotor_GetResult_Response result(::can_driver::action::HomeMotor_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::action::HomeMotor_GetResult_Response msg_;
};

class Init_HomeMotor_GetResult_Response_status
{
public:
  Init_HomeMotor_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HomeMotor_GetResult_Response_result status(::can_driver::action::HomeMotor_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_HomeMotor_GetResult_Response_result(msg_);
  }

private:
  ::can_driver::action::HomeMotor_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::action::HomeMotor_GetResult_Response>()
{
  return can_driver::action::builder::Init_HomeMotor_GetResult_Response_status();
}

}  // namespace can_driver


namespace can_driver
{

namespace action
{

namespace builder
{

class Init_HomeMotor_FeedbackMessage_feedback
{
public:
  explicit Init_HomeMotor_FeedbackMessage_feedback(::can_driver::action::HomeMotor_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::can_driver::action::HomeMotor_FeedbackMessage feedback(::can_driver::action::HomeMotor_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::can_driver::action::HomeMotor_FeedbackMessage msg_;
};

class Init_HomeMotor_FeedbackMessage_goal_id
{
public:
  Init_HomeMotor_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HomeMotor_FeedbackMessage_feedback goal_id(::can_driver::action::HomeMotor_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_HomeMotor_FeedbackMessage_feedback(msg_);
  }

private:
  ::can_driver::action::HomeMotor_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::can_driver::action::HomeMotor_FeedbackMessage>()
{
  return can_driver::action::builder::Init_HomeMotor_FeedbackMessage_goal_id();
}

}  // namespace can_driver

#endif  // CAN_DRIVER__ACTION__DETAIL__HOME_MOTOR__BUILDER_HPP_
