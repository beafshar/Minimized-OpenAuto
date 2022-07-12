// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: InputEventIndicationMessage.proto

#ifndef PROTOBUF_INCLUDED_InputEventIndicationMessage_2eproto
#define PROTOBUF_INCLUDED_InputEventIndicationMessage_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "TouchEventData.pb.h"
#include "ButtonEventsData.pb.h"
#include "AbsoluteInputEventsData.pb.h"
#include "RelativeInputEventsData.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_InputEventIndicationMessage_2eproto 

namespace protobuf_InputEventIndicationMessage_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_InputEventIndicationMessage_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class InputEventIndication;
class InputEventIndicationDefaultTypeInternal;
extern InputEventIndicationDefaultTypeInternal _InputEventIndication_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> ::f1x::aasdk::proto::messages::InputEventIndication* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::InputEventIndication>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class InputEventIndication : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.InputEventIndication) */ {
 public:
  InputEventIndication();
  virtual ~InputEventIndication();

  InputEventIndication(const InputEventIndication& from);

  inline InputEventIndication& operator=(const InputEventIndication& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InputEventIndication(InputEventIndication&& from) noexcept
    : InputEventIndication() {
    *this = ::std::move(from);
  }

  inline InputEventIndication& operator=(InputEventIndication&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const InputEventIndication& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InputEventIndication* internal_default_instance() {
    return reinterpret_cast<const InputEventIndication*>(
               &_InputEventIndication_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(InputEventIndication* other);
  friend void swap(InputEventIndication& a, InputEventIndication& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InputEventIndication* New() const final {
    return CreateMaybeMessage<InputEventIndication>(NULL);
  }

  InputEventIndication* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<InputEventIndication>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const InputEventIndication& from);
  void MergeFrom(const InputEventIndication& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(InputEventIndication* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .f1x.aasdk.proto.data.TouchEvent touch_event = 3;
  bool has_touch_event() const;
  void clear_touch_event();
  static const int kTouchEventFieldNumber = 3;
  private:
  const ::f1x::aasdk::proto::data::TouchEvent& _internal_touch_event() const;
  public:
  const ::f1x::aasdk::proto::data::TouchEvent& touch_event() const;
  ::f1x::aasdk::proto::data::TouchEvent* release_touch_event();
  ::f1x::aasdk::proto::data::TouchEvent* mutable_touch_event();
  void set_allocated_touch_event(::f1x::aasdk::proto::data::TouchEvent* touch_event);

  // optional .f1x.aasdk.proto.data.ButtonEvents button_event = 4;
  bool has_button_event() const;
  void clear_button_event();
  static const int kButtonEventFieldNumber = 4;
  private:
  const ::f1x::aasdk::proto::data::ButtonEvents& _internal_button_event() const;
  public:
  const ::f1x::aasdk::proto::data::ButtonEvents& button_event() const;
  ::f1x::aasdk::proto::data::ButtonEvents* release_button_event();
  ::f1x::aasdk::proto::data::ButtonEvents* mutable_button_event();
  void set_allocated_button_event(::f1x::aasdk::proto::data::ButtonEvents* button_event);

  // optional .f1x.aasdk.proto.data.AbsoluteInputEvents absolute_input_event = 5;
  bool has_absolute_input_event() const;
  void clear_absolute_input_event();
  static const int kAbsoluteInputEventFieldNumber = 5;
  private:
  const ::f1x::aasdk::proto::data::AbsoluteInputEvents& _internal_absolute_input_event() const;
  public:
  const ::f1x::aasdk::proto::data::AbsoluteInputEvents& absolute_input_event() const;
  ::f1x::aasdk::proto::data::AbsoluteInputEvents* release_absolute_input_event();
  ::f1x::aasdk::proto::data::AbsoluteInputEvents* mutable_absolute_input_event();
  void set_allocated_absolute_input_event(::f1x::aasdk::proto::data::AbsoluteInputEvents* absolute_input_event);

  // optional .f1x.aasdk.proto.data.RelativeInputEvents relative_input_event = 6;
  bool has_relative_input_event() const;
  void clear_relative_input_event();
  static const int kRelativeInputEventFieldNumber = 6;
  private:
  const ::f1x::aasdk::proto::data::RelativeInputEvents& _internal_relative_input_event() const;
  public:
  const ::f1x::aasdk::proto::data::RelativeInputEvents& relative_input_event() const;
  ::f1x::aasdk::proto::data::RelativeInputEvents* release_relative_input_event();
  ::f1x::aasdk::proto::data::RelativeInputEvents* mutable_relative_input_event();
  void set_allocated_relative_input_event(::f1x::aasdk::proto::data::RelativeInputEvents* relative_input_event);

  // required uint64 timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  ::google::protobuf::uint64 timestamp() const;
  void set_timestamp(::google::protobuf::uint64 value);

  // optional int32 disp_channel = 2;
  bool has_disp_channel() const;
  void clear_disp_channel();
  static const int kDispChannelFieldNumber = 2;
  ::google::protobuf::int32 disp_channel() const;
  void set_disp_channel(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.InputEventIndication)
 private:
  void set_has_timestamp();
  void clear_has_timestamp();
  void set_has_disp_channel();
  void clear_has_disp_channel();
  void set_has_touch_event();
  void clear_has_touch_event();
  void set_has_button_event();
  void clear_has_button_event();
  void set_has_absolute_input_event();
  void clear_has_absolute_input_event();
  void set_has_relative_input_event();
  void clear_has_relative_input_event();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::f1x::aasdk::proto::data::TouchEvent* touch_event_;
  ::f1x::aasdk::proto::data::ButtonEvents* button_event_;
  ::f1x::aasdk::proto::data::AbsoluteInputEvents* absolute_input_event_;
  ::f1x::aasdk::proto::data::RelativeInputEvents* relative_input_event_;
  ::google::protobuf::uint64 timestamp_;
  ::google::protobuf::int32 disp_channel_;
  friend struct ::protobuf_InputEventIndicationMessage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InputEventIndication

// required uint64 timestamp = 1;
inline bool InputEventIndication::has_timestamp() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void InputEventIndication::set_has_timestamp() {
  _has_bits_[0] |= 0x00000010u;
}
inline void InputEventIndication::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void InputEventIndication::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::uint64 InputEventIndication::timestamp() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.InputEventIndication.timestamp)
  return timestamp_;
}
inline void InputEventIndication::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.InputEventIndication.timestamp)
}

// optional int32 disp_channel = 2;
inline bool InputEventIndication::has_disp_channel() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void InputEventIndication::set_has_disp_channel() {
  _has_bits_[0] |= 0x00000020u;
}
inline void InputEventIndication::clear_has_disp_channel() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void InputEventIndication::clear_disp_channel() {
  disp_channel_ = 0;
  clear_has_disp_channel();
}
inline ::google::protobuf::int32 InputEventIndication::disp_channel() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.InputEventIndication.disp_channel)
  return disp_channel_;
}
inline void InputEventIndication::set_disp_channel(::google::protobuf::int32 value) {
  set_has_disp_channel();
  disp_channel_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.InputEventIndication.disp_channel)
}

