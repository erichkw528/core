// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from planning_interfaces:action/TrajectoryGeneration.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__ACTION__DETAIL__TRAJECTORY_GENERATION__FUNCTIONS_H_
#define PLANNING_INTERFACES__ACTION__DETAIL__TRAJECTORY_GENERATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "planning_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "planning_interfaces/action/detail/trajectory_generation__struct.h"

/// Initialize action/TrajectoryGeneration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * planning_interfaces__action__TrajectoryGeneration_Goal
 * )) before or use
 * planning_interfaces__action__TrajectoryGeneration_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_Goal__init(planning_interfaces__action__TrajectoryGeneration_Goal * msg);

/// Finalize action/TrajectoryGeneration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_Goal__fini(planning_interfaces__action__TrajectoryGeneration_Goal * msg);

/// Create action/TrajectoryGeneration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * planning_interfaces__action__TrajectoryGeneration_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_Goal *
planning_interfaces__action__TrajectoryGeneration_Goal__create();

/// Destroy action/TrajectoryGeneration message.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_Goal__destroy(planning_interfaces__action__TrajectoryGeneration_Goal * msg);


/// Initialize array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the number of elements and calls
 * planning_interfaces__action__TrajectoryGeneration_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_Goal__Sequence__init(planning_interfaces__action__TrajectoryGeneration_Goal__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_Goal__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_Goal__Sequence * array);

/// Create array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the array and calls
 * planning_interfaces__action__TrajectoryGeneration_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_Goal__Sequence *
planning_interfaces__action__TrajectoryGeneration_Goal__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_Goal__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_Goal__Sequence * array);

/// Initialize action/TrajectoryGeneration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * planning_interfaces__action__TrajectoryGeneration_Result
 * )) before or use
 * planning_interfaces__action__TrajectoryGeneration_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_Result__init(planning_interfaces__action__TrajectoryGeneration_Result * msg);

/// Finalize action/TrajectoryGeneration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_Result__fini(planning_interfaces__action__TrajectoryGeneration_Result * msg);

/// Create action/TrajectoryGeneration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * planning_interfaces__action__TrajectoryGeneration_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_Result *
planning_interfaces__action__TrajectoryGeneration_Result__create();

/// Destroy action/TrajectoryGeneration message.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_Result__destroy(planning_interfaces__action__TrajectoryGeneration_Result * msg);


/// Initialize array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the number of elements and calls
 * planning_interfaces__action__TrajectoryGeneration_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_Result__Sequence__init(planning_interfaces__action__TrajectoryGeneration_Result__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_Result__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_Result__Sequence * array);

/// Create array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the array and calls
 * planning_interfaces__action__TrajectoryGeneration_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_Result__Sequence *
planning_interfaces__action__TrajectoryGeneration_Result__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_Result__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_Result__Sequence * array);

/// Initialize action/TrajectoryGeneration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * planning_interfaces__action__TrajectoryGeneration_Feedback
 * )) before or use
 * planning_interfaces__action__TrajectoryGeneration_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_Feedback__init(planning_interfaces__action__TrajectoryGeneration_Feedback * msg);

/// Finalize action/TrajectoryGeneration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_Feedback__fini(planning_interfaces__action__TrajectoryGeneration_Feedback * msg);

/// Create action/TrajectoryGeneration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * planning_interfaces__action__TrajectoryGeneration_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_Feedback *
planning_interfaces__action__TrajectoryGeneration_Feedback__create();

/// Destroy action/TrajectoryGeneration message.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_Feedback__destroy(planning_interfaces__action__TrajectoryGeneration_Feedback * msg);


/// Initialize array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the number of elements and calls
 * planning_interfaces__action__TrajectoryGeneration_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence__init(planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence * array);

/// Create array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the array and calls
 * planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence *
planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_Feedback__Sequence * array);

/// Initialize action/TrajectoryGeneration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Request
 * )) before or use
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__init(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request * msg);

/// Finalize action/TrajectoryGeneration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__fini(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request * msg);

/// Create action/TrajectoryGeneration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request *
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__create();

/// Destroy action/TrajectoryGeneration message.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__destroy(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request * msg);


/// Initialize array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the number of elements and calls
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence__init(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence * array);

/// Create array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the array and calls
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence *
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_SendGoal_Request__Sequence * array);

/// Initialize action/TrajectoryGeneration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Response
 * )) before or use
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__init(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response * msg);

/// Finalize action/TrajectoryGeneration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__fini(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response * msg);

/// Create action/TrajectoryGeneration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response *
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__create();

/// Destroy action/TrajectoryGeneration message.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__destroy(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response * msg);


/// Initialize array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the number of elements and calls
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence__init(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence * array);

/// Create array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the array and calls
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence *
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_SendGoal_Response__Sequence * array);

/// Initialize action/TrajectoryGeneration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Request
 * )) before or use
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__init(planning_interfaces__action__TrajectoryGeneration_GetResult_Request * msg);

/// Finalize action/TrajectoryGeneration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__fini(planning_interfaces__action__TrajectoryGeneration_GetResult_Request * msg);

/// Create action/TrajectoryGeneration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_GetResult_Request *
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__create();

/// Destroy action/TrajectoryGeneration message.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__destroy(planning_interfaces__action__TrajectoryGeneration_GetResult_Request * msg);


/// Initialize array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the number of elements and calls
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence__init(planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence * array);

/// Create array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the array and calls
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence *
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_GetResult_Request__Sequence * array);

/// Initialize action/TrajectoryGeneration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Response
 * )) before or use
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__init(planning_interfaces__action__TrajectoryGeneration_GetResult_Response * msg);

/// Finalize action/TrajectoryGeneration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__fini(planning_interfaces__action__TrajectoryGeneration_GetResult_Response * msg);

/// Create action/TrajectoryGeneration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_GetResult_Response *
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__create();

/// Destroy action/TrajectoryGeneration message.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__destroy(planning_interfaces__action__TrajectoryGeneration_GetResult_Response * msg);


/// Initialize array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the number of elements and calls
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence__init(planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence * array);

/// Create array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the array and calls
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence *
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_GetResult_Response__Sequence * array);

/// Initialize action/TrajectoryGeneration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * planning_interfaces__action__TrajectoryGeneration_FeedbackMessage
 * )) before or use
 * planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__init(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage * msg);

/// Finalize action/TrajectoryGeneration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__fini(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage * msg);

/// Create action/TrajectoryGeneration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage *
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__create();

/// Destroy action/TrajectoryGeneration message.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__destroy(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage * msg);


/// Initialize array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the number of elements and calls
 * planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence__init(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence__fini(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence * array);

/// Create array of action/TrajectoryGeneration messages.
/**
 * It allocates the memory for the array and calls
 * planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence *
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/TrajectoryGeneration messages.
/**
 * It calls
 * planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence__destroy(planning_interfaces__action__TrajectoryGeneration_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_INTERFACES__ACTION__DETAIL__TRAJECTORY_GENERATION__FUNCTIONS_H_
