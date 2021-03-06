// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GyroData.proto

#include "GyroData.pb.h"

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
class GyroDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Gyro>
      _instance;
} _Gyro_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_GyroData_2eproto {
static void InitDefaultsGyro() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_Gyro_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::Gyro();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::Gyro::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Gyro =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGyro}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Gyro.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::Gyro, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::Gyro, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::Gyro, rotation_speed_x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::Gyro, rotation_speed_y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::Gyro, rotation_speed_z_),
  0,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::f1x::aasdk::proto::data::Gyro)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::data::_Gyro_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "GyroData.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\016GyroData.proto\022\024f1x.aasdk.proto.data\"T"
      "\n\004Gyro\022\030\n\020rotation_speed_x\030\001 \002(\005\022\030\n\020rota"
      "tion_speed_y\030\002 \002(\005\022\030\n\020rotation_speed_z\030\003"
      " \002(\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 124);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "GyroData.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_GyroData_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void Gyro::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Gyro::kRotationSpeedXFieldNumber;
const int Gyro::kRotationSpeedYFieldNumber;
const int Gyro::kRotationSpeedZFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Gyro::Gyro()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_GyroData_2eproto::scc_info_Gyro.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.data.Gyro)
}
Gyro::Gyro(const Gyro& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&rotation_speed_x_, &from.rotation_speed_x_,
    static_cast<size_t>(reinterpret_cast<char*>(&rotation_speed_z_) -
    reinterpret_cast<char*>(&rotation_speed_x_)) + sizeof(rotation_speed_z_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.Gyro)
}

void Gyro::SharedCtor() {
  ::memset(&rotation_speed_x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&rotation_speed_z_) -
      reinterpret_cast<char*>(&rotation_speed_x_)) + sizeof(rotation_speed_z_));
}

Gyro::~Gyro() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.Gyro)
  SharedDtor();
}

void Gyro::SharedDtor() {
}

void Gyro::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Gyro::descriptor() {
  ::protobuf_GyroData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_GyroData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Gyro& Gyro::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_GyroData_2eproto::scc_info_Gyro.base);
  return *internal_default_instance();
}


void Gyro::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.Gyro)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    ::memset(&rotation_speed_x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&rotation_speed_z_) -
        reinterpret_cast<char*>(&rotation_speed_x_)) + sizeof(rotation_speed_z_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Gyro::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.data.Gyro)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 rotation_speed_x = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_rotation_speed_x();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rotation_speed_x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 rotation_speed_y = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_rotation_speed_y();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rotation_speed_y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 rotation_speed_z = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_rotation_speed_z();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rotation_speed_z_)));
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.data.Gyro)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.data.Gyro)
  return false;
#undef DO_
}

void Gyro::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.data.Gyro)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 rotation_speed_x = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->rotation_speed_x(), output);
  }

  // required int32 rotation_speed_y = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->rotation_speed_y(), output);
  }

  // required int32 rotation_speed_z = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->rotation_speed_z(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.data.Gyro)
}

::google::protobuf::uint8* Gyro::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.Gyro)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 rotation_speed_x = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->rotation_speed_x(), target);
  }

  // required int32 rotation_speed_y = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->rotation_speed_y(), target);
  }

  // required int32 rotation_speed_z = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->rotation_speed_z(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.Gyro)
  return target;
}

size_t Gyro::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.data.Gyro)
  size_t total_size = 0;

  if (has_rotation_speed_x()) {
    // required int32 rotation_speed_x = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->rotation_speed_x());
  }

  if (has_rotation_speed_y()) {
    // required int32 rotation_speed_y = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->rotation_speed_y());
  }

  if (has_rotation_speed_z()) {
    // required int32 rotation_speed_z = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->rotation_speed_z());
  }

  return total_size;
}
size_t Gyro::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.Gyro)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required int32 rotation_speed_x = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->rotation_speed_x());

    // required int32 rotation_speed_y = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->rotation_speed_y());

    // required int32 rotation_speed_z = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->rotation_speed_z());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Gyro::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.Gyro)
  GOOGLE_DCHECK_NE(&from, this);
  const Gyro* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Gyro>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.Gyro)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.Gyro)
    MergeFrom(*source);
  }
}

void Gyro::MergeFrom(const Gyro& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.Gyro)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      rotation_speed_x_ = from.rotation_speed_x_;
    }
    if (cached_has_bits & 0x00000002u) {
      rotation_speed_y_ = from.rotation_speed_y_;
    }
    if (cached_has_bits & 0x00000004u) {
      rotation_speed_z_ = from.rotation_speed_z_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Gyro::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.Gyro)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Gyro::CopyFrom(const Gyro& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.Gyro)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Gyro::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  return true;
}

void Gyro::Swap(Gyro* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Gyro::InternalSwap(Gyro* other) {
  using std::swap;
  swap(rotation_speed_x_, other->rotation_speed_x_);
  swap(rotation_speed_y_, other->rotation_speed_y_);
  swap(rotation_speed_z_, other->rotation_speed_z_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Gyro::GetMetadata() const {
  protobuf_GyroData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_GyroData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::data::Gyro* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::Gyro >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::data::Gyro >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
