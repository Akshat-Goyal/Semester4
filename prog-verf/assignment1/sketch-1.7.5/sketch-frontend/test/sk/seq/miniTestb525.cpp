#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb525.h"
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
void foo__Wrapper() {
  foo();
}
void foo__WrapperNospec() {}
void foo() {
  Q*  a_q_s2=Q::create(0, 0);
  assert ((a_q_s2) != (NULL));;
}

}
