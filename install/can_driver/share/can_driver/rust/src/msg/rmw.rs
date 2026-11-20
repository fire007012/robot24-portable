#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "can_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__can_driver__msg__MotorState() -> *const std::ffi::c_void;
}

#[link(name = "can_driver__rosidl_generator_c")]
extern "C" {
    fn can_driver__msg__MotorState__init(msg: *mut MotorState) -> bool;
    fn can_driver__msg__MotorState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorState>, size: usize) -> bool;
    fn can_driver__msg__MotorState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorState>);
    fn can_driver__msg__MotorState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorState>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorState>) -> bool;
}

// Corresponds to can_driver__msg__MotorState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorState {
    /// 电机 ID（总线节点号）
    pub motor_id: u16,

    /// 关节/电机名称
    pub name: rosidl_runtime_rs::String,

    /// 运行模式，见下方 MODE_* 常量
    pub mode: u8,

    /// 使能状态
    pub enabled: bool,

    /// 故障标志
    pub fault: bool,

    /// 位置反馈（协议原始单位）
    pub position: i32,

    /// 速度反馈（协议原始单位）
    pub velocity: i32,

    /// 电流反馈（协议原始单位）
    pub current: i16,

    /// 驱动侧关节位置（SI/rad），已应用 direction_sign 与软件 zero offset
    pub joint_position: f64,

    /// 驱动侧关节速度（SI/rad/s），已应用 direction_sign
    pub joint_velocity: f64,

    /// mode 是否来自真实反馈
    pub mode_valid: bool,

    /// enabled/fault 是否来自真实反馈
    pub status_valid: bool,

    /// position 是否来自真实反馈
    pub position_valid: bool,

    /// velocity 是否来自真实反馈
    pub velocity_valid: bool,

    /// current 是否来自真实反馈
    pub current_valid: bool,

    /// 最近是否收到过新反馈
    pub feedback_fresh: bool,

}

impl MotorState {
    /// Common mode constants so topics/services share the same enum semantics.
    pub const MODE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_POSITION: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_VELOCITY: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_CSP: u8 = 3;

}


impl Default for MotorState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !can_driver__msg__MotorState__init(&mut msg as *mut _) {
        panic!("Call to can_driver__msg__MotorState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__msg__MotorState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__msg__MotorState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { can_driver__msg__MotorState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorState where Self: Sized {
  const TYPE_NAME: &'static str = "can_driver/msg/MotorState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__can_driver__msg__MotorState() }
  }
}


