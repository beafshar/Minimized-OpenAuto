// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BindingResponseMessage.proto

#ifndef PROTOBUF_INCLUDED_BindingResponseMessage_2eproto
#define PROTOBUF_INCLUDED_BindingResponseMessage_2eproto

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
#include "StatusEnum.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_BindingResponseMessage_2eproto 

namespace protobuf_BindingResponseMessage_2eproto {
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
}  // namespace protobuf_BindingResponseMessage_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class BindingResponse;
class BindingResponseDefaultTypeInternal;
extern BindingResponseDefaultTypeInternal _BindingResponse_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> ::f1x::aasdk::proto::messages::BindingResponse* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::BindingResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class BindingResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.BindingResponse) */ {
 public:
  BindingResponse();
  virtual ~BindingResponse();

  BindingResponse(const BindingResponse& from);

  inline BindingResponse& operator=(const BindingResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BindingResponse(BindingResponse&& from) noexcept
    : BindingResponse() {
    *this = ::std::move(from);
  }

  inline BindingResponse& operator=(BindingResponse&& from) noexcept {
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
  static const BindingResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BindingResponse* internal_default_instance() {
    return reinterpret_cast<const BindingResponse*>(
               &_BindingResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(BindingResponse* other);
  friend void swap(BindingResponse& a, BindingResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BindingResponse* New() const final {
    return CreateMaybeMessage<BindingResponse>(NULL);
  }

  BindingResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BindingResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BindingResponse& from);
  void MergeFrom(const BindingResponse& from);
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
  void InternalSwap(BindingResponse* other);
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

  // required .f1x.aasdk.proto.enums.Status.Enum status = 1;
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::f1x::aasdk::proto::enums::Status_Enum status() const;
  void set_status(::f1x::aasdk::proto::enums::Status_Enum value);

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.BindingResponse)
 private:
  void set_has_status();
  void clear_has_status();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  int status_;
  friend struct ::protobuf_BindingResponseMessage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BindingResponse

// required .f1x.aasdk.proto.enums.Status.Enum status = 1;
inline bool BindingResponse::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BindingResponse::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BindingResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BindingResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::f1x::aasdk::proto::enums::Status_Enum BindingResponse::status() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.BindingResponse.status)
  return static_cast< ::f1x::aasdk::proto::enums::Status_Enum >(status_);
}
inline void BindingResponse::set_status(::f1x::aasdk::proto::enums::Status_Enum value) {
  assert(::f1x::aasdk::proto::enums::Status_Enum_IsValid(value));
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.BindingResponse.status)
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

#endif  // PROTOBUF_INCLUDED_BindingResponseMessage_2eproto
