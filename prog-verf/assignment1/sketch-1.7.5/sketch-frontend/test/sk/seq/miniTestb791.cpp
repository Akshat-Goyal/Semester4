#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb791.h"
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
  Opr*  op=C::create();
  int  x_s1=0;
  switch(op->type){
  case A::A_type:
    {
    A*  _op = (A* )  op;

    x_s1 = 0;
  
    break;
  }
  case B::B_type:
    {
    B*  _op = (B* )  op;

    Opr*  op_0=A::create();
    switch(op_0->type){
    case A::A_type:
        {
        A*  _op_0 = (A* )  op_0;

    
        break;
    }
    case B::B_type:
        {
        B*  _op_0 = (B* )  op_0;

      assert (0);;
    
        break;
    }
    case C::C_type:
        {
        C*  _op_0 = (C* )  op_0;

      assert (0);;
    
        break;
    }

 }
    x_s1 = 1;
  
    break;
  }
  case C::C_type:
    {
    C*  _op = (C* )  op;

    Opr*  op_1=A::create();
    switch(op_1->type){
    case A::A_type:
        {
        A*  _op_1 = (A* )  op_1;

    
        break;
    }
    case B::B_type:
        {
        B*  _op_1 = (B* )  op_1;

      assert (0);;
    
        break;
    }
    case C::C_type:
        {
        C*  _op_1 = (C* )  op_1;

      assert (0);;
    
        break;
    }

 }
    x_s1 = 2;
  
    break;
  }

 }
  assert ((x_s1) == (2));;
}

}
