#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to vision_pkg__msg__Detection

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Detection {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    pub class_name: std::string::String,

}



impl Default for Detection {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Detection::default())
  }
}

impl rosidl_runtime_rs::Message for Detection {
  type RmwMsg = super::msg::rmw::Detection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        id: msg.id,
        confidence: msg.confidence,
        x: msg.x,
        y: msg.y,
        width: msg.width,
        height: msg.height,
        class_name: msg.class_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      id: msg.id,
      confidence: msg.confidence,
      x: msg.x,
      y: msg.y,
      width: msg.width,
      height: msg.height,
        class_name: msg.class_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      id: msg.id,
      confidence: msg.confidence,
      x: msg.x,
      y: msg.y,
      width: msg.width,
      height: msg.height,
      class_name: msg.class_name.to_string(),
    }
  }
}


// Corresponds to vision_pkg__msg__DetectedObject3D

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectedObject3D {

    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::PoseStamped,

}



impl Default for DetectedObject3D {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DetectedObject3D::default())
  }
}

impl rosidl_runtime_rs::Message for DetectedObject3D {
  type RmwMsg = super::msg::rmw::DetectedObject3D;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        class_name: msg.class_name.as_str().into(),
        id: msg.id,
        confidence: msg.confidence,
        pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        class_name: msg.class_name.as_str().into(),
      id: msg.id,
      confidence: msg.confidence,
        pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      class_name: msg.class_name.to_string(),
      id: msg.id,
      confidence: msg.confidence,
      pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.pose),
    }
  }
}


// Corresponds to vision_pkg__msg__DetectedObject3DArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectedObject3DArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: Vec<super::msg::DetectedObject3D>,

}



impl Default for DetectedObject3DArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DetectedObject3DArray::default())
  }
}

impl rosidl_runtime_rs::Message for DetectedObject3DArray {
  type RmwMsg = super::msg::rmw::DetectedObject3DArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        objects: msg.objects
          .into_iter()
          .map(|elem| super::msg::DetectedObject3D::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        objects: msg.objects
          .iter()
          .map(|elem| super::msg::DetectedObject3D::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      objects: msg.objects
          .into_iter()
          .map(super::msg::DetectedObject3D::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to vision_pkg__msg__ObstacleWarning

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ObstacleWarning::default())
  }
}

impl rosidl_runtime_rs::Message for ObstacleWarning {
  type RmwMsg = super::msg::rmw::ObstacleWarning;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_dist: msg.left_dist,
        center_dist: msg.center_dist,
        right_dist: msg.right_dist,
        left_warn: msg.left_warn,
        center_warn: msg.center_warn,
        right_warn: msg.right_warn,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      left_dist: msg.left_dist,
      center_dist: msg.center_dist,
      right_dist: msg.right_dist,
      left_warn: msg.left_warn,
      center_warn: msg.center_warn,
      right_warn: msg.right_warn,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_dist: msg.left_dist,
      center_dist: msg.center_dist,
      right_dist: msg.right_dist,
      left_warn: msg.left_warn,
      center_warn: msg.center_warn,
      right_warn: msg.right_warn,
    }
  }
}