// optional .f1x.aasdk.proto.data.TouchEvent touch_event = 3;
inline bool InputEventIndication::has_touch_event() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InputEventIndication::set_has_touch_event() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InputEventIndication::clear_has_touch_event() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::f1x::aasdk::proto::data::TouchEvent& InputEventIndication::_internal_touch_event() const {
  return *touch_event_;
}
inline const ::f1x::aasdk::proto::data::TouchEvent& InputEventIndication::touch_event() const {
  const ::f1x::aasdk::proto::data::TouchEvent* p = touch_event_;
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.InputEventIndication.touch_event)
  return p != NULL ? *p : *reinterpret_cast<const ::f1x::aasdk::proto::data::TouchEvent*>(
      &::f1x::aasdk::proto::data::_TouchEvent_default_instance_);
}
inline ::f1x::aasdk::proto::data::TouchEvent* InputEventIndication::release_touch_event() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.messages.InputEventIndication.touch_event)
  clear_has_touch_event();
  ::f1x::aasdk::proto::data::TouchEvent* temp = touch_event_;
  touch_event_ = NULL;
  return temp;
}
inline ::f1x::aasdk::proto::data::TouchEvent* InputEventIndication::mutable_touch_event() {
  set_has_touch_event();
  if (touch_event_ == NULL) {
    auto* p = CreateMaybeMessage<::f1x::aasdk::proto::data::TouchEvent>(GetArenaNoVirtual());
    touch_event_ = p;
  }
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.messages.InputEventIndication.touch_event)
  return touch_event_;
}
inline void InputEventIndication::set_allocated_touch_event(::f1x::aasdk::proto::data::TouchEvent* touch_event) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(touch_event_);
  }
  if (touch_event) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      touch_event = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, touch_event, submessage_arena);
    }
    set_has_touch_event();
  } else {
    clear_has_touch_event();
  }
  touch_event_ = touch_event;
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.messages.InputEventIndication.touch_event)
}

