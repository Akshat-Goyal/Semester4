#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb495.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  t;
    t=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"t="<<t<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(t);
      ANONYMOUS::main__Wrapper(t);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb495\n");
  return 0;
}
