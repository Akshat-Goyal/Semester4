#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb493.h"
namespace ANONYMOUS{

template<typename T_0>
Bar* Bar::create(int  n_, T_0* x_, int x_len){
  int tlen_x = n_; 
  void* temp= malloc( sizeof(Bar)   + sizeof(int )*tlen_x); 
  Bar* rv = new (temp)Bar();
  rv->n =  n_;
  CopyArr(rv->x, x_, tlen_x, x_len ); 
  return rv;
}
void main__Wrapper(int n, int* t/* len = n */) {
  _main(n, t);
}
void main__WrapperNospec(int n, int* t/* len = n */) {}
void _main(int n, int* t/* len = n */) {
  Bar*  b=Bar::create(n, t, n);
  int*  a_s20= new int [n]; CopyArr<int >(a_s20,b->x, n, b->n);
  int * _tt0= new int [n]; 
  CopyArr<int>(_tt0,b->x, n, b->n);
  foo(n, a_s20, _tt0);
  CopyArr<int >(b->x,a_s20, b->n, n);
  for (int  i=1;(i) < (n);i = i + 1){
    assert (((b->x[i])) == ((t[(i - 1)])));;
  }
  delete[] a_s20;
  delete[] _tt0;
}
void foo(int n, int* a/* len = n */, int* b/* len = n */) {
  for (int  i=1;(i) < (n);i = i + 1){
    (a[i]) = (b[i - 1]);
  }
}

}
