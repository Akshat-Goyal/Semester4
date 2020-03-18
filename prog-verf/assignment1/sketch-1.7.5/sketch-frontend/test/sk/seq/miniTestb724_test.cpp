#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb724.h"

using namespace std;

void firstElementSketch_ANONYMOUSTest(Parameters& _p_) {
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
    if(4==0){ continue; }
    bool*  a= new bool [4];
    for(int _i_=0;_i_<4;_i_++) {
      a[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"a=[";
      for(int _i_=0;_i_<4;_i_++) {
        cout<<a[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(5==0){ continue; }
    bool*  b= new bool [5];
    for(int _i_=0;_i_<5;_i_++) {
      b[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"b=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<b[_i_]<<", ";
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
      ANONYMOUS::firstElement(in,a,b,_out_outsk);
      ANONYMOUS::firstElementSketch(in,a,b,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in firstElementSketch_ANONYMOUSTest\n");
      cout<<"in = "<<printArr(in, 4)<<endl;
      cout<<"a = "<<printArr(a, 4)<<endl;
      cout<<"b = "<<printArr(b, 5)<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    delete[] in;

    delete[] a;

    delete[] b;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  firstElementSketch_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb724\n");
  return 0;
}
