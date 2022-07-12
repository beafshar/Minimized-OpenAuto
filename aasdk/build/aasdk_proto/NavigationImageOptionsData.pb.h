// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NavigationImageOptionsData.proto

#ifndef PROTOBUF_INCLUDED_NavigationImageOptionsData_2eproto
#define PROTOBUF_INCLUDED_NavigationImageOptionsData_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_NavigationImageOptionsData_2eproto 

namespace protobuf_NavigationImageOptionsData_2eproto {
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
}  // namespace protobuf_NavigationImageOptionsData_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class NavigationImageOptions;
class NavigationImageOptionsDefaultTypeInternal;
extern NavigationImageOptionsDefaultTypeInternal _NavigationImageOptions_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> ::f1x::aasdk::proto::data::NavigationImageOptions* Arena::CreateMaybeMessage<::f1x::aasdk::proto::data::NavigationImageOptions>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class NavigationImageOptions : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.data.NavigationImageOptions) */ {
 public:
  NavigationImageOptions();
  virtual ~NavigationImageOptions();

  NavigationImageOptions(const NavigationImageOptions& from);

  inline NavigationImageOptions& operator=(const NavigationImageOptions& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NavigationImageOptions(NavigationImageOptions&& from) noexcept
    : NavigationImageOptions() {
    *this = ::std::move(from);
  }

  inline NavigationImageOptions& operator=(NavigationImageOptions&& from) noexcept {
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
  static const NavigationImageOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NavigationImageOptions* internal_default_instance() {
    return reinterpret_cast<const NavigationImageOptions*>(
               &_NavigationImageOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(NavigationImageOptions* other);
  friend void swap(NavigationImageOptions& a, NavigationImageOptions& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NavigationImageOptions* New() const final {
    return CreateMaybeMessage<NavigationImageOptions>(NULL);
  }

  NavigationImageOptions* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<NavigationImageOptions>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const NavigationImageOptions& from);
  void MergeFrom(const NavigationImageOptions& from);
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
  void InternalSwap(NavigationImageOptions* other);
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

  // required int32 width = 1;
  bool has_width() const;
  void clear_width();
  static const int kWidthFieldNumber = 1;
  ::google::protobuf::int32 width() const;
  void set_width(::google::protobuf::int32 value);

  // required int32 height = 2;
  bool has_height() const;
  void clear_height();
  static const int kHeightFieldNumber = 2;
  ::google::protobuf::int32 height() const;
  void set_height(::google::protobuf::int32 value);

  // required int32 colour_depth_bits = 3;
  bool has_colour_depth_bits() const;
  void clear_colour_depth_bits();
  static const int kColourDepthBitsFieldNumber = 3;
  ::google::protobuf::int32 colour_depth_bits() const;
  void set_colour_depth_bits(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.data.NavigationImageOptions)
 private:
  void set_has_width();
  void clear_has_width();
  void set_has_height();
  void clear_has_height();
  void set_has_colour_depth_bits();
  void clear_has_colour_depth_bits();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::int32 width_;
  ::google::protobuf::int32 height_;
  ::google::protobuf::int32 colour_depth_bits_;
  friend struct ::protobuf_NavigationImageOptionsData_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NavigationImageOptions

// required int32 width = 1;
inline bool NavigationImageOptions::has_width() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NavigationImageOptions::set_has_width() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NavigationImageOptions::clear_has_width() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NavigationImageOptions::clear_width() {
  width_ = 0;
  clear_has_width();
}
inline ::google::protobuf::int32 NavigationImageOptions::width() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.NavigationImageOptions.width)
  return width_;
}
inline void NavigationImageOptions::set_width(::google::protobuf::int32 value) {
  set_has_width();
  width_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.NavigationImageOptions.width)
}

// required int32 height = 2;
inline bool NavigationImageOptions::has_height() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NavigationImageOptions::set_has_height() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NavigationImageOptions::clear_has_height() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NavigationImageOptions::clear_height() {
  height_ = 0;
  clear_has_height();
}
inline ::google::protobuf::int32 NavigationImageOptions::height() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.NavigationImageOptions.height)
  return height_;
}
inline void NavigationImageOptions::set_height(::google::protobuf::int32 value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.NavigationImageOptions.height)
}

// required int32 colour_depth_bits = 3;
inline bool NavigationImageOptions::has_colour_depth_bits() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NavigationImageOptions::set_has_colour_depth_bits() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NavigationImageOptions::clear_has_colour_depth_bits() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NavigationImageOptions::clear_colour_depth_bits() {
  colour_depth_bits_ = 0;
  clear_has_colour_depth_bits();
}
inline ::google::protobuf::int32 NavigationImageOptions::colour_depth_bits() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.NavigationImageOptions.colour_depth_bits)
  return colour_depth_bits_;
}
inline void NavigationImageOptions::set_colour_depth_bits(::google::protobuf::int32 value) {
  set_has_colour_depth_bits();
  colour_depth_bits_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.NavigationImageOptions.colour_depth_bits)
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

#endif  // PROTOBUF_INCLUDED_NavigationImageOptionsData_2eproto
