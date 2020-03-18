#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb669.h"
namespace YY{

template<typename T_0>
B* B::create(int  m_, T_0* x_, int x_len){
  int tlen_x = m_; 
  void* temp= malloc( sizeof(B)   + sizeof(int )*tlen_x); 
  B* rv = new (temp)B();
  rv->m =  m_;
  CopyArr(rv->x, x_, tlen_x, x_len ); 
  rv->type= A::B_type;
  return rv;
}
template<typename T_0>
C* C::create(int  m_, T_0* t_, int t_len){
  int tlen_t = m_; 
  void* temp= malloc( sizeof(C)   + sizeof(int )*tlen_t); 
  C* rv = new (temp)C();
  rv->m =  m_;
  CopyArr(rv->t, t_, tlen_t, t_len ); 
  rv->type= A::C_type;
  return rv;
}
void main__Wrapper(int n) {
  _main(n);
}
void main__WrapperNospec(int n) {}
void _main(int n) {
  int _tt0[7] = {0, 0, 0, 0, 0, 2, 0};
  A*  a=B::create(7, _tt0, 7);
  int _tt1[7] = {0, 0, 0, 0, 0, 2, 0};
  A*  c=C::create(7, _tt1, 7);
  assert (arrCompare(((C*)(c))->t, ((C*)(c))->m, ((B*)(a))->x, ((B*)(a))->m) && ((((C*)(c))->m) == (((B*)(a))->m)));;
}

}
namespace XX{

template<typename T_0>
B* B::create(T_0* x_, int x_len, int  n_){
  int tlen_x = n_; 
  void* temp= malloc( sizeof(B)   + sizeof(int )*tlen_x); 
  B* rv = new (temp)B();
  rv->n =  n_;
  CopyArr(rv->x, x_, tlen_x, x_len ); 
  rv->type= A::B_type;
  return rv;
}
template<typename T_0>
C* C::create(T_0* y_, int y_len, int  n_){
  int tlen_y = n_; 
  void* temp= malloc( sizeof(C)   + sizeof(int )*tlen_y); 
  C* rv = new (temp)C();
  rv->n =  n_;
  CopyArr(rv->y, y_, tlen_y, y_len ); 
  rv->type= A::C_type;
  return rv;
}
void main__Wrapper(int n) {
  _main(n);
}
void main__WrapperNospec(int n) {}
void _main(int n) {
  bool _tt2[3] = {0, 0, 0};
  int * _tt3= new int [3]; 
  CopyArr<int>(_tt3,_tt2, 3, 3);
  foo(_tt3);
  bool _tt4[7] = {0, 0, 0, 0, 0, 0, 0};
  A*  a=B::create(_tt4, 7, 7);
  bool _tt5[3] = {0, 0, 1};
  A*  q=B::create(_tt5, 3, 7);
  bool _tt6[7] = {0, 0, 0, 0, 0, 0, 0};
  A*  c=C::create(_tt6, 7, 7);
  moo(q);
  assert (arrCompare(((C*)(c))->y, ((C*)(c))->n, ((B*)(a))->x, ((B*)(a))->n) && ((((C*)(c))->n) == (((B*)(a))->n)));;
  delete[] _tt3;
}
void foo(int* x/* len = 3 */) {}
void moo(A* a) {}

}
namespace ANONYMOUS{


}
