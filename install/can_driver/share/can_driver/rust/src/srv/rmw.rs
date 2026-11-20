#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__ApplyLimits_Request() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__ApplyLimits_Request__init(msg: *mut ApplyLimits_Request) -> bool;
    fn can_driver__srv__ApplyLimits_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ApplyLimits_Request>, size: usize) -> bool;
    fn can_driver__srv__ApplyLimits_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ApplyLimits_Request>);
    fn can_driver__srv__ApplyLimits_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ApplyLimits_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ApplyLimits_Request>) -> bool;
}

// Corresponds to can_driver__srv__ApplyLimits_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApplyLimits_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_id: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min_position_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_position_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub use_urdf_limits: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub apply_to_motor: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub require_current_inside_limits: bool,

}



impl Default for ApplyLimits_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__ApplyLimits_Request__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__ApplyLimits_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ApplyLimits_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__ApplyLimits_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__ApplyLimits_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__ApplyLimits_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ApplyLimits_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ApplyLimits_Request where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/ApplyLimits_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__ApplyLimits_Request() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__ApplyLimits_Response() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__ApplyLimits_Response__init(msg: *mut ApplyLimits_Response) -> bool;
    fn can_driver__srv__ApplyLimits_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ApplyLimits_Response>, size: usize) -> bool;
    fn can_driver__srv__ApplyLimits_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ApplyLimits_Response>);
    fn can_driver__srv__ApplyLimits_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ApplyLimits_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ApplyLimits_Response>) -> bool;
}

// Corresponds to can_driver__srv__ApplyLimits_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApplyLimits_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_zero_offset_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub applied_min_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub applied_max_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_position_rad: f64,

}



impl Default for ApplyLimits_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__ApplyLimits_Response__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__ApplyLimits_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ApplyLimits_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__ApplyLimits_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__ApplyLimits_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__ApplyLimits_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ApplyLimits_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ApplyLimits_Response where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/ApplyLimits_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__ApplyLimits_Response() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__Init_Request() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__Init_Request__init(msg: *mut Init_Request) -> bool;
    fn can_driver__srv__Init_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Init_Request>, size: usize) -> bool;
    fn can_driver__srv__Init_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Init_Request>);
    fn can_driver__srv__Init_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Init_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Init_Request>) -> bool;
}

// Corresponds to can_driver__srv__Init_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Init_Request {
    /// SocketCAN 设备名（如 canable0/vcan0）
    pub device: rosidl_runtime_rs::String,

    /// 是否让当前 socket 接收自己发出的帧（测试场景常用）
    pub loopback: bool,

}



impl Default for Init_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__Init_Request__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__Init_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Init_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Init_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Init_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Init_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Init_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Init_Request where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/Init_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__Init_Request() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__Init_Response() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__Init_Response__init(msg: *mut Init_Response) -> bool;
    fn can_driver__srv__Init_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Init_Response>, size: usize) -> bool;
    fn can_driver__srv__Init_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Init_Response>);
    fn can_driver__srv__Init_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Init_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Init_Response>) -> bool;
}

// Corresponds to can_driver__srv__Init_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Init_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// 失败时返回原因
    pub message: rosidl_runtime_rs::String,

}



impl Default for Init_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__Init_Response__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__Init_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Init_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Init_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Init_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Init_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Init_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Init_Response where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/Init_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__Init_Response() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__Shutdown_Request() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__Shutdown_Request__init(msg: *mut Shutdown_Request) -> bool;
    fn can_driver__srv__Shutdown_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Shutdown_Request>, size: usize) -> bool;
    fn can_driver__srv__Shutdown_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Shutdown_Request>);
    fn can_driver__srv__Shutdown_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Shutdown_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Shutdown_Request>) -> bool;
}

// Corresponds to can_driver__srv__Shutdown_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Shutdown_Request {
    /// true=强制关闭（忽略部分状态检查）
    pub force: bool,

}



impl Default for Shutdown_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__Shutdown_Request__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__Shutdown_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Shutdown_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Shutdown_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Shutdown_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Shutdown_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Shutdown_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Shutdown_Request where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/Shutdown_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__Shutdown_Request() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__Shutdown_Response() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__Shutdown_Response__init(msg: *mut Shutdown_Response) -> bool;
    fn can_driver__srv__Shutdown_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Shutdown_Response>, size: usize) -> bool;
    fn can_driver__srv__Shutdown_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Shutdown_Response>);
    fn can_driver__srv__Shutdown_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Shutdown_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Shutdown_Response>) -> bool;
}

// Corresponds to can_driver__srv__Shutdown_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Shutdown_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// 失败时返回原因
    pub message: rosidl_runtime_rs::String,

}



impl Default for Shutdown_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__Shutdown_Response__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__Shutdown_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Shutdown_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Shutdown_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Shutdown_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Shutdown_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Shutdown_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Shutdown_Response where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/Shutdown_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__Shutdown_Response() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__Recover_Request() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__Recover_Request__init(msg: *mut Recover_Request) -> bool;
    fn can_driver__srv__Recover_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Recover_Request>, size: usize) -> bool;
    fn can_driver__srv__Recover_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Recover_Request>);
    fn can_driver__srv__Recover_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Recover_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Recover_Request>) -> bool;
}

