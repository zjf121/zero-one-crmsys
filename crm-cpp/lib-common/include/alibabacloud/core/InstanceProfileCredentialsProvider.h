/*
 * Copyright 1999-2019 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CORE_INCLUDE_ALIBABACLOUD_CORE_INSTANCEPROFILECREDENTIALSPROVIDER_H_
#define CORE_INCLUDE_ALIBABACLOUD_CORE_INSTANCEPROFILECREDENTIALSPROVIDER_H_

#include "EcsMetadataFetcher.h"
#include "Credentials.h"
#include "CredentialsProvider.h"
#include <chrono>
#include <memory>
#include <mutex>
#include <string>

namespace AlibabaCloud {
class ALIBABACLOUD_CORE_EXPORT InstanceProfileCredentialsProvider
    : public CredentialsProvider,
      public EcsMetadataFetcher {
public:
  InstanceProfileCredentialsProvider(const std::string &roleName,
                                     int durationSeconds = 3600);
  ~InstanceProfileCredentialsProvider();

  std::string roleName() const;
  Credentials getCredentials() override;
  using EcsMetadataFetcher::getMetadata;
  using EcsMetadataFetcher::roleName;
  using EcsMetadataFetcher::setRoleName;

private:
  void loadCredentials();
  bool checkExpiry() const;

  std::mutex cachedMutex_;
  Credentials cachedCredentials_;
  int durationSeconds_;
  std::chrono::system_clock::time_point expiry_;
};
} // namespace AlibabaCloud
#endif // CORE_INCLUDE_ALIBABACLOUD_CORE_INSTANCEPROFILECREDENTIALSPROVIDER_H_
