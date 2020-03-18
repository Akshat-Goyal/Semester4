#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb707.h"
namespace ANONYMOUS{

template<typename T_0>
A* A::create(int  x_, A*  nxt_, T_0* y_, int y_len){
  int tlen_y = 5; 
  void* temp= malloc( sizeof(A)   + sizeof(int )*tlen_y); 
  A* rv = new (temp)A();
  rv->x =  x_;
  rv->nxt =  nxt_;
  CopyArr(rv->y, y_, tlen_y, y_len ); 
  return rv;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {}

}
