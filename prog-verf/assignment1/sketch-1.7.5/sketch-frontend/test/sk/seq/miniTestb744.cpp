#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb744.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  t=7;
  apply_lam_s02(t, 1);
  assert ((t) == (7));;
}
void apply_lam_s02(int& t1, int one0) {
  increment1(t1, one0);
}
void increment1(int& x, int one) {
  x = x + one;
  x = x - 1;
}

}
