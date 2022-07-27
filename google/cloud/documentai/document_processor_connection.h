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
// source: google/cloud/documentai/v1/document_processor_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_DOCUMENT_PROCESSOR_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_DOCUMENT_PROCESSOR_CONNECTION_H

#include "google/cloud/documentai/document_processor_connection_idempotency_policy.h"
#include "google/cloud/documentai/internal/document_processor_retry_traits.h"
#include "google/cloud/documentai/internal/document_processor_stub.h"
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
namespace documentai {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using DocumentProcessorServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        documentai_internal::DocumentProcessorServiceRetryTraits>;

using DocumentProcessorServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        documentai_internal::DocumentProcessorServiceRetryTraits>;

using DocumentProcessorServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        documentai_internal::DocumentProcessorServiceRetryTraits>;

/**
 * The `DocumentProcessorServiceConnection` object for
 * `DocumentProcessorServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DocumentProcessorServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `DocumentProcessorServiceClient`.
 *
 * To create a concrete instance, see
 * `MakeDocumentProcessorServiceConnection()`.
 *
 * For mocking, see `documentai_mocks::MockDocumentProcessorServiceConnection`.
 */
class DocumentProcessorServiceConnection {
 public:
  virtual ~DocumentProcessorServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::documentai::v1::ProcessResponse>
  ProcessDocument(google::cloud::documentai::v1::ProcessRequest const& request);

  virtual future<StatusOr<google::cloud::documentai::v1::BatchProcessResponse>>
  BatchProcessDocuments(
      google::cloud::documentai::v1::BatchProcessRequest const& request);

  virtual future<
      StatusOr<google::cloud::documentai::v1::ReviewDocumentResponse>>
  ReviewDocument(
      google::cloud::documentai::v1::ReviewDocumentRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `DocumentProcessorServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * DocumentProcessorServiceClient, and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `DocumentProcessorServiceConnection`. Expected options are any of
 * the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::documentai::DocumentProcessorServicePolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `DocumentProcessorServiceConnection`
 * created by this function.
 */
std::shared_ptr<DocumentProcessorServiceConnection>
MakeDocumentProcessorServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_DOCUMENT_PROCESSOR_CONNECTION_H
