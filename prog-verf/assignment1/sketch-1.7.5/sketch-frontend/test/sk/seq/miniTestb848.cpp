#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb848.h"
namespace A{

A* A::create(int  v_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->v =  v_;
  return rv;
}
void qq_F2(int t) {
  B::A*  _out_s4=NULL;
  B::F2(A::create(t), _out_s4);
  assert ((_out_s4->x) == (t));;
}
void tt_U1(int t) {
  A*  x=A::create(t);
  int  _out_s2=B::A::create(0, x->v)->y;
  assert ((_out_s2) == (t));;
}

}
namespace ANONYMOUS{


}
namespace B{

A* A::create(int  x_, int  y_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  rv->y =  y_;
  return rv;
}
void uu__Wrapper(int y) {
  uu(y);
}
void uu__WrapperNospec(int y) {}
void uu(int y) {
  A::qq_F2(y);
  A::tt_U1(y);
}
void F2(A::A* t, A*& _out) {
  _out = A::create(t->v, 0);
  return;
}

}
