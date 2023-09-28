// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from planning_interfaces:msg/Trajectories.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__FUNCTIONS_H_
#define PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "planning_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "planning_interfaces/msg/detail/trajectories__struct.h"

/// Initialize msg/Trajectories message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * planning_interfaces__msg__Trajectories
 * )) before or use
 * planning_interfaces__msg__Trajectories__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__msg__Trajectories__init(planning_interfaces__msg__Trajectories * msg);

/// Finalize msg/Trajectories message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__msg__Trajectories__fini(planning_interfaces__msg__Trajectories * msg);

/// Create msg/Trajectories message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * planning_interfaces__msg__Trajectories__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__msg__Trajectories *
planning_interfaces__msg__Trajectories__create();

/// Destroy msg/Trajectories message.
/**
 * It calls
 * planning_interfaces__msg__Trajectories__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__msg__Trajectories__destroy(planning_interfaces__msg__Trajectories * msg);


/// Initialize array of msg/Trajectories messages.
/**
 * It allocates the memory for the number of elements and calls
 * planning_interfaces__msg__Trajectories__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
bool
planning_interfaces__msg__Trajectories__Sequence__init(planning_interfaces__msg__Trajectories__Sequence * array, size_t size);

/// Finalize array of msg/Trajectories messages.
/**
 * It calls
 * planning_interfaces__msg__Trajectories__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__msg__Trajectories__Sequence__fini(planning_interfaces__msg__Trajectories__Sequence * array);

/// Create array of msg/Trajectories messages.
/**
 * It allocates the memory for the array and calls
 * planning_interfaces__msg__Trajectories__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
planning_interfaces__msg__Trajectories__Sequence *
planning_interfaces__msg__Trajectories__Sequence__create(size_t size);

/// Destroy array of msg/Trajectories messages.
/**
 * It calls
 * planning_interfaces__msg__Trajectories__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_planning_interfaces
void
planning_interfaces__msg__Trajectories__Sequence__destroy(planning_interfaces__msg__Trajectories__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_INTERFACES__MSG__DETAIL__TRAJECTORIES__FUNCTIONS_H_
