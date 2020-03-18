#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb654.h"
namespace ANONYMOUS{

A* A::create(parent*  nxt_, int  x_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->nxt =  nxt_;
  rv->x =  x_;
  rv->type= parent::A_type;
  return rv;
}
B* B::create(int  x_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->x =  x_;
  rv->type= parent::B_type;
  return rv;
}
void main__Wrapper(int x, bool cond) {
  _main(x, cond);
}
void main__WrapperNospec(int x, bool cond) {}
void _main(int x, bool cond) {
  B*  b=B::create(1);
  B*  b_cpy=B::create(1);
  A*  a=A::create(b, 2);
  A*  a_cpy=A::create(b_cpy, 3);
  A*  a_final=NULL;
  if (cond) {
    a_final = a;
  } else {
    a_final = a_cpy;
  }
  parent*  p=a_final->nxt;
  assert ((p->x) == (1));;
}

}
