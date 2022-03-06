// Copyright 2022 Christophe Bedard
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef TEST_TRACETOOLS__UTILS_HPP_
#define TEST_TRACETOOLS__UTILS_HPP_

#include <rclcpp/rclcpp.hpp>

namespace utils
{

void print_gid(const rmw_gid_t & gid)
{
  const uint8_t * d = gid.data;
  // Length is RMW_GID_STORAGE_SIZE
  printf(
    "gid: %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",
    d[0], d[1], d[2], d[3], d[4], d[5], d[6], d[7], d[8], d[9], d[10], d[11],
    d[12], d[13], d[14], d[15], d[16], d[17], d[18], d[19], d[20], d[21], d[22], d[23]);
}

}  // namespace utils

#endif  // TEST_TRACETOOLS__UTILS_HPP_
