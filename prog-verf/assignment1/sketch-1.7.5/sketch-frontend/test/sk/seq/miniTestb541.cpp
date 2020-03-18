#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb541.h"
namespace ANONYMOUS{

void main__Wrapper(int* x/* len = 10 */) {
  _main(x);
}
void main__WrapperNospec(int* x/* len = 10 */) {}
void _main(int* x_0/* len = 10 */) {
  int*  x= new int [10]; CopyArr<int >(x,x_0, 10, 10);
  (x[0]) = 5;
  bar(10, x);
  assert (arrCompare(x, 10, x, 10) && ((10) == (10)));;
  boo(x);
  delete[] x;
}
void bar(int n, int* x_0/* len = n */) {
  int*  x= new int [n]; CopyArr<int >(x,x_0, n, n);
  foo1(n, x);
  delete[] x;
}
void boo(int* y/* len = 10 */) {
  assert (((y[0])) == (5));;
}
void foo1(int n, int* x/* len = n */) {
  (x[0]) = 10;
}

}
