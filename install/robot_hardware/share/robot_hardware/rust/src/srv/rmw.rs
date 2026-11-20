#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "robot_hardware__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_hardware__srv__Maintain_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_hardware__rosidl_generator_c")]
extern "C" {
    fn robot_hardware__srv__Maintain_Request__init(msg: *mut Maintain_Request) -> bool;
    fn robot_hardware__srv__Maintain_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Maintain_Request>, size: usize) -> bool;
    fn robot_hardware__srv__Maintain_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Maintain_Request>);
    fn robot_hardware__srv__Maintain_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Maintain_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Maintain_Request>) -> bool;
}

// Corresponds to robot_hardware__srv__Maintain_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Maintain_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operation: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lower: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub upper: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub save: bool,

}



impl Default for Maintain_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_hardware__srv__Maintain_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_hardware__srv__Maintain_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Maintain_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__Maintain_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__Maintain_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__Maintain_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Maintain_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Maintain_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_hardware/srv/Maintain_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_hardware__srv__Maintain_Request() }
  }
}


#[link(name = "robot_hardware__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_hardware__srv__Maintain_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_hardware__rosidl_generator_c")]
extern "C" {
    fn robot_hardware__srv__Maintain_Response__init(msg: *mut Maintain_Response) -> bool;
    fn robot_hardware__srv__Maintain_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Maintain_Response>, size: usize) -> bool;
    fn robot_hardware__srv__Maintain_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Maintain_Response>);
    fn robot_hardware__srv__Maintain_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Maintain_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Maintain_Response>) -> bool;
}

// Corresponds to robot_hardware__srv__Maintain_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Maintain_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for Maintain_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_hardware__srv__Maintain_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_hardware__srv__Maintain_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Maintain_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__Maintain_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__Maintain_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__Maintain_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Maintain_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Maintain_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_hardware/srv/Maintain_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_hardware__srv__Maintain_Response() }
  }
}


#[link(name = "robot_hardware__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_hardware__srv__SetProfile_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_hardware__rosidl_generator_c")]
extern "C" {
    fn robot_hardware__srv__SetProfile_Request__init(msg: *mut SetProfile_Request) -> bool;
    fn robot_hardware__srv__SetProfile_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetProfile_Request>, size: usize) -> bool;
    fn robot_hardware__srv__SetProfile_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetProfile_Request>);
    fn robot_hardware__srv__SetProfile_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetProfile_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetProfile_Request>) -> bool;
}

// Corresponds to robot_hardware__srv__SetProfile_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetProfile_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub profile: rosidl_runtime_rs::String,

}



impl Default for SetProfile_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_hardware__srv__SetProfile_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_hardware__srv__SetProfile_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetProfile_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__SetProfile_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__SetProfile_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__SetProfile_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetProfile_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetProfile_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_hardware/srv/SetProfile_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_hardware__srv__SetProfile_Request() }
  }
}


#[link(name = "robot_hardware__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_hardware__srv__SetProfile_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_hardware__rosidl_generator_c")]
extern "C" {
    fn robot_hardware__srv__SetProfile_Response__init(msg: *mut SetProfile_Response) -> bool;
    fn robot_hardware__srv__SetProfile_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetProfile_Response>, size: usize) -> bool;
    fn robot_hardware__srv__SetProfile_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetProfile_Response>);
    fn robot_hardware__srv__SetProfile_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetProfile_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetProfile_Response>) -> bool;
}

// Corresponds to robot_hardware__srv__SetProfile_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetProfile_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetProfile_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_hardware__srv__SetProfile_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_hardware__srv__SetProfile_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetProfile_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__SetProfile_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__SetProfile_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__SetProfile_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetProfile_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetProfile_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_hardware/srv/SetProfile_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_hardware__srv__SetProfile_Response() }
  }
}


#[link(name = "robot_hardware__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_hardware__srv__GroupOperation_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_hardware__rosidl_generator_c")]
extern "C" {
    fn robot_hardware__srv__GroupOperation_Request__init(msg: *mut GroupOperation_Request) -> bool;
    fn robot_hardware__srv__GroupOperation_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GroupOperation_Request>, size: usize) -> bool;
    fn robot_hardware__srv__GroupOperation_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GroupOperation_Request>);
    fn robot_hardware__srv__GroupOperation_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GroupOperation_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GroupOperation_Request>) -> bool;
}

// Corresponds to robot_hardware__srv__GroupOperation_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GroupOperation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub groups: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operation: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resource: rosidl_runtime_rs::String,

}



impl Default for GroupOperation_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_hardware__srv__GroupOperation_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_hardware__srv__GroupOperation_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GroupOperation_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__GroupOperation_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__GroupOperation_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__GroupOperation_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GroupOperation_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GroupOperation_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_hardware/srv/GroupOperation_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_hardware__srv__GroupOperation_Request() }
  }
}


#[link(name = "robot_hardware__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_hardware__srv__GroupOperation_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_hardware__rosidl_generator_c")]
extern "C" {
    fn robot_hardware__srv__GroupOperation_Response__init(msg: *mut GroupOperation_Response) -> bool;
    fn robot_hardware__srv__GroupOperation_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GroupOperation_Response>, size: usize) -> bool;
    fn robot_hardware__srv__GroupOperation_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GroupOperation_Response>);
    fn robot_hardware__srv__GroupOperation_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GroupOperation_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GroupOperation_Response>) -> bool;
}

// Corresponds to robot_hardware__srv__GroupOperation_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GroupOperation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operation_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for GroupOperation_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_hardware__srv__GroupOperation_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_hardware__srv__GroupOperation_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GroupOperation_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__GroupOperation_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__GroupOperation_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_hardware__srv__GroupOperation_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GroupOperation_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GroupOperation_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_hardware/srv/GroupOperation_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_hardware__srv__GroupOperation_Response() }
  }
}






#[link(name = "robot_hardware__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_hardware__srv__Maintain() -> *const std::ffi::c_void;
}

// Corresponds to robot_hardware__srv__Maintain
#[allow(missing_docs, non_camel_case_types)]
pub struct Maintain;

impl rosidl_runtime_rs::Service for Maintain {
    type Request = Maintain_Request;
    type Response = Maintain_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_hardware__srv__Maintain() }
    }
}




#[link(name = "robot_hardware__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_hardware__srv__SetProfile() -> *const std::ffi::c_void;
}

// Corresponds to robot_hardware__srv__SetProfile
#[allow(missing_docs, non_camel_case_types)]
pub struct SetProfile;

impl rosidl_runtime_rs::Service for SetProfile {
    type Request = SetProfile_Request;
    type Response = SetProfile_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_hardware__srv__SetProfile() }
    }
}




#[link(name = "robot_hardware__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_hardware__srv__GroupOperation() -> *const std::ffi::c_void;
}

// Corresponds to robot_hardware__srv__GroupOperation
#[allow(missing_docs, non_camel_case_types)]
pub struct GroupOperation;

impl rosidl_runtime_rs::Service for GroupOperation {
    type Request = GroupOperation_Request;
    type Response = GroupOperation_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_hardware__srv__GroupOperation() }
    }
}


