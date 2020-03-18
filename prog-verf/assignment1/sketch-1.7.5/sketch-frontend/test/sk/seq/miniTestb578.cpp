#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb578.h"
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
void foo__Wrapper(int x) {
  int  _out_s3=0;
  foo(x, _out_s3);
}
void foo__WrapperNospec(int x) {}
void _main(int x) {
  if(!((x) > (5))){ throw AssumptionFailedException();  };
  int  _out_s1=0;
  moo(x + 5, _out_s1);
}

}
