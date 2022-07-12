// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VideoFocusIndicationMessage.proto

#ifndef PROTOBUF_INCLUDED_VideoFocusIndicationMessage_2eproto
#define PROTOBUF_INCLUDED_VideoFocusIndicationMessage_2eproto

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
#include "VideoFocusModeEnum.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_VideoFocusIndicationMessage_2eproto 

namespace protobuf_VideoFocusIndicationMessage_2eproto {
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
}  // namespace protobuf_VideoFocusIndicationMessage_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class VideoFocusIndication;
class VideoFocusIndicationDefaultTypeInternal;
extern VideoFocusIndicationDefaultTypeInternal _VideoFocusIndication_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> ::f1x::aasdk::proto::messages::VideoFocusIndication* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::VideoFocusIndication>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class VideoFocusIndication : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.VideoFocusIndication) */ {
 public:
  VideoFocusIndication();
  virtual ~VideoFocusIndication();

  VideoFocusIndication(const VideoFocusIndication& from);

  inline VideoFocusIndication& operator=(const VideoFocusIndication& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VideoFocusIndication(VideoFocusIndication&& from) noexcept
    : VideoFocusIndication() {
    *this = ::std::move(from);
  }

  inline VideoFocusIndication& operator=(VideoFocusIndication&& from) noexcept {
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
  static const VideoFocusIndication& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VideoFocusIndication* internal_default_instance() {
    return reinterpret_cast<const VideoFocusIndication*>(
               &_VideoFocusIndication_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(VideoFocusIndication* other);
  friend void swap(VideoFocusIndication& a, VideoFocusIndication& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VideoFocusIndication* New() const final {
    return CreateMaybeMessage<VideoFocusIndication>(NULL);
  }

  VideoFocusIndication* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<VideoFocusIndication>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const VideoFocusIndication& from);
  void MergeFrom(const VideoFocusIndication& from);
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
  void InternalSwap(VideoFocusIndication* other);
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

  // required .f1x.aasdk.proto.enums.VideoFocusMode.Enum focus_mode = 1;
  bool has_focus_mode() const;
  void clear_focus_mode();
  static const int kFocusModeFieldNumber = 1;
  ::f1x::aasdk::proto::enums::VideoFocusMode_Enum focus_mode() const;
  void set_focus_mode(::f1x::aasdk::proto::enums::VideoFocusMode_Enum value);

  // required bool unrequested = 2;
  bool has_unrequested() const;
  void clear_unrequested();
  static const int kUnrequestedFieldNumber = 2;
  bool unrequested() const;
  void set_unrequested(bool value);

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.VideoFocusIndication)
 private:
  void set_has_focus_mode();
  void clear_has_focus_mode();
  void set_has_unrequested();
  void clear_has_unrequested();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  int focus_mode_;
  bool unrequested_;
  friend struct ::protobuf_VideoFocusIndicationMessage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VideoFocusIndication

// required .f1x.aasdk.proto.enums.VideoFocusMode.Enum focus_mode = 1;
inline bool VideoFocusIndication::has_focus_mode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VideoFocusIndication::set_has_focus_mode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VideoFocusIndication::clear_has_focus_mode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VideoFocusIndication::clear_focus_mode() {
  focus_mode_ = 0;
  clear_has_focus_mode();
}
inline ::f1x::aasdk::proto::enums::VideoFocusMode_Enum VideoFocusIndication::focus_mode() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.VideoFocusIndication.focus_mode)
  return static_cast< ::f1x::aasdk::proto::enums::VideoFocusMode_Enum >(focus_mode_);
}
inline void VideoFocusIndication::set_focus_mode(::f1x::aasdk::proto::enums::VideoFocusMode_Enum value) {
  assert(::f1x::aasdk::proto::enums::VideoFocusMode_Enum_IsValid(value));
  set_has_focus_mode();
  focus_mode_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.VideoFocusIndication.focus_mode)
}

// required bool unrequested = 2;
inline bool VideoFocusIndication::has_unrequested() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VideoFocusIndication::set_has_unrequested() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VideoFocusIndication::clear_has_unrequested() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VideoFocusIndication::clear_unrequested() {
  unrequested_ = false;
  clear_has_unrequested();
}
inline bool VideoFocusIndication::unrequested() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.VideoFocusIndication.unrequested)
  return unrequested_;
}
inline void VideoFocusIndication::set_unrequested(bool value) {
  set_has_unrequested();
  unrequested_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.VideoFocusIndication.unrequested)
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

#endif  // PROTOBUF_INCLUDED_VideoFocusIndicationMessage_2eproto
