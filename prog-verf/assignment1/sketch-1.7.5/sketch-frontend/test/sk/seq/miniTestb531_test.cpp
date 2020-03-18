#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb531.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    int  m;
    m=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"m="<<m<<endl;
    }
    if(n * m==0){ continue; }
    int*  x= new int [n * m];
    for(int _i_=0;_i_<n * m;_i_++) {
      x[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<n * m;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(n,m,x);
      ANONYMOUS::main__Wrapper(n,m,x);
    }catch(AssumptionFailedException& afe){  }
    delete[] x;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb531\n");
  return 0;
}
