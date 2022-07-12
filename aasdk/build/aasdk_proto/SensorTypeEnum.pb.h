// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorTypeEnum.proto

#ifndef PROTOBUF_INCLUDED_SensorTypeEnum_2eproto
#define PROTOBUF_INCLUDED_SensorTypeEnum_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_SensorTypeEnum_2eproto 

namespace protobuf_SensorTypeEnum_2eproto {
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
}  // namespace protobuf_SensorTypeEnum_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {
class SensorType;
class SensorTypeDefaultTypeInternal;
extern SensorTypeDefaultTypeInternal _SensorType_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> ::f1x::aasdk::proto::enums::SensorType* Arena::CreateMaybeMessage<::f1x::aasdk::proto::enums::SensorType>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {

enum SensorType_Enum {
  SensorType_Enum_NONE = 0,
  SensorType_Enum_LOCATION = 1,
  SensorType_Enum_COMPASS = 2,
  SensorType_Enum_CAR_SPEED = 3,
  SensorType_Enum_RPM = 4,
  SensorType_Enum_ODOMETER = 5,
  SensorType_Enum_FUEL_LEVEL = 6,
  SensorType_Enum_PARKING_BRAKE = 7,
  SensorType_Enum_GEAR = 8,
  SensorType_Enum_DIAGNOSTICS = 9,
  SensorType_Enum_NIGHT_DATA = 10,
  SensorType_Enum_ENVIRONMENT = 11,
  SensorType_Enum_HVAC = 12,
  SensorType_Enum_DRIVING_STATUS = 13,
  SensorType_Enum_DEAD_RECONING = 14,
  SensorType_Enum_PASSENGER = 15,
  SensorType_Enum_DOOR = 16,
  SensorType_Enum_LIGHT = 17,
  SensorType_Enum_TIRE = 18,
  SensorType_Enum_ACCEL = 19,
  SensorType_Enum_GYRO = 20,
  SensorType_Enum_GPS = 21
};
bool SensorType_Enum_IsValid(int value);
const SensorType_Enum SensorType_Enum_Enum_MIN = SensorType_Enum_NONE;
const SensorType_Enum SensorType_Enum_Enum_MAX = SensorType_Enum_GPS;
const int SensorType_Enum_Enum_ARRAYSIZE = SensorType_Enum_Enum_MAX + 1;

const ::google::protobuf::EnumDescriptor* SensorType_Enum_descriptor();
inline const ::std::string& SensorType_Enum_Name(SensorType_Enum value) {
  return ::google::protobuf::internal::NameOfEnum(
    SensorType_Enum_descriptor(), value);
}
inline bool SensorType_Enum_Parse(
    const ::std::string& name, SensorType_Enum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SensorType_Enum>(
    SensorType_Enum_descriptor(), name, value);
}
// ===================================================================

class SensorType : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:f1x.aasdk.proto.enums.SensorType) */ {
 public:
  SensorType();
  virtual ~SensorType();

  SensorType(const SensorType& from);

  inline SensorType& operator=(const SensorType& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SensorType(SensorType&& from) noexcept
    : SensorType() {
    *this = ::std::move(from);
  }

  inline SensorType& operator=(SensorType&& from) noexcept {
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
  static const SensorType& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SensorType* internal_default_instance() {
    return reinterpret_cast<const SensorType*>(
               &_SensorType_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SensorType* other);
  friend void swap(SensorType& a, SensorType& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SensorType* New() const final {
    return CreateMaybeMessage<SensorType>(NULL);
  }

  SensorType* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SensorType>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SensorType& from);
  void MergeFrom(const SensorType& from);
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
  void InternalSwap(SensorType* other);
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

  typedef SensorType_Enum Enum;
  static const Enum NONE =
    SensorType_Enum_NONE;
  static const Enum LOCATION =
    SensorType_Enum_LOCATION;
  static const Enum COMPASS =
    SensorType_Enum_COMPASS;
  static const Enum CAR_SPEED =
    SensorType_Enum_CAR_SPEED;
  static const Enum RPM =
    SensorType_Enum_RPM;
  static const Enum ODOMETER =
    SensorType_Enum_ODOMETER;
  static const Enum FUEL_LEVEL =
    SensorType_Enum_FUEL_LEVEL;
  static const Enum PARKING_BRAKE =
    SensorType_Enum_PARKING_BRAKE;
  static const Enum GEAR =
    SensorType_Enum_GEAR;
  static const Enum DIAGNOSTICS =
    SensorType_Enum_DIAGNOSTICS;
  static const Enum NIGHT_DATA =
    SensorType_Enum_NIGHT_DATA;
  static const Enum ENVIRONMENT =
    SensorType_Enum_ENVIRONMENT;
  static const Enum HVAC =
    SensorType_Enum_HVAC;
  static const Enum DRIVING_STATUS =
    SensorType_Enum_DRIVING_STATUS;
  static const Enum DEAD_RECONING =
    SensorType_Enum_DEAD_RECONING;
  static const Enum PASSENGER =
    SensorType_Enum_PASSENGER;
  static const Enum DOOR =
    SensorType_Enum_DOOR;
  static const Enum LIGHT =
    SensorType_Enum_LIGHT;
  static const Enum TIRE =
    SensorType_Enum_TIRE;
  static const Enum ACCEL =
    SensorType_Enum_ACCEL;
  static const Enum GYRO =
    SensorType_Enum_GYRO;
  static const Enum GPS =
    SensorType_Enum_GPS;
  static inline bool Enum_IsValid(int value) {
    return SensorType_Enum_IsValid(value);
  }
  static const Enum Enum_MIN =
    SensorType_Enum_Enum_MIN;
  static const Enum Enum_MAX =
    SensorType_Enum_Enum_MAX;
  static const int Enum_ARRAYSIZE =
    SensorType_Enum_Enum_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Enum_descriptor() {
    return SensorType_Enum_descriptor();
  }
  static inline const ::std::string& Enum_Name(Enum value) {
    return SensorType_Enum_Name(value);
  }
  static inline bool Enum_Parse(const ::std::string& name,
      Enum* value) {
    return SensorType_Enum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:f1x.aasdk.proto.enums.SensorType)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_SensorTypeEnum_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SensorType

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::f1x::aasdk::proto::enums::SensorType_Enum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::f1x::aasdk::proto::enums::SensorType_Enum>() {
  return ::f1x::aasdk::proto::enums::SensorType_Enum_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_SensorTypeEnum_2eproto
