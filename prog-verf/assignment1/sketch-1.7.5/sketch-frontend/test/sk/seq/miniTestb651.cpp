#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb651.h"
namespace ANONYMOUS{

A* A::create(int  x_, A*  nxt_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  rv->nxt =  nxt_;
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
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {}

}
