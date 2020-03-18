#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb557.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  int  j_s1=0;
  foo(i, j_s1);
  assert (((i + 12)) >= (j_s1));;
}
void foo(int i, int& _out) {
  int  rv_s3=0;
  moo(i, rv_s3);
  _out = rv_s3;
  assert ((rv_s3) > (10));;
  assert ((rv_s3) >= (i));;
  assert ((rv_s3) <= ((i + 12)));;
  return;
}
void moo(int i, int& _out) { _out = i + 11; }

}
