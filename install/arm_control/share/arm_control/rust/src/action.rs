
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to arm_control__action__ExecuteArmGoal_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_positions: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub named_target: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_target: geometry_msgs::msg::PoseStamped,

}

impl ExecuteArmGoal_Goal {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TARGET_JOINTS: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TARGET_NAMED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TARGET_POSE: u8 = 3;

}


impl Default for ExecuteArmGoal_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteArmGoal_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_Goal {
  type RmwMsg = super::action::rmw::ExecuteArmGoal_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_type: msg.target_type,
        joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        joint_positions: msg.joint_positions.as_slice().into(),
        named_target: msg.named_target.as_str().into(),
        pose_target: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.pose_target)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target_type: msg.target_type,
        joint_names: msg.joint_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        joint_positions: msg.joint_positions.as_slice().into(),
        named_target: msg.named_target.as_str().into(),
        pose_target: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose_target)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_type: msg.target_type,
      joint_names: msg.joint_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      joint_positions: msg.joint_positions.into(),
      named_target: msg.named_target.to_string(),
      pose_target: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.pose_target),
    }
  }
}


// Corresponds to arm_control__action__ExecuteArmGoal_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_code: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}

impl ExecuteArmGoal_Result {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_INVALID_GOAL: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_NOT_READY: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_TF_FAILED: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_PLANNING_FAILED: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_EXECUTION_FAILED: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_PREEMPTED: u8 = 6;

}


impl Default for ExecuteArmGoal_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteArmGoal_Result::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_Result {
  type RmwMsg = super::action::rmw::ExecuteArmGoal_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        error_code: msg.error_code,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      error_code: msg.error_code,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      error_code: msg.error_code,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to arm_control__action__ExecuteArmGoal_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub phase: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}

impl ExecuteArmGoal_Feedback {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PHASE_VALIDATING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PHASE_WAITING_READY: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PHASE_PLANNING: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PHASE_EXECUTING: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PHASE_STOPPING: u8 = 5;

}


impl Default for ExecuteArmGoal_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteArmGoal_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_Feedback {
  type RmwMsg = super::action::rmw::ExecuteArmGoal_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        phase: msg.phase,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      phase: msg.phase,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      phase: msg.phase,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to arm_control__action__ExecuteArmGoal_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::ExecuteArmGoal_Feedback,

}



impl Default for ExecuteArmGoal_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteArmGoal_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_FeedbackMessage {
  type RmwMsg = super::action::rmw::ExecuteArmGoal_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::ExecuteArmGoal_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::ExecuteArmGoal_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::ExecuteArmGoal_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to arm_control__action__ExecuteArmGoal_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::ExecuteArmGoal_Goal,

}



impl Default for ExecuteArmGoal_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteArmGoal_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_SendGoal_Request {
  type RmwMsg = super::action::rmw::ExecuteArmGoal_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::ExecuteArmGoal_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::ExecuteArmGoal_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::ExecuteArmGoal_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to arm_control__action__ExecuteArmGoal_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for ExecuteArmGoal_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteArmGoal_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_SendGoal_Response {
  type RmwMsg = super::action::rmw::ExecuteArmGoal_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to arm_control__action__ExecuteArmGoal_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for ExecuteArmGoal_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteArmGoal_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_GetResult_Request {
  type RmwMsg = super::action::rmw::ExecuteArmGoal_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to arm_control__action__ExecuteArmGoal_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::ExecuteArmGoal_Result,

}



impl Default for ExecuteArmGoal_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteArmGoal_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_GetResult_Response {
  type RmwMsg = super::action::rmw::ExecuteArmGoal_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::ExecuteArmGoal_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::ExecuteArmGoal_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::ExecuteArmGoal_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "arm_control__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arm_control__action__ExecuteArmGoal_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to arm_control__action__ExecuteArmGoal_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteArmGoal_SendGoal;

impl rosidl_runtime_rs::Service for ExecuteArmGoal_SendGoal {
    type Request = ExecuteArmGoal_SendGoal_Request;
    type Response = ExecuteArmGoal_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arm_control__action__ExecuteArmGoal_SendGoal() }
    }
}




#[link(name = "arm_control__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arm_control__action__ExecuteArmGoal_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to arm_control__action__ExecuteArmGoal_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteArmGoal_GetResult;

impl rosidl_runtime_rs::Service for ExecuteArmGoal_GetResult {
    type Request = ExecuteArmGoal_GetResult_Request;
    type Response = ExecuteArmGoal_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arm_control__action__ExecuteArmGoal_GetResult() }
    }
}






#[link(name = "arm_control__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__arm_control__action__ExecuteArmGoal() -> *const std::ffi::c_void;
}

// Corresponds to arm_control__action__ExecuteArmGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteArmGoal;

impl rosidl_runtime_rs::Action for ExecuteArmGoal {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = ExecuteArmGoal_Goal;

  /// The result message defined in the action definition.
  type Result = ExecuteArmGoal_Result;

  /// The feedback message defined in the action definition.
  type Feedback = ExecuteArmGoal_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::ExecuteArmGoal_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::ExecuteArmGoal_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::ExecuteArmGoal_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__arm_control__action__ExecuteArmGoal() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::ExecuteArmGoal_Goal,
  ) -> super::action::rmw::ExecuteArmGoal_SendGoal_Request {
   super::action::rmw::ExecuteArmGoal_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::ExecuteArmGoal_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::ExecuteArmGoal_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::ExecuteArmGoal_SendGoal_Response {
   super::action::rmw::ExecuteArmGoal_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::ExecuteArmGoal_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::ExecuteArmGoal_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::ExecuteArmGoal_Feedback,
  ) -> super::action::rmw::ExecuteArmGoal_FeedbackMessage {
    let mut message = super::action::rmw::ExecuteArmGoal_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::ExecuteArmGoal_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::ExecuteArmGoal_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::ExecuteArmGoal_GetResult_Request {
   super::action::rmw::ExecuteArmGoal_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::ExecuteArmGoal_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::ExecuteArmGoal_Result,
  ) -> super::action::rmw::ExecuteArmGoal_GetResult_Response {
   super::action::rmw::ExecuteArmGoal_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::ExecuteArmGoal_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::ExecuteArmGoal_Result,
  ) {
    (response.status, response.result)
  }
}


