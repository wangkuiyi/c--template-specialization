#include "a.h"

int main() {
  CPUPlace cp;
  Alloc<CPUPlace>(cp, 100);

  GPUPlace gp;
  Alloc<GPUPlace>(gp, 100);

  return 0;
}
