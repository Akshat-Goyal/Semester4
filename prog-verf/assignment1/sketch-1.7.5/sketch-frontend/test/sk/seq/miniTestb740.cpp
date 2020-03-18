#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb740.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s2=0;
  apply_f2(10, _out_s2);
  assert ((_out_s2) == (25));;
}
void apply_f2(int a0, int& _out) {
  int  _out_s6=0;
  foo1(a0, _out_s6);
  _out = (_out_s6 + 5) + a0;
  return;
}
void foo1(int a, int& _out) {
  _out = a;
  return;
}

}
