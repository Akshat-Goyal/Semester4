#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb683.h"

using namespace std;

void test1__Wrapper_ANONYMOUSTest(Parameters& _p_) {
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
      ANONYMOUS::test1__WrapperNospec(x1,x2);
      ANONYMOUS::test1__Wrapper(x1,x2);
    }catch(AssumptionFailedException& afe){  }
  }
}

void test2__Wrapper_ANONYMOUSTest(Parameters& _p_) {
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
      ANONYMOUS::test2__WrapperNospec(x1,x2);
      ANONYMOUS::test2__Wrapper(x1,x2);
    }catch(AssumptionFailedException& afe){  }
  }
}

void test3__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::test3__WrapperNospec();
      ANONYMOUS::test3__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void test4__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::test4__WrapperNospec();
      ANONYMOUS::test4__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  test2__Wrapper_ANONYMOUSTest(p);
  test1__Wrapper_ANONYMOUSTest(p);
  test3__Wrapper_ANONYMOUSTest(p);
  test4__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb683\n");
  return 0;
}
