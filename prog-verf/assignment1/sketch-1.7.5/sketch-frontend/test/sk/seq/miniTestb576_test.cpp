#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb576.h"

using namespace std;

void moo_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    int*  u_outsk= new int [n];
    if(n==0){ continue; }
    int*  u_outsp= new int [n];
    if(n==0){ continue; }
    int*  u= new int [n];
    for(int _i_=0;_i_<n;_i_++) {
      u[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"u=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<u[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    CopyArr(u_outsk, u, n, n);
    CopyArr(u_outsp, u, n, n);
    try{
      ANONYMOUS::foo(n,u_outsk);
      ANONYMOUS::moo(n,u_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<n;_i_++) {
      if(u_outsk[_i_]!=u_outsp[_i_]) {
        printf("Automated testing failed in moo_ANONYMOUSTest\n");
        cout<<"n = "<<n<<endl;
        cout<<"u = "<<printArr(u, n)<<endl;
        cout<<"u_outsk = "<<printArr(u_outsk, n)<<endl;
        cout<<"u_outsp = "<<printArr(u_outsp, n)<<endl;
        exit(1);
      }
    }
    delete[] u;

    delete[] u_outsk;

    delete[] u_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  moo_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb576\n");
  return 0;
}
