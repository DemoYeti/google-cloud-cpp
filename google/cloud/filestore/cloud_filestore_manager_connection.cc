// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/filestore/v1/cloud_filestore_service.proto

#include "google/cloud/filestore/cloud_filestore_manager_connection.h"
#include "google/cloud/filestore/cloud_filestore_manager_options.h"
#include "google/cloud/filestore/internal/cloud_filestore_manager_connection_impl.h"
#include "google/cloud/filestore/internal/cloud_filestore_manager_option_defaults.h"
#include "google/cloud/filestore/internal/cloud_filestore_manager_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace filestore {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudFilestoreManagerConnection::~CloudFilestoreManagerConnection() = default;

StreamRange<google::cloud::filestore::v1::Instance>
CloudFilestoreManagerConnection::ListInstances(
    google::cloud::filestore::v1::
        ListInstancesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::filestore::v1::Instance>>();
}

StatusOr<google::cloud::filestore::v1::Instance>
CloudFilestoreManagerConnection::GetInstance(
    google::cloud::filestore::v1::GetInstanceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerConnection::CreateInstance(
    google::cloud::filestore::v1::CreateInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::filestore::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerConnection::UpdateInstance(
    google::cloud::filestore::v1::UpdateInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::filestore::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerConnection::RestoreInstance(
    google::cloud::filestore::v1::RestoreInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::filestore::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerConnection::DeleteInstance(
    google::cloud::filestore::v1::DeleteInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::common::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::filestore::v1::Backup>
CloudFilestoreManagerConnection::ListBackups(
    google::cloud::filestore::v1::
        ListBackupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::filestore::v1::Backup>>();
}

StatusOr<google::cloud::filestore::v1::Backup>
CloudFilestoreManagerConnection::GetBackup(
    google::cloud::filestore::v1::GetBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::filestore::v1::Backup>>
CloudFilestoreManagerConnection::CreateBackup(
    google::cloud::filestore::v1::CreateBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::filestore::v1::Backup>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerConnection::DeleteBackup(
    google::cloud::filestore::v1::DeleteBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::common::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::filestore::v1::Backup>>
CloudFilestoreManagerConnection::UpdateBackup(
    google::cloud::filestore::v1::UpdateBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::filestore::v1::Backup>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<CloudFilestoreManagerConnection>
MakeCloudFilestoreManagerConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 CloudFilestoreManagerPolicyOptionList>(
      options, __func__);
  options = filestore_internal::CloudFilestoreManagerDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = filestore_internal::CreateDefaultCloudFilestoreManagerStub(
      background->cq(), options);
  return std::make_shared<
      filestore_internal::CloudFilestoreManagerConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore
}  // namespace cloud
}  // namespace google
