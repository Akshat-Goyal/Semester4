#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb727.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s5=0;
  apply_lam_s01(4, _out_s5);
  assert ((_out_s5) == (5));;
  int  _out_s7=0;
  apply_lam_s22(4, _out_s7);
  assert ((_out_s7) == (4));;
}
void apply_lam_s01(int x, int& _out) {
  _out = x + 1;
  return;
}
void apply_lam_s22(int x, int& _out) {
  _out = x;
  return;
}

}
