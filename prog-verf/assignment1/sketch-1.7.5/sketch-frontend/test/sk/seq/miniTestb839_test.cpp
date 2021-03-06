#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb839.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    int  y;
    y=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
    }
    int  z;
    z=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"z="<<z<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(x,y,z);
      ANONYMOUS::main__Wrapper(x,y,z);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb839\n");
  return 0;
}
