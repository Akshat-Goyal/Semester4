#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb565_angelic.h"

using namespace std;

void main__Wrapper_generatorsTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(4==0){ continue; }
    int*  a= new int [4];
    for(int _i_=0;_i_<4;_i_++) {
      a[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"a=[";
      for(int _i_=0;_i_<4;_i_++) {
        cout<<a[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      generators::main__WrapperNospec(a);
      generators::main__Wrapper(a);
    }catch(AssumptionFailedException& afe){  }
    delete[] a;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_generatorsTest(p);
  printf("Automated testing passed for miniTestb565_angelic\n");
  return 0;
}
