#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "minitestb821.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    int  M;
    M=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"M="<<M<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(N,M);
      ANONYMOUS::main__Wrapper(N,M);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for minitestb821\n");
  return 0;
}
