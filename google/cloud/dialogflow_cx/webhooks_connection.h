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
// source: google/cloud/dialogflow/cx/v3/webhook.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_WEBHOOKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_WEBHOOKS_CONNECTION_H

#include "google/cloud/dialogflow_cx/internal/webhooks_retry_traits.h"
#include "google/cloud/dialogflow_cx/internal/webhooks_stub.h"
#include "google/cloud/dialogflow_cx/webhooks_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using WebhooksRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    dialogflow_cx_internal::WebhooksRetryTraits>;

using WebhooksLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dialogflow_cx_internal::WebhooksRetryTraits>;

using WebhooksLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dialogflow_cx_internal::WebhooksRetryTraits>;

/**
 * The `WebhooksConnection` object for `WebhooksClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `WebhooksClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `WebhooksClient`.
 *
 * To create a concrete instance, see `MakeWebhooksConnection()`.
 *
 * For mocking, see `dialogflow_cx_mocks::MockWebhooksConnection`.
 */
class WebhooksConnection {
 public:
  virtual ~WebhooksConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::dialogflow::cx::v3::Webhook> ListWebhooks(
      google::cloud::dialogflow::cx::v3::ListWebhooksRequest request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Webhook> GetWebhook(
      google::cloud::dialogflow::cx::v3::GetWebhookRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Webhook> CreateWebhook(
      google::cloud::dialogflow::cx::v3::CreateWebhookRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Webhook> UpdateWebhook(
      google::cloud::dialogflow::cx::v3::UpdateWebhookRequest const& request);

  virtual Status DeleteWebhook(
      google::cloud::dialogflow::cx::v3::DeleteWebhookRequest const& request);
};

/**
 * A factory function to construct an object of type `WebhooksConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of WebhooksClient,
 * and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `WebhooksConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::dialogflow_cx::WebhooksPolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `WebhooksConnection` created by
 * this function.
 */
std::shared_ptr<WebhooksConnection> MakeWebhooksConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_WEBHOOKS_CONNECTION_H
