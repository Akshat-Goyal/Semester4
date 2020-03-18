#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb605_adt.h"

using namespace std;

void test__Wrapper_TTTTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      TTT::test__WrapperNospec();
      TTT::test__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  test__Wrapper_TTTTest(p);
  printf("Automated testing passed for miniTestb605_adt\n");
  return 0;
}
