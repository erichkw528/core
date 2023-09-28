// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_interfaces:action/Control.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__ACTION__DETAIL__CONTROL__STRUCT_H_
#define CONTROL_INTERFACES__ACTION__DETAIL__CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"

// Struct defined in action/Control in the package control_interfaces.
typedef struct control_interfaces__action__Control_Goal
{
  nav_msgs__msg__Path path;
  int32_t target_spd;
  bool overwrite_previous;
} control_interfaces__action__Control_Goal;

// Struct for a sequence of control_interfaces__action__Control_Goal.
typedef struct control_interfaces__action__Control_Goal__Sequence
{
  control_interfaces__action__Control_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__Control_Goal__Sequence;


// Constants defined in the message

/// Constant 'NORMAL'.
enum
{
  control_interfaces__action__Control_Result__NORMAL = 1
};

/// Constant 'FAILED'.
enum
{
  control_interfaces__action__Control_Result__FAILED = 2
};

// Struct defined in action/Control in the package control_interfaces.
typedef struct control_interfaces__action__Control_Result
{
  int8_t status;
} control_interfaces__action__Control_Result;

// Struct for a sequence of control_interfaces__action__Control_Result.
typedef struct control_interfaces__action__Control_Result__Sequence
{
  control_interfaces__action__Control_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__Control_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Control in the package control_interfaces.
typedef struct control_interfaces__action__Control_Feedback
{
  uint32_t curr_index;
} control_interfaces__action__Control_Feedback;

// Struct for a sequence of control_interfaces__action__Control_Feedback.
typedef struct control_interfaces__action__Control_Feedback__Sequence
{
  control_interfaces__action__Control_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__Control_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "control_interfaces/action/detail/control__struct.h"

// Struct defined in action/Control in the package control_interfaces.
typedef struct control_interfaces__action__Control_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_interfaces__action__Control_Goal goal;
} control_interfaces__action__Control_SendGoal_Request;

// Struct for a sequence of control_interfaces__action__Control_SendGoal_Request.
typedef struct control_interfaces__action__Control_SendGoal_Request__Sequence
{
  control_interfaces__action__Control_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__Control_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Control in the package control_interfaces.
typedef struct control_interfaces__action__Control_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} control_interfaces__action__Control_SendGoal_Response;

// Struct for a sequence of control_interfaces__action__Control_SendGoal_Response.
typedef struct control_interfaces__action__Control_SendGoal_Response__Sequence
{
  control_interfaces__action__Control_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__Control_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Control in the package control_interfaces.
typedef struct control_interfaces__action__Control_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} control_interfaces__action__Control_GetResult_Request;

// Struct for a sequence of control_interfaces__action__Control_GetResult_Request.
typedef struct control_interfaces__action__Control_GetResult_Request__Sequence
{
  control_interfaces__action__Control_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__Control_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "control_interfaces/action/detail/control__struct.h"

// Struct defined in action/Control in the package control_interfaces.
typedef struct control_interfaces__action__Control_GetResult_Response
{
  int8_t status;
  control_interfaces__action__Control_Result result;
} control_interfaces__action__Control_GetResult_Response;

// Struct for a sequence of control_interfaces__action__Control_GetResult_Response.
typedef struct control_interfaces__action__Control_GetResult_Response__Sequence
{
  control_interfaces__action__Control_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__Control_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "control_interfaces/action/detail/control__struct.h"

// Struct defined in action/Control in the package control_interfaces.
typedef struct control_interfaces__action__Control_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_interfaces__action__Control_Feedback feedback;
} control_interfaces__action__Control_FeedbackMessage;

// Struct for a sequence of control_interfaces__action__Control_FeedbackMessage.
typedef struct control_interfaces__action__Control_FeedbackMessage__Sequence
{
  control_interfaces__action__Control_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__Control_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_INTERFACES__ACTION__DETAIL__CONTROL__STRUCT_H_
