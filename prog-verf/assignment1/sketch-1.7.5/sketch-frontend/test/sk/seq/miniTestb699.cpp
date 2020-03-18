#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb699.h"
namespace ANONYMOUS{

void main__Wrapper(int x, int* y/* len = x */) {
  _main(x, y);
}
void main__WrapperNospec(int x, int* y/* len = x */) {}
void _main(int x, int* y_0/* len = x */) {
  int*  y= new int [x]; CopyArr<int >(y,y_0, x, x);
  if ((x) < (3)) {
  delete[] y;
    return;
  }
  bool _tt0[50] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int*  tt= new int [50]; CopyArr<int >(tt,_tt0, 50, 50);
  for (int  i=0;(i) < (50);i = i + 1){
    (tt[i]) = i;
  }
  for (int  j=0;(j) < (x);j = j + 1){
    (y[j]) = (y[j]) + (tt[j]);
  }
  for (int  i_0=0;(i_0) < (50);i_0 = i_0 + 1){
    if ((i_0) >= (x)) {
  delete[] y;
  delete[] tt;
      return;
    }
    assert ((((y[i_0]) - (tt[i_0]))) >= (0));;
  }
  delete[] y;
  delete[] tt;
}

}
