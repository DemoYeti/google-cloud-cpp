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
// source: google/cloud/dataproc/v1/clusters.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_CLUSTER_CONTROLLER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_CLUSTER_CONTROLLER_CONNECTION_H

#include "google/cloud/dataproc/cluster_controller_connection_idempotency_policy.h"
#include "google/cloud/dataproc/internal/cluster_controller_retry_traits.h"
#include "google/cloud/dataproc/internal/cluster_controller_stub.h"
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
namespace dataproc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ClusterControllerRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        dataproc_internal::ClusterControllerRetryTraits>;

using ClusterControllerLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dataproc_internal::ClusterControllerRetryTraits>;

using ClusterControllerLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dataproc_internal::ClusterControllerRetryTraits>;

/**
 * The `ClusterControllerConnection` object for `ClusterControllerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ClusterControllerClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `ClusterControllerClient`.
 *
 * To create a concrete instance, see `MakeClusterControllerConnection()`.
 *
 * For mocking, see `dataproc_mocks::MockClusterControllerConnection`.
 */
class ClusterControllerConnection {
 public:
  virtual ~ClusterControllerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::dataproc::v1::Cluster>> CreateCluster(
      google::cloud::dataproc::v1::CreateClusterRequest const& request);

  virtual future<StatusOr<google::cloud::dataproc::v1::Cluster>> UpdateCluster(
      google::cloud::dataproc::v1::UpdateClusterRequest const& request);

  virtual future<StatusOr<google::cloud::dataproc::v1::Cluster>> StopCluster(
      google::cloud::dataproc::v1::StopClusterRequest const& request);

  virtual future<StatusOr<google::cloud::dataproc::v1::Cluster>> StartCluster(
      google::cloud::dataproc::v1::StartClusterRequest const& request);

  virtual future<
      StatusOr<google::cloud::dataproc::v1::ClusterOperationMetadata>>
  DeleteCluster(
      google::cloud::dataproc::v1::DeleteClusterRequest const& request);

  virtual StatusOr<google::cloud::dataproc::v1::Cluster> GetCluster(
      google::cloud::dataproc::v1::GetClusterRequest const& request);

  virtual StreamRange<google::cloud::dataproc::v1::Cluster> ListClusters(
      google::cloud::dataproc::v1::ListClustersRequest request);

  virtual future<StatusOr<google::cloud::dataproc::v1::DiagnoseClusterResults>>
  DiagnoseCluster(
      google::cloud::dataproc::v1::DiagnoseClusterRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `ClusterControllerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * ClusterControllerClient, and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `ClusterControllerConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::dataproc::ClusterControllerPolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `ClusterControllerConnection` created
 * by this function.
 */
std::shared_ptr<ClusterControllerConnection> MakeClusterControllerConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_CLUSTER_CONTROLLER_CONNECTION_H
