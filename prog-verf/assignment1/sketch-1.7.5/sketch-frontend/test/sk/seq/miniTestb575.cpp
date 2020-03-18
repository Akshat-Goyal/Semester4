#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb575.h"
namespace ANONYMOUS{

void expr2(int x, int y, int& _out, int& count__ANONYMOUS_s5) {
  count__ANONYMOUS_s5 = count__ANONYMOUS_s5 + 1;
  _out = x * 2;
  return;
}
void twox(int x, int y, int& _out, int& count__ANONYMOUS_s4) {
  count__ANONYMOUS_s4 = count__ANONYMOUS_s4 + 1;
  _out = x + x;
  return;
}
void foo__Wrapper() {
  int  count__ANONYMOUS_s7=0;
  glblInit_count__ANONYMOUS_s9(count__ANONYMOUS_s7);
  foo(count__ANONYMOUS_s7);
}
void foo__WrapperNospec() {}
void main__Wrapper(int i, int j) {
  _main(i, j);
}
void main__WrapperNospec(int i, int j) {}
void glblInit_count__ANONYMOUS_s9(int& count__ANONYMOUS_s8) {
  count__ANONYMOUS_s8 = 0;
}
void foo(int& count__ANONYMOUS_s6) {
  int  _out_s1=0;
  expr1(5, 2, _out_s1);
  int  _out_s3=0;
  expr2(2, 4, _out_s3, count__ANONYMOUS_s6);
  assert (((_out_s1 * _out_s3)) == (24));;
}
void _main(int i_0, int j_1) {
  int  j=j_1;
  int  i=i_0;
  if ((i_0) > (0)) {
    i = 4;
  }
  if ((j_1) > (0)) {
    j = 0;
  }
  if (((i_0) > (3)) && ((j_1) > (3))) {
    assert ((((2 * i) + j)) > (6));;
  }
  /* minimize(i) */;
  /* minimize(j) */;
}
void expr1(int x, int y, int& _out) {
  _out = y * 3;
  return;
}

}
