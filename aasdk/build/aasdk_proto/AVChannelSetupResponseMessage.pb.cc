// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVChannelSetupResponseMessage.proto

#include "AVChannelSetupResponseMessage.pb.h"

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
class AVChannelSetupResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AVChannelSetupResponse>
      _instance;
} _AVChannelSetupResponse_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_AVChannelSetupResponseMessage_2eproto {
static void InitDefaultsAVChannelSetupResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::messages::_AVChannelSetupResponse_default_instance_;
    new (ptr) ::f1x::aasdk::proto::messages::AVChannelSetupResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::messages::AVChannelSetupResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AVChannelSetupResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAVChannelSetupResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AVChannelSetupResponse.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelSetupResponse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelSetupResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelSetupResponse, media_status_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelSetupResponse, max_unacked_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelSetupResponse, configs_),
  0,
  1,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::f1x::aasdk::proto::messages::AVChannelSetupResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::messages::_AVChannelSetupResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "AVChannelSetupResponseMessage.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n#AVChannelSetupResponseMessage.proto\022\030f"
      "1x.aasdk.proto.messages\032\036AVChannelSetupS"
      "tatusEnum.proto\"\206\001\n\026AVChannelSetupRespon"
      "se\022F\n\014media_status\030\001 \002(\01620.f1x.aasdk.pro"
      "to.enums.AVChannelSetupStatus.Enum\022\023\n\013ma"
      "x_unacked\030\002 \002(\r\022\017\n\007configs\030\003 \003(\r"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 232);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AVChannelSetupResponseMessage.proto", &protobuf_RegisterTypes);
  ::protobuf_AVChannelSetupStatusEnum_2eproto::AddDescriptors();
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
}  // namespace protobuf_AVChannelSetupResponseMessage_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

void AVChannelSetupResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AVChannelSetupResponse::kMediaStatusFieldNumber;
const int AVChannelSetupResponse::kMaxUnackedFieldNumber;
const int AVChannelSetupResponse::kConfigsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AVChannelSetupResponse::AVChannelSetupResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_AVChannelSetupResponseMessage_2eproto::scc_info_AVChannelSetupResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.messages.AVChannelSetupResponse)
}
AVChannelSetupResponse::AVChannelSetupResponse(const AVChannelSetupResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      configs_(from.configs_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&media_status_, &from.media_status_,
    static_cast<size_t>(reinterpret_cast<char*>(&max_unacked_) -
    reinterpret_cast<char*>(&media_status_)) + sizeof(max_unacked_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.messages.AVChannelSetupResponse)
}

void AVChannelSetupResponse::SharedCtor() {
  ::memset(&media_status_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&max_unacked_) -
      reinterpret_cast<char*>(&media_status_)) + sizeof(max_unacked_));
}

AVChannelSetupResponse::~AVChannelSetupResponse() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  SharedDtor();
}

void AVChannelSetupResponse::SharedDtor() {
}

void AVChannelSetupResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AVChannelSetupResponse::descriptor() {
  ::protobuf_AVChannelSetupResponseMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AVChannelSetupResponseMessage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AVChannelSetupResponse& AVChannelSetupResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_AVChannelSetupResponseMessage_2eproto::scc_info_AVChannelSetupResponse.base);
  return *internal_default_instance();
}


void AVChannelSetupResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  configs_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&media_status_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&max_unacked_) -
        reinterpret_cast<char*>(&media_status_)) + sizeof(max_unacked_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AVChannelSetupResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .f1x.aasdk.proto.enums.AVChannelSetupStatus.Enum media_status = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::f1x::aasdk::proto::enums::AVChannelSetupStatus_Enum_IsValid(value)) {
            set_media_status(static_cast< ::f1x::aasdk::proto::enums::AVChannelSetupStatus_Enum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 max_unacked = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_max_unacked();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &max_unacked_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 configs = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 24u, input, this->mutable_configs())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_configs())));
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  return false;
#undef DO_
}

void AVChannelSetupResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .f1x.aasdk.proto.enums.AVChannelSetupStatus.Enum media_status = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->media_status(), output);
  }

  // required uint32 max_unacked = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->max_unacked(), output);
  }

  // repeated uint32 configs = 3;
  for (int i = 0, n = this->configs_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      3, this->configs(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.messages.AVChannelSetupResponse)
}

::google::protobuf::uint8* AVChannelSetupResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .f1x.aasdk.proto.enums.AVChannelSetupStatus.Enum media_status = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->media_status(), target);
  }

  // required uint32 max_unacked = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->max_unacked(), target);
  }

  // repeated uint32 configs = 3;
  target = ::google::protobuf::internal::WireFormatLite::
    WriteUInt32ToArray(3, this->configs_, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  return target;
}

size_t AVChannelSetupResponse::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  size_t total_size = 0;

  if (has_media_status()) {
    // required .f1x.aasdk.proto.enums.AVChannelSetupStatus.Enum media_status = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->media_status());
  }

  if (has_max_unacked()) {
    // required uint32 max_unacked = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->max_unacked());
  }

  return total_size;
}
size_t AVChannelSetupResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .f1x.aasdk.proto.enums.AVChannelSetupStatus.Enum media_status = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->media_status());

    // required uint32 max_unacked = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->max_unacked());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // repeated uint32 configs = 3;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->configs_);
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->configs_size());
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AVChannelSetupResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const AVChannelSetupResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AVChannelSetupResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.messages.AVChannelSetupResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.messages.AVChannelSetupResponse)
    MergeFrom(*source);
  }
}

void AVChannelSetupResponse::MergeFrom(const AVChannelSetupResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  configs_.MergeFrom(from.configs_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      media_status_ = from.media_status_;
    }
    if (cached_has_bits & 0x00000002u) {
      max_unacked_ = from.max_unacked_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void AVChannelSetupResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AVChannelSetupResponse::CopyFrom(const AVChannelSetupResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.messages.AVChannelSetupResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AVChannelSetupResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void AVChannelSetupResponse::Swap(AVChannelSetupResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AVChannelSetupResponse::InternalSwap(AVChannelSetupResponse* other) {
  using std::swap;
  configs_.InternalSwap(&other->configs_);
  swap(media_status_, other->media_status_);
  swap(max_unacked_, other->max_unacked_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AVChannelSetupResponse::GetMetadata() const {
  protobuf_AVChannelSetupResponseMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AVChannelSetupResponseMessage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::messages::AVChannelSetupResponse* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::messages::AVChannelSetupResponse >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::messages::AVChannelSetupResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