// Corresponds to can_driver__srv__Recover_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Recover_Request {
    /// 目标电机 ID；0xFFFF 表示全局恢复
    pub motor_id: u16,

}



impl Default for Recover_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__Recover_Request__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__Recover_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Recover_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Recover_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Recover_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Recover_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Recover_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Recover_Request where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/Recover_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__Recover_Request() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__Recover_Response() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__Recover_Response__init(msg: *mut Recover_Response) -> bool;
    fn can_driver__srv__Recover_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Recover_Response>, size: usize) -> bool;
    fn can_driver__srv__Recover_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Recover_Response>);
    fn can_driver__srv__Recover_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Recover_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Recover_Response>) -> bool;
}

// Corresponds to can_driver__srv__Recover_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Recover_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// 失败时返回原因
    pub message: rosidl_runtime_rs::String,

}



impl Default for Recover_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__Recover_Response__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__Recover_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Recover_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Recover_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Recover_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__Recover_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Recover_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Recover_Response where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/Recover_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__Recover_Response() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__MotorCommand_Request() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__MotorCommand_Request__init(msg: *mut MotorCommand_Request) -> bool;
    fn can_driver__srv__MotorCommand_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorCommand_Request>, size: usize) -> bool;
    fn can_driver__srv__MotorCommand_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorCommand_Request>);
    fn can_driver__srv__MotorCommand_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorCommand_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorCommand_Request>) -> bool;
}

// Corresponds to can_driver__srv__MotorCommand_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCommand_Request {
    /// 电机 ID
    pub motor_id: u16,

    /// 指令类型，见下方 CMD_* 常量
    pub command: u8,

    /// 指令参数（例如速度、位置或 mode 值）
    pub value: f64,

}

impl MotorCommand_Request {
    /// command 常量
    pub const CMD_ENABLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_DISABLE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_STOP: u8 = 2;

    /// value: 0=position  1=velocity  2=csp
    pub const CMD_SET_MODE: u8 = 3;

}


impl Default for MotorCommand_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__MotorCommand_Request__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__MotorCommand_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorCommand_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__MotorCommand_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__MotorCommand_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__MotorCommand_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorCommand_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorCommand_Request where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/MotorCommand_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__MotorCommand_Request() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__MotorCommand_Response() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__MotorCommand_Response__init(msg: *mut MotorCommand_Response) -> bool;
    fn can_driver__srv__MotorCommand_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorCommand_Response>, size: usize) -> bool;
    fn can_driver__srv__MotorCommand_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorCommand_Response>);
    fn can_driver__srv__MotorCommand_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorCommand_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorCommand_Response>) -> bool;
}

// Corresponds to can_driver__srv__MotorCommand_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCommand_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// 失败时返回原因
    pub message: rosidl_runtime_rs::String,

}



impl Default for MotorCommand_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__MotorCommand_Response__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__MotorCommand_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorCommand_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__MotorCommand_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__MotorCommand_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__MotorCommand_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorCommand_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorCommand_Response where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/MotorCommand_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__MotorCommand_Response() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__SetZero_Request() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__SetZero_Request__init(msg: *mut SetZero_Request) -> bool;
    fn can_driver__srv__SetZero_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetZero_Request>, size: usize) -> bool;
    fn can_driver__srv__SetZero_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetZero_Request>);
    fn can_driver__srv__SetZero_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetZero_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetZero_Request>) -> bool;
}

// Corresponds to can_driver__srv__SetZero_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetZero_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_id: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub zero_offset_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub use_current_position_as_zero: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub apply_to_motor: bool,

}



impl Default for SetZero_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__SetZero_Request__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__SetZero_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetZero_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__SetZero_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__SetZero_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__SetZero_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetZero_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetZero_Request where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/SetZero_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__SetZero_Request() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__SetZero_Response() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__SetZero_Response__init(msg: *mut SetZero_Response) -> bool;
    fn can_driver__srv__SetZero_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetZero_Response>, size: usize) -> bool;
    fn can_driver__srv__SetZero_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetZero_Response>);
    fn can_driver__srv__SetZero_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetZero_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetZero_Response>) -> bool;
}

// Corresponds to can_driver__srv__SetZero_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetZero_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub previous_zero_offset_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub applied_zero_offset_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_position_rad: f64,

}



impl Default for SetZero_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__SetZero_Response__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__SetZero_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetZero_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__SetZero_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__SetZero_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__SetZero_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetZero_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetZero_Response where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/SetZero_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__SetZero_Response() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__SetZeroLimit_Request() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__SetZeroLimit_Request__init(msg: *mut SetZeroLimit_Request) -> bool;
    fn can_driver__srv__SetZeroLimit_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetZeroLimit_Request>, size: usize) -> bool;
    fn can_driver__srv__SetZeroLimit_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetZeroLimit_Request>);
    fn can_driver__srv__SetZeroLimit_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetZeroLimit_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetZeroLimit_Request>) -> bool;
}

