#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb686.h"
namespace ANONYMOUS{

void mainb__Wrapper(int n) {
  mainb(n);
}
void mainb__WrapperNospec(int n) {}
void main__Wrapper(int n) {
  int  _out_s26=0;
  _main(n, _out_s26);
}
void main__WrapperNospec(int n) {}
void mainb(int n) {
  int  t_s2=0;
  int _tt0[1] = {2};
  foo(1, _tt0, t_s2);
  int  t=0;
  t = t_s2;
  if(!((t_s2) == (2))){ throw AssumptionFailedException();  };
  int  _out_s4=0;
  int _tt1[1] = {2};
  foo(1, _tt1, _out_s4);
  if ((t_s2) == (n)) {
    int  t_s6=0;
    int _tt2[1] = {2};
    foo(1, _tt2, t_s6);
    t = t_s6;
  }
  if(!((t) <= (3))){ throw AssumptionFailedException();  };
  int  _out_s8=0;
  int _tt3[1] = {2};
  foo(1, _tt3, _out_s8);
}
void _main(int n, int& _out) {
  _out = 0;
  if(!((n) == (2))){ throw AssumptionFailedException();  };
  int  _out_s10=0;
  int _tt4[1] = {2};
  foo(1, _tt4, _out_s10);
  if(!((_out_s10) == (2))){ throw AssumptionFailedException();  };
  int  __sa0_s12=0;
  int _tt5[1] = {2};
  foo(1, _tt5, __sa0_s12);
  bool  __sa0=0;
  __sa0 = (__sa0_s12) == (1);
  while (__sa0) {
    int  _out_s14=0;
    int _tt6[1] = {3};
    foo(1, _tt6, _out_s14);
    _out = _out_s14;
    return;
  }
  int  _out_s18=0;
  bool _tt7[1] = {1};
  int * _tt8= new int [1]; 
  CopyArr<int>(_tt8,_tt7, 1, 1);
  foo(1, _tt8, _out_s18);
  int  _out_s20=0;
  int _tt9[1] = {2};
  foo(1, _tt9, _out_s20);
  int  _out_s22=0;
  int _tt10[1] = {3};
  foo(1, _tt10, _out_s22);
  int  _out_s24=0;
  int _tt11[3] = {_out_s18, _out_s20, _out_s22};
  bar(n, (_tt11+ 0), _out_s24);
  assert ((_out_s24) == (1));;
}
void foo(int n, int* x/* len = n */, int& _out) {
  _out = (x[0]);
  return;
}
void bar(int n, int* t/* len = n */, int& _out) {
  _out = (t[0]);
  return;
}

}
