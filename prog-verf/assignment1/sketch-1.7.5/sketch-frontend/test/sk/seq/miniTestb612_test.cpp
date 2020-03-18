#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb612.h"

using namespace std;

void inv__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::inv__WrapperNospec();
      ANONYMOUS::inv__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  inv__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb612\n");
  return 0;
}
