// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VideoConfigData.proto

#ifndef PROTOBUF_INCLUDED_VideoConfigData_2eproto
#define PROTOBUF_INCLUDED_VideoConfigData_2eproto

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
#include "VideoResolutionEnum.pb.h"
#include "VideoFPSEnum.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_VideoConfigData_2eproto 

namespace protobuf_VideoConfigData_2eproto {
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
}  // namespace protobuf_VideoConfigData_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class VideoConfig;
class VideoConfigDefaultTypeInternal;
extern VideoConfigDefaultTypeInternal _VideoConfig_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> ::f1x::aasdk::proto::data::VideoConfig* Arena::CreateMaybeMessage<::f1x::aasdk::proto::data::VideoConfig>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class VideoConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.data.VideoConfig) */ {
 public:
  VideoConfig();
  virtual ~VideoConfig();

  VideoConfig(const VideoConfig& from);

  inline VideoConfig& operator=(const VideoConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VideoConfig(VideoConfig&& from) noexcept
    : VideoConfig() {
    *this = ::std::move(from);
  }

  inline VideoConfig& operator=(VideoConfig&& from) noexcept {
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
  static const VideoConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VideoConfig* internal_default_instance() {
    return reinterpret_cast<const VideoConfig*>(
               &_VideoConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(VideoConfig* other);
  friend void swap(VideoConfig& a, VideoConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VideoConfig* New() const final {
    return CreateMaybeMessage<VideoConfig>(NULL);
  }

  VideoConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<VideoConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const VideoConfig& from);
  void MergeFrom(const VideoConfig& from);
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
  void InternalSwap(VideoConfig* other);
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

  // required .f1x.aasdk.proto.enums.VideoResolution.Enum video_resolution = 1;
  bool has_video_resolution() const;
  void clear_video_resolution();
  static const int kVideoResolutionFieldNumber = 1;
  ::f1x::aasdk::proto::enums::VideoResolution_Enum video_resolution() const;
  void set_video_resolution(::f1x::aasdk::proto::enums::VideoResolution_Enum value);

  // required .f1x.aasdk.proto.enums.VideoFPS.Enum video_fps = 2;
  bool has_video_fps() const;
  void clear_video_fps();
  static const int kVideoFpsFieldNumber = 2;
  ::f1x::aasdk::proto::enums::VideoFPS_Enum video_fps() const;
  void set_video_fps(::f1x::aasdk::proto::enums::VideoFPS_Enum value);

  // required uint32 margin_width = 3;
  bool has_margin_width() const;
  void clear_margin_width();
  static const int kMarginWidthFieldNumber = 3;
  ::google::protobuf::uint32 margin_width() const;
  void set_margin_width(::google::protobuf::uint32 value);

  // required uint32 margin_height = 4;
  bool has_margin_height() const;
  void clear_margin_height();
  static const int kMarginHeightFieldNumber = 4;
  ::google::protobuf::uint32 margin_height() const;
  void set_margin_height(::google::protobuf::uint32 value);

  // required uint32 dpi = 5;
  bool has_dpi() const;
  void clear_dpi();
  static const int kDpiFieldNumber = 5;
  ::google::protobuf::uint32 dpi() const;
  void set_dpi(::google::protobuf::uint32 value);

  // optional uint32 additional_depth = 6;
  bool has_additional_depth() const;
  void clear_additional_depth();
  static const int kAdditionalDepthFieldNumber = 6;
  ::google::protobuf::uint32 additional_depth() const;
  void set_additional_depth(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.data.VideoConfig)
 private:
  void set_has_video_resolution();
  void clear_has_video_resolution();
  void set_has_video_fps();
  void clear_has_video_fps();
  void set_has_margin_width();
  void clear_has_margin_width();
  void set_has_margin_height();
  void clear_has_margin_height();
  void set_has_dpi();
  void clear_has_dpi();
  void set_has_additional_depth();
  void clear_has_additional_depth();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  int video_resolution_;
  int video_fps_;
  ::google::protobuf::uint32 margin_width_;
  ::google::protobuf::uint32 margin_height_;
  ::google::protobuf::uint32 dpi_;
  ::google::protobuf::uint32 additional_depth_;
  friend struct ::protobuf_VideoConfigData_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VideoConfig

// required .f1x.aasdk.proto.enums.VideoResolution.Enum video_resolution = 1;
inline bool VideoConfig::has_video_resolution() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VideoConfig::set_has_video_resolution() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VideoConfig::clear_has_video_resolution() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VideoConfig::clear_video_resolution() {
  video_resolution_ = 0;
  clear_has_video_resolution();
}
inline ::f1x::aasdk::proto::enums::VideoResolution_Enum VideoConfig::video_resolution() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.VideoConfig.video_resolution)
  return static_cast< ::f1x::aasdk::proto::enums::VideoResolution_Enum >(video_resolution_);
}
inline void VideoConfig::set_video_resolution(::f1x::aasdk::proto::enums::VideoResolution_Enum value) {
  assert(::f1x::aasdk::proto::enums::VideoResolution_Enum_IsValid(value));
  set_has_video_resolution();
  video_resolution_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.VideoConfig.video_resolution)
}

// required .f1x.aasdk.proto.enums.VideoFPS.Enum video_fps = 2;
inline bool VideoConfig::has_video_fps() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VideoConfig::set_has_video_fps() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VideoConfig::clear_has_video_fps() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VideoConfig::clear_video_fps() {
  video_fps_ = 0;
  clear_has_video_fps();
}
inline ::f1x::aasdk::proto::enums::VideoFPS_Enum VideoConfig::video_fps() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.VideoConfig.video_fps)
  return static_cast< ::f1x::aasdk::proto::enums::VideoFPS_Enum >(video_fps_);
}
inline void VideoConfig::set_video_fps(::f1x::aasdk::proto::enums::VideoFPS_Enum value) {
  assert(::f1x::aasdk::proto::enums::VideoFPS_Enum_IsValid(value));
  set_has_video_fps();
  video_fps_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.VideoConfig.video_fps)
}

