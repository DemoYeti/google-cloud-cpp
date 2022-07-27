// Copyright 2021 Google LLC
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
// source: google/logging/v2/logging.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_LOGGING_SERVICE_V2_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_LOGGING_SERVICE_V2_CONNECTION_H

#include "google/cloud/logging/internal/logging_service_v2_retry_traits.h"
#include "google/cloud/logging/internal/logging_service_v2_stub.h"
#include "google/cloud/logging/logging_service_v2_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using LoggingServiceV2RetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        logging_internal::LoggingServiceV2RetryTraits>;

using LoggingServiceV2LimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        logging_internal::LoggingServiceV2RetryTraits>;

using LoggingServiceV2LimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        logging_internal::LoggingServiceV2RetryTraits>;

/**
 * The `LoggingServiceV2Connection` object for `LoggingServiceV2Client`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `LoggingServiceV2Client`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `LoggingServiceV2Client`.
 *
 * To create a concrete instance, see `MakeLoggingServiceV2Connection()`.
 *
 * For mocking, see `logging_mocks::MockLoggingServiceV2Connection`.
 */
class LoggingServiceV2Connection {
 public:
  virtual ~LoggingServiceV2Connection() = 0;

  virtual Options options() { return Options{}; }

  virtual Status DeleteLog(
      google::logging::v2::DeleteLogRequest const& request);

  virtual StatusOr<google::logging::v2::WriteLogEntriesResponse>
  WriteLogEntries(google::logging::v2::WriteLogEntriesRequest const& request);

  virtual StreamRange<google::logging::v2::LogEntry> ListLogEntries(
      google::logging::v2::ListLogEntriesRequest request);

  virtual StreamRange<google::api::MonitoredResourceDescriptor>
  ListMonitoredResourceDescriptors(
      google::logging::v2::ListMonitoredResourceDescriptorsRequest request);

  virtual StreamRange<std::string> ListLogs(
      google::logging::v2::ListLogsRequest request);

  virtual std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::logging::v2::TailLogEntriesRequest,
      google::logging::v2::TailLogEntriesResponse>>
      AsyncTailLogEntries(ExperimentalTag);
};

/**
 * A factory function to construct an object of type
 * `LoggingServiceV2Connection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of LoggingServiceV2Client,
 * and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `LoggingServiceV2Connection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::logging::LoggingServiceV2PolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `LoggingServiceV2Connection` created
 * by this function.
 */
std::shared_ptr<LoggingServiceV2Connection> MakeLoggingServiceV2Connection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_LOGGING_SERVICE_V2_CONNECTION_H
