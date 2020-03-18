#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb634.h"
namespace ANONYMOUS{

A* A::create(bool  x_){
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
  A*  a=A::create(t);
  bool _tt0[1] = {a->x};
  int*  arr= new int [3]; CopyArr<int >(arr,_tt0, 3, 1);
  assert (((arr[0])) == (t));;
  delete[] arr;
}

}
