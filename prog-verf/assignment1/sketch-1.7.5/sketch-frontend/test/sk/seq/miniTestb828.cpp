#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb828.h"
namespace ANONYMOUS{

Plus* Plus::create(AST*  x_, AST*  y_){
  void* temp= malloc( sizeof(Plus)  ); 
  Plus* rv = new (temp)Plus();
  rv->x =  x_;
  rv->y =  y_;
  rv->type= AST::PLUS_type;
  return rv;
}
Minus* Minus::create(AST*  x_, AST*  y_){
  void* temp= malloc( sizeof(Minus)  ); 
  Minus* rv = new (temp)Minus();
  rv->x =  x_;
  rv->y =  y_;
  rv->type= AST::MINUS_type;
  return rv;
}
Num* Num::create(int  x_){
  void* temp= malloc( sizeof(Num)  ); 
  Num* rv = new (temp)Num();
  rv->x =  x_;
  rv->type= AST::NUM_type;
  return rv;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x_0) {
  AST*  _out_s1=Num::create(x_0);
  AST*  _out_s3=Num::create(4);
  AST*  _out_s5=Num::create(2);
  AST*  _out_s7=Minus::create(_out_s3, _out_s5);
  AST*  _out_s9=Plus::create(_out_s1, _out_s7);
  int  x_s11=0;
  Plus*  _out_s9_12_12=((Plus*)(_out_s9));
  AST*  x=_out_s9_12_12->x;
  int  _out_s13=0;
  Num*  x_1c_1c=((Num*)(x));
  _out_s13 = x_1c_1c->x;
  x_s11 = _out_s13 + 2;
  assert ((x_s11) == ((x_0 + 2)));;
}

}
