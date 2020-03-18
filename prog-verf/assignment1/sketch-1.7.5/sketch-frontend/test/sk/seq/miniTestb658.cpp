#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb658.h"
namespace ANONYMOUS{

A* A::create(int  x_, A*  nxt_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  rv->nxt =  nxt_;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  A*  a=A::create(0, A::create(0, NULL));
  A*  b=a->nxt;
  assert ((b->x) != (1));;
}

}
