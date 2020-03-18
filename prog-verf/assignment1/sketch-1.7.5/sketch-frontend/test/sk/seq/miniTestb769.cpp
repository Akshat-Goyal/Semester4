#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb769.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s2=0;
  apply_f1(8, _out_s2);
  assert ((_out_s2) == (16));;
}
void apply_f1(int y, int& _out) {
  _out = y * 2;
  return;
}

}
