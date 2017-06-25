#include "a.h"

#include <iostream>

template<>
void* Alloc<CPUPlace>(CPUPlace p, size_t size) {
  std::cout << "Alloc<CPUPlace>" << std::endl;
  return NULL;
}

template<>
void* Alloc<GPUPlace>(GPUPlace p, size_t size) {
  std::cout << "Alloc<GPUPlace>" << std::endl;
  return NULL;
}
