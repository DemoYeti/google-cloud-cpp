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
// source: google/cloud/run/v2/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_SERVICES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_SERVICES_CONNECTION_H

#include "google/cloud/run/internal/services_retry_traits.h"
#include "google/cloud/run/internal/services_stub.h"
#include "google/cloud/run/services_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace run {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ServicesRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    run_internal::ServicesRetryTraits>;

using ServicesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        run_internal::ServicesRetryTraits>;

using ServicesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        run_internal::ServicesRetryTraits>;

/**
 * The `ServicesConnection` object for `ServicesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ServicesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ServicesClient`.
 *
 * To create a concrete instance, see `MakeServicesConnection()`.
 *
 * For mocking, see `run_mocks::MockServicesConnection`.
 */
class ServicesConnection {
 public:
  virtual ~ServicesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::run::v2::Service>> CreateService(
      google::cloud::run::v2::CreateServiceRequest const& request);

  virtual StatusOr<google::cloud::run::v2::Service> GetService(
      google::cloud::run::v2::GetServiceRequest const& request);

  virtual StreamRange<google::cloud::run::v2::Service> ListServices(
      google::cloud::run::v2::ListServicesRequest request);

  virtual future<StatusOr<google::cloud::run::v2::Service>> UpdateService(
      google::cloud::run::v2::UpdateServiceRequest const& request);

  virtual future<StatusOr<google::cloud::run::v2::Service>> DeleteService(
      google::cloud::run::v2::DeleteServiceRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

/**
 * A factory function to construct an object of type `ServicesConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of ServicesClient,
 * and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `ServicesConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::run::ServicesPolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `ServicesConnection` created by
 * this function.
 */
std::shared_ptr<ServicesConnection> MakeServicesConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_SERVICES_CONNECTION_H
