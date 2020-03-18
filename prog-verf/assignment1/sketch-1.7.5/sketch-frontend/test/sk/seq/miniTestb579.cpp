#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb579.h"
namespace ANONYMOUS{

void moo(int x, int& _out) {
  if(!((x) > (3))){ throw AssumptionFailedException();  };
  _out = x - 10;
  assert ((_out) > (0));;
  return;
}
void foo(int x, int& _out) {
  if(!((x) > (10))){ throw AssumptionFailedException();  };
  _out = x - 10;
  assert ((_out) > (0));;
  return;
}
void boo(int x, int& _out) {
  _main(x - 5);
  _out = x - 10;
  return;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  if(!((x) > (5))){ throw AssumptionFailedException();  };
  int  _out_s1=0;
  moo(x + 5, _out_s1);
  secretAssert(1);
}
void secretAssert(bool t) { assert (t); }

}
