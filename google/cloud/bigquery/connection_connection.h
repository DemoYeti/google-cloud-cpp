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
// source: google/cloud/bigquery/connection/v1/connection.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_CONNECTION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_CONNECTION_CONNECTION_H

#include "google/cloud/bigquery/connection_connection_idempotency_policy.h"
#include "google/cloud/bigquery/internal/connection_retry_traits.h"
#include "google/cloud/bigquery/internal/connection_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ConnectionServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        bigquery_internal::ConnectionServiceRetryTraits>;

using ConnectionServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        bigquery_internal::ConnectionServiceRetryTraits>;

using ConnectionServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        bigquery_internal::ConnectionServiceRetryTraits>;

/**
 * The `ConnectionServiceConnection` object for `ConnectionServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ConnectionServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `ConnectionServiceClient`.
 *
 * To create a concrete instance, see `MakeConnectionServiceConnection()`.
 *
 * For mocking, see `bigquery_mocks::MockConnectionServiceConnection`.
 */
class ConnectionServiceConnection {
 public:
  virtual ~ConnectionServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::bigquery::connection::v1::Connection>
  CreateConnection(
      google::cloud::bigquery::connection::v1::CreateConnectionRequest const&
          request);

  virtual StatusOr<google::cloud::bigquery::connection::v1::Connection>
  GetConnection(
      google::cloud::bigquery::connection::v1::GetConnectionRequest const&
          request);

  virtual StreamRange<google::cloud::bigquery::connection::v1::Connection>
  ListConnections(
      google::cloud::bigquery::connection::v1::ListConnectionsRequest request);

  virtual StatusOr<google::cloud::bigquery::connection::v1::Connection>
  UpdateConnection(
      google::cloud::bigquery::connection::v1::UpdateConnectionRequest const&
          request);

  virtual Status DeleteConnection(
      google::cloud::bigquery::connection::v1::DeleteConnectionRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `ConnectionServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * ConnectionServiceClient, and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `ConnectionServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::bigquery::ConnectionServicePolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `ConnectionServiceConnection` created
 * by this function.
 */
std::shared_ptr<ConnectionServiceConnection> MakeConnectionServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_CONNECTION_CONNECTION_H
