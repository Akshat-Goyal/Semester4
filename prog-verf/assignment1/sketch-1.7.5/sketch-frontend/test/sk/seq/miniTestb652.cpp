#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb652.h"
namespace ANONYMOUS{

A* A::create(int  x_, B*  b_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  rv->b =  b_;
  return rv;
}
B* B::create(int  x_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->x =  x_;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  A*  a_s1=NULL;
  produce(2, 1, a_s1);
  bool  _out_s3=0;
  check(a_s1, _out_s3);
  assert (_out_s3);;
}
void produce(int x, bool t, A*& _out) {
  if (t) {
    B*  b=B::create(2);
    _out = A::create(x, b);
    return;
  } else {
    _out = NULL;
    return;
  }
}
void check(A* a, bool& _out) {
  B*  b=NULL;
  b = a->b;
  _out = ((a->x) == (2)) && ((b->x) == (2));
  return;
}

}
