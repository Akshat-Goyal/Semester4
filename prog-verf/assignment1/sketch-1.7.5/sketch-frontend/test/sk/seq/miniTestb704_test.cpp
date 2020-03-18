#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb704.h"

using namespace std;

void main__Wrapper_P1Test(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  q;
    q=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"q="<<q<<endl;
    }
    try{
      P1::main__WrapperNospec(q);
      P1::main__Wrapper(q);
    }catch(AssumptionFailedException& afe){  }
  }
}

void main__Wrapper_P2Test(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  q;
    q=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"q="<<q<<endl;
    }
    try{
      P2::main__WrapperNospec(q);
      P2::main__Wrapper(q);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_P2Test(p);
  main__Wrapper_P1Test(p);
  printf("Automated testing passed for miniTestb704\n");
  return 0;
}
