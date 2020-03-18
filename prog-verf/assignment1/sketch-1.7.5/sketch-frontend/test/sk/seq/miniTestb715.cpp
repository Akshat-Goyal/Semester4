#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb715.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  int  moo__ANONYMOUS_s2=0;
  glblInit_moo__ANONYMOUS_s4(moo__ANONYMOUS_s2);
  _main(i, moo__ANONYMOUS_s2);
}
void main__WrapperNospec(int i) {}
void glblInit_moo__ANONYMOUS_s4(int& moo__ANONYMOUS_s3) {
  moo__ANONYMOUS_s3 = 20;
}
void _main(int i, int& moo__ANONYMOUS_s1) {
  foo(moo__ANONYMOUS_s1);
  assert (((i + moo__ANONYMOUS_s1)) > ((i + 22)));;
}
void foo(int& moo__ANONYMOUS_s0) {
  moo__ANONYMOUS_s0 = moo__ANONYMOUS_s0 + 10;
}

}
