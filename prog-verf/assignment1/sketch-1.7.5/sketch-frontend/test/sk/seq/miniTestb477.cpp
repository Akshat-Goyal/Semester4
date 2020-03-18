#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb477.h"
namespace ANONYMOUS{

template<typename T_0>
m* m::create(int  x_, T_0* y_, int y_len){
  int tlen_y = x_; 
  void* temp= malloc( sizeof(m)   + sizeof(int )*tlen_y); 
  m* rv = new (temp)m();
  rv->x =  x_;
  CopyArr(rv->y, y_, tlen_y, y_len ); 
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  m*  mm=m::create(i, (int*)NULL, 0);
  int*  temp= new int [(mm->x + 5) - 5]; CopyArr<int >(temp,0, (mm->x + 5) - 5);
  for (int  q=0;(q) < (i);q = q + 1){
    (temp[q]) = q;
  }
  int * _tt0= new int [mm->x]; 
  CopyArr<int>(_tt0,temp, mm->x, (mm->x + 5) - 5);
  foo(mm, _tt0);
  int * _tt1= new int [mm->x]; 
  CopyArr<int>(_tt1,temp, mm->x, (mm->x + 5) - 5);
  foo(mm, _tt1);
  for (int  q_0=0;(q_0) < (i);q_0 = q_0 + 1){
    assert (((mm->y[q_0])) == ((2 * q_0)));;
  }
  delete[] temp;
  delete[] _tt0;
  delete[] _tt1;
}
void foo(m* mm, int* t/* len = mm->x */) {
  bool  __sa0=(0) < (mm->x);
  int  i=0;
  while (__sa0) {
    (mm->y[i]) = (mm->y[i]) + (t[i]);
    i = i + 1;
    __sa0 = (i) < (mm->x);
  }
}

}
