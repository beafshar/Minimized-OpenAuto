// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AudioFocusResponseMessage.proto

#ifndef PROTOBUF_INCLUDED_AudioFocusResponseMessage_2eproto
#define PROTOBUF_INCLUDED_AudioFocusResponseMessage_2eproto

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
#include "AudioFocusStateEnum.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_AudioFocusResponseMessage_2eproto 

namespace protobuf_AudioFocusResponseMessage_2eproto {
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
}  // namespace protobuf_AudioFocusResponseMessage_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class AudioFocusResponse;
class AudioFocusResponseDefaultTypeInternal;
extern AudioFocusResponseDefaultTypeInternal _AudioFocusResponse_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> ::f1x::aasdk::proto::messages::AudioFocusResponse* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::AudioFocusResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class AudioFocusResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.AudioFocusResponse) */ {
 public:
  AudioFocusResponse();
  virtual ~AudioFocusResponse();

  AudioFocusResponse(const AudioFocusResponse& from);

  inline AudioFocusResponse& operator=(const AudioFocusResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AudioFocusResponse(AudioFocusResponse&& from) noexcept
    : AudioFocusResponse() {
    *this = ::std::move(from);
  }

  inline AudioFocusResponse& operator=(AudioFocusResponse&& from) noexcept {
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
  static const AudioFocusResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AudioFocusResponse* internal_default_instance() {
    return reinterpret_cast<const AudioFocusResponse*>(
               &_AudioFocusResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AudioFocusResponse* other);
  friend void swap(AudioFocusResponse& a, AudioFocusResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AudioFocusResponse* New() const final {
    return CreateMaybeMessage<AudioFocusResponse>(NULL);
  }

  AudioFocusResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AudioFocusResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AudioFocusResponse& from);
  void MergeFrom(const AudioFocusResponse& from);
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
  void InternalSwap(AudioFocusResponse* other);
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

  // required .f1x.aasdk.proto.enums.AudioFocusState.Enum audio_focus_state = 1;
  bool has_audio_focus_state() const;
  void clear_audio_focus_state();
  static const int kAudioFocusStateFieldNumber = 1;
  ::f1x::aasdk::proto::enums::AudioFocusState_Enum audio_focus_state() const;
  void set_audio_focus_state(::f1x::aasdk::proto::enums::AudioFocusState_Enum value);

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.AudioFocusResponse)
 private:
  void set_has_audio_focus_state();
  void clear_has_audio_focus_state();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  int audio_focus_state_;
  friend struct ::protobuf_AudioFocusResponseMessage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AudioFocusResponse

// required .f1x.aasdk.proto.enums.AudioFocusState.Enum audio_focus_state = 1;
inline bool AudioFocusResponse::has_audio_focus_state() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AudioFocusResponse::set_has_audio_focus_state() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AudioFocusResponse::clear_has_audio_focus_state() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AudioFocusResponse::clear_audio_focus_state() {
  audio_focus_state_ = 0;
  clear_has_audio_focus_state();
}
inline ::f1x::aasdk::proto::enums::AudioFocusState_Enum AudioFocusResponse::audio_focus_state() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.AudioFocusResponse.audio_focus_state)
  return static_cast< ::f1x::aasdk::proto::enums::AudioFocusState_Enum >(audio_focus_state_);
}
inline void AudioFocusResponse::set_audio_focus_state(::f1x::aasdk::proto::enums::AudioFocusState_Enum value) {
  assert(::f1x::aasdk::proto::enums::AudioFocusState_Enum_IsValid(value));
  set_has_audio_focus_state();
  audio_focus_state_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.AudioFocusResponse.audio_focus_state)
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

#endif  // PROTOBUF_INCLUDED_AudioFocusResponseMessage_2eproto
