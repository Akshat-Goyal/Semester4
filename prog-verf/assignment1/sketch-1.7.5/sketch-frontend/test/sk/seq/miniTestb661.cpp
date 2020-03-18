#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb661.h"
namespace ANONYMOUS{

A* A::create(int  x_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  return rv;
}
void main__Wrapper(bool t) {
  _main(t);
}
void main__WrapperNospec(bool t) {}
void _main(bool t) {
  A*  a1=A::create(2);
  A*  a2=A::create(2);
  int  x=(t ? 0 : 1);
  void * _tt0[2] = {NULL, NULL};
  A**  arr= new A* [2]; CopyArr<A* >(arr,_tt0, 2, 2);
  (arr[x]) = a1;
  (arr[1 - x]) = a2;
  assert (((arr[0])->x) == (2));;
  delete[] arr;
}

}
