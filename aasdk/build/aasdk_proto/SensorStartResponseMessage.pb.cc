// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorStartResponseMessage.proto

#include "SensorStartResponseMessage.pb.h"

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
namespace messages {
class SensorStartResponseMessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SensorStartResponseMessage>
      _instance;
} _SensorStartResponseMessage_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_SensorStartResponseMessage_2eproto {
static void InitDefaultsSensorStartResponseMessage() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::messages::_SensorStartResponseMessage_default_instance_;
    new (ptr) ::f1x::aasdk::proto::messages::SensorStartResponseMessage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::messages::SensorStartResponseMessage::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SensorStartResponseMessage =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSensorStartResponseMessage}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SensorStartResponseMessage.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::SensorStartResponseMessage, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::SensorStartResponseMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::SensorStartResponseMessage, status_),
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::f1x::aasdk::proto::messages::SensorStartResponseMessage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::messages::_SensorStartResponseMessage_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "SensorStartResponseMessage.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n SensorStartResponseMessage.proto\022\030f1x."
      "aasdk.proto.messages\032\020StatusEnum.proto\"P"
      "\n\032SensorStartResponseMessage\0222\n\006status\030\001"
      " \002(\0162\".f1x.aasdk.proto.enums.Status.Enum"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 160);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SensorStartResponseMessage.proto", &protobuf_RegisterTypes);
  ::protobuf_StatusEnum_2eproto::AddDescriptors();
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
}  // namespace protobuf_SensorStartResponseMessage_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

void SensorStartResponseMessage::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SensorStartResponseMessage::kStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SensorStartResponseMessage::SensorStartResponseMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_SensorStartResponseMessage_2eproto::scc_info_SensorStartResponseMessage.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.messages.SensorStartResponseMessage)
}
SensorStartResponseMessage::SensorStartResponseMessage(const SensorStartResponseMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.messages.SensorStartResponseMessage)
}

void SensorStartResponseMessage::SharedCtor() {
  status_ = 0;
}

SensorStartResponseMessage::~SensorStartResponseMessage() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  SharedDtor();
}

void SensorStartResponseMessage::SharedDtor() {
}

void SensorStartResponseMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SensorStartResponseMessage::descriptor() {
  ::protobuf_SensorStartResponseMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SensorStartResponseMessage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SensorStartResponseMessage& SensorStartResponseMessage::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_SensorStartResponseMessage_2eproto::scc_info_SensorStartResponseMessage.base);
  return *internal_default_instance();
}


void SensorStartResponseMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  status_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SensorStartResponseMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .f1x.aasdk.proto.enums.Status.Enum status = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::f1x::aasdk::proto::enums::Status_Enum_IsValid(value)) {
            set_status(static_cast< ::f1x::aasdk::proto::enums::Status_Enum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast< ::google::protobuf::uint64>(value));
          }
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  return false;
#undef DO_
}

void SensorStartResponseMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .f1x.aasdk.proto.enums.Status.Enum status = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->status(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.messages.SensorStartResponseMessage)
}

::google::protobuf::uint8* SensorStartResponseMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .f1x.aasdk.proto.enums.Status.Enum status = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->status(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  return target;
}

size_t SensorStartResponseMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required .f1x.aasdk.proto.enums.Status.Enum status = 1;
  if (has_status()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SensorStartResponseMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const SensorStartResponseMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SensorStartResponseMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.messages.SensorStartResponseMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.messages.SensorStartResponseMessage)
    MergeFrom(*source);
  }
}

void SensorStartResponseMessage::MergeFrom(const SensorStartResponseMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_status()) {
    set_status(from.status());
  }
}

void SensorStartResponseMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SensorStartResponseMessage::CopyFrom(const SensorStartResponseMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.messages.SensorStartResponseMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SensorStartResponseMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void SensorStartResponseMessage::Swap(SensorStartResponseMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SensorStartResponseMessage::InternalSwap(SensorStartResponseMessage* other) {
  using std::swap;
  swap(status_, other->status_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SensorStartResponseMessage::GetMetadata() const {
  protobuf_SensorStartResponseMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SensorStartResponseMessage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::messages::SensorStartResponseMessage* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::messages::SensorStartResponseMessage >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::messages::SensorStartResponseMessage >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
