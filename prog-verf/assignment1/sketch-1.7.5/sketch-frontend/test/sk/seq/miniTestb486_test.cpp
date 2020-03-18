#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb486.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  p;
    p=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"p="<<p<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(p);
      ANONYMOUS::main__Wrapper(p);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb486\n");
  return 0;
}
