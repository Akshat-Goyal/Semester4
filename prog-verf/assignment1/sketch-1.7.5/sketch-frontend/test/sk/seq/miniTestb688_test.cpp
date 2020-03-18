#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb688.h"

using namespace std;

void m2_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(10==0){ continue; }
    double*  a= new double [10];
    for(int _i_=0;_i_<10;_i_++) {
      a[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"a=[";
      for(int _i_=0;_i_<10;_i_++) {
        cout<<a[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(10==0){ continue; }
    double*  b= new double [10];
    for(int _i_=0;_i_<10;_i_++) {
      b[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"b=[";
      for(int _i_=0;_i_<10;_i_++) {
        cout<<b[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::m(a,b);
      ANONYMOUS::m2(a,b);
    }catch(AssumptionFailedException& afe){  }
    delete[] a;

    delete[] b;

  }
}

void foo__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    double*  x= new double [n];
    for(int _i_=0;_i_<n;_i_++) {
      x[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::foo__WrapperNospec(n,x);
      ANONYMOUS::foo__Wrapper(n,x);
    }catch(AssumptionFailedException& afe){  }
    delete[] x;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  foo__Wrapper_ANONYMOUSTest(p);
  m2_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb688\n");
  return 0;
}
