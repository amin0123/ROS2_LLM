// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from audio_messages:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "audio_messages/msg/detail/audio_info__rosidl_typesupport_introspection_c.h"
#include "audio_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "audio_messages/msg/detail/audio_info__functions.h"
#include "audio_messages/msg/detail/audio_info__struct.h"


// Include directives for member types
// Member `subtype`
// Member `uuid`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void audio_messages__msg__AudioInfo__rosidl_typesupport_introspection_c__AudioInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  audio_messages__msg__AudioInfo__init(message_memory);
}

void audio_messages__msg__AudioInfo__rosidl_typesupport_introspection_c__AudioInfo_fini_function(void * message_memory)
{
  audio_messages__msg__AudioInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember audio_messages__msg__AudioInfo__rosidl_typesupport_introspection_c__AudioInfo_message_member_array[4] = {
  {
    "num_channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_messages__msg__AudioInfo, num_channels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sample_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_messages__msg__AudioInfo, sample_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subtype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_messages__msg__AudioInfo, subtype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_messages__msg__AudioInfo, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers audio_messages__msg__AudioInfo__rosidl_typesupport_introspection_c__AudioInfo_message_members = {
  "audio_messages__msg",  // message namespace
  "AudioInfo",  // message name
  4,  // number of fields
  sizeof(audio_messages__msg__AudioInfo),
  audio_messages__msg__AudioInfo__rosidl_typesupport_introspection_c__AudioInfo_message_member_array,  // message members
  audio_messages__msg__AudioInfo__rosidl_typesupport_introspection_c__AudioInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  audio_messages__msg__AudioInfo__rosidl_typesupport_introspection_c__AudioInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t audio_messages__msg__AudioInfo__rosidl_typesupport_introspection_c__AudioInfo_message_type_support_handle = {
  0,
  &audio_messages__msg__AudioInfo__rosidl_typesupport_introspection_c__AudioInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_audio_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audio_messages, msg, AudioInfo)() {
  if (!audio_messages__msg__AudioInfo__rosidl_typesupport_introspection_c__AudioInfo_message_type_support_handle.typesupport_identifier) {
    audio_messages__msg__AudioInfo__rosidl_typesupport_introspection_c__AudioInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &audio_messages__msg__AudioInfo__rosidl_typesupport_introspection_c__AudioInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
