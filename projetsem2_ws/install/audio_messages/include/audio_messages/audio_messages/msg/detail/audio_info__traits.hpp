// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_messages:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MESSAGES__MSG__DETAIL__AUDIO_INFO__TRAITS_HPP_
#define AUDIO_MESSAGES__MSG__DETAIL__AUDIO_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audio_messages/msg/detail/audio_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace audio_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const AudioInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_channels
  {
    out << "num_channels: ";
    rosidl_generator_traits::value_to_yaml(msg.num_channels, out);
    out << ", ";
  }

  // member: sample_rate
  {
    out << "sample_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_rate, out);
    out << ", ";
  }

  // member: subtype
  {
    out << "subtype: ";
    rosidl_generator_traits::value_to_yaml(msg.subtype, out);
    out << ", ";
  }

  // member: uuid
  {
    out << "uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.uuid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AudioInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_channels: ";
    rosidl_generator_traits::value_to_yaml(msg.num_channels, out);
    out << "\n";
  }

  // member: sample_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_rate, out);
    out << "\n";
  }

  // member: subtype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subtype: ";
    rosidl_generator_traits::value_to_yaml(msg.subtype, out);
    out << "\n";
  }

  // member: uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.uuid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AudioInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace audio_messages

namespace rosidl_generator_traits
{

[[deprecated("use audio_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_messages::msg::AudioInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const audio_messages::msg::AudioInfo & msg)
{
  return audio_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<audio_messages::msg::AudioInfo>()
{
  return "audio_messages::msg::AudioInfo";
}

template<>
inline const char * name<audio_messages::msg::AudioInfo>()
{
  return "audio_messages/msg/AudioInfo";
}

template<>
struct has_fixed_size<audio_messages::msg::AudioInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audio_messages::msg::AudioInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audio_messages::msg::AudioInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUDIO_MESSAGES__MSG__DETAIL__AUDIO_INFO__TRAITS_HPP_
