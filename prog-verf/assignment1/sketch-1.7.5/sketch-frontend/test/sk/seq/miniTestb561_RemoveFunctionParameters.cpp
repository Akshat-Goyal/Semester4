#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb561_RemoveFunctionParameters.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  y=0;
  int  x=0;
  f1(x, y);
  assert (((x) == (8)) && ((y) == (2)));;
}
void f1(int& x, int& y) {
  twice_g2(x, y);
}
void twice_g2(int& i, int& y0) {
  g2(i, y0);
  g2(i, y0);
}
void g2(int& i, int& y) {
  i = i + 4;
  y = y + 1;
}

}
