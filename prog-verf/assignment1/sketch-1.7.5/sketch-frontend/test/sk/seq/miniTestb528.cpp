#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb528.h"
namespace ANONYMOUS{

Q* Q::create(int  u_, int  v_){
  void* temp= malloc( sizeof(Q)  ); 
  Q* rv = new (temp)Q();
  rv->u =  u_;
  rv->v =  v_;
  return rv;
}
F* F::create(int  x_, int  y_, Q*  q_){
  void* temp= malloc( sizeof(F)  ); 
  F* rv = new (temp)F();
  rv->x =  x_;
  rv->y =  y_;
  rv->q =  q_;
  return rv;
}
void moo__Wrapper() {
  moo();
}
void moo__WrapperNospec() {}
void moo() {
  Q*  a_q_s2=NULL;
  int  a_y_s1=7;
  int  a_x_s0=5;
  foo(a_x_s0, a_y_s1, a_q_s2);
  assert ((a_y_s1) == (22));;
  secretAssertEquals(5, 5);
}
void foo(int& x_x_s6, int& x_y_s7, Q*& x_q_s8) {
  x_y_s7 = 22;
}
void secretAssertEquals(int v1, int v2) { assert (v1==v2); }

}
