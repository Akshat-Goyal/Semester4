#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb663.h"
namespace ANONYMOUS{

A* A::create(int  x_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {}

}
