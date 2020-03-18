#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb692.h"
namespace ANONYMOUS{

Some* Some::create(int  x_){
  void* temp= malloc( sizeof(Some)  ); 
  Some* rv = new (temp)Some();
  rv->x =  x_;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  bool _tt0[5] = {0, 0, 0, 0, 0};
  int*  x_s1= new int [5]; CopyArr<int >(x_s1,_tt0, 5, 5);
  nc(7, 5, x_s1);
  void * _tt1[2] = {NULL, NULL};
  Some**  y_s3= new Some* [2]; CopyArr<Some* >(y_s3,_tt1, 2, 2);
  nc(Some::create(3), 2, y_s3);
  assert (((y_s3[1])->x) == (3));;
  assert (((x_s1[3])) == (7));;
  delete[] x_s1;
  delete[] y_s3;
}
template<typename T>
void nc(T x, int n, T* _out/* len = n */) {
  CopyArr<T >(_out,NULL, n);
  for (int  i=0;(i) < (n);i = i + 1){
    (_out[i]) = x;
  }
  return;
}

}
