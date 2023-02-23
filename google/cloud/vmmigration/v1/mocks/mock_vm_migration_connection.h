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
// source: google/cloud/vmmigration/v1/vmmigration.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_MOCKS_MOCK_VM_MIGRATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_MOCKS_MOCK_VM_MIGRATION_CONNECTION_H

#include "google/cloud/vmmigration/v1/vm_migration_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace vmmigration_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `VmMigrationConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `VmMigrationClient`. To do so,
 * construct an object of type `VmMigrationClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockVmMigrationConnection : public vmmigration_v1::VmMigrationConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::cloud::vmmigration::v1::Source>, ListSources,
              (google::cloud::vmmigration::v1::ListSourcesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::vmmigration::v1::Source>, GetSource,
              (google::cloud::vmmigration::v1::GetSourceRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::Source>>, CreateSource,
      (google::cloud::vmmigration::v1::CreateSourceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::Source>>, UpdateSource,
      (google::cloud::vmmigration::v1::UpdateSourceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteSource,
      (google::cloud::vmmigration::v1::DeleteSourceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>,
      FetchInventory,
      (google::cloud::vmmigration::v1::FetchInventoryRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::vmmigration::v1::UtilizationReport>,
      ListUtilizationReports,
      (google::cloud::vmmigration::v1::ListUtilizationReportsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::UtilizationReport>,
      GetUtilizationReport,
      (google::cloud::vmmigration::v1::GetUtilizationReportRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::UtilizationReport>>,
      CreateUtilizationReport,
      (google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteUtilizationReport,
      (google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::vmmigration::v1::DatacenterConnector>,
      ListDatacenterConnectors,
      (google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>,
      GetDatacenterConnector,
      (google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>>,
      CreateDatacenterConnector,
      (google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteDatacenterConnector,
      (google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vmmigration::v1::UpgradeApplianceResponse>>,
      UpgradeAppliance,
      (google::cloud::vmmigration::v1::UpgradeApplianceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>,
      CreateMigratingVm,
      (google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::vmmigration::v1::MigratingVm>,
              ListMigratingVms,
              (google::cloud::vmmigration::v1::ListMigratingVmsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::MigratingVm>, GetMigratingVm,
      (google::cloud::vmmigration::v1::GetMigratingVmRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>,
      UpdateMigratingVm,
      (google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteMigratingVm,
      (google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::StartMigrationResponse>>,
      StartMigration,
      (google::cloud::vmmigration::v1::StartMigrationRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::ResumeMigrationResponse>>,
      ResumeMigration,
      (google::cloud::vmmigration::v1::ResumeMigrationRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::PauseMigrationResponse>>,
      PauseMigration,
      (google::cloud::vmmigration::v1::PauseMigrationRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vmmigration::v1::FinalizeMigrationResponse>>,
      FinalizeMigration,
      (google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::CloneJob>>,
      CreateCloneJob,
      (google::cloud::vmmigration::v1::CreateCloneJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::CancelCloneJobResponse>>,
      CancelCloneJob,
      (google::cloud::vmmigration::v1::CancelCloneJobRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::vmmigration::v1::CloneJob>,
              ListCloneJobs,
              (google::cloud::vmmigration::v1::ListCloneJobsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::CloneJob>, GetCloneJob,
      (google::cloud::vmmigration::v1::GetCloneJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::CutoverJob>>,
      CreateCutoverJob,
      (google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vmmigration::v1::CancelCutoverJobResponse>>,
      CancelCutoverJob,
      (google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::vmmigration::v1::CutoverJob>,
              ListCutoverJobs,
              (google::cloud::vmmigration::v1::ListCutoverJobsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::CutoverJob>, GetCutoverJob,
      (google::cloud::vmmigration::v1::GetCutoverJobRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::vmmigration::v1::Group>, ListGroups,
              (google::cloud::vmmigration::v1::ListGroupsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::vmmigration::v1::Group>, GetGroup,
              (google::cloud::vmmigration::v1::GetGroupRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::Group>>, CreateGroup,
      (google::cloud::vmmigration::v1::CreateGroupRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::Group>>, UpdateGroup,
      (google::cloud::vmmigration::v1::UpdateGroupRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteGroup,
      (google::cloud::vmmigration::v1::DeleteGroupRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vmmigration::v1::AddGroupMigrationResponse>>,
      AddGroupMigration,
      (google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::vmmigration::v1::RemoveGroupMigrationResponse>>,
      RemoveGroupMigration,
      (google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::vmmigration::v1::TargetProject>,
      ListTargetProjects,
      (google::cloud::vmmigration::v1::ListTargetProjectsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::TargetProject>, GetTargetProject,
      (google::cloud::vmmigration::v1::GetTargetProjectRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>,
              CreateTargetProject,
              (google::cloud::vmmigration::v1::CreateTargetProjectRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>,
              UpdateTargetProject,
              (google::cloud::vmmigration::v1::UpdateTargetProjectRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteTargetProject,
      (google::cloud::vmmigration::v1::DeleteTargetProjectRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::vmmigration::v1::ReplicationCycle>,
      ListReplicationCycles,
      (google::cloud::vmmigration::v1::ListReplicationCyclesRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::vmmigration::v1::ReplicationCycle>,
              GetReplicationCycle,
              (google::cloud::vmmigration::v1::GetReplicationCycleRequest const&
                   request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmmigration_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_MOCKS_MOCK_VM_MIGRATION_CONNECTION_H
