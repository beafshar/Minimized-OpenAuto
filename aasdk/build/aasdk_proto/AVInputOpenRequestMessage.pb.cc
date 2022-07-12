// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AVInputOpenRequestMessage.proto

#include "AVInputOpenRequestMessage.pb.h"

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
class AVInputOpenRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AVInputOpenRequest>
      _instance;
} _AVInputOpenRequest_default_instance_;
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_AVInputOpenRequestMessage_2eproto {
static void InitDefaultsAVInputOpenRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::messages::_AVInputOpenRequest_default_instance_;
    new (ptr) ::f1x::aasdk::proto::messages::AVInputOpenRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::messages::AVInputOpenRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AVInputOpenRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAVInputOpenRequest}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AVInputOpenRequest.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVInputOpenRequest, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVInputOpenRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVInputOpenRequest, open_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVInputOpenRequest, anc_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVInputOpenRequest, ec_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::messages::AVInputOpenRequest, max_unacked_),
  0,
  1,
  2,
  3,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::f1x::aasdk::proto::messages::AVInputOpenRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::messages::_AVInputOpenRequest_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "AVInputOpenRequestMessage.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\037AVInputOpenRequestMessage.proto\022\030f1x.a"
      "asdk.proto.messages\"P\n\022AVInputOpenReques"
      "t\022\014\n\004open\030\001 \002(\010\022\013\n\003anc\030\002 \001(\010\022\n\n\002ec\030\003 \001(\010"
      "\022\023\n\013max_unacked\030\004 \001(\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 141);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AVInputOpenRequestMessage.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_AVInputOpenRequestMessage_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace messages {

// ===================================================================

void AVInputOpenRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AVInputOpenRequest::kOpenFieldNumber;
const int AVInputOpenRequest::kAncFieldNumber;
const int AVInputOpenRequest::kEcFieldNumber;
const int AVInputOpenRequest::kMaxUnackedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AVInputOpenRequest::AVInputOpenRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_AVInputOpenRequestMessage_2eproto::scc_info_AVInputOpenRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.messages.AVInputOpenRequest)
}
AVInputOpenRequest::AVInputOpenRequest(const AVInputOpenRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&open_, &from.open_,
    static_cast<size_t>(reinterpret_cast<char*>(&max_unacked_) -
    reinterpret_cast<char*>(&open_)) + sizeof(max_unacked_));
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.messages.AVInputOpenRequest)
}

void AVInputOpenRequest::SharedCtor() {
  ::memset(&open_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&max_unacked_) -
      reinterpret_cast<char*>(&open_)) + sizeof(max_unacked_));
}

AVInputOpenRequest::~AVInputOpenRequest() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.messages.AVInputOpenRequest)
  SharedDtor();
}

void AVInputOpenRequest::SharedDtor() {
}

void AVInputOpenRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AVInputOpenRequest::descriptor() {
  ::protobuf_AVInputOpenRequestMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AVInputOpenRequestMessage_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AVInputOpenRequest& AVInputOpenRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_AVInputOpenRequestMessage_2eproto::scc_info_AVInputOpenRequest.base);
  return *internal_default_instance();
}


void AVInputOpenRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.messages.AVInputOpenRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    ::memset(&open_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&max_unacked_) -
        reinterpret_cast<char*>(&open_)) + sizeof(max_unacked_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AVInputOpenRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.messages.AVInputOpenRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool open = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_open();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &open_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool anc = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_anc();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &anc_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool ec = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_ec();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &ec_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 max_unacked = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_max_unacked();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_unacked_)));
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.messages.AVInputOpenRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.messages.AVInputOpenRequest)
  return false;
#undef DO_
}

void AVInputOpenRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.messages.AVInputOpenRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool open = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->open(), output);
  }

  // optional bool anc = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->anc(), output);
  }

  // optional bool ec = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->ec(), output);
  }

  // optional int32 max_unacked = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->max_unacked(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.messages.AVInputOpenRequest)
}

::google::protobuf::uint8* AVInputOpenRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.messages.AVInputOpenRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool open = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->open(), target);
  }

  // optional bool anc = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->anc(), target);
  }

  // optional bool ec = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->ec(), target);
  }

  // optional int32 max_unacked = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->max_unacked(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.messages.AVInputOpenRequest)
  return target;
}

size_t AVInputOpenRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.messages.AVInputOpenRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required bool open = 1;
  if (has_open()) {
    total_size += 1 + 1;
  }
  if (_has_bits_[0 / 32] & 14u) {
    // optional bool anc = 2;
    if (has_anc()) {
      total_size += 1 + 1;
    }

    // optional bool ec = 3;
    if (has_ec()) {
      total_size += 1 + 1;
    }

    // optional int32 max_unacked = 4;
    if (has_max_unacked()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_unacked());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AVInputOpenRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.messages.AVInputOpenRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const AVInputOpenRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AVInputOpenRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.messages.AVInputOpenRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.messages.AVInputOpenRequest)
    MergeFrom(*source);
  }
}

void AVInputOpenRequest::MergeFrom(const AVInputOpenRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.messages.AVInputOpenRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      open_ = from.open_;
    }
    if (cached_has_bits & 0x00000002u) {
      anc_ = from.anc_;
    }
    if (cached_has_bits & 0x00000004u) {
      ec_ = from.ec_;
    }
    if (cached_has_bits & 0x00000008u) {
      max_unacked_ = from.max_unacked_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void AVInputOpenRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.messages.AVInputOpenRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AVInputOpenRequest::CopyFrom(const AVInputOpenRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.messages.AVInputOpenRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AVInputOpenRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void AVInputOpenRequest::Swap(AVInputOpenRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AVInputOpenRequest::InternalSwap(AVInputOpenRequest* other) {
  using std::swap;
  swap(open_, other->open_);
  swap(anc_, other->anc_);
  swap(ec_, other->ec_);
  swap(max_unacked_, other->max_unacked_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AVInputOpenRequest::GetMetadata() const {
  protobuf_AVInputOpenRequestMessage_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AVInputOpenRequestMessage_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::messages::AVInputOpenRequest* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::messages::AVInputOpenRequest >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::messages::AVInputOpenRequest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)