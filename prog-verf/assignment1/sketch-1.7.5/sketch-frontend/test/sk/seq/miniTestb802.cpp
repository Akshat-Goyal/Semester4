#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb802.h"
namespace ANONYMOUS{

void main__Wrapper(int q) {
  _main(q);
}
void main__WrapperNospec(int q) {}
void _main(int q) {
  int  _out_s1=0;
  foo_gg1T_int(q, _out_s1);
  assert ((_out_s1) == ((q + 1)));;
}
void foo_gg1T_int(int t, int& _out) {
  int  _out_s3=0;
  g(t, _out_s3);
  int  _out_s5=0;
  gg1(_out_s3, _out_s5);
  _out = _out_s5;
  return;
}
template<typename T>
void g(T i, T& _out) {
  _out = i;
  return;
}
void gg1(int x, int& _out) {
  _out = x + 1;
  return;
}

}
