#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb532.h"

using namespace std;

void boo__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x_0;
    x_0=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x_0="<<x_0<<endl;
    }
    try{
      ANONYMOUS::boo__WrapperNospec(x_0);
      ANONYMOUS::boo__Wrapper(x_0);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  boo__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb532\n");
  return 0;
}
