#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb714.h"

using namespace std;

void main__Wrapper_ATest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  in;
    in=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"in="<<in<<endl;
    }
    try{
      A::main__WrapperNospec(in);
      A::main__Wrapper(in);
    }catch(AssumptionFailedException& afe){  }
  }
}

void main__Wrapper_BTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  in;
    in=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"in="<<in<<endl;
    }
    try{
      B::main__WrapperNospec(in);
      B::main__Wrapper(in);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ATest(p);
  main__Wrapper_BTest(p);
  printf("Automated testing passed for miniTestb714\n");
  return 0;
}
