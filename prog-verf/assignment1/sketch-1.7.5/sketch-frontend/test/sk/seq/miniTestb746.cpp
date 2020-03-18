#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb746.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s2=0;
  foo1(3, _out_s2);
  assert (((_out_s2 + 1)) == (5));;
}
void foo1(int x, int& _out) {
  _out = x + 1;
  return;
}

}
