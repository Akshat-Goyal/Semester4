#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb405.h"

using namespace std;

void evalCheck__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  i;
    i=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"i="<<i<<endl;
    }
    try{
      ANONYMOUS::evalCheck__WrapperNospec(i);
      ANONYMOUS::evalCheck__Wrapper(i);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  evalCheck__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb405\n");
  return 0;
}
