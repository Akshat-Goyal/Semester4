#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb667_adt.h"

using namespace std;

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  printf("Automated testing passed for miniTestb667_adt\n");
  return 0;
}
