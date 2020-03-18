#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb876.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  alo;
    alo=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"alo="<<alo<<endl;
    }
    int  ahi;
    ahi=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"ahi="<<ahi<<endl;
    }
    int  blo;
    blo=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"blo="<<blo<<endl;
    }
    int  bhi;
    bhi=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"bhi="<<bhi<<endl;
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
      ANONYMOUS::main__WrapperNospec(alo,ahi,blo,bhi,a,b);
      ANONYMOUS::main__Wrapper(alo,ahi,blo,bhi,a,b);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb876\n");
  return 0;
}
