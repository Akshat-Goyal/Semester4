#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest24.h"

using namespace std;

void testSK_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(4==0){ continue; }
    bool*  in= new bool [4];
    for(int _i_=0;_i_<4;_i_++) {
      in[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in=[";
      for(int _i_=0;_i_<4;_i_++) {
        cout<<in[_i_]<<", ";
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
      ANONYMOUS::test(in,_out_outsk);
      ANONYMOUS::testSK(in,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in testSK_ANONYMOUSTest\n");
      cout<<"in = "<<printArr(in, 4)<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    delete[] in;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  testSK_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest24\n");
  return 0;
}
