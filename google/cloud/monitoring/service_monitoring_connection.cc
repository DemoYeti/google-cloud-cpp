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
// source: google/monitoring/v3/service_service.proto

#include "google/cloud/monitoring/service_monitoring_connection.h"
#include "google/cloud/monitoring/internal/service_monitoring_connection_impl.h"
#include "google/cloud/monitoring/internal/service_monitoring_option_defaults.h"
#include "google/cloud/monitoring/internal/service_monitoring_stub_factory.h"
#include "google/cloud/monitoring/service_monitoring_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceMonitoringServiceConnection::~ServiceMonitoringServiceConnection() =
    default;

StatusOr<google::monitoring::v3::Service>
ServiceMonitoringServiceConnection::CreateService(
    google::monitoring::v3::CreateServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::monitoring::v3::Service>
ServiceMonitoringServiceConnection::GetService(
    google::monitoring::v3::GetServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::monitoring::v3::Service>
ServiceMonitoringServiceConnection::ListServices(
    google::monitoring::v3::
        ListServicesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::monitoring::v3::Service>>();
}

StatusOr<google::monitoring::v3::Service>
ServiceMonitoringServiceConnection::UpdateService(
    google::monitoring::v3::UpdateServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ServiceMonitoringServiceConnection::DeleteService(
    google::monitoring::v3::DeleteServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::monitoring::v3::ServiceLevelObjective>
ServiceMonitoringServiceConnection::CreateServiceLevelObjective(
    google::monitoring::v3::CreateServiceLevelObjectiveRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::monitoring::v3::ServiceLevelObjective>
ServiceMonitoringServiceConnection::GetServiceLevelObjective(
    google::monitoring::v3::GetServiceLevelObjectiveRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::monitoring::v3::ServiceLevelObjective>
ServiceMonitoringServiceConnection::ListServiceLevelObjectives(
    google::monitoring::v3::
        ListServiceLevelObjectivesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::monitoring::v3::ServiceLevelObjective>>();
}

StatusOr<google::monitoring::v3::ServiceLevelObjective>
ServiceMonitoringServiceConnection::UpdateServiceLevelObjective(
    google::monitoring::v3::UpdateServiceLevelObjectiveRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ServiceMonitoringServiceConnection::DeleteServiceLevelObjective(
    google::monitoring::v3::DeleteServiceLevelObjectiveRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ServiceMonitoringServiceConnection>
MakeServiceMonitoringServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 ServiceMonitoringServicePolicyOptionList>(
      options, __func__);
  options = monitoring_internal::ServiceMonitoringServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = monitoring_internal::CreateDefaultServiceMonitoringServiceStub(
      background->cq(), options);
  return std::make_shared<
      monitoring_internal::ServiceMonitoringServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring
}  // namespace cloud
}  // namespace google
