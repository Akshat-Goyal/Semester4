#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb739.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s3=0;
  apply_lam_s02(1, 4, _out_s3);
  assert ((_out_s3) == (5));;
}
void apply_lam_s02(int x, int a0, int& _out) {
  int  _out_s7=0;
  foo1(a0, _out_s7);
  _out = _out_s7 + x;
  return;
}
void foo1(int a, int& _out) {
  _out = a;
  return;
}

}
