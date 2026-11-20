// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arm_control:action/ExecuteArmGoal.idl
// generated code does not contain a copyright notice

#ifndef ARM_CONTROL__ACTION__DETAIL__EXECUTE_ARM_GOAL__STRUCT_H_
#define ARM_CONTROL__ACTION__DETAIL__EXECUTE_ARM_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TARGET_JOINTS'.
enum
{
  arm_control__action__ExecuteArmGoal_Goal__TARGET_JOINTS = 1
};

/// Constant 'TARGET_NAMED'.
enum
{
  arm_control__action__ExecuteArmGoal_Goal__TARGET_NAMED = 2
};

/// Constant 'TARGET_POSE'.
enum
{
  arm_control__action__ExecuteArmGoal_Goal__TARGET_POSE = 3
};

// Include directives for member types
// Member 'joint_names'
// Member 'named_target'
#include "rosidl_runtime_c/string.h"
// Member 'joint_positions'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'pose_target'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/ExecuteArmGoal in the package arm_control.
typedef struct arm_control__action__ExecuteArmGoal_Goal
{
  uint8_t target_type;
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__double__Sequence joint_positions;
  rosidl_runtime_c__String named_target;
  geometry_msgs__msg__PoseStamped pose_target;
} arm_control__action__ExecuteArmGoal_Goal;

// Struct for a sequence of arm_control__action__ExecuteArmGoal_Goal.
typedef struct arm_control__action__ExecuteArmGoal_Goal__Sequence
{
  arm_control__action__ExecuteArmGoal_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_control__action__ExecuteArmGoal_Goal__Sequence;


// Constants defined in the message

/// Constant 'ERROR_NONE'.
enum
{
  arm_control__action__ExecuteArmGoal_Result__ERROR_NONE = 0
};

/// Constant 'ERROR_INVALID_GOAL'.
enum
{
  arm_control__action__ExecuteArmGoal_Result__ERROR_INVALID_GOAL = 1
};

/// Constant 'ERROR_NOT_READY'.
enum
{
  arm_control__action__ExecuteArmGoal_Result__ERROR_NOT_READY = 2
};

/// Constant 'ERROR_TF_FAILED'.
enum
{
  arm_control__action__ExecuteArmGoal_Result__ERROR_TF_FAILED = 3
};

/// Constant 'ERROR_PLANNING_FAILED'.
enum
{
  arm_control__action__ExecuteArmGoal_Result__ERROR_PLANNING_FAILED = 4
};

/// Constant 'ERROR_EXECUTION_FAILED'.
enum
{
  arm_control__action__ExecuteArmGoal_Result__ERROR_EXECUTION_FAILED = 5
};

/// Constant 'ERROR_PREEMPTED'.
enum
{
  arm_control__action__ExecuteArmGoal_Result__ERROR_PREEMPTED = 6
};

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteArmGoal in the package arm_control.
typedef struct arm_control__action__ExecuteArmGoal_Result
{
  bool success;
  uint8_t error_code;
  rosidl_runtime_c__String message;
} arm_control__action__ExecuteArmGoal_Result;

// Struct for a sequence of arm_control__action__ExecuteArmGoal_Result.
typedef struct arm_control__action__ExecuteArmGoal_Result__Sequence
{
  arm_control__action__ExecuteArmGoal_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_control__action__ExecuteArmGoal_Result__Sequence;


// Constants defined in the message

/// Constant 'PHASE_VALIDATING'.
enum
{
  arm_control__action__ExecuteArmGoal_Feedback__PHASE_VALIDATING = 1
};

/// Constant 'PHASE_WAITING_READY'.
enum
{
  arm_control__action__ExecuteArmGoal_Feedback__PHASE_WAITING_READY = 2
};

/// Constant 'PHASE_PLANNING'.
enum
{
  arm_control__action__ExecuteArmGoal_Feedback__PHASE_PLANNING = 3
};

/// Constant 'PHASE_EXECUTING'.
enum
{
  arm_control__action__ExecuteArmGoal_Feedback__PHASE_EXECUTING = 4
};

/// Constant 'PHASE_STOPPING'.
enum
{
  arm_control__action__ExecuteArmGoal_Feedback__PHASE_STOPPING = 5
};

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteArmGoal in the package arm_control.
typedef struct arm_control__action__ExecuteArmGoal_Feedback
{
  uint8_t phase;
  rosidl_runtime_c__String message;
} arm_control__action__ExecuteArmGoal_Feedback;

// Struct for a sequence of arm_control__action__ExecuteArmGoal_Feedback.
typedef struct arm_control__action__ExecuteArmGoal_Feedback__Sequence
{
  arm_control__action__ExecuteArmGoal_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_control__action__ExecuteArmGoal_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "arm_control/action/detail/execute_arm_goal__struct.h"

/// Struct defined in action/ExecuteArmGoal in the package arm_control.
typedef struct arm_control__action__ExecuteArmGoal_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  arm_control__action__ExecuteArmGoal_Goal goal;
} arm_control__action__ExecuteArmGoal_SendGoal_Request;

// Struct for a sequence of arm_control__action__ExecuteArmGoal_SendGoal_Request.
typedef struct arm_control__action__ExecuteArmGoal_SendGoal_Request__Sequence
{
  arm_control__action__ExecuteArmGoal_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_control__action__ExecuteArmGoal_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteArmGoal in the package arm_control.
typedef struct arm_control__action__ExecuteArmGoal_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} arm_control__action__ExecuteArmGoal_SendGoal_Response;

// Struct for a sequence of arm_control__action__ExecuteArmGoal_SendGoal_Response.
typedef struct arm_control__action__ExecuteArmGoal_SendGoal_Response__Sequence
{
  arm_control__action__ExecuteArmGoal_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_control__action__ExecuteArmGoal_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteArmGoal in the package arm_control.
typedef struct arm_control__action__ExecuteArmGoal_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} arm_control__action__ExecuteArmGoal_GetResult_Request;

// Struct for a sequence of arm_control__action__ExecuteArmGoal_GetResult_Request.
typedef struct arm_control__action__ExecuteArmGoal_GetResult_Request__Sequence
{
  arm_control__action__ExecuteArmGoal_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_control__action__ExecuteArmGoal_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "arm_control/action/detail/execute_arm_goal__struct.h"

/// Struct defined in action/ExecuteArmGoal in the package arm_control.
typedef struct arm_control__action__ExecuteArmGoal_GetResult_Response
{
  int8_t status;
  arm_control__action__ExecuteArmGoal_Result result;
} arm_control__action__ExecuteArmGoal_GetResult_Response;

// Struct for a sequence of arm_control__action__ExecuteArmGoal_GetResult_Response.
typedef struct arm_control__action__ExecuteArmGoal_GetResult_Response__Sequence
{
  arm_control__action__ExecuteArmGoal_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_control__action__ExecuteArmGoal_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "arm_control/action/detail/execute_arm_goal__struct.h"

/// Struct defined in action/ExecuteArmGoal in the package arm_control.
typedef struct arm_control__action__ExecuteArmGoal_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  arm_control__action__ExecuteArmGoal_Feedback feedback;
} arm_control__action__ExecuteArmGoal_FeedbackMessage;

// Struct for a sequence of arm_control__action__ExecuteArmGoal_FeedbackMessage.
typedef struct arm_control__action__ExecuteArmGoal_FeedbackMessage__Sequence
{
  arm_control__action__ExecuteArmGoal_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_control__action__ExecuteArmGoal_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARM_CONTROL__ACTION__DETAIL__EXECUTE_ARM_GOAL__STRUCT_H_
