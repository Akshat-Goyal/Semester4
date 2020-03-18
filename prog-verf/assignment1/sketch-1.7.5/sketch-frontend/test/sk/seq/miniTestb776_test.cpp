#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb776.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(5==0){ continue; }
    int*  v= new int [5];
    for(int _i_=0;_i_<5;_i_++) {
      v[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"v=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<v[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(v,x);
      ANONYMOUS::main__Wrapper(v,x);
    }catch(AssumptionFailedException& afe){  }
    delete[] v;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb776\n");
  return 0;
}
