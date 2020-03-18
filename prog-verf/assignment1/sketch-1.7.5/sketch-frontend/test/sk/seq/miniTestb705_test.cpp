#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb705.h"

using namespace std;

void main8__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  id_0;
    id_0=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"id_0="<<id_0<<endl;
    }
    try{
      ANONYMOUS::main8__WrapperNospec(id_0);
      ANONYMOUS::main8__Wrapper(id_0);
    }catch(AssumptionFailedException& afe){  }
  }
}

void main7__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  id_0;
    id_0=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"id_0="<<id_0<<endl;
    }
    try{
      ANONYMOUS::main7__WrapperNospec(id_0);
      ANONYMOUS::main7__Wrapper(id_0);
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
  main8__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb705\n");
  return 0;
}
