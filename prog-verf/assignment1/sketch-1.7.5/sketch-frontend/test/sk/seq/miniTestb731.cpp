#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb731.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s4=0;
  g2(1, _out_s4);
  assert ((_out_s4) == (3));;
}
void g2(int x, int& _out) {
  _out = 2 + x;
  return;
}

}
