#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb790.h"
namespace ANONYMOUS{

A* A::create(){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->type= Opr::A_type;
  return rv;
}
B* B::create(){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->type= Opr::B_type;
  return rv;
}
C* C::create(){
  void* temp= malloc( sizeof(C)  ); 
  C* rv = new (temp)C();
  rv->type= Opr::C_type;
  return rv;
}
void f__Wrapper() {
  f();
}
void f__WrapperNospec() {}
void f() {
  Opr*  op=B::create();
  int  x=0;
  switch(op->type){
  case A::A_type:
    {
    A*  _op = (A* )  op;

    x = 1;
  
    break;
  }
  case B::B_type:
    {
    B*  _op = (B* )  op;

  
    break;
  }
  case C::C_type:
    {
    C*  _op = (C* )  op;

    x = 1;
  
    break;
  }

 }
  assert ((x) == (0));;
}

}
