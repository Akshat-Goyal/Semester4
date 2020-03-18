#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb832.h"
namespace ANONYMOUS{

scalar* scalar::create(bool  supp_, int  val_){
  void* temp= malloc( sizeof(scalar)  ); 
  scalar* rv = new (temp)scalar();
  rv->supp =  supp_;
  rv->val =  val_;
  return rv;
}
void main__Wrapper(bool b, int v) {
  _main(b, v);
}
void main__WrapperNospec(bool b, int v) {}
void _main(bool b, int v) {
  bool  t_s1_supp_s8=0;
  int  t_s1_val_s9=0;
  foo(b, v, t_s1_supp_s8, t_s1_val_s9);
  bool  q_s3_supp_s12=0;
  int  q_s3_val_s13=0;
  foo(b, v + 7, q_s3_supp_s12, q_s3_val_s13);
  assert (t_s1_supp_s8);;
  int  __sa14_val_s16=0;
  if ((v) > (3)) {
    __sa14_val_s16 = t_s1_val_s9;
  } else {
    __sa14_val_s16 = q_s3_val_s13;
  }
  assert ((__sa14_val_s16) > (2));;
  bool  _out_s5_supp_s17=0;
  int  _out_s5_val_s18=0;
  moo(t_s1_supp_s8, t_s1_val_s9, scalar::create(q_s3_supp_s12, q_s3_val_s13), _out_s5_supp_s17, _out_s5_val_s18);
  assert ((_out_s5_val_s18) == (((2 * v) + 7)));;
}
void foo(bool b, int v, bool& _out_supp_s23, int& _out_val_s24) {
  bool  __sa29_supp_s30=0;
  if (b) {
    __sa29_supp_s30 = b;
  } else {
    __sa29_supp_s30 = !(b);
  }
  _out_supp_s23 = __sa29_supp_s30;
  _out_val_s24 = v;
  return;
}
void moo(bool a_supp_s19, int a_val_s20, scalar* b, bool& _out_supp_s21, int& _out_val_s22) {
  _out_supp_s21 = b->supp;
  _out_val_s22 = b->val;
  _out_val_s22 = _out_val_s22 + a_val_s20;
  return;
}

}
