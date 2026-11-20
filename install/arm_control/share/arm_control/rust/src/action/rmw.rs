
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "arm_control__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_Goal() -> *const std::ffi::c_void;
}

#[link(name = "arm_control__rosidl_generator_c")]
extern "C" {
    fn arm_control__action__ExecuteArmGoal_Goal__init(msg: *mut ExecuteArmGoal_Goal) -> bool;
    fn arm_control__action__ExecuteArmGoal_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_Goal>, size: usize) -> bool;
    fn arm_control__action__ExecuteArmGoal_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_Goal>);
    fn arm_control__action__ExecuteArmGoal_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmGoal_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_Goal>) -> bool;
}

// Corresponds to arm_control__action__ExecuteArmGoal_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_positions: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub named_target: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_target: geometry_msgs::msg::rmw::PoseStamped,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_control__action__ExecuteArmGoal_Goal__init(&mut msg as *mut _) {
        panic!("Call to arm_control__action__ExecuteArmGoal_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmGoal_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmGoal_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "arm_control/action/ExecuteArmGoal_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_Goal() }
  }
}


#[link(name = "arm_control__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_Result() -> *const std::ffi::c_void;
}

#[link(name = "arm_control__rosidl_generator_c")]
extern "C" {
    fn arm_control__action__ExecuteArmGoal_Result__init(msg: *mut ExecuteArmGoal_Result) -> bool;
    fn arm_control__action__ExecuteArmGoal_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_Result>, size: usize) -> bool;
    fn arm_control__action__ExecuteArmGoal_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_Result>);
    fn arm_control__action__ExecuteArmGoal_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmGoal_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_Result>) -> bool;
}

// Corresponds to arm_control__action__ExecuteArmGoal_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    pub message: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_control__action__ExecuteArmGoal_Result__init(&mut msg as *mut _) {
        panic!("Call to arm_control__action__ExecuteArmGoal_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmGoal_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmGoal_Result where Self: Sized {
  const TYPE_NAME: &'static str = "arm_control/action/ExecuteArmGoal_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_Result() }
  }
}


#[link(name = "arm_control__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "arm_control__rosidl_generator_c")]
extern "C" {
    fn arm_control__action__ExecuteArmGoal_Feedback__init(msg: *mut ExecuteArmGoal_Feedback) -> bool;
    fn arm_control__action__ExecuteArmGoal_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_Feedback>, size: usize) -> bool;
    fn arm_control__action__ExecuteArmGoal_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_Feedback>);
    fn arm_control__action__ExecuteArmGoal_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmGoal_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_Feedback>) -> bool;
}

// Corresponds to arm_control__action__ExecuteArmGoal_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub phase: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_control__action__ExecuteArmGoal_Feedback__init(&mut msg as *mut _) {
        panic!("Call to arm_control__action__ExecuteArmGoal_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmGoal_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmGoal_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "arm_control/action/ExecuteArmGoal_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_Feedback() }
  }
}


#[link(name = "arm_control__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "arm_control__rosidl_generator_c")]
extern "C" {
    fn arm_control__action__ExecuteArmGoal_FeedbackMessage__init(msg: *mut ExecuteArmGoal_FeedbackMessage) -> bool;
    fn arm_control__action__ExecuteArmGoal_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_FeedbackMessage>, size: usize) -> bool;
    fn arm_control__action__ExecuteArmGoal_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_FeedbackMessage>);
    fn arm_control__action__ExecuteArmGoal_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmGoal_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_FeedbackMessage>) -> bool;
}

// Corresponds to arm_control__action__ExecuteArmGoal_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ExecuteArmGoal_Feedback,

}



impl Default for ExecuteArmGoal_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_control__action__ExecuteArmGoal_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to arm_control__action__ExecuteArmGoal_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmGoal_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmGoal_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "arm_control/action/ExecuteArmGoal_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_FeedbackMessage() }
  }
}




#[link(name = "arm_control__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "arm_control__rosidl_generator_c")]
extern "C" {
    fn arm_control__action__ExecuteArmGoal_SendGoal_Request__init(msg: *mut ExecuteArmGoal_SendGoal_Request) -> bool;
    fn arm_control__action__ExecuteArmGoal_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_SendGoal_Request>, size: usize) -> bool;
    fn arm_control__action__ExecuteArmGoal_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_SendGoal_Request>);
    fn arm_control__action__ExecuteArmGoal_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmGoal_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_SendGoal_Request>) -> bool;
}

// Corresponds to arm_control__action__ExecuteArmGoal_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ExecuteArmGoal_Goal,

}



impl Default for ExecuteArmGoal_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_control__action__ExecuteArmGoal_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to arm_control__action__ExecuteArmGoal_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmGoal_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmGoal_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arm_control/action/ExecuteArmGoal_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_SendGoal_Request() }
  }
}


#[link(name = "arm_control__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "arm_control__rosidl_generator_c")]
extern "C" {
    fn arm_control__action__ExecuteArmGoal_SendGoal_Response__init(msg: *mut ExecuteArmGoal_SendGoal_Response) -> bool;
    fn arm_control__action__ExecuteArmGoal_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_SendGoal_Response>, size: usize) -> bool;
    fn arm_control__action__ExecuteArmGoal_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_SendGoal_Response>);
    fn arm_control__action__ExecuteArmGoal_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmGoal_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_SendGoal_Response>) -> bool;
}

// Corresponds to arm_control__action__ExecuteArmGoal_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ExecuteArmGoal_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_control__action__ExecuteArmGoal_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to arm_control__action__ExecuteArmGoal_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmGoal_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmGoal_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arm_control/action/ExecuteArmGoal_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_SendGoal_Response() }
  }
}


#[link(name = "arm_control__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "arm_control__rosidl_generator_c")]
extern "C" {
    fn arm_control__action__ExecuteArmGoal_GetResult_Request__init(msg: *mut ExecuteArmGoal_GetResult_Request) -> bool;
    fn arm_control__action__ExecuteArmGoal_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_GetResult_Request>, size: usize) -> bool;
    fn arm_control__action__ExecuteArmGoal_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_GetResult_Request>);
    fn arm_control__action__ExecuteArmGoal_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmGoal_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_GetResult_Request>) -> bool;
}

// Corresponds to arm_control__action__ExecuteArmGoal_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ExecuteArmGoal_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_control__action__ExecuteArmGoal_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to arm_control__action__ExecuteArmGoal_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmGoal_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmGoal_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arm_control/action/ExecuteArmGoal_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_GetResult_Request() }
  }
}


#[link(name = "arm_control__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "arm_control__rosidl_generator_c")]
extern "C" {
    fn arm_control__action__ExecuteArmGoal_GetResult_Response__init(msg: *mut ExecuteArmGoal_GetResult_Response) -> bool;
    fn arm_control__action__ExecuteArmGoal_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_GetResult_Response>, size: usize) -> bool;
    fn arm_control__action__ExecuteArmGoal_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_GetResult_Response>);
    fn arm_control__action__ExecuteArmGoal_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteArmGoal_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteArmGoal_GetResult_Response>) -> bool;
}

// Corresponds to arm_control__action__ExecuteArmGoal_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteArmGoal_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ExecuteArmGoal_Result,

}



impl Default for ExecuteArmGoal_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_control__action__ExecuteArmGoal_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to arm_control__action__ExecuteArmGoal_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteArmGoal_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_control__action__ExecuteArmGoal_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteArmGoal_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteArmGoal_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arm_control/action/ExecuteArmGoal_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_control__action__ExecuteArmGoal_GetResult_Response() }
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


