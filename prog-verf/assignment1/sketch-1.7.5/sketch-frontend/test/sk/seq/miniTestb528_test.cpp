#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb528.h"

using namespace std;

void moo__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::moo__WrapperNospec();
      ANONYMOUS::moo__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  moo__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb528\n");
  return 0;
}
