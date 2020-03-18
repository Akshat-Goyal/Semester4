#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb491.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* a/* len = n */) {
  _main(n, a);
}
void main__WrapperNospec(int n, int* a/* len = n */) {}
void _main(int n, int* a_0/* len = n */) {
  int*  a= new int [n]; CopyArr<int >(a,a_0, n, n);
  if ((n) > (1)) {
    (a[n - 1]) = 5;
  }
  int*  ta= new int [n]; CopyArr<int >(ta,a, n, n);
  int*  tb= new int [n]; CopyArr<int >(tb,a, n, n);
  CopyArr<int >(a,0, n);
  int*  a_s10= new int [n]; CopyArr<int >(a_s10,ta, n, n);
  foo(n, a_s10, ta);
  CopyArr<int >(ta,a_s10, n, n);
  for (int  i=1;(i) < (n);i = i + 1){
    assert (((ta[i])) == ((tb[(i - 1)])));;
  }
  int * _tt0= new int [n]; 
  CopyArr<int>(_tt0,0, n);
  assert (arrCompare(a, n, _tt0, n) && ((n) == (n)));;
  delete[] a;
  delete[] ta;
  delete[] tb;
  delete[] a_s10;
  delete[] _tt0;
}
void foo(int n, int* a/* len = n */, int* b/* len = n */) {
  for (int  i=1;(i) < (n);i = i + 1){
    (a[i]) = (b[i - 1]);
  }
}

}