// optional .f1x.aasdk.proto.data.ButtonEvents button_event = 4;
inline bool InputEventIndication::has_button_event() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InputEventIndication::set_has_button_event() {
  _has_bits_[0] |= 0x00000002u;
}
inline void InputEventIndication::clear_has_button_event() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::f1x::aasdk::proto::data::ButtonEvents& InputEventIndication::_internal_button_event() const {
  return *button_event_;
}
inline const ::f1x::aasdk::proto::data::ButtonEvents& InputEventIndication::button_event() const {
  const ::f1x::aasdk::proto::data::ButtonEvents* p = button_event_;
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.InputEventIndication.button_event)
  return p != NULL ? *p : *reinterpret_cast<const ::f1x::aasdk::proto::data::ButtonEvents*>(
      &::f1x::aasdk::proto::data::_ButtonEvents_default_instance_);
}
inline ::f1x::aasdk::proto::data::ButtonEvents* InputEventIndication::release_button_event() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.messages.InputEventIndication.button_event)
  clear_has_button_event();
  ::f1x::aasdk::proto::data::ButtonEvents* temp = button_event_;
  button_event_ = NULL;
  return temp;
}
inline ::f1x::aasdk::proto::data::ButtonEvents* InputEventIndication::mutable_button_event() {
  set_has_button_event();
  if (button_event_ == NULL) {
    auto* p = CreateMaybeMessage<::f1x::aasdk::proto::data::ButtonEvents>(GetArenaNoVirtual());
    button_event_ = p;
  }
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.messages.InputEventIndication.button_event)
  return button_event_;
}
inline void InputEventIndication::set_allocated_button_event(::f1x::aasdk::proto::data::ButtonEvents* button_event) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(button_event_);
  }
  if (button_event) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      button_event = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, button_event, submessage_arena);
    }
    set_has_button_event();
  } else {
    clear_has_button_event();
  }
  button_event_ = button_event;
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.messages.InputEventIndication.button_event)
}

