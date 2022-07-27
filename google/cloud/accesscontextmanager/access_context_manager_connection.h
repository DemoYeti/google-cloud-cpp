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
// source: google/identity/accesscontextmanager/v1/access_context_manager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSCONTEXTMANAGER_ACCESS_CONTEXT_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSCONTEXTMANAGER_ACCESS_CONTEXT_MANAGER_CONNECTION_H

#include "google/cloud/accesscontextmanager/access_context_manager_connection_idempotency_policy.h"
#include "google/cloud/accesscontextmanager/internal/access_context_manager_retry_traits.h"
#include "google/cloud/accesscontextmanager/internal/access_context_manager_stub.h"
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
namespace accesscontextmanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AccessContextManagerRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        accesscontextmanager_internal::AccessContextManagerRetryTraits>;

using AccessContextManagerLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        accesscontextmanager_internal::AccessContextManagerRetryTraits>;

using AccessContextManagerLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        accesscontextmanager_internal::AccessContextManagerRetryTraits>;

/**
 * The `AccessContextManagerConnection` object for `AccessContextManagerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AccessContextManagerClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `AccessContextManagerClient`.
 *
 * To create a concrete instance, see `MakeAccessContextManagerConnection()`.
 *
 * For mocking, see
 * `accesscontextmanager_mocks::MockAccessContextManagerConnection`.
 */
class AccessContextManagerConnection {
 public:
  virtual ~AccessContextManagerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::identity::accesscontextmanager::v1::AccessPolicy>
  ListAccessPolicies(
      google::identity::accesscontextmanager::v1::ListAccessPoliciesRequest
          request);

  virtual StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>
  GetAccessPolicy(
      google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&
          request);

  virtual future<
      StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>>
  CreateAccessPolicy(
      google::identity::accesscontextmanager::v1::AccessPolicy const& request);

  virtual future<
      StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>>
  UpdateAccessPolicy(google::identity::accesscontextmanager::v1::
                         UpdateAccessPolicyRequest const& request);

  virtual future<StatusOr<google::identity::accesscontextmanager::v1::
                              AccessContextManagerOperationMetadata>>
  DeleteAccessPolicy(google::identity::accesscontextmanager::v1::
                         DeleteAccessPolicyRequest const& request);

  virtual StreamRange<google::identity::accesscontextmanager::v1::AccessLevel>
  ListAccessLevels(
      google::identity::accesscontextmanager::v1::ListAccessLevelsRequest
          request);

  virtual StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>
  GetAccessLevel(
      google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&
          request);

  virtual future<
      StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>>
  CreateAccessLevel(google::identity::accesscontextmanager::v1::
                        CreateAccessLevelRequest const& request);

  virtual future<
      StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>>
  UpdateAccessLevel(google::identity::accesscontextmanager::v1::
                        UpdateAccessLevelRequest const& request);

  virtual future<StatusOr<google::identity::accesscontextmanager::v1::
                              AccessContextManagerOperationMetadata>>
  DeleteAccessLevel(google::identity::accesscontextmanager::v1::
                        DeleteAccessLevelRequest const& request);

  virtual future<StatusOr<
      google::identity::accesscontextmanager::v1::ReplaceAccessLevelsResponse>>
  ReplaceAccessLevels(google::identity::accesscontextmanager::v1::
                          ReplaceAccessLevelsRequest const& request);

  virtual StreamRange<
      google::identity::accesscontextmanager::v1::ServicePerimeter>
  ListServicePerimeters(
      google::identity::accesscontextmanager::v1::ListServicePerimetersRequest
          request);

  virtual StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>
  GetServicePerimeter(google::identity::accesscontextmanager::v1::
                          GetServicePerimeterRequest const& request);

  virtual future<
      StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>>
  CreateServicePerimeter(google::identity::accesscontextmanager::v1::
                             CreateServicePerimeterRequest const& request);

  virtual future<
      StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>>
  UpdateServicePerimeter(google::identity::accesscontextmanager::v1::
                             UpdateServicePerimeterRequest const& request);

  virtual future<StatusOr<google::identity::accesscontextmanager::v1::
                              AccessContextManagerOperationMetadata>>
  DeleteServicePerimeter(google::identity::accesscontextmanager::v1::
                             DeleteServicePerimeterRequest const& request);

  virtual future<StatusOr<google::identity::accesscontextmanager::v1::
                              ReplaceServicePerimetersResponse>>
  ReplaceServicePerimeters(google::identity::accesscontextmanager::v1::
                               ReplaceServicePerimetersRequest const& request);

  virtual future<StatusOr<google::identity::accesscontextmanager::v1::
                              CommitServicePerimetersResponse>>
  CommitServicePerimeters(google::identity::accesscontextmanager::v1::
                              CommitServicePerimetersRequest const& request);

  virtual StreamRange<
      google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
  ListGcpUserAccessBindings(google::identity::accesscontextmanager::v1::
                                ListGcpUserAccessBindingsRequest request);

  virtual StatusOr<
      google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
  GetGcpUserAccessBinding(google::identity::accesscontextmanager::v1::
                              GetGcpUserAccessBindingRequest const& request);

  virtual future<StatusOr<
      google::identity::accesscontextmanager::v1::GcpUserAccessBinding>>
  CreateGcpUserAccessBinding(
      google::identity::accesscontextmanager::v1::
          CreateGcpUserAccessBindingRequest const& request);

  virtual future<StatusOr<
      google::identity::accesscontextmanager::v1::GcpUserAccessBinding>>
  UpdateGcpUserAccessBinding(
      google::identity::accesscontextmanager::v1::
          UpdateGcpUserAccessBindingRequest const& request);

  virtual future<StatusOr<google::identity::accesscontextmanager::v1::
                              GcpUserAccessBindingOperationMetadata>>
  DeleteGcpUserAccessBinding(
      google::identity::accesscontextmanager::v1::
          DeleteGcpUserAccessBindingRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `AccessContextManagerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * AccessContextManagerClient, and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `AccessContextManagerConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::accesscontextmanager::AccessContextManagerPolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `AccessContextManagerConnection`
 * created by this function.
 */
std::shared_ptr<AccessContextManagerConnection>
MakeAccessContextManagerConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accesscontextmanager
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSCONTEXTMANAGER_ACCESS_CONTEXT_MANAGER_CONNECTION_H
