#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to vision_pkg__srv__SetDetectionEnabled_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetDetectionEnabled_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetDetectionEnabled_Request {
  type RmwMsg = super::srv::rmw::SetDetectionEnabled_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        enable_all: msg.enable_all,
        enable_yolo: msg.enable_yolo,
        enable_qrcode: msg.enable_qrcode,
        enable_motion: msg.enable_motion,
        enable_obstacle_warning: msg.enable_obstacle_warning,
        enable_center_distance: msg.enable_center_distance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      enable_all: msg.enable_all,
      enable_yolo: msg.enable_yolo,
      enable_qrcode: msg.enable_qrcode,
      enable_motion: msg.enable_motion,
      enable_obstacle_warning: msg.enable_obstacle_warning,
      enable_center_distance: msg.enable_center_distance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      enable_all: msg.enable_all,
      enable_yolo: msg.enable_yolo,
      enable_qrcode: msg.enable_qrcode,
      enable_motion: msg.enable_motion,
      enable_obstacle_warning: msg.enable_obstacle_warning,
      enable_center_distance: msg.enable_center_distance,
    }
  }
}


// Corresponds to vision_pkg__srv__SetDetectionEnabled_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDetectionEnabled_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetDetectionEnabled_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetDetectionEnabled_Response {
  type RmwMsg = super::srv::rmw::SetDetectionEnabled_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        yolo_enabled: msg.yolo_enabled,
        qrcode_enabled: msg.qrcode_enabled,
        motion_enabled: msg.motion_enabled,
        obstacle_warning_enabled: msg.obstacle_warning_enabled,
        center_distance_enabled: msg.center_distance_enabled,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      yolo_enabled: msg.yolo_enabled,
      qrcode_enabled: msg.qrcode_enabled,
      motion_enabled: msg.motion_enabled,
      obstacle_warning_enabled: msg.obstacle_warning_enabled,
      center_distance_enabled: msg.center_distance_enabled,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      yolo_enabled: msg.yolo_enabled,
      qrcode_enabled: msg.qrcode_enabled,
      motion_enabled: msg.motion_enabled,
      obstacle_warning_enabled: msg.obstacle_warning_enabled,
      center_distance_enabled: msg.center_distance_enabled,
    }
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


