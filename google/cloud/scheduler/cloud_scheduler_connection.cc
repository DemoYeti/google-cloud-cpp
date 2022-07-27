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
// source: google/cloud/scheduler/v1/cloudscheduler.proto

#include "google/cloud/scheduler/cloud_scheduler_connection.h"
#include "google/cloud/scheduler/cloud_scheduler_options.h"
#include "google/cloud/scheduler/internal/cloud_scheduler_connection_impl.h"
#include "google/cloud/scheduler/internal/cloud_scheduler_option_defaults.h"
#include "google/cloud/scheduler/internal/cloud_scheduler_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace scheduler {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudSchedulerConnection::~CloudSchedulerConnection() = default;

StreamRange<google::cloud::scheduler::v1::Job>
CloudSchedulerConnection::ListJobs(
    google::cloud::scheduler::v1::
        ListJobsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::scheduler::v1::Job>>();
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerConnection::GetJob(
    google::cloud::scheduler::v1::GetJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerConnection::CreateJob(
    google::cloud::scheduler::v1::CreateJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerConnection::UpdateJob(
    google::cloud::scheduler::v1::UpdateJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CloudSchedulerConnection::DeleteJob(
    google::cloud::scheduler::v1::DeleteJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerConnection::PauseJob(
    google::cloud::scheduler::v1::PauseJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerConnection::ResumeJob(
    google::cloud::scheduler::v1::ResumeJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::scheduler::v1::Job> CloudSchedulerConnection::RunJob(
    google::cloud::scheduler::v1::RunJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<CloudSchedulerConnection> MakeCloudSchedulerConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 CloudSchedulerPolicyOptionList>(options,
                                                                 __func__);
  options =
      scheduler_internal::CloudSchedulerDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = scheduler_internal::CreateDefaultCloudSchedulerStub(
      background->cq(), options);
  return std::make_shared<scheduler_internal::CloudSchedulerConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace scheduler
}  // namespace cloud
}  // namespace google
