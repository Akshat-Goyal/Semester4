#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb481.h"
namespace ANONYMOUS{

void main__Wrapper(int i, int j) {
  _main(i, j);
}
void main__WrapperNospec(int i, int j) {}
void _main(int i, int j) {
  int  x_s1=0;
  foo(i, 3, x_s1);
  int  y_s3=0;
  foo(j, 3, y_s3);
  if ((i) == (j)) {
    assert ((x_s1) == (y_s3));;
  }
  if ((i) > (j)) {
    assert ((x_s1) >= (j));;
  }
  assert ((x_s1) > (11));;
  assert ((y_s3) > (11));;
  assert (((x_s1 % 1)) == (0));;
}
void foo(int i, int h, int& _out) {
  int  rv_s5=0;
  moo(i, h, rv_s5);
  _out = rv_s5;
  if ((h) > (0)) {
    assert ((rv_s5) > (10));;
    assert ((rv_s5) >= (i));;
    assert (((rv_s5 % h)) == (0));;
  }
  return;
}
void moo(int i, int h, int& _out) { _out = (i+11)*h; }

}
