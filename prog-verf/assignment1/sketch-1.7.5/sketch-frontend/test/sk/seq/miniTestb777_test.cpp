#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb777.h"

using namespace std;

void main4__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x1;
    x1=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x1="<<x1<<endl;
    }
    int  x2;
    x2=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x2="<<x2<<endl;
    }
    try{
      ANONYMOUS::main4__WrapperNospec(x1,x2);
      ANONYMOUS::main4__Wrapper(x1,x2);
    }catch(AssumptionFailedException& afe){  }
  }
}

void main3__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x1;
    x1=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x1="<<x1<<endl;
    }
    int  x2;
    x2=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x2="<<x2<<endl;
    }
    try{
      ANONYMOUS::main3__WrapperNospec(x1,x2);
      ANONYMOUS::main3__Wrapper(x1,x2);
    }catch(AssumptionFailedException& afe){  }
  }
}

void main2__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::main2__WrapperNospec();
      ANONYMOUS::main2__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void main1__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::main1__WrapperNospec();
      ANONYMOUS::main1__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main1__Wrapper_ANONYMOUSTest(p);
  main2__Wrapper_ANONYMOUSTest(p);
  main4__Wrapper_ANONYMOUSTest(p);
  main3__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb777\n");
  return 0;
}
