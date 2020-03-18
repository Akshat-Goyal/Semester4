#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb819.h"

using namespace std;

void main__Wrapper_YYTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      YY::main__WrapperNospec();
      YY::main__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_YYTest(p);
  printf("Automated testing passed for miniTestb819\n");
  return 0;
}
