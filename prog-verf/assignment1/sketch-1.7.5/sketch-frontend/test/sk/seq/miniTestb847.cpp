#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb847.h"
namespace A{

A* A::create(int  v_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->v =  v_;
  return rv;
}
void tt_U1(int t) {
  A*  x=A::create(t);
  int  _out_s2=x->v;
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
  A::tt_U1(y);
}

}
