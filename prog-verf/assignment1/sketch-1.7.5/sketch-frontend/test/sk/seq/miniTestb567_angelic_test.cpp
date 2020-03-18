#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb567_angelic.h"

using namespace std;

void partition__Wrapper_generatorsTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  p;
    p=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"p="<<p<<endl;
    }
    int  P;
    P=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"P="<<P<<endl;
    }
    int  N;
    N=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    try{
      generators::partition__WrapperNospec(p,P,N);
      generators::partition__Wrapper(p,P,N);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  partition__Wrapper_generatorsTest(p);
  printf("Automated testing passed for miniTestb567_angelic\n");
  return 0;
}
