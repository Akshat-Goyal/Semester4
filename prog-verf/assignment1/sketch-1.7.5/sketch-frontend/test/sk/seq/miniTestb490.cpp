#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb490.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* a/* len = n */) {
  _main(n, a);
}
void main__WrapperNospec(int n, int* a/* len = n */) {}
void _main(int n, int* a_0/* len = n */) {
  int*  a= new int [n]; CopyArr<int >(a,a_0, n, n);
  int*  ta= new int [n]; CopyArr<int >(ta,a_0, n, n);
  CopyArr<int >(a,0, n);
  foo(n, ta, a_0);
  for (int  i=1;(i) < (n);i = i + 1){
    assert (((ta[i])) == ((a_0[(i - 1)])));;
  }
  int * _tt0= new int [n]; 
  CopyArr<int>(_tt0,0, n);
  assert (arrCompare(a, n, _tt0, n) && ((n) == (n)));;
  delete[] a;
  delete[] ta;
  delete[] _tt0;
}
void foo(int n, int* a/* len = n */, int* b/* len = n */) {
  for (int  i=1;(i) < (n);i = i + 1){
    (a[i]) = (b[i - 1]);
  }
}

}
