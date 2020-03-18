#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb668.h"
namespace P1{

void foo(int& _out) {
  _out = 10;
  return;
}

}
namespace P2{

void foo(int x, int& _out) {
  assert ((x) < (10));;
  _out = x;
  return;
}

}
namespace P3{

void main__Wrapper(int x, int y) {
  _main(x, y);
}
void main__WrapperNospec(int x, int y) {}
void _main(int x, int y) {
  int  _out_s1=0;
  P1::foo(_out_s1);
  foo(_out_s1 + 13);
  int  _out_s3=0;
  P1::foo(_out_s3);
  int  _out_s5=0;
  P2::foo(_out_s3 - 2, _out_s5);
}
void foo(int x) {
  assert ((x) > (10));;
}

}
