#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb823.h"
namespace ANONYMOUS{

void main__Wrapper(int y) {
  _main(y);
}
void main__WrapperNospec(int y) {}
void _main(int y) {
  int  _out_s3=0;
  foo_lam_s02((y - 1) + 1, y, _out_s3);
  assert ((_out_s3) == ((2 * y)));;
}
void foo_lam_s02(int x, int y0, int& _out) {
  assert ((x) == (x));;
  _out = x + y0;
  return;
}

}
