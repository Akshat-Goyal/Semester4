#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb492.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  int  x__ANONYMOUS_s1=0;
  _main(i, x__ANONYMOUS_s1);
}
void main__WrapperNospec(int i) {}
void _main(int i_0, int& x__ANONYMOUS_s0) {
  int  i=i_0;
  x__ANONYMOUS_s0 = i_0;
  int  v_s2=i;
  int  w_s3=i;
  foo(i_0, v_s2, w_s3);
  i = v_s2;
  i = w_s3;
  assert ((i_0) == (i_0));;
  assert ((i) == (i_0));;
}
void foo(int u_0, int& v, int& w) {
  int  u=v + w;
  w = u - v;
  v = u - (3 * w);
}

}
