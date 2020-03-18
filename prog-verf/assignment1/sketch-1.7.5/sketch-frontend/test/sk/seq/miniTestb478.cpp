#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb478.h"
namespace ANONYMOUS{

template<typename T_0>
M* M::create(int  x_, T_0* y_, int y_len){
  int tlen_y = x_; 
  void* temp= malloc( sizeof(M)   + sizeof(int )*tlen_y); 
  M* rv = new (temp)M();
  rv->x =  x_;
  CopyArr(rv->y, y_, tlen_y, y_len ); 
  return rv;
}
template<typename T_0>
P* P::create(int  x_, T_0* y_, int y_len){
  int tlen_y = x_; 
  void* temp= malloc( sizeof(P)   + sizeof(double )*tlen_y); 
  P* rv = new (temp)P();
  rv->x =  x_;
  CopyArr(rv->y, y_, tlen_y, y_len ); 
  return rv;
}
void main__Wrapper(int n) {
  _main(n);
}
void main__WrapperNospec(int n) {}
void _main(int n) {
  M*  m=M::create(n, (int*)NULL, 0);
  int*  tt= new int [n]; CopyArr<int >(tt,0, n);
  int * _tt0= new int [m->x]; 
  CopyArr<int>(_tt0,tt, m->x, n);
  foo(m, _tt0);
  for (int  i=0;(i) < (n);i = i + 1){
    assert (((m->y[i])) == (0));;
  }
  int * _tt1= new int [m->x]; 
  CopyArr<int>(_tt1,0, m->x);
  foo(m, _tt1);
  for (int  i_0=0;(i_0) < (n);i_0 = i_0 + 1){
    assert (((m->y[i_0])) == (0));;
  }
  P*  p=P::create(n, (double*)NULL, 0);
  double * _tt2= new double [p->x]; 
  CopyArr<double>(_tt2,0.0f, p->x);
  fooP(p, _tt2);
  for (int  i_1=0;(i_1) < (n);i_1 = i_1 + 1){
    assert ((fabs((p->y[i_1])-(0.0f)) < 0.0001));;
  }
  double*  __sa3= new double [3 * p->x]; CopyArr<double >(__sa3,0.0f, 3 * p->x);
  for (int  __sa4=0;(__sa4) < (p->x);__sa4 = __sa4 + 1){
    assert (((__sa4) >= (0)) && ((__sa4) < (p->x)));;
    CopyArr<double >((__sa3+ 3 * __sa4),0.0f, 3);
  }
  fooP3(p, __sa3);
  for (int  i_2=0;(i_2) < (n);i_2 = i_2 + 1){
    assert ((fabs((p->y[i_2])-(0.0f)) < 0.0001));;
  }
  delete[] tt;
  delete[] _tt0;
  delete[] _tt1;
  delete[] _tt2;
  delete[] __sa3;
}
void foo(M* m, int* test/* len = m->x */) {
  bool  __sa0=(0) < (m->x);
  int  i=0;
  while (__sa0) {
    (m->y[i]) = (m->y[i]) + (test[i]);
    i = i + 1;
    __sa0 = (i) < (m->x);
  }
}
void fooP(P* m, double* test/* len = m->x */) {
  bool  __sa1=(0) < (m->x);
  int  i=0;
  while (__sa1) {
    (m->y[i]) = (m->y[i]) + (test[i]);
    i = i + 1;
    __sa1 = (i) < (m->x);
  }
}
void fooP3(P* m, double* test/* len = 3 * m->x */) {
  bool  __sa2=(0) < (m->x);
  int  i=0;
  while (__sa2) {
    assert (((i) >= (0)) && ((i) < (m->x)));;
    assert ((((i % 3)) >= (0)) && (((i % 3)) < (3)));;
    (m->y[i]) = (m->y[i]) + (test[((3 * i) + (i % 3))]);
    i = i + 1;
    __sa2 = (i) < (m->x);
  }
}

}
