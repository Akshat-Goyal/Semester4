#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb545.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* x/* len = n */) {
  _main(n, x);
}
void main__WrapperNospec(int n, int* x/* len = n */) {}
void _main(int n, int* x/* len = n */) {
  int*  y= new int [(n + 23) - 0]; CopyArr<int >(y,x, (n + 23) - 0, n);
  int  _out_s1=0;
  foo(n, _out_s1);
  assert ((n) == (_out_s1));;
  int  t_s4=0;
  foo(n, t_s4);
  int  t_s6=0;
  int * _tt0= new int [n]; 
  CopyArr<int>(_tt0,(y+ 0), n, t_s4);
  getLen(n, x, _tt0, t_s6);
  assert ((t_s6) == (n));;
  delete[] y;
  delete[] _tt0;
}
void foo(int n, int& _out) {
  _out = n;
  return;
}
void getLen(int n, int* x/* len = n */, int* y/* len = n */, int& _out) {
  _out = n;
  return;
}

}
