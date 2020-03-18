#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb694.h"

using namespace std;

void main1__Wrapper_ATest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      A::main1__WrapperNospec();
      A::main1__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main1__Wrapper_ATest(p);
  printf("Automated testing passed for miniTestb694\n");
  return 0;
}
