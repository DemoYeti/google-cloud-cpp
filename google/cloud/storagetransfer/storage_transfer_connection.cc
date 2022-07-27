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
// source: google/storagetransfer/v1/transfer.proto

#include "google/cloud/storagetransfer/storage_transfer_connection.h"
#include "google/cloud/storagetransfer/internal/storage_transfer_connection_impl.h"
#include "google/cloud/storagetransfer/internal/storage_transfer_option_defaults.h"
#include "google/cloud/storagetransfer/internal/storage_transfer_stub_factory.h"
#include "google/cloud/storagetransfer/storage_transfer_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace storagetransfer {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageTransferServiceConnection::~StorageTransferServiceConnection() = default;

StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
StorageTransferServiceConnection::GetGoogleServiceAccount(
    google::storagetransfer::v1::GetGoogleServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceConnection::CreateTransferJob(
    google::storagetransfer::v1::CreateTransferJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceConnection::UpdateTransferJob(
    google::storagetransfer::v1::UpdateTransferJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceConnection::GetTransferJob(
    google::storagetransfer::v1::GetTransferJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::storagetransfer::v1::TransferJob>
StorageTransferServiceConnection::ListTransferJobs(
    google::storagetransfer::v1::
        ListTransferJobsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::storagetransfer::v1::TransferJob>>();
}

Status StorageTransferServiceConnection::PauseTransferOperation(
    google::storagetransfer::v1::PauseTransferOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status StorageTransferServiceConnection::ResumeTransferOperation(
    google::storagetransfer::v1::ResumeTransferOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::storagetransfer::v1::TransferOperation>>
StorageTransferServiceConnection::RunTransferJob(
    google::storagetransfer::v1::RunTransferJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::storagetransfer::v1::TransferOperation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceConnection::CreateAgentPool(
    google::storagetransfer::v1::CreateAgentPoolRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceConnection::UpdateAgentPool(
    google::storagetransfer::v1::UpdateAgentPoolRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceConnection::GetAgentPool(
    google::storagetransfer::v1::GetAgentPoolRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::storagetransfer::v1::AgentPool>
StorageTransferServiceConnection::ListAgentPools(
    google::storagetransfer::v1::
        ListAgentPoolsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::storagetransfer::v1::AgentPool>>();
}

Status StorageTransferServiceConnection::DeleteAgentPool(
    google::storagetransfer::v1::DeleteAgentPoolRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<StorageTransferServiceConnection>
MakeStorageTransferServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 StorageTransferServicePolicyOptionList>(
      options, __func__);
  options = storagetransfer_internal::StorageTransferServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = storagetransfer_internal::CreateDefaultStorageTransferServiceStub(
      background->cq(), options);
  return std::make_shared<
      storagetransfer_internal::StorageTransferServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer
}  // namespace cloud
}  // namespace google
