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
// source: google/cloud/texttospeech/v1/cloud_tts.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_TEXT_TO_SPEECH_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_TEXT_TO_SPEECH_CONNECTION_H

#include "google/cloud/texttospeech/internal/text_to_speech_retry_traits.h"
#include "google/cloud/texttospeech/internal/text_to_speech_stub.h"
#include "google/cloud/texttospeech/text_to_speech_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace texttospeech {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using TextToSpeechRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        texttospeech_internal::TextToSpeechRetryTraits>;

using TextToSpeechLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        texttospeech_internal::TextToSpeechRetryTraits>;

using TextToSpeechLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        texttospeech_internal::TextToSpeechRetryTraits>;

/**
 * The `TextToSpeechConnection` object for `TextToSpeechClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `TextToSpeechClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `TextToSpeechClient`.
 *
 * To create a concrete instance, see `MakeTextToSpeechConnection()`.
 *
 * For mocking, see `texttospeech_mocks::MockTextToSpeechConnection`.
 */
class TextToSpeechConnection {
 public:
  virtual ~TextToSpeechConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::texttospeech::v1::ListVoicesResponse>
  ListVoices(google::cloud::texttospeech::v1::ListVoicesRequest const& request);

  virtual StatusOr<google::cloud::texttospeech::v1::SynthesizeSpeechResponse>
  SynthesizeSpeech(
      google::cloud::texttospeech::v1::SynthesizeSpeechRequest const& request);
};

/**
 * A factory function to construct an object of type `TextToSpeechConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of TextToSpeechClient,
 * and that class used instead.
 *
 * The optional @p opts argument may be used to configure aspects of the
 * returned `TextToSpeechConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::texttospeech::TextToSpeechPolicyOptionList`
 *
 * @note Unrecognized options will be ignored. To debug issues with options set
 *     `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment and unexpected
 *     options will be logged.
 *
 * @param options (optional) Configure the `TextToSpeechConnection` created by
 * this function.
 */
std::shared_ptr<TextToSpeechConnection> MakeTextToSpeechConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace texttospeech
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TEXTTOSPEECH_TEXT_TO_SPEECH_CONNECTION_H
