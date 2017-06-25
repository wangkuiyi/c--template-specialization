#include "a.h"

int main() {
  CPUPlace cp;
  Alloc(cp, 100);

  GPUPlace gp;
  Alloc(gp, 100);

  return 0;
}
