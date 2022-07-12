// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SteeringWheelData.proto

#include "SteeringWheelData.pb.h"

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
namespace data {
class SteeringWheelDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SteeringWheel>
      _instance;
} _SteeringWheel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_SteeringWheelData_2eproto {
static void InitDefaultsSteeringWheel() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_SteeringWheel_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::SteeringWheel();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::SteeringWheel::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SteeringWheel =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSteeringWheel}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SteeringWheel.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::SteeringWheel, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::SteeringWheel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::SteeringWheel, steering_angle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::SteeringWheel, wheel_speed_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::f1x::aasdk::proto::data::SteeringWheel)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::data::_SteeringWheel_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "SteeringWheelData.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
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
      "\n\027SteeringWheelData.proto\022\024f1x.aasdk.pro"
      "to.data\"<\n\rSteeringWheel\022\026\n\016steering_ang"
      "le\030\001 \002(\005\022\023\n\013wheel_speed\030\002 \002(\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 109);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SteeringWheelData.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_SteeringWheelData_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void SteeringWheel::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SteeringWheel::kSteeringAngleFieldNumber;
const int SteeringWheel::kWheelSpeedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SteeringWheel::SteeringWheel()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_SteeringWheelData_2eproto::scc_info_SteeringWheel.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.data.SteeringWheel)
}
SteeringWheel::SteeringWheel(const SteeringWheel& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&steering_angle_, &from.steering_angle_,
    static_cast<size_t>(reinterpret_cast<char*>(&wheel_speed_) -
    reinterpret_cast<char*>(&steering_angle_)) + sizeof(wheel_speed_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.SteeringWheel)
}

void SteeringWheel::SharedCtor() {
  ::memset(&steering_angle_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&wheel_speed_) -
      reinterpret_cast<char*>(&steering_angle_)) + sizeof(wheel_speed_));
}

SteeringWheel::~SteeringWheel() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.SteeringWheel)
  SharedDtor();
}

void SteeringWheel::SharedDtor() {
}

void SteeringWheel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SteeringWheel::descriptor() {
  ::protobuf_SteeringWheelData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SteeringWheelData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SteeringWheel& SteeringWheel::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_SteeringWheelData_2eproto::scc_info_SteeringWheel.base);
  return *internal_default_instance();
}


void SteeringWheel::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.SteeringWheel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&steering_angle_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&wheel_speed_) -
        reinterpret_cast<char*>(&steering_angle_)) + sizeof(wheel_speed_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SteeringWheel::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.data.SteeringWheel)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 steering_angle = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_steering_angle();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &steering_angle_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 wheel_speed = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_wheel_speed();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &wheel_speed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.data.SteeringWheel)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.data.SteeringWheel)
  return false;
#undef DO_
}

void SteeringWheel::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.data.SteeringWheel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 steering_angle = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->steering_angle(), output);
  }

  // required int32 wheel_speed = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->wheel_speed(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.data.SteeringWheel)
}

::google::protobuf::uint8* SteeringWheel::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.SteeringWheel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 steering_angle = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->steering_angle(), target);
  }

  // required int32 wheel_speed = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->wheel_speed(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.SteeringWheel)
  return target;
}

size_t SteeringWheel::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.data.SteeringWheel)
  size_t total_size = 0;

  if (has_steering_angle()) {
    // required int32 steering_angle = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->steering_angle());
  }

  if (has_wheel_speed()) {
    // required int32 wheel_speed = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->wheel_speed());
  }

  return total_size;
}
size_t SteeringWheel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.SteeringWheel)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 steering_angle = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->steering_angle());

    // required int32 wheel_speed = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->wheel_speed());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SteeringWheel::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.SteeringWheel)
  GOOGLE_DCHECK_NE(&from, this);
  const SteeringWheel* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SteeringWheel>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.SteeringWheel)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.SteeringWheel)
    MergeFrom(*source);
  }
}

void SteeringWheel::MergeFrom(const SteeringWheel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.SteeringWheel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      steering_angle_ = from.steering_angle_;
    }
    if (cached_has_bits & 0x00000002u) {
      wheel_speed_ = from.wheel_speed_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SteeringWheel::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.SteeringWheel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SteeringWheel::CopyFrom(const SteeringWheel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.SteeringWheel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SteeringWheel::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void SteeringWheel::Swap(SteeringWheel* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SteeringWheel::InternalSwap(SteeringWheel* other) {
  using std::swap;
  swap(steering_angle_, other->steering_angle_);
  swap(wheel_speed_, other->wheel_speed_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SteeringWheel::GetMetadata() const {
  protobuf_SteeringWheelData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SteeringWheelData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::data::SteeringWheel* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::SteeringWheel >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::data::SteeringWheel >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
