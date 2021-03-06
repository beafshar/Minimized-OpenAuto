// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FuelLevelData.proto

#include "FuelLevelData.pb.h"

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
class FuelLevelDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<FuelLevel>
      _instance;
} _FuelLevel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_FuelLevelData_2eproto {
static void InitDefaultsFuelLevel() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_FuelLevel_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::FuelLevel();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::FuelLevel::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_FuelLevel =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsFuelLevel}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_FuelLevel.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::FuelLevel, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::FuelLevel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::FuelLevel, fuel_level_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::FuelLevel, range_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::FuelLevel, low_fuel_),
  0,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::f1x::aasdk::proto::data::FuelLevel)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::data::_FuelLevel_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "FuelLevelData.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\023FuelLevelData.proto\022\024f1x.aasdk.proto.d"
      "ata\"@\n\tFuelLevel\022\022\n\nfuel_level\030\001 \002(\005\022\r\n\005"
      "range\030\002 \002(\005\022\020\n\010low_fuel\030\003 \002(\010"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 109);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "FuelLevelData.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_FuelLevelData_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void FuelLevel::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FuelLevel::kFuelLevelFieldNumber;
const int FuelLevel::kRangeFieldNumber;
const int FuelLevel::kLowFuelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FuelLevel::FuelLevel()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_FuelLevelData_2eproto::scc_info_FuelLevel.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.data.FuelLevel)
}
FuelLevel::FuelLevel(const FuelLevel& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&fuel_level_, &from.fuel_level_,
    static_cast<size_t>(reinterpret_cast<char*>(&low_fuel_) -
    reinterpret_cast<char*>(&fuel_level_)) + sizeof(low_fuel_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.FuelLevel)
}

void FuelLevel::SharedCtor() {
  ::memset(&fuel_level_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&low_fuel_) -
      reinterpret_cast<char*>(&fuel_level_)) + sizeof(low_fuel_));
}

FuelLevel::~FuelLevel() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.FuelLevel)
  SharedDtor();
}

void FuelLevel::SharedDtor() {
}

void FuelLevel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* FuelLevel::descriptor() {
  ::protobuf_FuelLevelData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_FuelLevelData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const FuelLevel& FuelLevel::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_FuelLevelData_2eproto::scc_info_FuelLevel.base);
  return *internal_default_instance();
}


void FuelLevel::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.FuelLevel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    ::memset(&fuel_level_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&low_fuel_) -
        reinterpret_cast<char*>(&fuel_level_)) + sizeof(low_fuel_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool FuelLevel::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.data.FuelLevel)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 fuel_level = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_fuel_level();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &fuel_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 range = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_range();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &range_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool low_fuel = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_low_fuel();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &low_fuel_)));
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.data.FuelLevel)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.data.FuelLevel)
  return false;
#undef DO_
}

void FuelLevel::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.data.FuelLevel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 fuel_level = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->fuel_level(), output);
  }

  // required int32 range = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->range(), output);
  }

  // required bool low_fuel = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->low_fuel(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.data.FuelLevel)
}

::google::protobuf::uint8* FuelLevel::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.FuelLevel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 fuel_level = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->fuel_level(), target);
  }

  // required int32 range = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->range(), target);
  }

  // required bool low_fuel = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->low_fuel(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.FuelLevel)
  return target;
}

size_t FuelLevel::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.data.FuelLevel)
  size_t total_size = 0;

  if (has_fuel_level()) {
    // required int32 fuel_level = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->fuel_level());
  }

  if (has_range()) {
    // required int32 range = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->range());
  }

  if (has_low_fuel()) {
    // required bool low_fuel = 3;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t FuelLevel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.FuelLevel)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required int32 fuel_level = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->fuel_level());

    // required int32 range = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->range());

    // required bool low_fuel = 3;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FuelLevel::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.FuelLevel)
  GOOGLE_DCHECK_NE(&from, this);
  const FuelLevel* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const FuelLevel>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.FuelLevel)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.FuelLevel)
    MergeFrom(*source);
  }
}

void FuelLevel::MergeFrom(const FuelLevel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.FuelLevel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      fuel_level_ = from.fuel_level_;
    }
    if (cached_has_bits & 0x00000002u) {
      range_ = from.range_;
    }
    if (cached_has_bits & 0x00000004u) {
      low_fuel_ = from.low_fuel_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void FuelLevel::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.FuelLevel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FuelLevel::CopyFrom(const FuelLevel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.FuelLevel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FuelLevel::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  return true;
}

void FuelLevel::Swap(FuelLevel* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FuelLevel::InternalSwap(FuelLevel* other) {
  using std::swap;
  swap(fuel_level_, other->fuel_level_);
  swap(range_, other->range_);
  swap(low_fuel_, other->low_fuel_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata FuelLevel::GetMetadata() const {
  protobuf_FuelLevelData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_FuelLevelData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::data::FuelLevel* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::FuelLevel >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::data::FuelLevel >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