// Corresponds to can_driver__srv__SetZeroLimit_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetZeroLimit_Request {
    /// 目标电机ID
    pub motor_id: u16,

    /// 零点偏置（rad，按 joint 正方向）
    pub zero_offset_rad: f64,

    /// true: 忽略 zero_offset_rad，按当前实际位置自动归零
    pub use_current_position_as_zero: bool,

    /// 手工下限（rad）
    pub min_position_rad: f64,

    /// 手工上限（rad）
    pub max_position_rad: f64,

    /// true: 从URDF读取限位并叠加偏置；false: 使用上面手工值
    pub use_urdf_limits: bool,

    /// true: 下发到电机物理限位寄存器
    pub apply_to_motor: bool,

}



impl Default for SetZeroLimit_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__SetZeroLimit_Request__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__SetZeroLimit_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetZeroLimit_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__SetZeroLimit_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__SetZeroLimit_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__SetZeroLimit_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetZeroLimit_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetZeroLimit_Request where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/SetZeroLimit_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__SetZeroLimit_Request() }
  }
}


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__SetZeroLimit_Response() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__srv__SetZeroLimit_Response__init(msg: *mut SetZeroLimit_Response) -> bool;
    fn can_driver__srv__SetZeroLimit_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetZeroLimit_Response>, size: usize) -> bool;
    fn can_driver__srv__SetZeroLimit_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetZeroLimit_Response>);
    fn can_driver__srv__SetZeroLimit_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetZeroLimit_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetZeroLimit_Response>) -> bool;
}

// Corresponds to can_driver__srv__SetZeroLimit_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetZeroLimit_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// 实际使用的零点偏置（rad）
    pub applied_zero_offset_rad: f64,

    /// 生效下限（rad）
    pub applied_min_rad: f64,

    /// 生效上限（rad）
    pub applied_max_rad: f64,

    /// 设置时读取到的当前位置（rad）
    pub current_position_rad: f64,

}



impl Default for SetZeroLimit_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__srv__SetZeroLimit_Response__init(&mut msg as *mut _) {
        panic!("Call to can_driver__srv__SetZeroLimit_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetZeroLimit_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__SetZeroLimit_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__SetZeroLimit_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__srv__SetZeroLimit_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetZeroLimit_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetZeroLimit_Response where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/srv/SetZeroLimit_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__srv__SetZeroLimit_Response() }
  }
}






#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__ApplyLimits() -> *const std::ffi::c_void;
}

// Corresponds to can_driver__srv__ApplyLimits
#[allow(missing_docs, non_camel_case_types)]
pub struct ApplyLimits;

impl rosidl_runtime_rs::Service for ApplyLimits {
    type Request = ApplyLimits_Request;
    type Response = ApplyLimits_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__ApplyLimits() }
    }
}




#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__Init() -> *const std::ffi::c_void;
}

// Corresponds to can_driver__srv__Init
#[allow(missing_docs, non_camel_case_types)]
pub struct Init;

impl rosidl_runtime_rs::Service for Init {
    type Request = Init_Request;
    type Response = Init_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__Init() }
    }
}




#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__Shutdown() -> *const std::ffi::c_void;
}

// Corresponds to can_driver__srv__Shutdown
#[allow(missing_docs, non_camel_case_types)]
pub struct Shutdown;

impl rosidl_runtime_rs::Service for Shutdown {
    type Request = Shutdown_Request;
    type Response = Shutdown_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__Shutdown() }
    }
}




#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__Recover() -> *const std::ffi::c_void;
}

// Corresponds to can_driver__srv__Recover
#[allow(missing_docs, non_camel_case_types)]
pub struct Recover;

impl rosidl_runtime_rs::Service for Recover {
    type Request = Recover_Request;
    type Response = Recover_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__Recover() }
    }
}




#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__MotorCommand() -> *const std::ffi::c_void;
}

// Corresponds to can_driver__srv__MotorCommand
#[allow(missing_docs, non_camel_case_types)]
pub struct MotorCommand;

impl rosidl_runtime_rs::Service for MotorCommand {
    type Request = MotorCommand_Request;
    type Response = MotorCommand_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__MotorCommand() }
    }
}




#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__SetZero() -> *const std::ffi::c_void;
}

// Corresponds to can_driver__srv__SetZero
#[allow(missing_docs, non_camel_case_types)]
pub struct SetZero;

impl rosidl_runtime_rs::Service for SetZero {
    type Request = SetZero_Request;
    type Response = SetZero_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__SetZero() }
    }
}




#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__SetZeroLimit() -> *const std::ffi::c_void;
}

// Corresponds to can_driver__srv__SetZeroLimit
#[allow(missing_docs, non_camel_case_types)]
pub struct SetZeroLimit;

impl rosidl_runtime_rs::Service for SetZeroLimit {
    type Request = SetZeroLimit_Request;
    type Response = SetZeroLimit_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__can_driver__srv__SetZeroLimit() }
    }
}


