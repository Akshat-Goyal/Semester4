#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb741.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s4=0;
  apply_g2(1, _out_s4);
  assert ((_out_s4) == (3));;
}
void apply_g2(int x, int& _out) {
  int  _out_s6=0;
  g2(x, _out_s6);
  _out = _out_s6;
  return;
}
void g2(int i, int& _out) {
  _out = 2 + i;
  return;
}

}
