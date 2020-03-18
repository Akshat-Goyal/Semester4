#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb664.h"

using namespace std;

void main0__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(30==0){ continue; }
    int*  arr= new int [30];
    for(int _i_=0;_i_<30;_i_++) {
      arr[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"arr=[";
      for(int _i_=0;_i_<30;_i_++) {
        cout<<arr[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  sbnd;
    sbnd=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"sbnd="<<sbnd<<endl;
    }
    try{
      ANONYMOUS::main0__WrapperNospec(arr,sbnd);
      ANONYMOUS::main0__Wrapper(arr,sbnd);
    }catch(AssumptionFailedException& afe){  }
    delete[] arr;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main0__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb664\n");
  return 0;
}
