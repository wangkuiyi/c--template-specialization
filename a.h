#pragma once

#include <stdlib.h>

struct CPUPlace {};
struct GPUPlace {};

template <typename Place> void* Alloc(Place, size_t);
