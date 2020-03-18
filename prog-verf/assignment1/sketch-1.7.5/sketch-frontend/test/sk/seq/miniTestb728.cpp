#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb728.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  int  _out_s3=0;
  apply_lam_s01(x, _out_s3);
  assert ((_out_s3) == (((2 * x) + 5)));;
}
void apply_lam_s01(int x, int& _out) {
  _out = (x + x) + 5;
  return;
}

}
