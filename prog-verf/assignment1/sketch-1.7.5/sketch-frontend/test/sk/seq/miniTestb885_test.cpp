#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb885.h"

using namespace std;

void main2__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    int  y;
    y=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
    }
    int  z;
    z=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"z="<<z<<endl;
    }
    int  oth;
    oth=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"oth="<<oth<<endl;
    }
    try{
      ANONYMOUS::main2__WrapperNospec(x,y,z,oth);
      ANONYMOUS::main2__Wrapper(x,y,z,oth);
    }catch(AssumptionFailedException& afe){  }
  }
}

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    int  y;
    y=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
    }
    int  z;
    z=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"z="<<z<<endl;
    }
    int  oth;
    oth=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"oth="<<oth<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(x,y,z,oth);
      ANONYMOUS::main__Wrapper(x,y,z,oth);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  main2__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb885\n");
  return 0;
}
