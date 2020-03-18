#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb736.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s2=0;
  apply_f11(5, 4, _out_s2);
  assert ((_out_s2) == (10));;
}
void apply_f11(int x, int a0, int& _out) {
  _out = (x + a0) + 1;
  return;
}

}
