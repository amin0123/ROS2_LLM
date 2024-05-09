// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_messages:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MESSAGES__MSG__DETAIL__AUDIO_INFO__STRUCT_H_
#define AUDIO_MESSAGES__MSG__DETAIL__AUDIO_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'subtype'
// Member 'uuid'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AudioInfo in the package audio_messages.
/**
  * AudioInfo
 */
typedef struct audio_messages__msg__AudioInfo
{
  int32_t num_channels;
  int32_t sample_rate;
  rosidl_runtime_c__String subtype;
  rosidl_runtime_c__String uuid;
} audio_messages__msg__AudioInfo;

// Struct for a sequence of audio_messages__msg__AudioInfo.
typedef struct audio_messages__msg__AudioInfo__Sequence
{
  audio_messages__msg__AudioInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_messages__msg__AudioInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_MESSAGES__MSG__DETAIL__AUDIO_INFO__STRUCT_H_
