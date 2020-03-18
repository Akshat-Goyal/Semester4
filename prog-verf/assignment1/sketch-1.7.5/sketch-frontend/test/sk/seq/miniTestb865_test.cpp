#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb865.h"

using namespace std;

void mn__Wrapper_String_adtTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      String_adt::mn__WrapperNospec();
      String_adt::mn__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  mn__Wrapper_String_adtTest(p);
  printf("Automated testing passed for miniTestb865\n");
  return 0;
}
