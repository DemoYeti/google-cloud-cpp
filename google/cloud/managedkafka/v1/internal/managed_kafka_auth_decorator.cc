// Copyright 2024 Google LLC
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
// source: google/cloud/managedkafka/v1/managed_kafka.proto

#include "google/cloud/managedkafka/v1/internal/managed_kafka_auth_decorator.h"
#include <google/cloud/managedkafka/v1/managed_kafka.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace managedkafka_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ManagedKafkaAuth::ManagedKafkaAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ManagedKafkaStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::managedkafka::v1::ListClustersResponse>
ManagedKafkaAuth::ListClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::ListClustersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListClusters(context, options, request);
}

StatusOr<google::cloud::managedkafka::v1::Cluster> ManagedKafkaAuth::GetCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::GetClusterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedKafkaAuth::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedkafka::v1::CreateClusterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateCluster(cq, *std::move(context),
                                         std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ManagedKafkaAuth::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedkafka::v1::UpdateClusterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateCluster(cq, *std::move(context),
                                         std::move(options), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ManagedKafkaAuth::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::managedkafka::v1::DeleteClusterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteCluster(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::cloud::managedkafka::v1::ListTopicsResponse>
ManagedKafkaAuth::ListTopics(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::ListTopicsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTopics(context, options, request);
}

StatusOr<google::cloud::managedkafka::v1::Topic> ManagedKafkaAuth::GetTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::GetTopicRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTopic(context, options, request);
}

StatusOr<google::cloud::managedkafka::v1::Topic> ManagedKafkaAuth::CreateTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::CreateTopicRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTopic(context, options, request);
}

StatusOr<google::cloud::managedkafka::v1::Topic> ManagedKafkaAuth::UpdateTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::UpdateTopicRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateTopic(context, options, request);
}

Status ManagedKafkaAuth::DeleteTopic(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::DeleteTopicRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTopic(context, options, request);
}

StatusOr<google::cloud::managedkafka::v1::ListConsumerGroupsResponse>
ManagedKafkaAuth::ListConsumerGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::ListConsumerGroupsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListConsumerGroups(context, options, request);
}

StatusOr<google::cloud::managedkafka::v1::ConsumerGroup>
ManagedKafkaAuth::GetConsumerGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::GetConsumerGroupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetConsumerGroup(context, options, request);
}

StatusOr<google::cloud::managedkafka::v1::ConsumerGroup>
ManagedKafkaAuth::UpdateConsumerGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::UpdateConsumerGroupRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateConsumerGroup(context, options, request);
}

Status ManagedKafkaAuth::DeleteConsumerGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::managedkafka::v1::DeleteConsumerGroupRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteConsumerGroup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedKafkaAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> ManagedKafkaAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedkafka_v1_internal
}  // namespace cloud
}  // namespace google
