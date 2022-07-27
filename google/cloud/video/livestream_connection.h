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
// source: google/cloud/video/livestream/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_CONNECTION_H

#include "google/cloud/video/internal/livestream_retry_traits.h"
#include "google/cloud/video/internal/livestream_stub.h"
#include "google/cloud/video/livestream_connection_idempotency_policy.h"
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
namespace video {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using LivestreamServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        video_internal::LivestreamServiceRetryTraits>;

using LivestreamServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        video_internal::LivestreamServiceRetryTraits>;

using LivestreamServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        video_internal::LivestreamServiceRetryTraits>;

/**
 * The `LivestreamServiceConnection` object for `LivestreamServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `LivestreamServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `LivestreamServiceClient`.
 *
 * To create a concrete instance, see `MakeLivestreamServiceConnection()`.
 *
 * For mocking, see `video_mocks::MockLivestreamServiceConnection`.
 */
class LivestreamServiceConnection {
 public:
  virtual ~LivestreamServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::video::livestream::v1::Channel>>
  CreateChannel(
      google::cloud::video::livestream::v1::CreateChannelRequest const&
          request);

  virtual StreamRange<google::cloud::video::livestream::v1::Channel>
  ListChannels(
      google::cloud::video::livestream::v1::ListChannelsRequest request);

  virtual StatusOr<google::cloud::video::livestream::v1::Channel> GetChannel(
      google::cloud::video::livestream::v1::GetChannelRequest const& request);

  virtual future<
      StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
  DeleteChannel(
      google::cloud::video::livestream::v1::DeleteChannelRequest const&
          request);

  virtual future<StatusOr<google::cloud::video::livestream::v1::Channel>>
  UpdateChannel(
      google::cloud::video::livestream::v1::UpdateChannelRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
  StartChannel(
      google::cloud::video::livestream::v1::StartChannelRequest const& request);

  virtual future<
      StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
  StopChannel(
      google::cloud::video::livestream::v1::StopChannelRequest const& request);

  virtual future<StatusOr<google::cloud::video::livestream::v1::Input>>
  CreateInput(
      google::cloud::video::livestream::v1::CreateInputRequest const& request);

  virtual StreamRange<google::cloud::video::livestream::v1::Input> ListInputs(
      google::cloud::video::livestream::v1::ListInputsRequest request);

  virtual StatusOr<google::cloud::video::livestream::v1::Input> GetInput(
      google::cloud::video::livestream::v1::GetInputRequest const& request);

  virtual future<
      StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
  DeleteInput(
      google::cloud::video::livestream::v1::DeleteInputRequest const& request);

  virtual future<StatusOr<google::cloud::video::livestream::v1::Input>>
  UpdateInput(
      google::cloud::video::livestream::v1::UpdateInputRequest const& request);

  virtual StatusOr<google::cloud::video::livestream::v1::Event> CreateEvent(
      google::cloud::video::livestream::v1::CreateEventRequest const& request);

  virtual StreamRange<google::cloud::video::livestream::v1::Event> ListEvents(
      google::cloud::video::livestream::v1::ListEventsRequest request);

  virtual StatusOr<google::cloud::video::livestream::v1::Event> GetEvent(
      google::cloud::video::livestream::v1::GetEventRequest const& request);

  virtual Status DeleteEvent(
      google::cloud::video::livestream::v1::DeleteEventRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `LivestreamServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * LivestreamServiceClient, and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `LivestreamServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::video::LivestreamServicePolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `LivestreamServiceConnection` created
 * by this function.
 */
std::shared_ptr<LivestreamServiceConnection> MakeLivestreamServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_CONNECTION_H
