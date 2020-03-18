#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb580.h"
namespace ANONYMOUS{

A* A::create(int  x_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  foo(i);
  A*  b=A::create(7);
  assert ((b->x) == (7));;
}
void foo(int i) {
  if ((i) > (5)) {
    return;
  }
  if ((i) == (6)) {
    A*  a=A::create(5);
    assert ((a->x) == (5));;
  }
}

}
