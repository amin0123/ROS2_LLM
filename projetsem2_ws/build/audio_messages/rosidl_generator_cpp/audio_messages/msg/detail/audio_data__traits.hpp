// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_messages:msg/AudioData.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MESSAGES__MSG__DETAIL__AUDIO_DATA__TRAITS_HPP_
#define AUDIO_MESSAGES__MSG__DETAIL__AUDIO_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audio_messages/msg/detail/audio_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace audio_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const AudioData & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AudioData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AudioData & msg, bool use_flow_style = false)
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
  const audio_messages::msg::AudioData & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const audio_messages::msg::AudioData & msg)
{
  return audio_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<audio_messages::msg::AudioData>()
{
  return "audio_messages::msg::AudioData";
}

template<>
inline const char * name<audio_messages::msg::AudioData>()
{
  return "audio_messages/msg/AudioData";
}

template<>
struct has_fixed_size<audio_messages::msg::AudioData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audio_messages::msg::AudioData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audio_messages::msg::AudioData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUDIO_MESSAGES__MSG__DETAIL__AUDIO_DATA__TRAITS_HPP_
