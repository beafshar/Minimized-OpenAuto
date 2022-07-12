// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVChannelStartIndicationMessage.proto

#include "AVChannelStartIndicationMessage.pb.h"

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
class AVChannelStartIndicationDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AVChannelStartIndication>
      _instance;
} _AVChannelStartIndication_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_AVChannelStartIndicationMessage_2eproto {
static void InitDefaultsAVChannelStartIndication() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::messages::_AVChannelStartIndication_default_instance_;
    new (ptr) ::f1x::aasdk::proto::messages::AVChannelStartIndication();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::messages::AVChannelStartIndication::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AVChannelStartIndication =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAVChannelStartIndication}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AVChannelStartIndication.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelStartIndication, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelStartIndication, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelStartIndication, session_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVChannelStartIndication, config_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::f1x::aasdk::proto::messages::AVChannelStartIndication)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::messages::_AVChannelStartIndication_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "AVChannelStartIndicationMessage.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n%AVChannelStartIndicationMessage.proto\022"
      "\030f1x.aasdk.proto.messages\";\n\030AVChannelSt"
      "artIndication\022\017\n\007session\030\001 \002(\005\022\016\n\006config"
      "\030\002 \002(\r"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 126);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AVChannelStartIndicationMessage.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_AVChannelStartIndicationMessage_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

void AVChannelStartIndication::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AVChannelStartIndication::kSessionFieldNumber;
const int AVChannelStartIndication::kConfigFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AVChannelStartIndication::AVChannelStartIndication()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_AVChannelStartIndicationMessage_2eproto::scc_info_AVChannelStartIndication.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.messages.AVChannelStartIndication)
}
AVChannelStartIndication::AVChannelStartIndication(const AVChannelStartIndication& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&session_, &from.session_,
    static_cast<size_t>(reinterpret_cast<char*>(&config_) -
    reinterpret_cast<char*>(&session_)) + sizeof(config_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.messages.AVChannelStartIndication)
}

void AVChannelStartIndication::SharedCtor() {
  ::memset(&session_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&config_) -
      reinterpret_cast<char*>(&session_)) + sizeof(config_));
}

AVChannelStartIndication::~AVChannelStartIndication() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.messages.AVChannelStartIndication)
  SharedDtor();
}

void AVChannelStartIndication::SharedDtor() {
}

void AVChannelStartIndication::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AVChannelStartIndication::descriptor() {
  ::protobuf_AVChannelStartIndicationMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AVChannelStartIndicationMessage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AVChannelStartIndication& AVChannelStartIndication::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_AVChannelStartIndicationMessage_2eproto::scc_info_AVChannelStartIndication.base);
  return *internal_default_instance();
}


void AVChannelStartIndication::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&session_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&config_) -
        reinterpret_cast<char*>(&session_)) + sizeof(config_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AVChannelStartIndication::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 session = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_session();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &session_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 config = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_config();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &config_)));
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.messages.AVChannelStartIndication)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.messages.AVChannelStartIndication)
  return false;
#undef DO_
}

void AVChannelStartIndication::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 session = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->session(), output);
  }

  // required uint32 config = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->config(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.messages.AVChannelStartIndication)
}

::google::protobuf::uint8* AVChannelStartIndication::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 session = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->session(), target);
  }

  // required uint32 config = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->config(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.messages.AVChannelStartIndication)
  return target;
}

size_t AVChannelStartIndication::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  size_t total_size = 0;

  if (has_session()) {
    // required int32 session = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->session());
  }

  if (has_config()) {
    // required uint32 config = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->config());
  }

  return total_size;
}
size_t AVChannelStartIndication::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 session = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->session());

    // required uint32 config = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->config());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AVChannelStartIndication::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  GOOGLE_DCHECK_NE(&from, this);
  const AVChannelStartIndication* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AVChannelStartIndication>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.messages.AVChannelStartIndication)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.messages.AVChannelStartIndication)
    MergeFrom(*source);
  }
}

void AVChannelStartIndication::MergeFrom(const AVChannelStartIndication& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      session_ = from.session_;
    }
    if (cached_has_bits & 0x00000002u) {
      config_ = from.config_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void AVChannelStartIndication::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AVChannelStartIndication::CopyFrom(const AVChannelStartIndication& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.messages.AVChannelStartIndication)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AVChannelStartIndication::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void AVChannelStartIndication::Swap(AVChannelStartIndication* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AVChannelStartIndication::InternalSwap(AVChannelStartIndication* other) {
  using std::swap;
  swap(session_, other->session_);
  swap(config_, other->config_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AVChannelStartIndication::GetMetadata() const {
  protobuf_AVChannelStartIndicationMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AVChannelStartIndicationMessage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::messages::AVChannelStartIndication* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::messages::AVChannelStartIndication >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::messages::AVChannelStartIndication >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
