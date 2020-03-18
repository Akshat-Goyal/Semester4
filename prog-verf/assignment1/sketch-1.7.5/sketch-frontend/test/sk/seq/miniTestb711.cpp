#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb711.h"
namespace P1{

void main__Wrapper(int q) {
  _main(q);
}
void main__WrapperNospec(int q) {}
void _main(int q) {
  int  _out_s1=0;
  foo_g1T_int(q, _out_s1);
  assert ((_out_s1) == (q));;
  int  _out_s3=0;
  moo_g1_gg2Q_intT_int(q, q, _out_s3);
  assert ((_out_s3) == ((2 * q)));;
}
void foo_g1T_int(int t, int& _out) {
  int  _out_s9=0;
  g1(t, _out_s9);
  _out = _out_s9;
  return;
}
void moo_g1_gg2Q_intT_int(int t, int q, int& _out) {
  int  _out_s5=0;
  foo_g1T_int(t, _out_s5);
  int  _out_s7=0;
  gg2(_out_s5, q, _out_s7);
  _out = _out_s7;
  return;
}
void g1(int i, int& _out) {
  _out = i;
  return;
}
void gg2(int x, int y, int& _out) {
  _out = x + y;
  return;
}

}
namespace ANONYMOUS{


}
namespace P2{

void main__Wrapper(int q) {
  _main(q);
}
void main__WrapperNospec(int q) {}
void _main(int q) {
  int  _out_s11=0;
  foo_gT_int(q, _out_s11);
  assert ((_out_s11) == (0));;
  int  _out_s13=0;
  moo_g_gg3Q_intT_int(q, q, _out_s13);
  assert ((_out_s13) == (q));;
}
void foo_gT_int(int t, int& _out) {
  int  _out_s19=0;
  g(t, _out_s19);
  _out = _out_s19;
  return;
}
void moo_g_gg3Q_intT_int(int t, int q, int& _out) {
  int  _out_s15=0;
  foo_gT_int(t, _out_s15);
  int  _out_s17=0;
  gg3(_out_s15, q, _out_s17);
  _out = _out_s17;
  return;
}
template<typename T>
void g(T i, int& _out) {
  _out = 0;
  return;
}
void gg3(int x, int y, int& _out) {
  _out = x + y;
  return;
}

}
