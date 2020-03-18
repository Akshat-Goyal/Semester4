#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb489.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(5==0){ continue; }
    int*  arr= new int [5];
    for(int _i_=0;_i_<5;_i_++) {
      arr[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"arr=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<arr[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(arr);
      ANONYMOUS::main__Wrapper(arr);
    }catch(AssumptionFailedException& afe){  }
    delete[] arr;

  }
}

void test2__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    try{
      ANONYMOUS::test2__WrapperNospec(x);
      ANONYMOUS::test2__Wrapper(x);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  test2__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb489\n");
  return 0;
}
