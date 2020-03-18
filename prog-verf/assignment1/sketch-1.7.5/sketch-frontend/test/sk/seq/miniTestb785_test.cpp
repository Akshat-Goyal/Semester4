#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb785.h"

using namespace std;

void g_laTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  alpha;
    alpha=abs(rand()) % 2;
    if(_p_.verbosity > 2){
      cout<<"alpha="<<alpha<<endl;
    }
    int  beta;
    beta=abs(rand()) % 2;
    if(_p_.verbosity > 2){
      cout<<"beta="<<beta<<endl;
    }
    if(1==0){ continue; }
    int*  _out_outsk= new int [1];
    if(1==0){ continue; }
    int*  _out_outsp= new int [1];
    for(int _i_=0;_i_<1;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<1;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<1;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<1;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      la::f(alpha,beta,_out_outsk);
      la::g(alpha,beta,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<1;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in g_laTest\n");
        cout<<"alpha = "<<alpha<<endl;
        cout<<"beta = "<<beta<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 1)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 1)<<endl;
        exit(1);
      }
    }
    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  g_laTest(p);
  printf("Automated testing passed for miniTestb785\n");
  return 0;
}
