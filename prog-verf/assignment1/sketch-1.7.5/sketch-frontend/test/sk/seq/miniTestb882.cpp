#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb882.h"
namespace A{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  x_s3=0;
  get_f1(x_s3);
  assert ((x_s3) == (10));;
  bool _tt0[3] = {0, 0, 0};
  int*  out_s5= new int [3]; CopyArr<int >(out_s5,_tt0, 3, 3);
  int _tt1[3] = {1, 2, 3};
  identT_intAr(3, _tt1, out_s5);
  assert (((out_s5[1])) == (2));;
  delete[] out_s5;
}
void get_f1(int& _out) {
  int  _out_s7=0;
  f1(_out_s7);
  _out = _out_s7;
  return;
}
void identT_intAr(int __sa0, int* in/* len = __sa0 */, int* _out/* len = __sa0 */) {
  CopyArr<int >(_out,in, __sa0, __sa0);
  return;
}
template<typename T>
void ident(T in, T& _out) {
  _out = in;
  return;
}
void f1(int& _out) {
  _out = 10;
  return;
}

}
namespace ANONYMOUS{


}
namespace B{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  int  _out_s9=0;
  ident(i, _out_s9);
  int  _out_s11=0;
  A::ident(_out_s9, _out_s11);
  assert ((_out_s11) == (i));;
}
template<typename T>
void ident(T in, T& _out) {
  _out = in;
  return;
}

}
