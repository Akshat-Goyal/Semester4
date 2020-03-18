#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb488.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  k;
    k=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"k="<<k<<endl;
    }
    if(3 * k==0){ continue; }
    int*  p= new int [3 * k];
    for(int _i_=0;_i_<3 * k;_i_++) {
      p[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"p=[";
      for(int _i_=0;_i_<3 * k;_i_++) {
        cout<<p[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(k,p);
      ANONYMOUS::main__Wrapper(k,p);
    }catch(AssumptionFailedException& afe){  }
    delete[] p;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb488\n");
  return 0;
}
