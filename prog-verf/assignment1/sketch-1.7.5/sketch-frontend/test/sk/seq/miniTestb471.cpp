#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb471.h"
namespace ANONYMOUS{

A* A::create(int  x_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  return rv;
}
B* B::create(int  x_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->x =  x_;
  return rv;
}
C* C::create(int  x_){
  void* temp= malloc( sizeof(C)  ); 
  C* rv = new (temp)C();
  rv->x =  x_;
  return rv;
}
D* D::create(int  x_, C*  c_){
  void* temp= malloc( sizeof(D)  ); 
  D* rv = new (temp)D();
  rv->x =  x_;
  rv->c =  c_;
  return rv;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  f();
  g();
  p();
}
void f() {
  k();
}
void g() {
  h();
}
void p() {
  D*  d_s1=NULL;
  q(d_s1);
  r(d_s1);
  assert ((d_s1->c->x) == (22));;
}
void k() {
  int  c_s5=0;
  m(c_s5);
  C*  c=NULL;
  c = C::create(c_s5);
  assert ((c->x) > (3));;
}
void h() {
  int  b_s3=0;
  m(b_s3);
  B*  b=NULL;
  b = B::create(b_s3);
  assert ((b->x) < (5));;
}
void q(D*& _out) {
  _out = D::create(0, C::create(0));
  return;
}
void r(D* d) {
  d->c->x = 22;
}
void m(int& _out) {
  D*  d=D::create(4, NULL);
  _out = d->x;
  return;
}

}
