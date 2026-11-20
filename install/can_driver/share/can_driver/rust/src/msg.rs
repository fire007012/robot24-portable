#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to can_driver__msg__MotorState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorState {
    /// 电机 ID（总线节点号）
    pub motor_id: u16,

    /// 关节/电机名称
    pub name: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorState::default())
  }
}

impl rosidl_runtime_rs::Message for MotorState {
  type RmwMsg = super::msg::rmw::MotorState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_id: msg.motor_id,
        name: msg.name.as_str().into(),
        mode: msg.mode,
        enabled: msg.enabled,
        fault: msg.fault,
        position: msg.position,
        velocity: msg.velocity,
        current: msg.current,
        joint_position: msg.joint_position,
        joint_velocity: msg.joint_velocity,
        mode_valid: msg.mode_valid,
        status_valid: msg.status_valid,
        position_valid: msg.position_valid,
        velocity_valid: msg.velocity_valid,
        current_valid: msg.current_valid,
        feedback_fresh: msg.feedback_fresh,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_id: msg.motor_id,
        name: msg.name.as_str().into(),
      mode: msg.mode,
      enabled: msg.enabled,
      fault: msg.fault,
      position: msg.position,
      velocity: msg.velocity,
      current: msg.current,
      joint_position: msg.joint_position,
      joint_velocity: msg.joint_velocity,
      mode_valid: msg.mode_valid,
      status_valid: msg.status_valid,
      position_valid: msg.position_valid,
      velocity_valid: msg.velocity_valid,
      current_valid: msg.current_valid,
      feedback_fresh: msg.feedback_fresh,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_id: msg.motor_id,
      name: msg.name.to_string(),
      mode: msg.mode,
      enabled: msg.enabled,
      fault: msg.fault,
      position: msg.position,
      velocity: msg.velocity,
      current: msg.current,
      joint_position: msg.joint_position,
      joint_velocity: msg.joint_velocity,
      mode_valid: msg.mode_valid,
      status_valid: msg.status_valid,
      position_valid: msg.position_valid,
      velocity_valid: msg.velocity_valid,
      current_valid: msg.current_valid,
      feedback_fresh: msg.feedback_fresh,
    }
  }
}


