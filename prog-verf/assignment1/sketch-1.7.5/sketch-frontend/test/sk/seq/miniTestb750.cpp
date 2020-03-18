#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb750.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  int  _out_s2=0;
  foo1(x, 2, 3, x, _out_s2);
  assert ((_out_s2) == (x));;
}
void foo1(int y, int a, int b, int x, int& _out) {
  _out = x;
  return;
}

}
