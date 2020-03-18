#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb697.h"

using namespace std;

void sketch_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(17 * 4==0){ continue; }
    bool*  mem_0= new bool [17 * 4];
    for(int _i_=0;_i_<17 * 4;_i_++) {
      mem_0[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"mem_0=[";
      for(int _i_=0;_i_<17 * 4;_i_++) {
        cout<<mem_0[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(17 * 4==0){ continue; }
    bool*  _out_outsk= new bool [17 * 4];
    if(17 * 4==0){ continue; }
    bool*  _out_outsp= new bool [17 * 4];
    for(int _i_=0;_i_<17 * 4;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<17 * 4;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<17 * 4;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<17 * 4;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::spec(mem_0,_out_outsk);
      ANONYMOUS::sketch(mem_0,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<17 * 4;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in sketch_ANONYMOUSTest\n");
        cout<<"mem_0 = "<<printArr(mem_0, 17 * 4)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 17 * 4)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 17 * 4)<<endl;
        exit(1);
      }
    }
    delete[] mem_0;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sketch_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb697\n");
  return 0;
}
