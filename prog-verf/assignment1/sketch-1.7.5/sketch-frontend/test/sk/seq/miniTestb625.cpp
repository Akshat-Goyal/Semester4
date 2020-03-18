#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb625.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  x=0;
  int  y=0;
  moo1_tt2(x, y);
  assert ((x) == (1));;
  assert ((y) == (1));;
}
void moo1_tt2(int& x1, int& y) {
  boo3(x1);
  y = y + 1;
}
void boo3(int& x1) {
  tt2(x1);
}
void tt2(int& x) {
  x = x + 1;
}

}
