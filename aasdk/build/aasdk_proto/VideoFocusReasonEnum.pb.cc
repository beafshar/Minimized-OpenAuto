// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VideoFocusReasonEnum.proto

#include "VideoFocusReasonEnum.pb.h"

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
class VideoFocusReasonDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VideoFocusReason>
      _instance;
} _VideoFocusReason_default_instance_;
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_VideoFocusReasonEnum_2eproto {
static void InitDefaultsVideoFocusReason() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::enums::_VideoFocusReason_default_instance_;
    new (ptr) ::f1x::aasdk::proto::enums::VideoFocusReason();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::enums::VideoFocusReason::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_VideoFocusReason =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVideoFocusReason}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_VideoFocusReason.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::enums::VideoFocusReason, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::enums::VideoFocusReason, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 5, sizeof(::f1x::aasdk::proto::enums::VideoFocusReason)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::enums::_VideoFocusReason_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "VideoFocusReasonEnum.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\032VideoFocusReasonEnum.proto\022\025f1x.aasdk."
      "proto.enums\":\n\020VideoFocusReason\"&\n\004Enum\022"
      "\010\n\004NONE\020\000\022\t\n\005UNK_1\020\001\022\t\n\005UNK_2\020\002"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 111);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "VideoFocusReasonEnum.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_VideoFocusReasonEnum_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace enums {
const ::google::protobuf::EnumDescriptor* VideoFocusReason_Enum_descriptor() {
  protobuf_VideoFocusReasonEnum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_VideoFocusReasonEnum_2eproto::file_level_enum_descriptors[0];
}
bool VideoFocusReason_Enum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const VideoFocusReason_Enum VideoFocusReason::NONE;
const VideoFocusReason_Enum VideoFocusReason::UNK_1;
const VideoFocusReason_Enum VideoFocusReason::UNK_2;
const VideoFocusReason_Enum VideoFocusReason::Enum_MIN;
const VideoFocusReason_Enum VideoFocusReason::Enum_MAX;
const int VideoFocusReason::Enum_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void VideoFocusReason::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VideoFocusReason::VideoFocusReason()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_VideoFocusReasonEnum_2eproto::scc_info_VideoFocusReason.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.enums.VideoFocusReason)
}
VideoFocusReason::VideoFocusReason(const VideoFocusReason& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.enums.VideoFocusReason)
}

void VideoFocusReason::SharedCtor() {
}

VideoFocusReason::~VideoFocusReason() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.enums.VideoFocusReason)
  SharedDtor();
}

void VideoFocusReason::SharedDtor() {
}

void VideoFocusReason::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* VideoFocusReason::descriptor() {
  ::protobuf_VideoFocusReasonEnum_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_VideoFocusReasonEnum_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VideoFocusReason& VideoFocusReason::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_VideoFocusReasonEnum_2eproto::scc_info_VideoFocusReason.base);
  return *internal_default_instance();
}


void VideoFocusReason::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.enums.VideoFocusReason)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool VideoFocusReason::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.enums.VideoFocusReason)
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.enums.VideoFocusReason)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.enums.VideoFocusReason)
  return false;
#undef DO_
}

void VideoFocusReason::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.enums.VideoFocusReason)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.enums.VideoFocusReason)
}

::google::protobuf::uint8* VideoFocusReason::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.enums.VideoFocusReason)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.enums.VideoFocusReason)
  return target;
}

size_t VideoFocusReason::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.enums.VideoFocusReason)
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

void VideoFocusReason::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.enums.VideoFocusReason)
  GOOGLE_DCHECK_NE(&from, this);
  const VideoFocusReason* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VideoFocusReason>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.enums.VideoFocusReason)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.enums.VideoFocusReason)
    MergeFrom(*source);
  }
}

void VideoFocusReason::MergeFrom(const VideoFocusReason& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.enums.VideoFocusReason)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void VideoFocusReason::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.enums.VideoFocusReason)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VideoFocusReason::CopyFrom(const VideoFocusReason& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.enums.VideoFocusReason)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VideoFocusReason::IsInitialized() const {
  return true;
}

void VideoFocusReason::Swap(VideoFocusReason* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VideoFocusReason::InternalSwap(VideoFocusReason* other) {
  using std::swap;
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata VideoFocusReason::GetMetadata() const {
  protobuf_VideoFocusReasonEnum_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_VideoFocusReasonEnum_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace enums
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::enums::VideoFocusReason* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::enums::VideoFocusReason >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::enums::VideoFocusReason >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