// required uint32 margin_width = 3;
inline bool VideoConfig::has_margin_width() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VideoConfig::set_has_margin_width() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VideoConfig::clear_has_margin_width() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VideoConfig::clear_margin_width() {
  margin_width_ = 0u;
  clear_has_margin_width();
}
inline ::google::protobuf::uint32 VideoConfig::margin_width() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.VideoConfig.margin_width)
  return margin_width_;
}
inline void VideoConfig::set_margin_width(::google::protobuf::uint32 value) {
  set_has_margin_width();
  margin_width_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.VideoConfig.margin_width)
}

// required uint32 margin_height = 4;
inline bool VideoConfig::has_margin_height() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void VideoConfig::set_has_margin_height() {
  _has_bits_[0] |= 0x00000008u;
}
inline void VideoConfig::clear_has_margin_height() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void VideoConfig::clear_margin_height() {
  margin_height_ = 0u;
  clear_has_margin_height();
}
inline ::google::protobuf::uint32 VideoConfig::margin_height() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.VideoConfig.margin_height)
  return margin_height_;
}
inline void VideoConfig::set_margin_height(::google::protobuf::uint32 value) {
  set_has_margin_height();
  margin_height_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.VideoConfig.margin_height)
}

// required uint32 dpi = 5;
inline bool VideoConfig::has_dpi() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void VideoConfig::set_has_dpi() {
  _has_bits_[0] |= 0x00000010u;
}
inline void VideoConfig::clear_has_dpi() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void VideoConfig::clear_dpi() {
  dpi_ = 0u;
  clear_has_dpi();
}
inline ::google::protobuf::uint32 VideoConfig::dpi() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.VideoConfig.dpi)
  return dpi_;
}
inline void VideoConfig::set_dpi(::google::protobuf::uint32 value) {
  set_has_dpi();
  dpi_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.VideoConfig.dpi)
}

// optional uint32 additional_depth = 6;
inline bool VideoConfig::has_additional_depth() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void VideoConfig::set_has_additional_depth() {
  _has_bits_[0] |= 0x00000020u;
}
inline void VideoConfig::clear_has_additional_depth() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void VideoConfig::clear_additional_depth() {
  additional_depth_ = 0u;
  clear_has_additional_depth();
}
inline ::google::protobuf::uint32 VideoConfig::additional_depth() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.VideoConfig.additional_depth)
  return additional_depth_;
}
inline void VideoConfig::set_additional_depth(::google::protobuf::uint32 value) {
  set_has_additional_depth();
  additional_depth_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.VideoConfig.additional_depth)
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

#endif  // PROTOBUF_INCLUDED_VideoConfigData_2eproto