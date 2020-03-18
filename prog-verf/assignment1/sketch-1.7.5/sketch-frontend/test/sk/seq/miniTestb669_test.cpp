#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb669.h"

using namespace std;

void main__Wrapper_YYTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    try{
      YY::main__WrapperNospec(n);
      YY::main__Wrapper(n);
    }catch(AssumptionFailedException& afe){  }
  }
}

void main__Wrapper_XXTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    try{
      XX::main__WrapperNospec(n);
      XX::main__Wrapper(n);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_YYTest(p);
  main__Wrapper_XXTest(p);
  printf("Automated testing passed for miniTestb669\n");
  return 0;
}
