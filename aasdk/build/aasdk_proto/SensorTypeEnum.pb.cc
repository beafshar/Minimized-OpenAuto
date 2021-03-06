// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorTypeEnum.proto

#include "SensorTypeEnum.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {
class SensorTypeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SensorType>
      _instance;
} _SensorType_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_SensorTypeEnum_2eproto {
static void InitDefaultsSensorType() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::enums::_SensorType_default_instance_;
    new (ptr) ::f1x::aasdk::proto::enums::SensorType();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::enums::SensorType::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SensorType =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSensorType}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SensorType.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::enums::SensorType, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::enums::SensorType, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 5, sizeof(::f1x::aasdk::proto::enums::SensorType)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::enums::_SensorType_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "SensorTypeEnum.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\024SensorTypeEnum.proto\022\025f1x.aasdk.proto."
      "enums\"\274\002\n\nSensorType\"\255\002\n\004Enum\022\010\n\004NONE\020\000\022"
      "\014\n\010LOCATION\020\001\022\013\n\007COMPASS\020\002\022\r\n\tCAR_SPEED\020"
      "\003\022\007\n\003RPM\020\004\022\014\n\010ODOMETER\020\005\022\016\n\nFUEL_LEVEL\020\006"
      "\022\021\n\rPARKING_BRAKE\020\007\022\010\n\004GEAR\020\010\022\017\n\013DIAGNOS"
      "TICS\020\t\022\016\n\nNIGHT_DATA\020\n\022\017\n\013ENVIRONMENT\020\013\022"
      "\010\n\004HVAC\020\014\022\022\n\016DRIVING_STATUS\020\r\022\021\n\rDEAD_RE"
      "CONING\020\016\022\r\n\tPASSENGER\020\017\022\010\n\004DOOR\020\020\022\t\n\005LIG"
      "HT\020\021\022\010\n\004TIRE\020\022\022\t\n\005ACCEL\020\023\022\010\n\004GYRO\020\024\022\007\n\003G"
      "PS\020\025"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 364);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SensorTypeEnum.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_SensorTypeEnum_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {
const ::google::protobuf::EnumDescriptor* SensorType_Enum_descriptor() {
  protobuf_SensorTypeEnum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_SensorTypeEnum_2eproto::file_level_enum_descriptors[0];
}
bool SensorType_Enum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SensorType_Enum SensorType::NONE;
const SensorType_Enum SensorType::LOCATION;
const SensorType_Enum SensorType::COMPASS;
const SensorType_Enum SensorType::CAR_SPEED;
const SensorType_Enum SensorType::RPM;
const SensorType_Enum SensorType::ODOMETER;
const SensorType_Enum SensorType::FUEL_LEVEL;
const SensorType_Enum SensorType::PARKING_BRAKE;
const SensorType_Enum SensorType::GEAR;
const SensorType_Enum SensorType::DIAGNOSTICS;
const SensorType_Enum SensorType::NIGHT_DATA;
const SensorType_Enum SensorType::ENVIRONMENT;
const SensorType_Enum SensorType::HVAC;
const SensorType_Enum SensorType::DRIVING_STATUS;
const SensorType_Enum SensorType::DEAD_RECONING;
const SensorType_Enum SensorType::PASSENGER;
const SensorType_Enum SensorType::DOOR;
const SensorType_Enum SensorType::LIGHT;
const SensorType_Enum SensorType::TIRE;
const SensorType_Enum SensorType::ACCEL;
const SensorType_Enum SensorType::GYRO;
const SensorType_Enum SensorType::GPS;
const SensorType_Enum SensorType::Enum_MIN;
const SensorType_Enum SensorType::Enum_MAX;
const int SensorType::Enum_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void SensorType::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SensorType::SensorType()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_SensorTypeEnum_2eproto::scc_info_SensorType.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.enums.SensorType)
}
SensorType::SensorType(const SensorType& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.enums.SensorType)
}

void SensorType::SharedCtor() {
}

SensorType::~SensorType() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.enums.SensorType)
  SharedDtor();
}

void SensorType::SharedDtor() {
}

void SensorType::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SensorType::descriptor() {
  ::protobuf_SensorTypeEnum_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SensorTypeEnum_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SensorType& SensorType::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_SensorTypeEnum_2eproto::scc_info_SensorType.base);
  return *internal_default_instance();
}


void SensorType::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.enums.SensorType)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SensorType::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.enums.SensorType)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.enums.SensorType)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.enums.SensorType)
  return false;
#undef DO_
}

void SensorType::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.enums.SensorType)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.enums.SensorType)
}

::google::protobuf::uint8* SensorType::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.enums.SensorType)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.enums.SensorType)
  return target;
}

size_t SensorType::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.enums.SensorType)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SensorType::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.enums.SensorType)
  GOOGLE_DCHECK_NE(&from, this);
  const SensorType* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SensorType>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.enums.SensorType)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.enums.SensorType)
    MergeFrom(*source);
  }
}

void SensorType::MergeFrom(const SensorType& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.enums.SensorType)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void SensorType::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.enums.SensorType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SensorType::CopyFrom(const SensorType& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.enums.SensorType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SensorType::IsInitialized() const {
  return true;
}

void SensorType::Swap(SensorType* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SensorType::InternalSwap(SensorType* other) {
  using std::swap;
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SensorType::GetMetadata() const {
  protobuf_SensorTypeEnum_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SensorTypeEnum_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::enums::SensorType* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::enums::SensorType >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::enums::SensorType >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
