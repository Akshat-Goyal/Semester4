#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb475.h"
namespace ANONYMOUS{

void main__Wrapper(int i, int j) {
  _main(i, j);
}
void main__WrapperNospec(int i, int j) {}
void _main(int i, int j) {
  int  x_s1=0;
  foo(i, x_s1);
  int  y_s3=0;
  foo(j, y_s3);
  if ((i) == (j)) {
    assert ((x_s1) == (y_s3));;
  }
  if ((i) > (j)) {
    assert ((x_s1) >= (j));;
  }
  assert ((x_s1) > (10));;
  assert ((y_s3) > (10));;
}
void foo(int i, int& _out) {
  int  rv_s5=0;
  moo(i, rv_s5);
  _out = rv_s5;
  assert ((rv_s5) > (10));;
  assert ((rv_s5) >= (i));;
  return;
}
void moo(int i, int& _out) { _out = i + 11; }

}
