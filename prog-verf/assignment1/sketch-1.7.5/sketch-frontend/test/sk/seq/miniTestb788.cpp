#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb788.h"
namespace ANONYMOUS{

A* A::create(){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->type= Opr::A_type;
  return rv;
}
void f__Wrapper() {
  f();
}
void f__WrapperNospec() {}
void f() {}

}
