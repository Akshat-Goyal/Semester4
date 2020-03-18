#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb647.h"

using namespace std;

void main3__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    bool  b1;
    b1=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"b1="<<b1<<endl;
    }
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
    try{
      ANONYMOUS::main3__WrapperNospec(b1,x,y);
      ANONYMOUS::main3__Wrapper(b1,x,y);
    }catch(AssumptionFailedException& afe){  }
  }
}

void main1__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  op;
    op=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"op="<<op<<endl;
    }
    bool  bsz;
    bsz=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"bsz="<<bsz<<endl;
    }
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
    try{
      ANONYMOUS::main1__WrapperNospec(op,bsz,x,y);
      ANONYMOUS::main1__Wrapper(op,bsz,x,y);
    }catch(AssumptionFailedException& afe){  }
  }
}

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
    try{
      ANONYMOUS::main2__WrapperNospec(x,y,z);
      ANONYMOUS::main2__Wrapper(x,y,z);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main1__Wrapper_ANONYMOUSTest(p);
  main2__Wrapper_ANONYMOUSTest(p);
  main3__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb647\n");
  return 0;
}
