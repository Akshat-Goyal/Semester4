#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb706.h"

using namespace std;

void main7__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::main7__WrapperNospec();
      ANONYMOUS::main7__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void main6__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::main6__WrapperNospec();
      ANONYMOUS::main6__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void main5__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::main5__WrapperNospec();
      ANONYMOUS::main5__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void main4__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::main4__WrapperNospec();
      ANONYMOUS::main4__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void main3__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::main3__WrapperNospec();
      ANONYMOUS::main3__Wrapper();
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
  main6__Wrapper_ANONYMOUSTest(p);
  main5__Wrapper_ANONYMOUSTest(p);
  main1__Wrapper_ANONYMOUSTest(p);
  main2__Wrapper_ANONYMOUSTest(p);
  main4__Wrapper_ANONYMOUSTest(p);
  main3__Wrapper_ANONYMOUSTest(p);
  main7__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb706\n");
  return 0;
}
