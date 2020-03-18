#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb751.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  int  _out_s2=0;
  apply_foo1(2, 3, x, _out_s2);
  assert ((_out_s2) == (x));;
}
void apply_foo1(int a1, int b2, int x0, int& _out) {
  int  _out_s4=0;
  foo1(a1, b2, x0, _out_s4);
  _out = _out_s4;
  return;
}
void foo1(int a, int b, int x, int& _out) {
  _out = x;
  return;
}

}
