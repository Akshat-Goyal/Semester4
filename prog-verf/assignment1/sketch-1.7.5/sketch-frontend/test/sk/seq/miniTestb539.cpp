#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb539.h"
namespace a{

A* A::create(int  z_, c::A*  a_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->z =  z_;
  rv->a =  a_;
  return rv;
}
void foo(A* a, c::A*& _out) {
  _out = c::A::create(a->z, NULL);
  return;
}

}
namespace b{

A* A::create(int  y_, a::A*  a_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->y =  y_;
  rv->a =  a_;
  return rv;
}
void foo(A** a/* len = 1 */, A*& _out) {
  _out = (a[0]);
  return;
}

}
namespace c{

A* A::create(int  x_, b::A*  a_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  rv->a =  a_;
  return rv;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  b::A*  ab_s1=NULL;
  b::A* _tt0[1] = {b::A::create(x, NULL)};
  b::foo(_tt0, ab_s1);
  ab_s1->a = a::A::create(ab_s1->y, NULL);
  A*  ra_s3=NULL;
  a::foo(ab_s1->a, ra_s3);
  A*  ra_s5=NULL;
  foo(ra_s3, ra_s5);
  assert ((ra_s5->x) == (x));;
}
void foo(A* a, A*& _out) {
  _out = a;
  return;
}

}
