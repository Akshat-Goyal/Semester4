#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb888.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  i;
    i=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"i="<<i<<endl;
    }
    int  j;
    j=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"j="<<j<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(i,j);
      ANONYMOUS::main__Wrapper(i,j);
    }catch(AssumptionFailedException& afe){  }
  }
}

void aaa__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  i;
    i=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"i="<<i<<endl;
    }
    int  j;
    j=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"j="<<j<<endl;
    }
    try{
      ANONYMOUS::aaa__WrapperNospec(i,j);
      ANONYMOUS::aaa__Wrapper(i,j);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  aaa__Wrapper_ANONYMOUSTest(p);
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb888\n");
  return 0;
}
