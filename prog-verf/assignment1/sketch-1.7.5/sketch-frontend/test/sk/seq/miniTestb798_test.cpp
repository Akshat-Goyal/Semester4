#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb798.h"

using namespace std;

void g_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  len;
    len=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"len="<<len<<endl;
    }
    if(len==0){ continue; }
    int*  x= new int [len];
    for(int _i_=0;_i_<len;_i_++) {
      x[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<len;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(len==0){ continue; }
    int*  y= new int [len];
    for(int _i_=0;_i_<len;_i_++) {
      y[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"y=[";
      for(int _i_=0;_i_<len;_i_++) {
        cout<<y[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  alpha;
    alpha=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"alpha="<<alpha<<endl;
    }
    int  beta;
    beta=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"beta="<<beta<<endl;
    }
    int  gamma;
    gamma=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"gamma="<<gamma<<endl;
    }
    if(len==0){ continue; }
    int*  _out_outsk= new int [len];
    if(len==0){ continue; }
    int*  _out_outsp= new int [len];
    for(int _i_=0;_i_<len;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<len;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<len;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<len;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::f(len,x,y,alpha,beta,gamma,_out_outsk);
      ANONYMOUS::g(len,x,y,alpha,beta,gamma,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<len;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in g_ANONYMOUSTest\n");
        cout<<"len = "<<len<<endl;
        cout<<"x = "<<printArr(x, len)<<endl;
        cout<<"y = "<<printArr(y, len)<<endl;
        cout<<"alpha = "<<alpha<<endl;
        cout<<"beta = "<<beta<<endl;
        cout<<"gamma = "<<gamma<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, len)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, len)<<endl;
        exit(1);
      }
    }
    delete[] x;

    delete[] y;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  g_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb798\n");
  return 0;
}
