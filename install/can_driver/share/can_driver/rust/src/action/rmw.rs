
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_Goal() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__MoveMotor_Goal__init(msg: *mut MoveMotor_Goal) -> bool;
    fn can_driver__action__MoveMotor_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_Goal>, size: usize) -> bool;
    fn can_driver__action__MoveMotor_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_Goal>);
    fn can_driver__action__MoveMotor_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveMotor_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_Goal>) -> bool;
}

// Corresponds to can_driver__action__MoveMotor_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveMotor_Goal {
    /// 目标电机 ID
    pub motor_id: u16,

    /// 目标位置（控制层单位）
    pub target_position: f64,

    /// 目标速度（控制层单位）
    pub target_velocity: f64,

    /// 最大执行时长（秒）
    pub max_duration: f64,

}



impl Default for MoveMotor_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__MoveMotor_Goal__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__MoveMotor_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveMotor_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveMotor_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveMotor_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/MoveMotor_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_Goal() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_Result() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__MoveMotor_Result__init(msg: *mut MoveMotor_Result) -> bool;
    fn can_driver__action__MoveMotor_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_Result>, size: usize) -> bool;
    fn can_driver__action__MoveMotor_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_Result>);
    fn can_driver__action__MoveMotor_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveMotor_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_Result>) -> bool;
}

// Corresponds to can_driver__action__MoveMotor_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveMotor_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// 失败原因
    pub message: rosidl_runtime_rs::String,

}



impl Default for MoveMotor_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__MoveMotor_Result__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__MoveMotor_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveMotor_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveMotor_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveMotor_Result where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/MoveMotor_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_Result() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__MoveMotor_Feedback__init(msg: *mut MoveMotor_Feedback) -> bool;
    fn can_driver__action__MoveMotor_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_Feedback>, size: usize) -> bool;
    fn can_driver__action__MoveMotor_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_Feedback>);
    fn can_driver__action__MoveMotor_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveMotor_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_Feedback>) -> bool;
}

// Corresponds to can_driver__action__MoveMotor_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveMotor_Feedback {
    /// 当前位置信息
    pub current_position: f64,

    /// 当前速度信息
    pub current_velocity: f64,

    /// 已运行时长（秒）
    pub elapsed_time: f64,

}



impl Default for MoveMotor_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__MoveMotor_Feedback__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__MoveMotor_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveMotor_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveMotor_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveMotor_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/MoveMotor_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_Feedback() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__MoveMotor_FeedbackMessage__init(msg: *mut MoveMotor_FeedbackMessage) -> bool;
    fn can_driver__action__MoveMotor_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_FeedbackMessage>, size: usize) -> bool;
    fn can_driver__action__MoveMotor_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_FeedbackMessage>);
    fn can_driver__action__MoveMotor_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveMotor_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_FeedbackMessage>) -> bool;
}

// Corresponds to can_driver__action__MoveMotor_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveMotor_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::MoveMotor_Feedback,

}



impl Default for MoveMotor_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__MoveMotor_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__MoveMotor_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveMotor_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveMotor_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveMotor_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/MoveMotor_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_FeedbackMessage() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_Goal() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__HomeMotor_Goal__init(msg: *mut HomeMotor_Goal) -> bool;
    fn can_driver__action__HomeMotor_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_Goal>, size: usize) -> bool;
    fn can_driver__action__HomeMotor_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_Goal>);
    fn can_driver__action__HomeMotor_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HomeMotor_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_Goal>) -> bool;
}

// Corresponds to can_driver__action__HomeMotor_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomeMotor_Goal {
    /// 目标电机 ID
    pub motor_id: u16,

    /// true=正向找零，false=反向找零
    pub search_positive: bool,

    /// 找零超时（秒）
    pub timeout: f64,

}



impl Default for HomeMotor_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__HomeMotor_Goal__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__HomeMotor_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HomeMotor_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HomeMotor_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HomeMotor_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/HomeMotor_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_Goal() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_Result() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__HomeMotor_Result__init(msg: *mut HomeMotor_Result) -> bool;
    fn can_driver__action__HomeMotor_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_Result>, size: usize) -> bool;
    fn can_driver__action__HomeMotor_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_Result>);
    fn can_driver__action__HomeMotor_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HomeMotor_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_Result>) -> bool;
}

