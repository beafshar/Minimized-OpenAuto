// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DoorData.proto

#include "DoorData.pb.h"

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
class DoorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Door>
      _instance;
} _Door_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_DoorData_2eproto {
static void InitDefaultsDoor() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_Door_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::Door();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::Door::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Door =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsDoor}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Door.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::Door, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::Door, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::Door, hood_open_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::Door, boot_open_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::Door, door_open_),
  0,
  1,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::f1x::aasdk::proto::data::Door)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::data::_Door_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "DoorData.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\016DoorData.proto\022\024f1x.aasdk.proto.data\"\?"
      "\n\004Door\022\021\n\thood_open\030\001 \002(\010\022\021\n\tboot_open\030\002"
      " \002(\010\022\021\n\tdoor_open\030\003 \003(\010"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 103);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DoorData.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_DoorData_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void Door::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Door::kHoodOpenFieldNumber;
const int Door::kBootOpenFieldNumber;
const int Door::kDoorOpenFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Door::Door()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_DoorData_2eproto::scc_info_Door.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.data.Door)
}
Door::Door(const Door& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      door_open_(from.door_open_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&hood_open_, &from.hood_open_,
    static_cast<size_t>(reinterpret_cast<char*>(&boot_open_) -
    reinterpret_cast<char*>(&hood_open_)) + sizeof(boot_open_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.Door)
}

void Door::SharedCtor() {
  ::memset(&hood_open_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&boot_open_) -
      reinterpret_cast<char*>(&hood_open_)) + sizeof(boot_open_));
}

Door::~Door() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.Door)
  SharedDtor();
}

void Door::SharedDtor() {
}

void Door::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Door::descriptor() {
  ::protobuf_DoorData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_DoorData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Door& Door::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_DoorData_2eproto::scc_info_Door.base);
  return *internal_default_instance();
}


void Door::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.Door)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  door_open_.Clear();
  ::memset(&hood_open_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&boot_open_) -
      reinterpret_cast<char*>(&hood_open_)) + sizeof(boot_open_));
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Door::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.data.Door)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool hood_open = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_hood_open();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &hood_open_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool boot_open = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_boot_open();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &boot_open_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated bool door_open = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 1, 24u, input, this->mutable_door_open())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, this->mutable_door_open())));
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.data.Door)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.data.Door)
  return false;
#undef DO_
}

void Door::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.data.Door)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool hood_open = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->hood_open(), output);
  }

  // required bool boot_open = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->boot_open(), output);
  }

  // repeated bool door_open = 3;
  for (int i = 0, n = this->door_open_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(
      3, this->door_open(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.data.Door)
}

::google::protobuf::uint8* Door::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.Door)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool hood_open = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->hood_open(), target);
  }

  // required bool boot_open = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->boot_open(), target);
  }

  // repeated bool door_open = 3;
  target = ::google::protobuf::internal::WireFormatLite::
    WriteBoolToArray(3, this->door_open_, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.Door)
  return target;
}

size_t Door::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.data.Door)
  size_t total_size = 0;

  if (has_hood_open()) {
    // required bool hood_open = 1;
    total_size += 1 + 1;
  }

  if (has_boot_open()) {
    // required bool boot_open = 2;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t Door::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.Door)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required bool hood_open = 1;
    total_size += 1 + 1;

    // required bool boot_open = 2;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // repeated bool door_open = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->door_open_size());
    size_t data_size = 1UL * count;
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->door_open_size());
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Door::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.Door)
  GOOGLE_DCHECK_NE(&from, this);
  const Door* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Door>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.Door)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.Door)
    MergeFrom(*source);
  }
}

void Door::MergeFrom(const Door& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.Door)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  door_open_.MergeFrom(from.door_open_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      hood_open_ = from.hood_open_;
    }
    if (cached_has_bits & 0x00000002u) {
      boot_open_ = from.boot_open_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Door::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.Door)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Door::CopyFrom(const Door& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.Door)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Door::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void Door::Swap(Door* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Door::InternalSwap(Door* other) {
  using std::swap;
  door_open_.InternalSwap(&other->door_open_);
  swap(hood_open_, other->hood_open_);
  swap(boot_open_, other->boot_open_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Door::GetMetadata() const {
  protobuf_DoorData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_DoorData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::data::Door* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::Door >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::data::Door >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)