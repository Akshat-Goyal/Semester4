#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb678.h"

using namespace std;

void sample1__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::sample1__WrapperNospec();
      ANONYMOUS::sample1__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void checkRule2_AuxObserver1__Wrapper_AuxObserver1Test(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      AuxObserver1::checkRule2_AuxObserver1__WrapperNospec();
      AuxObserver1::checkRule2_AuxObserver1__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void checkRule1_AuxObserver1__Wrapper_AuxObserver1Test(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      AuxObserver1::checkRule1_AuxObserver1__WrapperNospec();
      AuxObserver1::checkRule1_AuxObserver1__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void checkRange_AuxObserver1__Wrapper_AuxObserver1Test(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      AuxObserver1::checkRange_AuxObserver1__WrapperNospec();
      AuxObserver1::checkRange_AuxObserver1__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sample1__Wrapper_ANONYMOUSTest(p);
  checkRule2_AuxObserver1__Wrapper_AuxObserver1Test(p);
  checkRule1_AuxObserver1__Wrapper_AuxObserver1Test(p);
  checkRange_AuxObserver1__Wrapper_AuxObserver1Test(p);
  printf("Automated testing passed for miniTestb678\n");
  return 0;
}
