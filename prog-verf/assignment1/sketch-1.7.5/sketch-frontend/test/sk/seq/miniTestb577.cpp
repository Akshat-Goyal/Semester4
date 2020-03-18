#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb577.h"
namespace ANONYMOUS{

void moo(int x, int& _out) {
  _out = x - 10;
  return;
}
void foo(int x, int& _out) {
  if(!((x) > (10))){ throw AssumptionFailedException();  };
  _out = x - 10;
  assert ((_out) > (0));;
  return;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  int  _out_s1=0;
  moo(x + 11, _out_s1);
}

}
