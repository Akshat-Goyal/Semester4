#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb646.h"
namespace ANONYMOUS{

B* B::create(A*  x_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->x =  x_;
  rv->type= A::B_type;
  return rv;
}
C* C::create(A*  y_){
  void* temp= malloc( sizeof(C)  ); 
  C* rv = new (temp)C();
  rv->y =  y_;
  rv->type= A::C_type;
  return rv;
}
D* D::create(A*  x_, A*  z_){
  void* temp= malloc( sizeof(D)  ); 
  D* rv = new (temp)D();
  rv->x =  x_;
  rv->z =  z_;
  rv->type= A::D_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  A*  _out_s1__0_0=NULL;
  A*  _out_s1_0=B::create(_out_s1__0_0);
  A*  _out_s1__0=B::create(_out_s1_0);
  A*  _out_s1=NULL;
  _out_s1 = B::create(_out_s1__0);
  A*  a_s7=B::create(_out_s1);
  A*  _out_s1__0_2=NULL;
  A*  _out_s1_2=B::create(_out_s1__0_2);
  A*  _out_s1__0_1=B::create(_out_s1_2);
  A*  _out_s1_1=B::create(_out_s1__0_1);
  A*  b_s9=B::create(_out_s1_1);
  bool  _out_s11=0;
  checkEq(a_s7, b_s9, _out_s11);
  assert (_out_s11);;
}
void checkEq(A* a, A* b, bool& _out) {
  if (((a) == (NULL)) && ((b) == (NULL))) {
    _out = 1;
    return;
  }
  switch(a->type){
  case B::B_type:
    {
    B*  _a = (B* )  a;

    B*  bb=((B*)(b));
    bool  _out_s13=0;
    checkEq(_a->x, bb->x, _out_s13);
    _out = _out_s13;
    return;
  
    break;
  }
  case C::C_type:
    {
    C*  _a = (C* )  a;

    C*  bb_0=((C*)(b));
    bool  _out_s15=0;
    checkEq(_a->y, bb_0->y, _out_s15);
    _out = _out_s15;
    return;
  
    break;
  }
  case D::D_type:
    {
    D*  _a = (D* )  a;

    D*  bb_1=((D*)(b));
    bool  _pac_sc_s16_s18=0;
    checkEq(_a->x, bb_1->x, _pac_sc_s16_s18);
    bool  _pac_sc_s16=0;
    _pac_sc_s16 = _pac_sc_s16_s18;
    if (_pac_sc_s16_s18) {
      bool  _pac_sc_s16_s20=0;
      checkEq(_a->z, bb_1->z, _pac_sc_s16_s20);
      _pac_sc_s16 = _pac_sc_s16_s20;
    }
    _out = _pac_sc_s16;
    return;
  
    break;
  }

 }
}

}
