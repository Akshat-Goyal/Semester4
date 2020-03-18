#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb864.h"
namespace ANONYMOUS{

void mn__Wrapper() {
  mn();
}
void mn__WrapperNospec() {}
void mn() {
  int  _out_s1=0;
  compare_float_float(3.1415f, 3.1415f, _out_s1);
  assert ((_out_s1) == (0));;
}
void compare_float_float(float x, float y, int& _out) {
  _out = ((x) < (y) ? -1 : ((int) (((fabs(x-(y)) < 0.0001) ? 0 : 1))));
  return;
}

}
