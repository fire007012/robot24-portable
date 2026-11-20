#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to can_driver__srv__ApplyLimits_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ApplyLimits_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ApplyLimits_Request {
  type RmwMsg = super::srv::rmw::ApplyLimits_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_id: msg.motor_id,
        min_position_rad: msg.min_position_rad,
        max_position_rad: msg.max_position_rad,
        use_urdf_limits: msg.use_urdf_limits,
        apply_to_motor: msg.apply_to_motor,
        require_current_inside_limits: msg.require_current_inside_limits,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_id: msg.motor_id,
      min_position_rad: msg.min_position_rad,
      max_position_rad: msg.max_position_rad,
      use_urdf_limits: msg.use_urdf_limits,
      apply_to_motor: msg.apply_to_motor,
      require_current_inside_limits: msg.require_current_inside_limits,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_id: msg.motor_id,
      min_position_rad: msg.min_position_rad,
      max_position_rad: msg.max_position_rad,
      use_urdf_limits: msg.use_urdf_limits,
      apply_to_motor: msg.apply_to_motor,
      require_current_inside_limits: msg.require_current_inside_limits,
    }
  }
}


// Corresponds to can_driver__srv__ApplyLimits_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApplyLimits_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ApplyLimits_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ApplyLimits_Response {
  type RmwMsg = super::srv::rmw::ApplyLimits_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        active_zero_offset_rad: msg.active_zero_offset_rad,
        applied_min_rad: msg.applied_min_rad,
        applied_max_rad: msg.applied_max_rad,
        current_position_rad: msg.current_position_rad,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      active_zero_offset_rad: msg.active_zero_offset_rad,
      applied_min_rad: msg.applied_min_rad,
      applied_max_rad: msg.applied_max_rad,
      current_position_rad: msg.current_position_rad,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      active_zero_offset_rad: msg.active_zero_offset_rad,
      applied_min_rad: msg.applied_min_rad,
      applied_max_rad: msg.applied_max_rad,
      current_position_rad: msg.current_position_rad,
    }
  }
}


// Corresponds to can_driver__srv__Init_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Init_Request {
    /// SocketCAN 设备名（如 canable0/vcan0）
    pub device: std::string::String,

    /// 是否让当前 socket 接收自己发出的帧（测试场景常用）
    pub loopback: bool,

}



impl Default for Init_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Init_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Init_Request {
  type RmwMsg = super::srv::rmw::Init_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device: msg.device.as_str().into(),
        loopback: msg.loopback,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device: msg.device.as_str().into(),
      loopback: msg.loopback,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device: msg.device.to_string(),
      loopback: msg.loopback,
    }
  }
}


// Corresponds to can_driver__srv__Init_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Init_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// 失败时返回原因
    pub message: std::string::String,

}



impl Default for Init_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Init_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Init_Response {
  type RmwMsg = super::srv::rmw::Init_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to can_driver__srv__Shutdown_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Shutdown_Request {
    /// true=强制关闭（忽略部分状态检查）
    pub force: bool,

}



impl Default for Shutdown_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Shutdown_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Shutdown_Request {
  type RmwMsg = super::srv::rmw::Shutdown_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        force: msg.force,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      force: msg.force,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      force: msg.force,
    }
  }
}


// Corresponds to can_driver__srv__Shutdown_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Shutdown_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// 失败时返回原因
    pub message: std::string::String,

}



impl Default for Shutdown_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Shutdown_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Shutdown_Response {
  type RmwMsg = super::srv::rmw::Shutdown_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to can_driver__srv__Recover_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Recover_Request {
    /// 目标电机 ID；0xFFFF 表示全局恢复
    pub motor_id: u16,

}



impl Default for Recover_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Recover_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Recover_Request {
  type RmwMsg = super::srv::rmw::Recover_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_id: msg.motor_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_id: msg.motor_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_id: msg.motor_id,
    }
  }
}


// Corresponds to can_driver__srv__Recover_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Recover_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// 失败时返回原因
    pub message: std::string::String,

}



