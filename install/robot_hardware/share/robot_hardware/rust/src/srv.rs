#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to robot_hardware__srv__Maintain_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Maintain_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operation: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Maintain_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Maintain_Request {
  type RmwMsg = super::srv::rmw::Maintain_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint: msg.joint.as_str().into(),
        operation: msg.operation.as_str().into(),
        lower: msg.lower,
        upper: msg.upper,
        save: msg.save,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint: msg.joint.as_str().into(),
        operation: msg.operation.as_str().into(),
      lower: msg.lower,
      upper: msg.upper,
      save: msg.save,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joint: msg.joint.to_string(),
      operation: msg.operation.to_string(),
      lower: msg.lower,
      upper: msg.upper,
      save: msg.save,
    }
  }
}


// Corresponds to robot_hardware__srv__Maintain_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Maintain_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for Maintain_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Maintain_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Maintain_Response {
  type RmwMsg = super::srv::rmw::Maintain_Response;

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


// Corresponds to robot_hardware__srv__SetProfile_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetProfile_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub profile: std::string::String,

}



impl Default for SetProfile_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetProfile_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetProfile_Request {
  type RmwMsg = super::srv::rmw::SetProfile_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        profile: msg.profile.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        profile: msg.profile.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      profile: msg.profile.to_string(),
    }
  }
}


// Corresponds to robot_hardware__srv__SetProfile_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetProfile_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetProfile_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetProfile_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetProfile_Response {
  type RmwMsg = super::srv::rmw::SetProfile_Response;

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


// Corresponds to robot_hardware__srv__GroupOperation_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GroupOperation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub groups: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operation: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resource: std::string::String,

}



impl Default for GroupOperation_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GroupOperation_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GroupOperation_Request {
  type RmwMsg = super::srv::rmw::GroupOperation_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        groups: msg.groups
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        operation: msg.operation.as_str().into(),
        resource: msg.resource.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        groups: msg.groups
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        operation: msg.operation.as_str().into(),
        resource: msg.resource.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      groups: msg.groups
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      operation: msg.operation.to_string(),
      resource: msg.resource.to_string(),
    }
  }
}


// Corresponds to robot_hardware__srv__GroupOperation_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GroupOperation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub operation_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for GroupOperation_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GroupOperation_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GroupOperation_Response {
  type RmwMsg = super::srv::rmw::GroupOperation_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        operation_id: msg.operation_id.as_str().into(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        operation_id: msg.operation_id.as_str().into(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      operation_id: msg.operation_id.to_string(),
      message: msg.message.to_string(),
    }
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


