// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VendorExtensionChannelData.proto

#include "VendorExtensionChannelData.pb.h"

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
class VendorExtensionChannelDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VendorExtensionChannel>
      _instance;
} _VendorExtensionChannel_default_instance_;
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace protobuf_VendorExtensionChannelData_2eproto {
static void InitDefaultsVendorExtensionChannel() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::f1x::aasdk::proto::data::_VendorExtensionChannel_default_instance_;
    new (ptr) ::f1x::aasdk::proto::data::VendorExtensionChannel();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::f1x::aasdk::proto::data::VendorExtensionChannel::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_VendorExtensionChannel =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVendorExtensionChannel}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_VendorExtensionChannel.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::VendorExtensionChannel, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::VendorExtensionChannel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::VendorExtensionChannel, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::VendorExtensionChannel, package_white_list_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::f1x::aasdk::proto::data::VendorExtensionChannel, data_),
  0,
  ~0u,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::f1x::aasdk::proto::data::VendorExtensionChannel)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::f1x::aasdk::proto::data::_VendorExtensionChannel_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "VendorExtensionChannelData.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n VendorExtensionChannelData.proto\022\024f1x."
      "aasdk.proto.data\"P\n\026VendorExtensionChann"
      "el\022\014\n\004name\030\001 \002(\t\022\032\n\022package_white_list\030\002"
      " \003(\t\022\014\n\004data\030\003 \001(\014"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 138);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "VendorExtensionChannelData.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_VendorExtensionChannelData_2eproto
namespace f1x {
namespace aasdk {
namespace proto {
namespace data {

// ===================================================================

void VendorExtensionChannel::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VendorExtensionChannel::kNameFieldNumber;
const int VendorExtensionChannel::kPackageWhiteListFieldNumber;
const int VendorExtensionChannel::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VendorExtensionChannel::VendorExtensionChannel()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_VendorExtensionChannelData_2eproto::scc_info_VendorExtensionChannel.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:f1x.aasdk.proto.data.VendorExtensionChannel)
}
VendorExtensionChannel::VendorExtensionChannel(const VendorExtensionChannel& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      package_white_list_(from.package_white_list_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_data()) {
    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  // @@protoc_insertion_point(copy_constructor:f1x.aasdk.proto.data.VendorExtensionChannel)
}

void VendorExtensionChannel::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

VendorExtensionChannel::~VendorExtensionChannel() {
  // @@protoc_insertion_point(destructor:f1x.aasdk.proto.data.VendorExtensionChannel)
  SharedDtor();
}

void VendorExtensionChannel::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VendorExtensionChannel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* VendorExtensionChannel::descriptor() {
  ::protobuf_VendorExtensionChannelData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_VendorExtensionChannelData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VendorExtensionChannel& VendorExtensionChannel::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_VendorExtensionChannelData_2eproto::scc_info_VendorExtensionChannel.base);
  return *internal_default_instance();
}


void VendorExtensionChannel::Clear() {
// @@protoc_insertion_point(message_clear_start:f1x.aasdk.proto.data.VendorExtensionChannel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  package_white_list_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      data_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool VendorExtensionChannel::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:f1x.aasdk.proto.data.VendorExtensionChannel)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "f1x.aasdk.proto.data.VendorExtensionChannel.name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string package_white_list = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_package_white_list()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->package_white_list(this->package_white_list_size() - 1).data(),
            static_cast<int>(this->package_white_list(this->package_white_list_size() - 1).length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "f1x.aasdk.proto.data.VendorExtensionChannel.package_white_list");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes data = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
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
  // @@protoc_insertion_point(parse_success:f1x.aasdk.proto.data.VendorExtensionChannel)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:f1x.aasdk.proto.data.VendorExtensionChannel)
  return false;
#undef DO_
}

void VendorExtensionChannel::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:f1x.aasdk.proto.data.VendorExtensionChannel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "f1x.aasdk.proto.data.VendorExtensionChannel.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated string package_white_list = 2;
  for (int i = 0, n = this->package_white_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->package_white_list(i).data(), static_cast<int>(this->package_white_list(i).length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "f1x.aasdk.proto.data.VendorExtensionChannel.package_white_list");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->package_white_list(i), output);
  }

  // optional bytes data = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->data(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:f1x.aasdk.proto.data.VendorExtensionChannel)
}

::google::protobuf::uint8* VendorExtensionChannel::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:f1x.aasdk.proto.data.VendorExtensionChannel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "f1x.aasdk.proto.data.VendorExtensionChannel.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated string package_white_list = 2;
  for (int i = 0, n = this->package_white_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->package_white_list(i).data(), static_cast<int>(this->package_white_list(i).length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "f1x.aasdk.proto.data.VendorExtensionChannel.package_white_list");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->package_white_list(i), target);
  }

  // optional bytes data = 3;
  if (cached_has_bits & 0x00000002u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->data(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:f1x.aasdk.proto.data.VendorExtensionChannel)
  return target;
}

size_t VendorExtensionChannel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:f1x.aasdk.proto.data.VendorExtensionChannel)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required string name = 1;
  if (has_name()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }
  // repeated string package_white_list = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->package_white_list_size());
  for (int i = 0, n = this->package_white_list_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->package_white_list(i));
  }

  // optional bytes data = 3;
  if (has_data()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->data());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VendorExtensionChannel::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:f1x.aasdk.proto.data.VendorExtensionChannel)
  GOOGLE_DCHECK_NE(&from, this);
  const VendorExtensionChannel* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VendorExtensionChannel>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:f1x.aasdk.proto.data.VendorExtensionChannel)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:f1x.aasdk.proto.data.VendorExtensionChannel)
    MergeFrom(*source);
  }
}

void VendorExtensionChannel::MergeFrom(const VendorExtensionChannel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:f1x.aasdk.proto.data.VendorExtensionChannel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  package_white_list_.MergeFrom(from.package_white_list_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_data();
      data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
    }
  }
}

void VendorExtensionChannel::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:f1x.aasdk.proto.data.VendorExtensionChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VendorExtensionChannel::CopyFrom(const VendorExtensionChannel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:f1x.aasdk.proto.data.VendorExtensionChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VendorExtensionChannel::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void VendorExtensionChannel::Swap(VendorExtensionChannel* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VendorExtensionChannel::InternalSwap(VendorExtensionChannel* other) {
  using std::swap;
  package_white_list_.InternalSwap(CastToBase(&other->package_white_list_));
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  data_.Swap(&other->data_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata VendorExtensionChannel::GetMetadata() const {
  protobuf_VendorExtensionChannelData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_VendorExtensionChannelData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace data
}  // namespace proto
}  // namespace aasdk
}  // namespace f1x
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::f1x::aasdk::proto::data::VendorExtensionChannel* Arena::CreateMaybeMessage< ::f1x::aasdk::proto::data::VendorExtensionChannel >(Arena* arena) {
  return Arena::CreateInternal< ::f1x::aasdk::proto::data::VendorExtensionChannel >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)