// optional .f1x.aasdk.proto.data.AbsoluteInputEvents absolute_input_event = 5;
inline bool InputEventIndication::has_absolute_input_event() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void InputEventIndication::set_has_absolute_input_event() {
  _has_bits_[0] |= 0x00000004u;
}
inline void InputEventIndication::clear_has_absolute_input_event() {
  _has_bits_[0] &= ~0x00000004u;
}
inline const ::f1x::aasdk::proto::data::AbsoluteInputEvents& InputEventIndication::_internal_absolute_input_event() const {
  return *absolute_input_event_;
}
inline const ::f1x::aasdk::proto::data::AbsoluteInputEvents& InputEventIndication::absolute_input_event() const {
  const ::f1x::aasdk::proto::data::AbsoluteInputEvents* p = absolute_input_event_;
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.InputEventIndication.absolute_input_event)
  return p != NULL ? *p : *reinterpret_cast<const ::f1x::aasdk::proto::data::AbsoluteInputEvents*>(
      &::f1x::aasdk::proto::data::_AbsoluteInputEvents_default_instance_);
}
inline ::f1x::aasdk::proto::data::AbsoluteInputEvents* InputEventIndication::release_absolute_input_event() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.messages.InputEventIndication.absolute_input_event)
  clear_has_absolute_input_event();
  ::f1x::aasdk::proto::data::AbsoluteInputEvents* temp = absolute_input_event_;
  absolute_input_event_ = NULL;
  return temp;
}
inline ::f1x::aasdk::proto::data::AbsoluteInputEvents* InputEventIndication::mutable_absolute_input_event() {
  set_has_absolute_input_event();
  if (absolute_input_event_ == NULL) {
    auto* p = CreateMaybeMessage<::f1x::aasdk::proto::data::AbsoluteInputEvents>(GetArenaNoVirtual());
    absolute_input_event_ = p;
  }
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.messages.InputEventIndication.absolute_input_event)
  return absolute_input_event_;
}
inline void InputEventIndication::set_allocated_absolute_input_event(::f1x::aasdk::proto::data::AbsoluteInputEvents* absolute_input_event) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(absolute_input_event_);
  }
  if (absolute_input_event) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      absolute_input_event = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, absolute_input_event, submessage_arena);
    }
    set_has_absolute_input_event();
  } else {
    clear_has_absolute_input_event();
  }
  absolute_input_event_ = absolute_input_event;
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.messages.InputEventIndication.absolute_input_event)
}

// optional .f1x.aasdk.proto.data.RelativeInputEvents relative_input_event = 6;
inline bool InputEventIndication::has_relative_input_event() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void InputEventIndication::set_has_relative_input_event() {
  _has_bits_[0] |= 0x00000008u;
}
inline void InputEventIndication::clear_has_relative_input_event() {
  _has_bits_[0] &= ~0x00000008u;
}
inline const ::f1x::aasdk::proto::data::RelativeInputEvents& InputEventIndication::_internal_relative_input_event() const {
  return *relative_input_event_;
}
inline const ::f1x::aasdk::proto::data::RelativeInputEvents& InputEventIndication::relative_input_event() const {
  const ::f1x::aasdk::proto::data::RelativeInputEvents* p = relative_input_event_;
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.InputEventIndication.relative_input_event)
  return p != NULL ? *p : *reinterpret_cast<const ::f1x::aasdk::proto::data::RelativeInputEvents*>(
      &::f1x::aasdk::proto::data::_RelativeInputEvents_default_instance_);
}
inline ::f1x::aasdk::proto::data::RelativeInputEvents* InputEventIndication::release_relative_input_event() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.messages.InputEventIndication.relative_input_event)
  clear_has_relative_input_event();
  ::f1x::aasdk::proto::data::RelativeInputEvents* temp = relative_input_event_;
  relative_input_event_ = NULL;
  return temp;
}
inline ::f1x::aasdk::proto::data::RelativeInputEvents* InputEventIndication::mutable_relative_input_event() {
  set_has_relative_input_event();
  if (relative_input_event_ == NULL) {
    auto* p = CreateMaybeMessage<::f1x::aasdk::proto::data::RelativeInputEvents>(GetArenaNoVirtual());
    relative_input_event_ = p;
  }
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.messages.InputEventIndication.relative_input_event)
  return relative_input_event_;
}
inline void InputEventIndication::set_allocated_relative_input_event(::f1x::aasdk::proto::data::RelativeInputEvents* relative_input_event) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(relative_input_event_);
  }
  if (relative_input_event) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      relative_input_event = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, relative_input_event, submessage_arena);
    }
    set_has_relative_input_event();
  } else {
    clear_has_relative_input_event();
  }
  relative_input_event_ = relative_input_event;
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.messages.InputEventIndication.relative_input_event)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_InputEventIndicationMessage_2eproto
