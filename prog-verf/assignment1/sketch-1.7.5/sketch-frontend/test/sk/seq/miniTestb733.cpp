#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb733.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s3=0;
  apply_lam_s01(7, 1, _out_s3);
  assert ((_out_s3) == (8));;
}
void apply_lam_s01(int x, int t0, int& _out) {
  _out = x + t0;
  return;
}

}
