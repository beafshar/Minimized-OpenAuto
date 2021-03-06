// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DrivingStatusEnum.proto

#include "DrivingStatusEnum.pb.h"

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
class DrivingStatusDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DrivingStatus>
      _instance;
} _DrivingStatus_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_DrivingStatusEnum_2eproto {
static void InitDefaultsDrivingStatus() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::enums::_DrivingStatus_default_instance_;
    new (ptr) ::f1x::aasdk::proto::enums::DrivingStatus();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::enums::DrivingStatus::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_DrivingStatus =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsDrivingStatus}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_DrivingStatus.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::enums::DrivingStatus, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::enums::DrivingStatus, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 5, sizeof(::f1x::aasdk::proto::enums::DrivingStatus)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::enums::_DrivingStatus_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "DrivingStatusEnum.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\027DrivingStatusEnum.proto\022\025f1x.aasdk.pro"
      "to.enums\"\237\001\n\rDrivingStatus\"\215\001\n\004Enum\022\020\n\014U"
      "NRESTRICTED\020\000\022\014\n\010NO_VIDEO\020\001\022\025\n\021NO_KEYBOA"
      "RD_INPUT\020\002\022\022\n\016NO_VOICE_INPUT\020\004\022\r\n\tNO_CON"
      "FIG\020\010\022\025\n\021LIMIT_MESSAGE_LEN\020\020\022\024\n\020FULLY_RE"
      "STRICTED\020\037"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 210);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DrivingStatusEnum.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_DrivingStatusEnum_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {
const ::google::protobuf::EnumDescriptor* DrivingStatus_Enum_descriptor() {
  protobuf_DrivingStatusEnum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DrivingStatusEnum_2eproto::file_level_enum_descriptors[0];
}
bool DrivingStatus_Enum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 8:
    case 16:
    case 31:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const DrivingStatus_Enum DrivingStatus::UNRESTRICTED;
const DrivingStatus_Enum DrivingStatus::NO_VIDEO;
const DrivingStatus_Enum DrivingStatus::NO_KEYBOARD_INPUT;
const DrivingStatus_Enum DrivingStatus::NO_VOICE_INPUT;
const DrivingStatus_Enum DrivingStatus::NO_CONFIG;
const DrivingStatus_Enum DrivingStatus::LIMIT_MESSAGE_LEN;
const DrivingStatus_Enum DrivingStatus::FULLY_RESTRICTED;
const DrivingStatus_Enum DrivingStatus::Enum_MIN;
const DrivingStatus_Enum DrivingStatus::Enum_MAX;
const int DrivingStatus::Enum_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void DrivingStatus::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DrivingStatus::DrivingStatus()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_DrivingStatusEnum_2eproto::scc_info_DrivingStatus.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.enums.DrivingStatus)
}
DrivingStatus::DrivingStatus(const DrivingStatus& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.enums.DrivingStatus)
}

void DrivingStatus::SharedCtor() {
}

DrivingStatus::~DrivingStatus() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.enums.DrivingStatus)
  SharedDtor();
}

void DrivingStatus::SharedDtor() {
}

void DrivingStatus::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* DrivingStatus::descriptor() {
  ::protobuf_DrivingStatusEnum_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_DrivingStatusEnum_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const DrivingStatus& DrivingStatus::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_DrivingStatusEnum_2eproto::scc_info_DrivingStatus.base);
  return *internal_default_instance();
}


void DrivingStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.enums.DrivingStatus)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool DrivingStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.enums.DrivingStatus)
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.enums.DrivingStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.enums.DrivingStatus)
  return false;
#undef DO_
}

void DrivingStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.enums.DrivingStatus)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.enums.DrivingStatus)
}

::google::protobuf::uint8* DrivingStatus::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.enums.DrivingStatus)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.enums.DrivingStatus)
  return target;
}

size_t DrivingStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.enums.DrivingStatus)
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

void DrivingStatus::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.enums.DrivingStatus)
  GOOGLE_DCHECK_NE(&from, this);
  const DrivingStatus* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const DrivingStatus>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.enums.DrivingStatus)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.enums.DrivingStatus)
    MergeFrom(*source);
  }
}

void DrivingStatus::MergeFrom(const DrivingStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.enums.DrivingStatus)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void DrivingStatus::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.enums.DrivingStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DrivingStatus::CopyFrom(const DrivingStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.enums.DrivingStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DrivingStatus::IsInitialized() const {
  return true;
}

void DrivingStatus::Swap(DrivingStatus* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DrivingStatus::InternalSwap(DrivingStatus* other) {
  using std::swap;
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata DrivingStatus::GetMetadata() const {
  protobuf_DrivingStatusEnum_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_DrivingStatusEnum_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::enums::DrivingStatus* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::enums::DrivingStatus >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::enums::DrivingStatus >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
