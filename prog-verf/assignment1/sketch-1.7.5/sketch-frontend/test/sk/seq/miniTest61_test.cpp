#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest61.h"

using namespace std;

void test2_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(3==0){ continue; }
    bool*  x_0= new bool [3];
    for(int _i_=0;_i_<3;_i_++) {
      x_0[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"x_0=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<x_0[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    bool  _out_outsk;
    bool  _out_outsp;
    _out_outsk=0U;
    if(_p_.verbosity > 2){
      cout<<"_out_outsk="<<_out_outsk<<endl;
    }
    _out_outsp=0U;
    if(_p_.verbosity > 2){
      cout<<"_out_outsp="<<_out_outsp<<endl;
    }
    try{
      ANONYMOUS::alwaysOne(x_0,_out_outsk);
      ANONYMOUS::test2(x_0,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in test2_ANONYMOUSTest\n");
      cout<<"x_0 = "<<printArr(x_0, 3)<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    delete[] x_0;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  test2_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest61\n");
  return 0;
}
