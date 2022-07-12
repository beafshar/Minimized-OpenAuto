// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVChannelSetupRequestMessage.proto

#include "AVChannelSetupRequestMessage.pb.h"

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
class AVChannelSetupRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AVChannelSetupRequest>
      _instance;
} _AVChannelSetupRequest_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_AVChannelSetupRequestMessage_2eproto {
static void InitDefaultsAVChannelSetupRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::messages::_AVChannelSetupRequest_default_instance_;
    new (ptr) ::f1x::aasdk::proto::messages::AVChannelSetupRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::messages::AVChannelSetupRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AVChannelSetupRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAVChannelSetupRequest}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AVChannelSetupRequest.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelSetupRequest, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelSetupRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelSetupRequest, config_index_),
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::f1x::aasdk::proto::messages::AVChannelSetupRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::messages::_AVChannelSetupRequest_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "AVChannelSetupRequestMessage.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\"AVChannelSetupRequestMessage.proto\022\030f1"
      "x.aasdk.proto.messages\"-\n\025AVChannelSetup"
      "Request\022\024\n\014config_index\030\001 \002(\r"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 109);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AVChannelSetupRequestMessage.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_AVChannelSetupRequestMessage_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

void AVChannelSetupRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AVChannelSetupRequest::kConfigIndexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AVChannelSetupRequest::AVChannelSetupRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_AVChannelSetupRequestMessage_2eproto::scc_info_AVChannelSetupRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.messages.AVChannelSetupRequest)
}
AVChannelSetupRequest::AVChannelSetupRequest(const AVChannelSetupRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  config_index_ = from.config_index_;
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.messages.AVChannelSetupRequest)
}

void AVChannelSetupRequest::SharedCtor() {
  config_index_ = 0u;
}

AVChannelSetupRequest::~AVChannelSetupRequest() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  SharedDtor();
}

void AVChannelSetupRequest::SharedDtor() {
}

void AVChannelSetupRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AVChannelSetupRequest::descriptor() {
  ::protobuf_AVChannelSetupRequestMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AVChannelSetupRequestMessage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AVChannelSetupRequest& AVChannelSetupRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_AVChannelSetupRequestMessage_2eproto::scc_info_AVChannelSetupRequest.base);
  return *internal_default_instance();
}


void AVChannelSetupRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  config_index_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AVChannelSetupRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 config_index = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_config_index();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &config_index_)));
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  return false;
#undef DO_
}

void AVChannelSetupRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 config_index = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->config_index(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.messages.AVChannelSetupRequest)
}

::google::protobuf::uint8* AVChannelSetupRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 config_index = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->config_index(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  return target;
}

size_t AVChannelSetupRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required uint32 config_index = 1;
  if (has_config_index()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->config_index());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AVChannelSetupRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const AVChannelSetupRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AVChannelSetupRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.messages.AVChannelSetupRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.messages.AVChannelSetupRequest)
    MergeFrom(*source);
  }
}

void AVChannelSetupRequest::MergeFrom(const AVChannelSetupRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_config_index()) {
    set_config_index(from.config_index());
  }
}

void AVChannelSetupRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AVChannelSetupRequest::CopyFrom(const AVChannelSetupRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.messages.AVChannelSetupRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AVChannelSetupRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void AVChannelSetupRequest::Swap(AVChannelSetupRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AVChannelSetupRequest::InternalSwap(AVChannelSetupRequest* other) {
  using std::swap;
  swap(config_index_, other->config_index_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AVChannelSetupRequest::GetMetadata() const {
  protobuf_AVChannelSetupRequestMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AVChannelSetupRequestMessage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::messages::AVChannelSetupRequest* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::messages::AVChannelSetupRequest >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::messages::AVChannelSetupRequest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)