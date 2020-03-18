#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb783.h"
namespace ANONYMOUS{

A* A::create(){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->type= Foo::A_type;
  return rv;
}
B* B::create(){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->type= Foo::B_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  Foo*  f_s1=NULL;
  moo_foo1_boo2(f_s1);
  Foo*  u_s3=NULL;
  too_ttt3T_Foo_ANONYMOUS(A::create(), B::create(), u_s3);
}
void moo_foo1_boo2(Foo*& _out) {
  A*  a_s9=NULL;
  boo2(a_s9);
  _out = a_s9;
  return;
}
void too_ttt3T_Foo_ANONYMOUS(Foo* x, Foo* y, Foo*& _out) {
  Foo*  _out_s5=NULL;
  ttt3(x, y, _out_s5);
  _out = _out_s5;
  return;
}
void boo2(A*& _out) {
  _out = A::create();
  return;
}
void ttt3(Foo* x, Foo* y, Foo*& _out) {
  _out = y;
  return;
}

}