impl Default for Recover_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Recover_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Recover_Response {
  type RmwMsg = super::srv::rmw::Recover_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to can_driver__srv__MotorCommand_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MotorCommand_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MotorCommand_Request {
  type RmwMsg = super::srv::rmw::MotorCommand_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_id: msg.motor_id,
        command: msg.command,
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_id: msg.motor_id,
      command: msg.command,
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_id: msg.motor_id,
      command: msg.command,
      value: msg.value,
    }
  }
}


// Corresponds to can_driver__srv__MotorCommand_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCommand_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// 失败时返回原因
    pub message: std::string::String,

}



impl Default for MotorCommand_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MotorCommand_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MotorCommand_Response {
  type RmwMsg = super::srv::rmw::MotorCommand_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to can_driver__srv__SetZero_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetZero_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetZero_Request {
  type RmwMsg = super::srv::rmw::SetZero_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_id: msg.motor_id,
        zero_offset_rad: msg.zero_offset_rad,
        use_current_position_as_zero: msg.use_current_position_as_zero,
        apply_to_motor: msg.apply_to_motor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_id: msg.motor_id,
      zero_offset_rad: msg.zero_offset_rad,
      use_current_position_as_zero: msg.use_current_position_as_zero,
      apply_to_motor: msg.apply_to_motor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_id: msg.motor_id,
      zero_offset_rad: msg.zero_offset_rad,
      use_current_position_as_zero: msg.use_current_position_as_zero,
      apply_to_motor: msg.apply_to_motor,
    }
  }
}


// Corresponds to can_driver__srv__SetZero_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetZero_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetZero_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetZero_Response {
  type RmwMsg = super::srv::rmw::SetZero_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        previous_zero_offset_rad: msg.previous_zero_offset_rad,
        applied_zero_offset_rad: msg.applied_zero_offset_rad,
        current_position_rad: msg.current_position_rad,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      previous_zero_offset_rad: msg.previous_zero_offset_rad,
      applied_zero_offset_rad: msg.applied_zero_offset_rad,
      current_position_rad: msg.current_position_rad,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      previous_zero_offset_rad: msg.previous_zero_offset_rad,
      applied_zero_offset_rad: msg.applied_zero_offset_rad,
      current_position_rad: msg.current_position_rad,
    }
  }
}


// Corresponds to can_driver__srv__SetZeroLimit_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetZeroLimit_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetZeroLimit_Request {
  type RmwMsg = super::srv::rmw::SetZeroLimit_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_id: msg.motor_id,
        zero_offset_rad: msg.zero_offset_rad,
        use_current_position_as_zero: msg.use_current_position_as_zero,
        min_position_rad: msg.min_position_rad,
        max_position_rad: msg.max_position_rad,
        use_urdf_limits: msg.use_urdf_limits,
        apply_to_motor: msg.apply_to_motor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      motor_id: msg.motor_id,
      zero_offset_rad: msg.zero_offset_rad,
      use_current_position_as_zero: msg.use_current_position_as_zero,
      min_position_rad: msg.min_position_rad,
      max_position_rad: msg.max_position_rad,
      use_urdf_limits: msg.use_urdf_limits,
      apply_to_motor: msg.apply_to_motor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_id: msg.motor_id,
      zero_offset_rad: msg.zero_offset_rad,
      use_current_position_as_zero: msg.use_current_position_as_zero,
      min_position_rad: msg.min_position_rad,
      max_position_rad: msg.max_position_rad,
      use_urdf_limits: msg.use_urdf_limits,
      apply_to_motor: msg.apply_to_motor,
    }
  }
}


// Corresponds to can_driver__srv__SetZeroLimit_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetZeroLimit_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetZeroLimit_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetZeroLimit_Response {
  type RmwMsg = super::srv::rmw::SetZeroLimit_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        applied_zero_offset_rad: msg.applied_zero_offset_rad,
        applied_min_rad: msg.applied_min_rad,
        applied_max_rad: msg.applied_max_rad,
        current_position_rad: msg.current_position_rad,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      applied_zero_offset_rad: msg.applied_zero_offset_rad,
      applied_min_rad: msg.applied_min_rad,
      applied_max_rad: msg.applied_max_rad,
      current_position_rad: msg.current_position_rad,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      applied_zero_offset_rad: msg.applied_zero_offset_rad,
      applied_min_rad: msg.applied_min_rad,
      applied_max_rad: msg.applied_max_rad,
      current_position_rad: msg.current_position_rad,
    }
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


