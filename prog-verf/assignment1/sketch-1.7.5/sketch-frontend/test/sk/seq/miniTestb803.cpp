#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb803.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s3=0;
  int  x=0;
  foo1(x, _out_s3);
  assert ((((_out_s3 + _out_s3) + _out_s3)) == (3));;
}
void foo1(int& x, int& _out) {
  x = x + 1;
  _out = x;
  return;
}

}
