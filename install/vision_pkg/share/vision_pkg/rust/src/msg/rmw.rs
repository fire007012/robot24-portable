#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "vision_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vision_pkg__msg__Detection() -> *const std::ffi::c_void;
}

#[link(name = "vision_pkg__rosidl_generator_c")]
extern "C" {
    fn vision_pkg__msg__Detection__init(msg: *mut Detection) -> bool;
    fn vision_pkg__msg__Detection__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Detection>, size: usize) -> bool;
    fn vision_pkg__msg__Detection__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Detection>);
    fn vision_pkg__msg__Detection__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Detection>, out_seq: *mut rosidl_runtime_rs::Sequence<Detection>) -> bool;
}

// Corresponds to vision_pkg__msg__Detection
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Detection {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub width: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: rosidl_runtime_rs::String,

}



impl Default for Detection {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vision_pkg__msg__Detection__init(&mut msg as *mut _) {
        panic!("Call to vision_pkg__msg__Detection__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Detection {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__msg__Detection__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__msg__Detection__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__msg__Detection__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Detection {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Detection where Self: Sized {
  const TYPE_NAME: &'static str = "vision_pkg/msg/Detection";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vision_pkg__msg__Detection() }
  }
}


#[link(name = "vision_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vision_pkg__msg__DetectedObject3D() -> *const std::ffi::c_void;
}

#[link(name = "vision_pkg__rosidl_generator_c")]
extern "C" {
    fn vision_pkg__msg__DetectedObject3D__init(msg: *mut DetectedObject3D) -> bool;
    fn vision_pkg__msg__DetectedObject3D__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetectedObject3D>, size: usize) -> bool;
    fn vision_pkg__msg__DetectedObject3D__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetectedObject3D>);
    fn vision_pkg__msg__DetectedObject3D__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetectedObject3D>, out_seq: *mut rosidl_runtime_rs::Sequence<DetectedObject3D>) -> bool;
}

// Corresponds to vision_pkg__msg__DetectedObject3D
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectedObject3D {

    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::PoseStamped,

}



impl Default for DetectedObject3D {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vision_pkg__msg__DetectedObject3D__init(&mut msg as *mut _) {
        panic!("Call to vision_pkg__msg__DetectedObject3D__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetectedObject3D {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__msg__DetectedObject3D__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__msg__DetectedObject3D__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__msg__DetectedObject3D__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetectedObject3D {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetectedObject3D where Self: Sized {
  const TYPE_NAME: &'static str = "vision_pkg/msg/DetectedObject3D";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vision_pkg__msg__DetectedObject3D() }
  }
}


#[link(name = "vision_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vision_pkg__msg__DetectedObject3DArray() -> *const std::ffi::c_void;
}

#[link(name = "vision_pkg__rosidl_generator_c")]
extern "C" {
    fn vision_pkg__msg__DetectedObject3DArray__init(msg: *mut DetectedObject3DArray) -> bool;
    fn vision_pkg__msg__DetectedObject3DArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetectedObject3DArray>, size: usize) -> bool;
    fn vision_pkg__msg__DetectedObject3DArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetectedObject3DArray>);
    fn vision_pkg__msg__DetectedObject3DArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetectedObject3DArray>, out_seq: *mut rosidl_runtime_rs::Sequence<DetectedObject3DArray>) -> bool;
}

// Corresponds to vision_pkg__msg__DetectedObject3DArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectedObject3DArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DetectedObject3D>,

}



impl Default for DetectedObject3DArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vision_pkg__msg__DetectedObject3DArray__init(&mut msg as *mut _) {
        panic!("Call to vision_pkg__msg__DetectedObject3DArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetectedObject3DArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__msg__DetectedObject3DArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__msg__DetectedObject3DArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__msg__DetectedObject3DArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetectedObject3DArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetectedObject3DArray where Self: Sized {
  const TYPE_NAME: &'static str = "vision_pkg/msg/DetectedObject3DArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vision_pkg__msg__DetectedObject3DArray() }
  }
}


#[link(name = "vision_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vision_pkg__msg__ObstacleWarning() -> *const std::ffi::c_void;
}

#[link(name = "vision_pkg__rosidl_generator_c")]
extern "C" {
    fn vision_pkg__msg__ObstacleWarning__init(msg: *mut ObstacleWarning) -> bool;
    fn vision_pkg__msg__ObstacleWarning__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ObstacleWarning>, size: usize) -> bool;
    fn vision_pkg__msg__ObstacleWarning__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ObstacleWarning>);
    fn vision_pkg__msg__ObstacleWarning__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ObstacleWarning>, out_seq: *mut rosidl_runtime_rs::Sequence<ObstacleWarning>) -> bool;
}

// Corresponds to vision_pkg__msg__ObstacleWarning
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObstacleWarning {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_dist: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_dist: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_dist: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_warn: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center_warn: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_warn: bool,

}



impl Default for ObstacleWarning {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vision_pkg__msg__ObstacleWarning__init(&mut msg as *mut _) {
        panic!("Call to vision_pkg__msg__ObstacleWarning__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ObstacleWarning {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__msg__ObstacleWarning__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__msg__ObstacleWarning__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vision_pkg__msg__ObstacleWarning__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ObstacleWarning {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ObstacleWarning where Self: Sized {
  const TYPE_NAME: &'static str = "vision_pkg/msg/ObstacleWarning";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vision_pkg__msg__ObstacleWarning() }
  }
}


