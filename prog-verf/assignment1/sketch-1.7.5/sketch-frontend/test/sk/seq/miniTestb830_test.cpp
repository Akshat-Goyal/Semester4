#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb830.h"

using namespace std;

void test1__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    bool  x;
    x=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    bool  y;
    y=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
    }
    try{
      ANONYMOUS::test1__WrapperNospec(x,y);
      ANONYMOUS::test1__Wrapper(x,y);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  test1__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb830\n");
  return 0;
}
