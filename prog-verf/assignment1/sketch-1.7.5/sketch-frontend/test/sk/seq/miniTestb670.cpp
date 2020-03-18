#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb670.h"
namespace XX{

B* B::create(int  x_, int  y_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->x =  x_;
  rv->y =  y_;
  rv->type= A::B_type;
  return rv;
}
C* C::create(int  x_, int  y_){
  void* temp= malloc( sizeof(C)  ); 
  C* rv = new (temp)C();
  rv->x =  x_;
  rv->y =  y_;
  rv->type= A::C_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {}

}
namespace YY{

A* A::create(){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  XX::A*  a=XX::B::create(5, 7);
  switch(a->type){
  case XX::B::B_type:
    {
    XX::B*  _a = (XX::B* )  a;

  
    break;
  }
  case XX::C::C_type:
    {
    XX::C*  _a = (XX::C* )  a;

    assert (0);;
  
    break;
  }

 }
  ppprint(7);
}
void ppprint(int x) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 

}

}
namespace ANONYMOUS{


}
