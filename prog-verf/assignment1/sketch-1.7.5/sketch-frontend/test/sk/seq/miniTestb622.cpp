#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb622.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  if ((x) < (5)) {
    int  _out_s5=0;
    foo1_foo1(x, _out_s5);
    assert ((_out_s5) == (x));;
  }
}
void foo1_foo1(int t, int& _out) {
  int  _out_s3=0;
  baz2(t, _out_s3);
  _out = _out_s3;
  return;
}
void baz2(int t, int& _out) {
  if ((t) > (0)) {
    int  _out_s1=0;
    foo1_foo1(t - 1, _out_s1);
    _out = _out_s1 + 1;
    return;
  } else {
    _out = 0;
    return;
  }
}

}
