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
// source: google/cloud/apigeeconnect/v1/connection.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_CONNECTION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_CONNECTION_CONNECTION_H

#include "google/cloud/apigeeconnect/connection_connection_idempotency_policy.h"
#include "google/cloud/apigeeconnect/internal/connection_retry_traits.h"
#include "google/cloud/apigeeconnect/internal/connection_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigeeconnect {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ConnectionServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        apigeeconnect_internal::ConnectionServiceRetryTraits>;

using ConnectionServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        apigeeconnect_internal::ConnectionServiceRetryTraits>;

using ConnectionServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        apigeeconnect_internal::ConnectionServiceRetryTraits>;

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
 * For mocking, see `apigeeconnect_mocks::MockConnectionServiceConnection`.
 */
class ConnectionServiceConnection {
 public:
  virtual ~ConnectionServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::apigeeconnect::v1::Connection>
  ListConnections(
      google::cloud::apigeeconnect::v1::ListConnectionsRequest request);
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
 * - `google::cloud::apigeeconnect::ConnectionServicePolicyOptionList`
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
}  // namespace apigeeconnect
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_CONNECTION_CONNECTION_H
