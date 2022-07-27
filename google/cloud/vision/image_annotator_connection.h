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
// source: google/cloud/vision/v1/image_annotator.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_IMAGE_ANNOTATOR_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_IMAGE_ANNOTATOR_CONNECTION_H

#include "google/cloud/vision/image_annotator_connection_idempotency_policy.h"
#include "google/cloud/vision/internal/image_annotator_retry_traits.h"
#include "google/cloud/vision/internal/image_annotator_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vision {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ImageAnnotatorRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        vision_internal::ImageAnnotatorRetryTraits>;

using ImageAnnotatorLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        vision_internal::ImageAnnotatorRetryTraits>;

using ImageAnnotatorLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        vision_internal::ImageAnnotatorRetryTraits>;

/**
 * The `ImageAnnotatorConnection` object for `ImageAnnotatorClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ImageAnnotatorClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ImageAnnotatorClient`.
 *
 * To create a concrete instance, see `MakeImageAnnotatorConnection()`.
 *
 * For mocking, see `vision_mocks::MockImageAnnotatorConnection`.
 */
class ImageAnnotatorConnection {
 public:
  virtual ~ImageAnnotatorConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
  BatchAnnotateImages(
      google::cloud::vision::v1::BatchAnnotateImagesRequest const& request);

  virtual StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
  BatchAnnotateFiles(
      google::cloud::vision::v1::BatchAnnotateFilesRequest const& request);

  virtual future<
      StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>>
  AsyncBatchAnnotateImages(
      google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>>
  AsyncBatchAnnotateFiles(
      google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request);
};

/**
 * A factory function to construct an object of type `ImageAnnotatorConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of ImageAnnotatorClient,
 * and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `ImageAnnotatorConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::vision::ImageAnnotatorPolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `ImageAnnotatorConnection` created by
 * this function.
 */
std::shared_ptr<ImageAnnotatorConnection> MakeImageAnnotatorConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_IMAGE_ANNOTATOR_CONNECTION_H
