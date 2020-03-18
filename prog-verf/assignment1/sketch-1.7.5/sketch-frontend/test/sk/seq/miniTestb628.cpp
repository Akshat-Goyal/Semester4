#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb628.h"
namespace ANONYMOUS{

void test__Wrapper() {
  test();
}
void test__WrapperNospec() {}
void test() {
  int  _out_s1=0;
  sketch(-3, _out_s1);
  assert ((_out_s1) == (1));;
}
void sketch(int x, int& _out) {
  if ((x) > (5)) {
    if ((x) < (10)) {
      int  _out_s3=0;
      sketch(x + 1, _out_s3);
      int  _out_s5=0;
      sketch(x + 2, _out_s5);
      _out = _out_s3 + _out_s5;
      return;
    } else {
      _out = 2;
      return;
    }
  } else {
    if ((x) < (3)) {
      int  _out_s7=0;
      sketch(x + 3, _out_s7);
      _out = _out_s7;
      return;
    } else {
      _out = 1;
      return;
    }
  }
}

}
