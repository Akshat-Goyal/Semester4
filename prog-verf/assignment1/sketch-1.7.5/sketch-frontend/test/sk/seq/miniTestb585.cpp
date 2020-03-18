#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb585.h"
namespace ANONYMOUS{

void main__Wrapper() {
  bool _tt0[5] = {0, 0, 0, 0, 0};
  int*  x__ANONYMOUS_s1= new int [5]; CopyArr<int >(x__ANONYMOUS_s1,_tt0, 5, 5);
  glblInit_x__ANONYMOUS_s3(x__ANONYMOUS_s1);
  _main(x__ANONYMOUS_s1);
  delete[] x__ANONYMOUS_s1;
}
void main__WrapperNospec() {}
void glblInit_x__ANONYMOUS_s3(int* x__ANONYMOUS_s2/* len = 5 */) {
  int _tt1[2] = {1, 2};
  CopyArr<int >(x__ANONYMOUS_s2,_tt1, 5, 2);
}
void _main(int* x__ANONYMOUS_s0/* len = 5 */) {
  assert (((x__ANONYMOUS_s0[3])) == (0));;
}

}
