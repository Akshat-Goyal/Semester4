#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb874.h"

using namespace std;

void test__Wrapper_simple_testTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      simple_test::test__WrapperNospec();
      simple_test::test__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  test__Wrapper_simple_testTest(p);
  printf("Automated testing passed for miniTestb874\n");
  return 0;
}
