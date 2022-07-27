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
// source: google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APP_CONNECTORS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APP_CONNECTORS_CONNECTION_H

#include "google/cloud/beyondcorp/app_connectors_connection_idempotency_policy.h"
#include "google/cloud/beyondcorp/internal/app_connectors_retry_traits.h"
#include "google/cloud/beyondcorp/internal/app_connectors_stub.h"
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
namespace beyondcorp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AppConnectorsServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        beyondcorp_internal::AppConnectorsServiceRetryTraits>;

using AppConnectorsServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        beyondcorp_internal::AppConnectorsServiceRetryTraits>;

using AppConnectorsServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        beyondcorp_internal::AppConnectorsServiceRetryTraits>;

/**
 * The `AppConnectorsServiceConnection` object for `AppConnectorsServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AppConnectorsServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `AppConnectorsServiceClient`.
 *
 * To create a concrete instance, see `MakeAppConnectorsServiceConnection()`.
 *
 * For mocking, see `beyondcorp_mocks::MockAppConnectorsServiceConnection`.
 */
class AppConnectorsServiceConnection {
 public:
  virtual ~AppConnectorsServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<
      google::cloud::beyondcorp::appconnectors::v1::AppConnector>
  ListAppConnectors(
      google::cloud::beyondcorp::appconnectors::v1::ListAppConnectorsRequest
          request);

  virtual StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
  GetAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                      GetAppConnectorRequest const& request);

  virtual future<
      StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  CreateAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                         CreateAppConnectorRequest const& request);

  virtual future<
      StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  UpdateAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                         UpdateAppConnectorRequest const& request);

  virtual future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::
                              AppConnectorOperationMetadata>>
  DeleteAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                         DeleteAppConnectorRequest const& request);

  virtual future<
      StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  ReportStatus(
      google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&
          request);
};

/**
 * A factory function to construct an object of type
 * `AppConnectorsServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * AppConnectorsServiceClient, and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `AppConnectorsServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::beyondcorp::AppConnectorsServicePolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `AppConnectorsServiceConnection`
 * created by this function.
 */
std::shared_ptr<AppConnectorsServiceConnection>
MakeAppConnectorsServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APP_CONNECTORS_CONNECTION_H
