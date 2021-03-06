// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVMediaAckIndicationMessage.proto

#ifndef PROTOBUF_INCLUDED_AVMediaAckIndicationMessage_2eproto
#define PROTOBUF_INCLUDED_AVMediaAckIndicationMessage_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_AVMediaAckIndicationMessage_2eproto 

namespace protobuf_AVMediaAckIndicationMessage_2eproto {
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
}  // namespace protobuf_AVMediaAckIndicationMessage_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class AVMediaAckIndication;
class AVMediaAckIndicationDefaultTypeInternal;
extern AVMediaAckIndicationDefaultTypeInternal _AVMediaAckIndication_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> ::f1x::aasdk::proto::messages::AVMediaAckIndication* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::AVMediaAckIndication>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class AVMediaAckIndication : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.AVMediaAckIndication) */ {
 public:
  AVMediaAckIndication();
  virtual ~AVMediaAckIndication();

  AVMediaAckIndication(const AVMediaAckIndication& from);

  inline AVMediaAckIndication& operator=(const AVMediaAckIndication& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AVMediaAckIndication(AVMediaAckIndication&& from) noexcept
    : AVMediaAckIndication() {
    *this = ::std::move(from);
  }

  inline AVMediaAckIndication& operator=(AVMediaAckIndication&& from) noexcept {
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
  static const AVMediaAckIndication& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AVMediaAckIndication* internal_default_instance() {
    return reinterpret_cast<const AVMediaAckIndication*>(
               &_AVMediaAckIndication_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AVMediaAckIndication* other);
  friend void swap(AVMediaAckIndication& a, AVMediaAckIndication& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AVMediaAckIndication* New() const final {
    return CreateMaybeMessage<AVMediaAckIndication>(NULL);
  }

  AVMediaAckIndication* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AVMediaAckIndication>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AVMediaAckIndication& from);
  void MergeFrom(const AVMediaAckIndication& from);
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
  void InternalSwap(AVMediaAckIndication* other);
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

  // required int32 session = 1;
  bool has_session() const;
  void clear_session();
  static const int kSessionFieldNumber = 1;
  ::google::protobuf::int32 session() const;
  void set_session(::google::protobuf::int32 value);

  // required uint32 value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  ::google::protobuf::uint32 value() const;
  void set_value(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.AVMediaAckIndication)
 private:
  void set_has_session();
  void clear_has_session();
  void set_has_value();
  void clear_has_value();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::int32 session_;
  ::google::protobuf::uint32 value_;
  friend struct ::protobuf_AVMediaAckIndicationMessage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AVMediaAckIndication

// required int32 session = 1;
inline bool AVMediaAckIndication::has_session() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AVMediaAckIndication::set_has_session() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AVMediaAckIndication::clear_has_session() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AVMediaAckIndication::clear_session() {
  session_ = 0;
  clear_has_session();
}
inline ::google::protobuf::int32 AVMediaAckIndication::session() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.AVMediaAckIndication.session)
  return session_;
}
inline void AVMediaAckIndication::set_session(::google::protobuf::int32 value) {
  set_has_session();
  session_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.AVMediaAckIndication.session)
}

// required uint32 value = 2;
inline bool AVMediaAckIndication::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AVMediaAckIndication::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AVMediaAckIndication::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AVMediaAckIndication::clear_value() {
  value_ = 0u;
  clear_has_value();
}
inline ::google::protobuf::uint32 AVMediaAckIndication::value() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.AVMediaAckIndication.value)
  return value_;
}
inline void AVMediaAckIndication::set_value(::google::protobuf::uint32 value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.AVMediaAckIndication.value)
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

#endif  // PROTOBUF_INCLUDED_AVMediaAckIndicationMessage_2eproto
