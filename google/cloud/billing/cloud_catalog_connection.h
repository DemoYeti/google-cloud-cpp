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
// source: google/cloud/billing/v1/cloud_catalog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_CLOUD_CATALOG_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_CLOUD_CATALOG_CONNECTION_H

#include "google/cloud/billing/cloud_catalog_connection_idempotency_policy.h"
#include "google/cloud/billing/internal/cloud_catalog_retry_traits.h"
#include "google/cloud/billing/internal/cloud_catalog_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using CloudCatalogRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        billing_internal::CloudCatalogRetryTraits>;

using CloudCatalogLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        billing_internal::CloudCatalogRetryTraits>;

using CloudCatalogLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        billing_internal::CloudCatalogRetryTraits>;

/**
 * The `CloudCatalogConnection` object for `CloudCatalogClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudCatalogClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `CloudCatalogClient`.
 *
 * To create a concrete instance, see `MakeCloudCatalogConnection()`.
 *
 * For mocking, see `billing_mocks::MockCloudCatalogConnection`.
 */
class CloudCatalogConnection {
 public:
  virtual ~CloudCatalogConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::billing::v1::Service> ListServices(
      google::cloud::billing::v1::ListServicesRequest request);

  virtual StreamRange<google::cloud::billing::v1::Sku> ListSkus(
      google::cloud::billing::v1::ListSkusRequest request);
};

/**
 * A factory function to construct an object of type `CloudCatalogConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of CloudCatalogClient,
 * and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `CloudCatalogConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::billing::CloudCatalogPolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `CloudCatalogConnection` created by
 * this function.
 */
std::shared_ptr<CloudCatalogConnection> MakeCloudCatalogConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_CLOUD_CATALOG_CONNECTION_H
