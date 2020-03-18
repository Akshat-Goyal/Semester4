#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb507.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* x/* len = n */) {
  _main(n, x);
}
void main__WrapperNospec(int n, int* x/* len = n */) {}
void _main(int n, int* x/* len = n */) {
  int*  y= new int [(n + 23) - 23]; CopyArr<int >(y,x, (n + 23) - 23, n);
  assert ((n) == (((n + 23) - 23)));;
  int  _out_s1=0;
  int * _tt0= new int [n]; 
  CopyArr<int>(_tt0,y, n, (n + 23) - 23);
  getLen(n, x, _tt0, _out_s1);
  assert ((_out_s1) == (n));;
  delete[] y;
  delete[] _tt0;
}
void getLen(int n, int* x/* len = n */, int* y/* len = n */, int& _out) {
  _out = n;
  return;
}

}
