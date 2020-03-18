#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb550.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int j) {
  _main(n, j);
}
void main__WrapperNospec(int n, int j) {}
void _main(int n, int j_0) {
  int  j=j_0;
  j = j_0 + 3;
  if (((n) > (17)) && ((j) < (4))) {
    int _tt0[3] = {1, 2, 3};
    int*  x= new int [n]; CopyArr<int >(x,_tt0, n, 3);
    foo(n, x, j);
    delete[] x;
  }
}
void foo(int n, int* x/* len = n */, int j) {
  (x[j * 2]) = 10;
  (x[j * 4]) = 10;
  assert (((x[16])) == (0));;
}

}
