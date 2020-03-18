#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb524.h"
namespace ANONYMOUS{

void main__Wrapper(int p) {
  _main(p);
}
void main__WrapperNospec(int p) {}
void _main(int p) {
  int _tt0[3] = {1, 2, 3};
  int*  x= new int [3]; CopyArr<int >(x,_tt0, 3, 3);
  nose(x);
  delete[] x;
}
void nose(int* x_0/* len = 3 */) {
  int*  x= new int [3]; CopyArr<int >(x,x_0, 3, 3);
  modif(x);
  delete[] x;
}
void modif(int* x/* len = 3 */) {
  (x[0]) = (x[0]) + 1;
  (x[0]);
}

}
