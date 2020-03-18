#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb686.h"

using namespace std;

void mainb__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    try{
      ANONYMOUS::mainb__WrapperNospec(n);
      ANONYMOUS::mainb__Wrapper(n);
    }catch(AssumptionFailedException& afe){  }
  }
}

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(n);
      ANONYMOUS::main__Wrapper(n);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  mainb__Wrapper_ANONYMOUSTest(p);
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb686\n");
  return 0;
}
