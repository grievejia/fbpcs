/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <filesystem>
#include <istream>
#include <ostream>
#include <unordered_map>
#include <vector>

namespace pid::combiner {
/*
This library implements the IdInsert that is used to insert the missing private
ids in a generated by the pid service into the output file
*/
void idInsert(
    std::istream& mappedDataFilePath,
    std::istream& spineIdFilePath,
    std::ostream& outFilePath);
} // namespace pid::combiner
