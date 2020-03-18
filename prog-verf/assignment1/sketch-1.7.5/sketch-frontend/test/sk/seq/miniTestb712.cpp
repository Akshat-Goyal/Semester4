#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb712.h"
namespace P1{

void main__Wrapper(int q) {
  _main(q);
}
void main__WrapperNospec(int q) {}
void _main(int q) {
  int  _out_s1=0;
  reduce_ggT_int(q, 5, 3, _out_s1);
  assert ((_out_s1) == (q));;
}
void reduce_ggT_int(int t1, int t2, int t3, int& _out) {
  int  _out_s3=0;
  doTwo2(t1, t2, _out_s3);
  int  _out_s5=0;
  P2::apply_ggQ_intT_int(_out_s3, t3, _out_s5);
  _out = _out_s5;
  return;
}
void doTwo2(int t1, int t2, int& _out) {
  int  tt_s7=0;
  P2::apply_ggQ_intT_int(t1, t2, tt_s7);
  _out = tt_s7;
  return;
}
template<typename T>
void gg(int x, T y, int& _out) {
  _out = x;
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
  int  _out_s9=0;
  reduce_gg1T_int(q, 5, 3, _out_s9);
  assert ((_out_s9) == ((q + 8)));;
}
void reduce_gg1T_int(int t1, int t2, int t3, int& _out) {
  int  tt_s11=0;
  apply_gg1Q_intT_int(t1, t2, tt_s11);
  int  _out_s13=0;
  apply_gg1Q_intT_int(tt_s11, t3, _out_s13);
  _out = _out_s13;
  return;
}
void apply_ggQ_intT_int(int t1, int t2, int& _out) {
  int  _out_s17=0;
  P1::gg(t1, t2, _out_s17);
  _out = _out_s17;
  return;
}
void apply_gg1Q_intT_int(int t1, int t2, int& _out) {
  int  _out_s15=0;
  gg1(t1, t2, _out_s15);
  _out = _out_s15;
  return;
}
void gg1(int x, int y, int& _out) {
  _out = x + y;
  return;
}

}
