// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NavigationFocusRequestMessage.proto

#ifndef PROTOBUF_INCLUDED_NavigationFocusRequestMessage_2eproto
#define PROTOBUF_INCLUDED_NavigationFocusRequestMessage_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_NavigationFocusRequestMessage_2eproto 

namespace protobuf_NavigationFocusRequestMessage_2eproto {
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
}  // namespace protobuf_NavigationFocusRequestMessage_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {
class NavigationFocusRequest;
class NavigationFocusRequestDefaultTypeInternal;
extern NavigationFocusRequestDefaultTypeInternal _NavigationFocusRequest_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> ::f1x::aasdk::proto::messages::NavigationFocusRequest* Arena::CreateMaybeMessage<::f1x::aasdk::proto::messages::NavigationFocusRequest>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

class NavigationFocusRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.messages.NavigationFocusRequest) */ {
 public:
  NavigationFocusRequest();
  virtual ~NavigationFocusRequest();

  NavigationFocusRequest(const NavigationFocusRequest& from);

  inline NavigationFocusRequest& operator=(const NavigationFocusRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NavigationFocusRequest(NavigationFocusRequest&& from) noexcept
    : NavigationFocusRequest() {
    *this = ::std::move(from);
  }

  inline NavigationFocusRequest& operator=(NavigationFocusRequest&& from) noexcept {
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
  static const NavigationFocusRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NavigationFocusRequest* internal_default_instance() {
    return reinterpret_cast<const NavigationFocusRequest*>(
               &_NavigationFocusRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(NavigationFocusRequest* other);
  friend void swap(NavigationFocusRequest& a, NavigationFocusRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NavigationFocusRequest* New() const final {
    return CreateMaybeMessage<NavigationFocusRequest>(NULL);
  }

  NavigationFocusRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<NavigationFocusRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const NavigationFocusRequest& from);
  void MergeFrom(const NavigationFocusRequest& from);
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
  void InternalSwap(NavigationFocusRequest* other);
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

  // required uint32 type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::google::protobuf::uint32 type() const;
  void set_type(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.messages.NavigationFocusRequest)
 private:
  void set_has_type();
  void clear_has_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 type_;
  friend struct ::protobuf_NavigationFocusRequestMessage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NavigationFocusRequest

// required uint32 type = 1;
inline bool NavigationFocusRequest::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NavigationFocusRequest::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NavigationFocusRequest::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NavigationFocusRequest::clear_type() {
  type_ = 0u;
  clear_has_type();
}
inline ::google::protobuf::uint32 NavigationFocusRequest::type() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.messages.NavigationFocusRequest.type)
  return type_;
}
inline void NavigationFocusRequest::set_type(::google::protobuf::uint32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.messages.NavigationFocusRequest.type)
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

#endif  // PROTOBUF_INCLUDED_NavigationFocusRequestMessage_2eproto
