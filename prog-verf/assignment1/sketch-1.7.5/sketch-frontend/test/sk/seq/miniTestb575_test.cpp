#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb575.h"

using namespace std;

void expr2_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    int  y;
    y=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
    }
    int  _out_outsk;
    int  _out_outsp;
    _out_outsk=0U;
    if(_p_.verbosity > 2){
      cout<<"_out_outsk="<<_out_outsk<<endl;
    }
    _out_outsp=0U;
    if(_p_.verbosity > 2){
      cout<<"_out_outsp="<<_out_outsp<<endl;
    }
    int  count__ANONYMOUS_s5_outsk;
    int  count__ANONYMOUS_s5_outsp;
    int  count__ANONYMOUS_s5;
    count__ANONYMOUS_s5=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"count__ANONYMOUS_s5="<<count__ANONYMOUS_s5<<endl;
    }
    count__ANONYMOUS_s5_outsk=count__ANONYMOUS_s5;
    count__ANONYMOUS_s5_outsp=count__ANONYMOUS_s5;
    try{
      ANONYMOUS::twox(x,y,_out_outsk,count__ANONYMOUS_s5_outsk);
      ANONYMOUS::expr2(x,y,_out_outsp,count__ANONYMOUS_s5_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in expr2_ANONYMOUSTest\n");
      cout<<"x = "<<x<<endl;
      cout<<"y = "<<y<<endl;
      cout<<"count__ANONYMOUS_s5 = "<<count__ANONYMOUS_s5<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    if(count__ANONYMOUS_s5_outsk!=count__ANONYMOUS_s5_outsp) {
      printf("Automated testing failed in expr2_ANONYMOUSTest\n");
      cout<<"x = "<<x<<endl;
      cout<<"y = "<<y<<endl;
      cout<<"count__ANONYMOUS_s5 = "<<count__ANONYMOUS_s5<<endl;
      cout<<"count__ANONYMOUS_s5_outsk = "<<count__ANONYMOUS_s5_outsk<<endl;
      cout<<"count__ANONYMOUS_s5_outsp = "<<count__ANONYMOUS_s5_outsp<<endl;
      exit(1);
    }
  }
}

void foo__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::foo__WrapperNospec();
      ANONYMOUS::foo__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  i;
    i=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"i="<<i<<endl;
    }
    int  j;
    j=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"j="<<j<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(i,j);
      ANONYMOUS::main__Wrapper(i,j);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  foo__Wrapper_ANONYMOUSTest(p);
  main__Wrapper_ANONYMOUSTest(p);
  expr2_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb575\n");
  return 0;
}
