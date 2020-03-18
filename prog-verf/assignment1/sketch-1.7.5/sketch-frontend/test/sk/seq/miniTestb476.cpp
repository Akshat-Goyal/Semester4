#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb476.h"
namespace ANONYMOUS{

template<typename T_0>
foo* foo::create(int  x_, T_0* y_, int y_len){
  int tlen_y = 3; 
  void* temp= malloc( sizeof(foo)   + sizeof(int )*tlen_y); 
  foo* rv = new (temp)foo();
  rv->x =  x_;
  CopyArr(rv->y, y_, tlen_y, y_len ); 
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  foo*  f=NULL;
  int _tt0[1] = {i};
  f = foo::create(i, _tt0, 1);
  f->x = f->x - 2;
  assert ((f->x) == ((i - 2)));;
  (f->y[0]) = (f->y[0]) * 3;
  assert (((f->y[0])) == ((i * 3)));;
}

}
