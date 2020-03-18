#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb621.h"
namespace ANONYMOUS{

A* A::create(int  x_, int  y_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  rv->y =  y_;
  rv->type= T::A_type;
  return rv;
}
B* B::create(int  a_, int  b_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->a =  a_;
  rv->b =  b_;
  rv->type= T::B_type;
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  int _tt0[4] = {i, 1, -2, 3};
  int*  q= new int [5]; CopyArr<int >(q,_tt0, 5, 4);
  T*  t=A::create(i, i + 1);
  int  v=0;
  switch(t->type){
  case A::A_type:
    {
    A*  _t = (A* )  t;

    v = (q[4]);
  
    break;
  }
  case B::B_type:
    {
    B*  _t = (B* )  t;

    v = (q[0]);
  
    break;
  }

 }
  assert ((v) == (0));;
  if ((i) == (7)) {
    t = A::create(7, 0);
  } else {
    t = B::create(i, 0);
  }
  switch(t->type){
  case A::A_type:
    {
    A*  _t = (A* )  t;

    v = _t->x;
  
    break;
  }
  case B::B_type:
    {
    B*  _t = (B* )  t;

    v = _t->a;
  
    break;
  }

 }
  assert ((v) == (i));;
}

}
