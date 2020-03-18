#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb869.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  al;
    al=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"al="<<al<<endl;
    }
    int  ah;
    ah=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"ah="<<ah<<endl;
    }
    int  bl;
    bl=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"bl="<<bl<<endl;
    }
    int  bh;
    bh=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"bh="<<bh<<endl;
    }
    int  a;
    a=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"a="<<a<<endl;
    }
    int  b;
    b=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"b="<<b<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(al,ah,bl,bh,a,b);
      ANONYMOUS::main__Wrapper(al,ah,bl,bh,a,b);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb869\n");
  return 0;
}
