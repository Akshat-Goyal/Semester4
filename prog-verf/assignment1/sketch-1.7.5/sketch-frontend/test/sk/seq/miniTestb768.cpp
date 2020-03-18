#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb768.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s4=0;
  apply_lam_s01(0, 0, 3, 4, _out_s4);
  assert ((_out_s4) == (7));;
}
void apply_lam_s01(int x, int y, int a0, int b1, int& _out) {
  _out = a0 + b1;
  return;
}

}
