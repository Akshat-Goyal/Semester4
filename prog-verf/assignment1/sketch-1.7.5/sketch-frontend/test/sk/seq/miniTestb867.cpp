#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb867.h"
namespace ANONYMOUS{

info* info::create(int  i_, T*  t_){
  void* temp= malloc( sizeof(info)  ); 
  info* rv = new (temp)info();
  rv->i =  i_;
  rv->t =  t_;
  return rv;
}
A* A::create(int  x_, int  y_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  rv->y =  y_;
  rv->type= T::A_type;
  return rv;
}
B* B::create(info*  inf_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->inf =  inf_;
  rv->type= T::B_type;
  return rv;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  T*  t=A::create(x, x);
  if ((x) > (5)) {
    t = B::create(info::create(x, t));
  }
  info*  ii=info::create(x + x, t);
  switch(t->type){
  case A::A_type:
    {
    A*  _t = (A* )  t;

    bool  _pac_sc_s4_s6=0;
    equals_T_s0(ii->t, _t, 6, _pac_sc_s4_s6);
    bool  _pac_sc_s4=0;
    _pac_sc_s4 = _pac_sc_s4_s6;
    if (_pac_sc_s4_s6) {
      _pac_sc_s4 = (x) <= (5);
    }
    assert (_pac_sc_s4);;
  
    break;
  }
  case B::B_type:
    {
    B*  _t = (B* )  t;

    _t->inf->i = _t->inf->i + 1;
    assert ((_t->inf->i) > (5));;
    ii->t = _t->inf->t;
  
    break;
  }

 }
}
void equals_T_s0(T* left_s1, T* right_s2, int bnd_s3, bool& _out) {
  if ((bnd_s3) <= (0)) {
    _out = 0;
    return;
  }
  if (((left_s1) == (NULL)) && ((right_s2) == (NULL))) {
    _out = 1;
    return;
  }
  if ((left_s1) == (NULL)) {
    _out = 0;
    return;
  }
  if ((right_s2) == (NULL)) {
    _out = 0;
    return;
  }
  switch(left_s1->type){
  case A::A_type:
    {
    A*  _left_s1 = (A* )  left_s1;

    switch(right_s2->type){
    case A::A_type:
        {
        A*  _right_s2 = (A* )  right_s2;

      _out = ((_left_s1->x) == (_right_s2->x)) && ((_left_s1->y) == (_right_s2->y));
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }
  case B::B_type:
    {
    B*  _left_s1 = (B* )  left_s1;

    switch(right_s2->type){
    case B::B_type:
        {
        B*  _right_s2 = (B* )  right_s2;

      _out = (_left_s1->inf) == (_right_s2->inf);
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }

 }
}

}
