#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb483.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  i1;
    i1=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"i1="<<i1<<endl;
    }
    int  j1;
    j1=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"j1="<<j1<<endl;
    }
    int  i2;
    i2=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"i2="<<i2<<endl;
    }
    int  j2;
    j2=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"j2="<<j2<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(i1,j1,i2,j2);
      ANONYMOUS::main__Wrapper(i1,j1,i2,j2);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb483\n");
  return 0;
}
