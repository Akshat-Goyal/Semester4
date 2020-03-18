#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb642.h"
namespace ANONYMOUS{

A* A::create(base*  x_, base*  y_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  rv->y =  y_;
  rv->type= base::A_type;
  return rv;
}
B* B::create(base*  a_, base*  b_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->a =  a_;
  rv->b =  b_;
  rv->type= base::B_type;
  return rv;
}
D* D::create(base*  a_, base*  b_){
  void* temp= malloc( sizeof(D)  ); 
  D* rv = new (temp)D();
  rv->a =  a_;
  rv->b =  b_;
  rv->type= base::D_type;
  return rv;
}
C* C::create(){
  void* temp= malloc( sizeof(C)  ); 
  C* rv = new (temp)C();
  rv->type= base::C_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  base*  _out_s1=NULL;
  mc(_out_s1);
  base*  _out_s3=NULL;
  mc(_out_s3);
  base*  _out_s5=NULL;
  mb(_out_s1, _out_s3, _out_s5);
  base*  _out_s7=NULL;
  mc(_out_s7);
  base*  _out_s9=NULL;
  ma(_out_s5, _out_s7, _out_s9);
  base*  _out_s11=NULL;
  mc(_out_s11);
  base*  _out_s13=NULL;
  ma(_out_s9, _out_s11, _out_s13);
  base*  _out_s15=NULL;
  mc(_out_s15);
  base*  _out_s17=NULL;
  mc(_out_s17);
  base*  _out_s19=NULL;
  mc(_out_s19);
  base*  _out_s21=NULL;
  mb(_out_s17, _out_s19, _out_s21);
  base*  _out_s23=NULL;
  ma(_out_s15, _out_s21, _out_s23);
  base*  _out_s25=NULL;
  ma(_out_s13, _out_s23, _out_s25);
  int  _out_s27=0;
  visit(_out_s25, _out_s27);
  assert ((_out_s27) == (3));;
}
void mc(base*& _out) {
  _out = C::create();
  return;
}
void mb(base* x, base* y, base*& _out) {
  _out = B::create(x, y);
  return;
}
void ma(base* x, base* y, base*& _out) {
  _out = A::create(x, y);
  return;
}
void visit(base* b, int& _out) {
  switch(b->type){
  case A::A_type:
    {
    A*  _b = (A* )  b;

    int  _out_s29=0;
    visit(_b->x, _out_s29);
    int  _out_s31=0;
    visit(_b->y, _out_s31);
    _out = _out_s29 + _out_s31;
    return;
  
    break;
  }
  case B::B_type:
    {
    B*  _b = (B* )  b;

    int  _out_s33=0;
    visit(_b->a, _out_s33);
    int  _out_s35=0;
    visit(_b->b, _out_s35);
    _out = _out_s33 - _out_s35;
    return;
  
    break;
  }
  case D::D_type:
    {
    D*  _b = (D* )  b;

    int  _out_s37=0;
    visit(_b->a, _out_s37);
    int  _out_s39=0;
    visit(_b->b, _out_s39);
    int  _out_s41=0;
    visit(_b->a, _out_s41);
    int  _out_s43=0;
    visit(_b->b, _out_s43);
    _out = _out_s37 - (_out_s39 / (_out_s41 * _out_s43));
    return;
  
    break;
  }
  case C::C_type:
    {
    C*  _b = (C* )  b;

    _out = 1;
    return;
  
    break;
  }

 }
}

}