// Corresponds to can_driver__action__HomeMotor_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomeMotor_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// 失败原因
    pub message: rosidl_runtime_rs::String,

}



impl Default for HomeMotor_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__HomeMotor_Result__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__HomeMotor_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HomeMotor_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HomeMotor_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HomeMotor_Result where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/HomeMotor_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_Result() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__HomeMotor_Feedback__init(msg: *mut HomeMotor_Feedback) -> bool;
    fn can_driver__action__HomeMotor_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_Feedback>, size: usize) -> bool;
    fn can_driver__action__HomeMotor_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_Feedback>);
    fn can_driver__action__HomeMotor_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HomeMotor_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_Feedback>) -> bool;
}

// Corresponds to can_driver__action__HomeMotor_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomeMotor_Feedback {
    /// 0.0~1.0
    pub progress: f64,

    /// 当前位置信息
    pub current_position: f64,

}



impl Default for HomeMotor_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__HomeMotor_Feedback__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__HomeMotor_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HomeMotor_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HomeMotor_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HomeMotor_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/HomeMotor_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_Feedback() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__HomeMotor_FeedbackMessage__init(msg: *mut HomeMotor_FeedbackMessage) -> bool;
    fn can_driver__action__HomeMotor_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_FeedbackMessage>, size: usize) -> bool;
    fn can_driver__action__HomeMotor_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_FeedbackMessage>);
    fn can_driver__action__HomeMotor_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HomeMotor_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_FeedbackMessage>) -> bool;
}

// Corresponds to can_driver__action__HomeMotor_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomeMotor_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::HomeMotor_Feedback,

}



impl Default for HomeMotor_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__HomeMotor_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__HomeMotor_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HomeMotor_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HomeMotor_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HomeMotor_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/HomeMotor_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_FeedbackMessage() }
  }
}




#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__MoveMotor_SendGoal_Request__init(msg: *mut MoveMotor_SendGoal_Request) -> bool;
    fn can_driver__action__MoveMotor_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_SendGoal_Request>, size: usize) -> bool;
    fn can_driver__action__MoveMotor_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_SendGoal_Request>);
    fn can_driver__action__MoveMotor_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveMotor_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_SendGoal_Request>) -> bool;
}

// Corresponds to can_driver__action__MoveMotor_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveMotor_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::MoveMotor_Goal,

}



impl Default for MoveMotor_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__MoveMotor_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__MoveMotor_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveMotor_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveMotor_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveMotor_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/MoveMotor_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_SendGoal_Request() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__MoveMotor_SendGoal_Response__init(msg: *mut MoveMotor_SendGoal_Response) -> bool;
    fn can_driver__action__MoveMotor_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_SendGoal_Response>, size: usize) -> bool;
    fn can_driver__action__MoveMotor_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_SendGoal_Response>);
    fn can_driver__action__MoveMotor_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveMotor_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_SendGoal_Response>) -> bool;
}

// Corresponds to can_driver__action__MoveMotor_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveMotor_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MoveMotor_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__MoveMotor_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__MoveMotor_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveMotor_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveMotor_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveMotor_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/MoveMotor_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_SendGoal_Response() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__MoveMotor_GetResult_Request__init(msg: *mut MoveMotor_GetResult_Request) -> bool;
    fn can_driver__action__MoveMotor_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_GetResult_Request>, size: usize) -> bool;
    fn can_driver__action__MoveMotor_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_GetResult_Request>);
    fn can_driver__action__MoveMotor_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveMotor_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_GetResult_Request>) -> bool;
}

// Corresponds to can_driver__action__MoveMotor_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveMotor_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for MoveMotor_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__MoveMotor_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__MoveMotor_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveMotor_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveMotor_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveMotor_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/MoveMotor_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_GetResult_Request() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__MoveMotor_GetResult_Response__init(msg: *mut MoveMotor_GetResult_Response) -> bool;
    fn can_driver__action__MoveMotor_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_GetResult_Response>, size: usize) -> bool;
    fn can_driver__action__MoveMotor_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_GetResult_Response>);
    fn can_driver__action__MoveMotor_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveMotor_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveMotor_GetResult_Response>) -> bool;
}

// Corresponds to can_driver__action__MoveMotor_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveMotor_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::MoveMotor_Result,

}



