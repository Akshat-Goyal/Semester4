#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb830.h"
namespace ANONYMOUS{

scalar* scalar::create(bool  supp_){
  void* temp= malloc( sizeof(scalar)  ); 
  scalar* rv = new (temp)scalar();
  rv->supp =  supp_;
  return rv;
}
void test1__Wrapper(bool x, bool y) {
  test1(x, y);
}
void test1__WrapperNospec(bool x, bool y) {}
void test1(bool x, bool y) {
  bool  _pac_sc_s0=!(x);
  if (!(_pac_sc_s0)) {
    bool  _pac_sc_s0_s2_supp_s5=0;
    some(x, _pac_sc_s0_s2_supp_s5);
    bool  _pac_sc_s0_s4_supp_s6=0;
    min2(_pac_sc_s0_s2_supp_s5, _pac_sc_s0_s4_supp_s6);
    _pac_sc_s0 = _pac_sc_s0_s4_supp_s6;
  }
  assert (_pac_sc_s0);;
}
void some(bool x, bool& _out_supp_s7) {
  _out_supp_s7 = x;
  return;
}
void min2(bool a_supp_s8, bool& _out_supp_s9) {
  _out_supp_s9 = 0;
  if (a_supp_s8) {
    _out_supp_s9 = a_supp_s8;
    return;
  }
}

}
