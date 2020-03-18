#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb614.h"
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
  T*  t=B::create(i + 1, i);
  int  v=0;
  switch(t->type){
  case A::A_type:
    {
    A*  _t = (A* )  t;

    v = (q[10]);
  
    break;
  }
  case B::B_type:
    {
    B*  _t = (B* )  t;

    v = (q[1]);
  
    break;
  }

 }
  assert ((v) == (1));;
  delete[] q;
}

}