impl Default for MoveMotor_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__MoveMotor_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__MoveMotor_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveMotor_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__MoveMotor_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveMotor_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveMotor_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/MoveMotor_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__MoveMotor_GetResult_Response() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__HomeMotor_SendGoal_Request__init(msg: *mut HomeMotor_SendGoal_Request) -> bool;
    fn can_driver__action__HomeMotor_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_SendGoal_Request>, size: usize) -> bool;
    fn can_driver__action__HomeMotor_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_SendGoal_Request>);
    fn can_driver__action__HomeMotor_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HomeMotor_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_SendGoal_Request>) -> bool;
}

// Corresponds to can_driver__action__HomeMotor_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomeMotor_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::HomeMotor_Goal,

}



impl Default for HomeMotor_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__HomeMotor_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__HomeMotor_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HomeMotor_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HomeMotor_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HomeMotor_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/HomeMotor_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_SendGoal_Request() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__HomeMotor_SendGoal_Response__init(msg: *mut HomeMotor_SendGoal_Response) -> bool;
    fn can_driver__action__HomeMotor_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_SendGoal_Response>, size: usize) -> bool;
    fn can_driver__action__HomeMotor_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_SendGoal_Response>);
    fn can_driver__action__HomeMotor_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HomeMotor_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_SendGoal_Response>) -> bool;
}

// Corresponds to can_driver__action__HomeMotor_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomeMotor_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for HomeMotor_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__HomeMotor_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__HomeMotor_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HomeMotor_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HomeMotor_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HomeMotor_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/HomeMotor_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_SendGoal_Response() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__HomeMotor_GetResult_Request__init(msg: *mut HomeMotor_GetResult_Request) -> bool;
    fn can_driver__action__HomeMotor_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_GetResult_Request>, size: usize) -> bool;
    fn can_driver__action__HomeMotor_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_GetResult_Request>);
    fn can_driver__action__HomeMotor_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HomeMotor_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_GetResult_Request>) -> bool;
}

// Corresponds to can_driver__action__HomeMotor_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomeMotor_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for HomeMotor_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__HomeMotor_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__HomeMotor_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HomeMotor_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HomeMotor_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HomeMotor_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/HomeMotor_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_GetResult_Request() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__action__HomeMotor_GetResult_Response__init(msg: *mut HomeMotor_GetResult_Response) -> bool;
    fn can_driver__action__HomeMotor_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_GetResult_Response>, size: usize) -> bool;
    fn can_driver__action__HomeMotor_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_GetResult_Response>);
    fn can_driver__action__HomeMotor_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HomeMotor_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<HomeMotor_GetResult_Response>) -> bool;
}

// Corresponds to can_driver__action__HomeMotor_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HomeMotor_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::HomeMotor_Result,

}



impl Default for HomeMotor_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__action__HomeMotor_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to can_driver__action__HomeMotor_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HomeMotor_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__action__HomeMotor_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HomeMotor_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HomeMotor_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/action/HomeMotor_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__action__HomeMotor_GetResult_Response() }
  }
}






#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__can_driver__action__MoveMotor_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to can_driver__action__MoveMotor_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveMotor_SendGoal;

impl rosidl_runtime_rs::Service for MoveMotor_SendGoal {
    type Request = MoveMotor_SendGoal_Request;
    type Response = MoveMotor_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__can_driver__action__MoveMotor_SendGoal() }
    }
}




#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__can_driver__action__MoveMotor_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to can_driver__action__MoveMotor_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveMotor_GetResult;

impl rosidl_runtime_rs::Service for MoveMotor_GetResult {
    type Request = MoveMotor_GetResult_Request;
    type Response = MoveMotor_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__can_driver__action__MoveMotor_GetResult() }
    }
}




#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__can_driver__action__HomeMotor_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to can_driver__action__HomeMotor_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct HomeMotor_SendGoal;

impl rosidl_runtime_rs::Service for HomeMotor_SendGoal {
    type Request = HomeMotor_SendGoal_Request;
    type Response = HomeMotor_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__can_driver__action__HomeMotor_SendGoal() }
    }
}




#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__can_driver__action__HomeMotor_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to can_driver__action__HomeMotor_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct HomeMotor_GetResult;

impl rosidl_runtime_rs::Service for HomeMotor_GetResult {
    type Request = HomeMotor_GetResult_Request;
    type Response = HomeMotor_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__can_driver__action__HomeMotor_GetResult() }
    }
}


