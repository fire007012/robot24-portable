#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "vision_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vision_pkg__srv__SetDetectionEnabled_Request() -> *const std::ffi::c_void;
}

#[link(name = "vision_pkg__rosidl_generator_c")]
extern "C" {
    fn vision_pkg__srv__SetDetectionEnabled_Request__init(msg: *mut SetDetectionEnabled_Request) -> bool;
    fn vision_pkg__srv__SetDetectionEnabled_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetDetectionEnabled_Request>, size: usize) -> bool;
    fn vision_pkg__srv__SetDetectionEnabled_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetDetectionEnabled_Request>);
    fn vision_pkg__srv__SetDetectionEnabled_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetDetectionEnabled_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetDetectionEnabled_Request>) -> bool;
}

// Corresponds to vision_pkg__srv__SetDetectionEnabled_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDetectionEnabled_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub enable_all: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enable_yolo: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enable_qrcode: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enable_motion: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enable_obstacle_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enable_center_distance: bool,

}



impl Default for SetDetectionEnabled_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vision_pkg__srv__SetDetectionEnabled_Request__init(&mut msg as *mut _) {
        panic!("Call to vision_pkg__srv__SetDetectionEnabled_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetDetectionEnabled_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__srv__SetDetectionEnabled_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__srv__SetDetectionEnabled_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__srv__SetDetectionEnabled_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetDetectionEnabled_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetDetectionEnabled_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vision_pkg/srv/SetDetectionEnabled_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vision_pkg__srv__SetDetectionEnabled_Request() }
  }
}


#[link(name = "vision_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vision_pkg__srv__SetDetectionEnabled_Response() -> *const std::ffi::c_void;
}

#[link(name = "vision_pkg__rosidl_generator_c")]
extern "C" {
    fn vision_pkg__srv__SetDetectionEnabled_Response__init(msg: *mut SetDetectionEnabled_Response) -> bool;
    fn vision_pkg__srv__SetDetectionEnabled_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetDetectionEnabled_Response>, size: usize) -> bool;
    fn vision_pkg__srv__SetDetectionEnabled_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetDetectionEnabled_Response>);
    fn vision_pkg__srv__SetDetectionEnabled_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetDetectionEnabled_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetDetectionEnabled_Response>) -> bool;
}

// Corresponds to vision_pkg__srv__SetDetectionEnabled_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDetectionEnabled_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yolo_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub qrcode_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub obstacle_warning_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_distance_enabled: bool,

}



impl Default for SetDetectionEnabled_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vision_pkg__srv__SetDetectionEnabled_Response__init(&mut msg as *mut _) {
        panic!("Call to vision_pkg__srv__SetDetectionEnabled_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetDetectionEnabled_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__srv__SetDetectionEnabled_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__srv__SetDetectionEnabled_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__srv__SetDetectionEnabled_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetDetectionEnabled_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetDetectionEnabled_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vision_pkg/srv/SetDetectionEnabled_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vision_pkg__srv__SetDetectionEnabled_Response() }
  }
}






#[link(name = "vision_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vision_pkg__srv__SetDetectionEnabled() -> *const std::ffi::c_void;
}

// Corresponds to vision_pkg__srv__SetDetectionEnabled
#[allow(missing_docs, non_camel_case_types)]
pub struct SetDetectionEnabled;

impl rosidl_runtime_rs::Service for SetDetectionEnabled {
    type Request = SetDetectionEnabled_Request;
    type Response = SetDetectionEnabled_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vision_pkg__srv__SetDetectionEnabled() }
    }
}


