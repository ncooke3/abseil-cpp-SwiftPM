// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// absl imports from Firestore and gRPC

// ncooke3: Had to change `absl` to `abseil`.
#include <abseil/algorithm/container.h>
#include <abseil/base/attributes.h>
#include <abseil/base/call_once.h>
#include <abseil/base/casts.h>
#include <abseil/base/config.h>
#include <abseil/base/internal/endian.h>
#include <abseil/base/internal/unaligned_access.h>
#include <abseil/base/macros.h>
#include <abseil/base/optimization.h>
#include <abseil/base/port.h>
#include <abseil/container/flat_hash_map.h>
#include <abseil/container/inlined_vector.h>
#include <abseil/memory/memory.h>
#include <abseil/meta/type_traits.h>
#include <abseil/strings/ascii.h>
#include <abseil/strings/escaping.h>
#include <abseil/strings/match.h>
#include <abseil/strings/numbers.h>
#include <abseil/strings/str_cat.h>
#include <abseil/strings/str_format.h>
#include <abseil/strings/str_join.h>
#include <abseil/strings/str_replace.h>
#include <abseil/strings/str_split.h>
#include <abseil/strings/string_view.h>
#include <abseil/strings/strip.h>
#include <abseil/strings/substitute.h>
#include <abseil/synchronization/mutex.h>
#include <abseil/time/clock.h>
#include <abseil/time/time.h>
#include <abseil/types/any.h>
#include <abseil/types/optional.h>
#include <abseil/types/variant.h>

// Test for duplicate `_main` symbol.
int main(int argc, char** argv) {}
