// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ParkingBrakeData.proto

#ifndef PROTOBUF_INCLUDED_ParkingBrakeData_2eproto
#define PROTOBUF_INCLUDED_ParkingBrakeData_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ParkingBrakeData_2eproto 

namespace protobuf_ParkingBrakeData_2eproto {
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
}  // namespace protobuf_ParkingBrakeData_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {
class ParkingBrake;
class ParkingBrakeDefaultTypeInternal;
extern ParkingBrakeDefaultTypeInternal _ParkingBrake_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> ::f1x::aasdk::proto::data::ParkingBrake* Arena::CreateMaybeMessage<::f1x::aasdk::proto::data::ParkingBrake>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

class ParkingBrake : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.data.ParkingBrake) */ {
 public:
  ParkingBrake();
  virtual ~ParkingBrake();

  ParkingBrake(const ParkingBrake& from);

  inline ParkingBrake& operator=(const ParkingBrake& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ParkingBrake(ParkingBrake&& from) noexcept
    : ParkingBrake() {
    *this = ::std::move(from);
  }

  inline ParkingBrake& operator=(ParkingBrake&& from) noexcept {
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
  static const ParkingBrake& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ParkingBrake* internal_default_instance() {
    return reinterpret_cast<const ParkingBrake*>(
               &_ParkingBrake_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ParkingBrake* other);
  friend void swap(ParkingBrake& a, ParkingBrake& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ParkingBrake* New() const final {
    return CreateMaybeMessage<ParkingBrake>(NULL);
  }

  ParkingBrake* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ParkingBrake>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ParkingBrake& from);
  void MergeFrom(const ParkingBrake& from);
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
  void InternalSwap(ParkingBrake* other);
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

  // required bool parking_brake = 1;
  bool has_parking_brake() const;
  void clear_parking_brake();
  static const int kParkingBrakeFieldNumber = 1;
  bool parking_brake() const;
  void set_parking_brake(bool value);

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.data.ParkingBrake)
 private:
  void set_has_parking_brake();
  void clear_has_parking_brake();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  bool parking_brake_;
  friend struct ::protobuf_ParkingBrakeData_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ParkingBrake

// required bool parking_brake = 1;
inline bool ParkingBrake::has_parking_brake() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ParkingBrake::set_has_parking_brake() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ParkingBrake::clear_has_parking_brake() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ParkingBrake::clear_parking_brake() {
  parking_brake_ = false;
  clear_has_parking_brake();
}
inline bool ParkingBrake::parking_brake() const {
  // @@protoc_insertion_point(field_get:f1x.aasdk.proto.data.ParkingBrake.parking_brake)
  return parking_brake_;
}
inline void ParkingBrake::set_parking_brake(bool value) {
  set_has_parking_brake();
  parking_brake_ = value;
  // @@protoc_insertion_point(field_set:f1x.aasdk.proto.data.ParkingBrake.parking_brake)
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

#endif  // PROTOBUF_INCLUDED_ParkingBrakeData_2eproto
