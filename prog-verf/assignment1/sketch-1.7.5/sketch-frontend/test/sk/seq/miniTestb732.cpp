#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb732.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s4=0;
  g2(5, 1, _out_s4);
  assert ((_out_s4) == (8));;
}
void g2(int i, int one, int& _out) {
  _out = (2 + i) + one;
  return;
}

}
