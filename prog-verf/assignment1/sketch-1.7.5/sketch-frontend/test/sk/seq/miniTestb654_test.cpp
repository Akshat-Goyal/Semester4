#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb654.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    bool  cond;
    cond=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"cond="<<cond<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(x,cond);
      ANONYMOUS::main__Wrapper(x,cond);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb654\n");
  return 0;
}
