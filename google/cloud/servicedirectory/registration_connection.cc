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
// source: google/cloud/servicedirectory/v1/registration_service.proto

#include "google/cloud/servicedirectory/registration_connection.h"
#include "google/cloud/servicedirectory/internal/registration_connection_impl.h"
#include "google/cloud/servicedirectory/internal/registration_option_defaults.h"
#include "google/cloud/servicedirectory/internal/registration_stub_factory.h"
#include "google/cloud/servicedirectory/registration_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicedirectory {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegistrationServiceConnection::~RegistrationServiceConnection() = default;

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceConnection::CreateNamespace(
    google::cloud::servicedirectory::v1::CreateNamespaceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceConnection::ListNamespaces(
    google::cloud::servicedirectory::v1::
        ListNamespacesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::servicedirectory::v1::Namespace>>();
}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceConnection::GetNamespace(
    google::cloud::servicedirectory::v1::GetNamespaceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceConnection::UpdateNamespace(
    google::cloud::servicedirectory::v1::UpdateNamespaceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status RegistrationServiceConnection::DeleteNamespace(
    google::cloud::servicedirectory::v1::DeleteNamespaceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceConnection::CreateService(
    google::cloud::servicedirectory::v1::CreateServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::servicedirectory::v1::Service>
RegistrationServiceConnection::ListServices(
    google::cloud::servicedirectory::v1::
        ListServicesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::servicedirectory::v1::Service>>();
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceConnection::GetService(
    google::cloud::servicedirectory::v1::GetServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceConnection::UpdateService(
    google::cloud::servicedirectory::v1::UpdateServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status RegistrationServiceConnection::DeleteService(
    google::cloud::servicedirectory::v1::DeleteServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceConnection::CreateEndpoint(
    google::cloud::servicedirectory::v1::CreateEndpointRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceConnection::ListEndpoints(
    google::cloud::servicedirectory::v1::
        ListEndpointsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::servicedirectory::v1::Endpoint>>();
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceConnection::GetEndpoint(
    google::cloud::servicedirectory::v1::GetEndpointRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceConnection::UpdateEndpoint(
    google::cloud::servicedirectory::v1::UpdateEndpointRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status RegistrationServiceConnection::DeleteEndpoint(
    google::cloud::servicedirectory::v1::DeleteEndpointRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> RegistrationServiceConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> RegistrationServiceConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
RegistrationServiceConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<RegistrationServiceConnection>
MakeRegistrationServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 RegistrationServicePolicyOptionList>(options,
                                                                      __func__);
  options = servicedirectory_internal::RegistrationServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = servicedirectory_internal::CreateDefaultRegistrationServiceStub(
      background->cq(), options);
  return std::make_shared<
      servicedirectory_internal::RegistrationServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory
}  // namespace cloud
}  // namespace google
