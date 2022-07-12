// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVInputChannelData.proto

#ifndef PROTOBUF_INCLUDED_AVInputChannelData_2eproto
#define PROTOBUF_INCLUDED_AVInputChannelData_2eproto

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
#include "AVStreamTypeEnum.pb.h"
#include "AudioConfigData.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_AVInputChannelData_2eproto 

namespace protobuf_AVInputChannelData_2eproto {
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
}  // namespace protobuf_AVInputChannelData_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class AVInputChannel;
class AVInputChannelDefaultTypeInternal;
extern AVInputChannelDefaultTypeInternal _AVInputChannel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> ::f1x::aasdk::proto::data::AVInputChannel* Arena::CreateMaybeMessage<::f1x::aasdk::proto::data::AVInputChannel>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class AVInputChannel : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.data.AVInputChannel) */ {
 public:
  AVInputChannel();
  virtual ~AVInputChannel();

  AVInputChannel(const AVInputChannel& from);

  inline AVInputChannel& operator=(const AVInputChannel& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AVInputChannel(AVInputChannel&& from) noexcept
    : AVInputChannel() {
    *this = ::std::move(from);
  }

  inline AVInputChannel& operator=(AVInputChannel&& from) noexcept {
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
  static const AVInputChannel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AVInputChannel* internal_default_instance() {
    return reinterpret_cast<const AVInputChannel*>(
               &_AVInputChannel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AVInputChannel* other);
  friend void swap(AVInputChannel& a, AVInputChannel& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AVInputChannel* New() const final {
    return CreateMaybeMessage<AVInputChannel>(NULL);
  }

  AVInputChannel* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AVInputChannel>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AVInputChannel& from);
  void MergeFrom(const AVInputChannel& from);
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
  void InternalSwap(AVInputChannel* other);
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

  // required .f1x.aasdk.proto.data.AudioConfig audio_config = 2;
  bool has_audio_config() const;
  void clear_audio_config();
  static const int kAudioConfigFieldNumber = 2;
  private:
  const ::f1x::aasdk::proto::data::AudioConfig& _internal_audio_config() const;
  public:
  const ::f1x::aasdk::proto::data::AudioConfig& audio_config() const;
  ::f1x::aasdk::proto::data::AudioConfig* release_audio_config();
  ::f1x::aasdk::proto::data::AudioConfig* mutable_audio_config();
  void set_allocated_audio_config(::f1x::aasdk::proto::data::AudioConfig* audio_config);

  // required .f1x.aasdk.proto.enums.AVStreamType.Enum stream_type = 1;
  bool has_stream_type() const;
  void clear_stream_type();
  static const int kStreamTypeFieldNumber = 1;
  ::f1x::aasdk::proto::enums::AVStreamType_Enum stream_type() const;
  void set_stream_type(::f1x::aasdk::proto::enums::AVStreamType_Enum value);

  // optional bool available_while_in_call = 3;
  bool has_available_while_in_call() const;
  void clear_available_while_in_call();
  static const int kAvailableWhileInCallFieldNumber = 3;
  bool available_while_in_call() const;
  void set_available_while_in_call(bool value);

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.data.AVInputChannel)
 private:
  void set_has_stream_type();
  void clear_has_stream_type();
  void set_has_audio_config();
  void clear_has_audio_config();
  void set_has_available_while_in_call();
  void clear_has_available_while_in_call();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::f1x::aasdk::proto::data::AudioConfig* audio_config_;
  int stream_type_;
  bool available_while_in_call_;
  friend struct ::protobuf_AVInputChannelData_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AVInputChannel

// required .f1x.aasdk.proto.enums.AVStreamType.Enum stream_type = 1;
inline bool AVInputChannel::has_stream_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AVInputChannel::set_has_stream_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AVInputChannel::clear_has_stream_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AVInputChannel::clear_stream_type() {
  stream_type_ = 0;
  clear_has_stream_type();
}
inline ::f1x::aasdk::proto::enums::AVStreamType_Enum AVInputChannel::stream_type() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.AVInputChannel.stream_type)
  return static_cast< ::f1x::aasdk::proto::enums::AVStreamType_Enum >(stream_type_);
}
inline void AVInputChannel::set_stream_type(::f1x::aasdk::proto::enums::AVStreamType_Enum value) {
  assert(::f1x::aasdk::proto::enums::AVStreamType_Enum_IsValid(value));
  set_has_stream_type();
  stream_type_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.AVInputChannel.stream_type)
}

// required .f1x.aasdk.proto.data.AudioConfig audio_config = 2;
inline bool AVInputChannel::has_audio_config() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AVInputChannel::set_has_audio_config() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AVInputChannel::clear_has_audio_config() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::f1x::aasdk::proto::data::AudioConfig& AVInputChannel::_internal_audio_config() const {
  return *audio_config_;
}
inline const ::f1x::aasdk::proto::data::AudioConfig& AVInputChannel::audio_config() const {
  const ::f1x::aasdk::proto::data::AudioConfig* p = audio_config_;
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.AVInputChannel.audio_config)
  return p != NULL ? *p : *reinterpret_cast<const ::f1x::aasdk::proto::data::AudioConfig*>(
      &::f1x::aasdk::proto::data::_AudioConfig_default_instance_);
}
inline ::f1x::aasdk::proto::data::AudioConfig* AVInputChannel::release_audio_config() {
  // @@protoc_insertion_point(field_release:f1x.aasdk.proto.data.AVInputChannel.audio_config)
  clear_has_audio_config();
  ::f1x::aasdk::proto::data::AudioConfig* temp = audio_config_;
  audio_config_ = NULL;
  return temp;
}
inline ::f1x::aasdk::proto::data::AudioConfig* AVInputChannel::mutable_audio_config() {
  set_has_audio_config();
  if (audio_config_ == NULL) {
    auto* p = CreateMaybeMessage<::f1x::aasdk::proto::data::AudioConfig>(GetArenaNoVirtual());
    audio_config_ = p;
  }
  // @@protoc_insertion_point(field_mutable:f1x.aasdk.proto.data.AVInputChannel.audio_config)
  return audio_config_;
}
inline void AVInputChannel::set_allocated_audio_config(::f1x::aasdk::proto::data::AudioConfig* audio_config) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(audio_config_);
  }
  if (audio_config) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      audio_config = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, audio_config, submessage_arena);
    }
    set_has_audio_config();
  } else {
    clear_has_audio_config();
  }
  audio_config_ = audio_config;
  // @@protoc_insertion_point(field_set_allocated:f1x.aasdk.proto.data.AVInputChannel.audio_config)
}

// optional bool available_while_in_call = 3;
inline bool AVInputChannel::has_available_while_in_call() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AVInputChannel::set_has_available_while_in_call() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AVInputChannel::clear_has_available_while_in_call() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AVInputChannel::clear_available_while_in_call() {
  available_while_in_call_ = false;
  clear_has_available_while_in_call();
}
inline bool AVInputChannel::available_while_in_call() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.AVInputChannel.available_while_in_call)
  return available_while_in_call_;
}
inline void AVInputChannel::set_available_while_in_call(bool value) {
  set_has_available_while_in_call();
  available_while_in_call_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.AVInputChannel.available_while_in_call)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_AVInputChannelData_2eproto