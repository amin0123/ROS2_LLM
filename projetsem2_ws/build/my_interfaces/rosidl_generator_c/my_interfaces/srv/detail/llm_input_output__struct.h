// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:srv/LlmInputOutput.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__LLM_INPUT_OUTPUT__STRUCT_H_
#define MY_INTERFACES__SRV__DETAIL__LLM_INPUT_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LlmInputOutput in the package my_interfaces.
typedef struct my_interfaces__srv__LlmInputOutput_Request
{
  rosidl_runtime_c__String input;
} my_interfaces__srv__LlmInputOutput_Request;

// Struct for a sequence of my_interfaces__srv__LlmInputOutput_Request.
typedef struct my_interfaces__srv__LlmInputOutput_Request__Sequence
{
  my_interfaces__srv__LlmInputOutput_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__LlmInputOutput_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LlmInputOutput in the package my_interfaces.
typedef struct my_interfaces__srv__LlmInputOutput_Response
{
  rosidl_runtime_c__String output;
} my_interfaces__srv__LlmInputOutput_Response;

// Struct for a sequence of my_interfaces__srv__LlmInputOutput_Response.
typedef struct my_interfaces__srv__LlmInputOutput_Response__Sequence
{
  my_interfaces__srv__LlmInputOutput_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__LlmInputOutput_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__SRV__DETAIL__LLM_INPUT_OUTPUT__STRUCT_H_
