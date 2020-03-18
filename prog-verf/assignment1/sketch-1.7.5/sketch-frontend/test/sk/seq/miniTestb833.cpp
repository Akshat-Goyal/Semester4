#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb833.h"
namespace ANONYMOUS{

foo* foo::create(int  x_){
  void* temp= malloc( sizeof(foo)  ); 
  foo* rv = new (temp)foo();
  rv->x =  x_;
  return rv;
}
template<typename T_0>
moo* moo::create(T_0* t_, int t_len){
  int tlen_t = 5; 
  void* temp= malloc( sizeof(moo)   + sizeof(foo* )*tlen_t); 
  moo* rv = new (temp)moo();
  CopyArr(rv->t, t_, tlen_t, t_len ); 
  return rv;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  void * _tt0[5] = {NULL, NULL, NULL, NULL, NULL};
  foo**  m_t_s2= new foo* [5]; CopyArr<foo* >(m_t_s2,_tt0, 5, 5);
  (m_t_s2[0]) = foo::create(0);
  (m_t_s2[0])->x = 7;
  foo*  _out_s1=NULL;
  foo* * _tt1= new foo* [5]; 
  CopyArr<foo*>(_tt1,(m_t_s2+ 0), 5, 5);
  getFirst(5, _tt1, _out_s1);
  assert ((_out_s1->x) == (7));;
  delete[] m_t_s2;
  delete[] _tt1;
}
template<typename T>
void getFirst(int n, T* x/* len = n */, T& _out) {
  _out = (x[0]);
  return;
}

}
