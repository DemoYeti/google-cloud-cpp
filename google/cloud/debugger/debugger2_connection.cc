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
// source: google/devtools/clouddebugger/v2/debugger.proto

#include "google/cloud/debugger/debugger2_connection.h"
#include "google/cloud/debugger/debugger2_options.h"
#include "google/cloud/debugger/internal/debugger2_connection_impl.h"
#include "google/cloud/debugger/internal/debugger2_option_defaults.h"
#include "google/cloud/debugger/internal/debugger2_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace debugger {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

Debugger2Connection::~Debugger2Connection() = default;

StatusOr<google::devtools::clouddebugger::v2::SetBreakpointResponse>
Debugger2Connection::SetBreakpoint(
    google::devtools::clouddebugger::v2::SetBreakpointRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::devtools::clouddebugger::v2::GetBreakpointResponse>
Debugger2Connection::GetBreakpoint(
    google::devtools::clouddebugger::v2::GetBreakpointRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status Debugger2Connection::DeleteBreakpoint(
    google::devtools::clouddebugger::v2::DeleteBreakpointRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::devtools::clouddebugger::v2::ListBreakpointsResponse>
Debugger2Connection::ListBreakpoints(
    google::devtools::clouddebugger::v2::ListBreakpointsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::devtools::clouddebugger::v2::ListDebuggeesResponse>
Debugger2Connection::ListDebuggees(
    google::devtools::clouddebugger::v2::ListDebuggeesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<Debugger2Connection> MakeDebugger2Connection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 Debugger2PolicyOptionList>(options, __func__);
  options = debugger_internal::Debugger2DefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      debugger_internal::CreateDefaultDebugger2Stub(background->cq(), options);
  return std::make_shared<debugger_internal::Debugger2ConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger
}  // namespace cloud
}  // namespace google
