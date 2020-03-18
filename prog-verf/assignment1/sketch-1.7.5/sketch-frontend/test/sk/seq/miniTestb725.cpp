#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb725.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  int  _out_s1=0;
  apply_timesTwo(x, _out_s1);
  assert ((_out_s1) == ((2 * x)));;
}
void apply_timesTwo(int x, int& _out) {
  int  _out_s3=0;
  timesTwo(x, _out_s3);
  _out = _out_s3;
  return;
}
void timesTwo(int x, int& _out) {
  _out = x + x;
  return;
}

}
