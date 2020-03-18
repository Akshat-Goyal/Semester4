#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb569.h"
namespace ANONYMOUS{

template<typename T_0, typename T_1, typename T_2>
Foo* Foo::create(int  n_, T_0* a_, int a_len, int  m_, T_1* b_, int b_len, Moo*  c_, T_2* d_, int d_len){
  int tlen_a = n_; 
  int tlen_b = m_; 
  int tlen_d = c_->sz; 
  void* temp= malloc( sizeof(Foo)   + sizeof(Moo* )*tlen_a + sizeof(Moo* )*tlen_b + sizeof(int )*tlen_d); 
  Foo* rv = new (temp)Foo();
  rv->n =  n_;
  rv->m =  m_;
  rv->c =  c_;
  rv->a= (Moo** ) (((char*)&(rv->d))   + sizeof(int )*tlen_d); 
  CopyArr(rv->a, a_, tlen_a, a_len ); 
  rv->b= (Moo** ) (((char*)&(rv->d))   + sizeof(int )*tlen_d + sizeof(Moo* )*tlen_a); 
  CopyArr(rv->b, b_, tlen_b, b_len ); 
  CopyArr(rv->d, d_, tlen_d, d_len ); 
  return rv;
}
template<typename T_0, typename T_1>
Moo* Moo::create(int  sz_, T_0* x_, int x_len, T_1* y_, int y_len){
  int tlen_x = sz_; 
  int tlen_y = sz_ * 3; 
  void* temp= malloc( sizeof(Moo)   + sizeof(int )*tlen_x + sizeof(int )*tlen_y); 
  Moo* rv = new (temp)Moo();
  rv->sz =  sz_;
  rv->x= (int* ) (((char*)&(rv->y))   + sizeof(int )*tlen_y); 
  CopyArr(rv->x, x_, tlen_x, x_len ); 
  CopyArr(rv->y, y_, tlen_y, y_len ); 
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  bool _tt0[3] = {0, 0, 0};
  int*  __sa3= new int [4 * 3]; CopyArr<int >(__sa3,_tt0, 4 * 3, 3);
  int _tt1[4] = {1, 2, 3, 4};
  CopyArr<int >((__sa3+ 0),_tt1, 4, 4);
  int _tt2[4] = {11, 12, 13, 14};
  CopyArr<int >((__sa3+ 4),_tt2, 4, 4);
  int _tt3[4] = {21, 22, 23, 24};
  CopyArr<int >((__sa3+ 8),_tt3, 4, 4);
  int _tt4[3] = {1, 2, 4};
  Moo*  m1=Moo::create(4, _tt4, 3, __sa3, 4 * 3);
  Foo*  f=Foo::create(i, (Moo**)NULL, 0, 7, (Moo**)NULL, 0, m1, (int*)NULL, 0);
  CopyArr<int >(f->d,m1->x, f->c->sz, m1->sz);
  for (int  t=0;(t) < (i);t = t + 1){
    (f->a[t]) = m1;
  }
  bool  __sa0=(0) < (f->m);
  int  t_0=0;
  while (__sa0) {
    bool _tt5[3] = {0, 0, 0};
    int*  __sa4= new int [4 * 3]; CopyArr<int >(__sa4,_tt5, 4 * 3, 3);
    int _tt6[4] = {1, 2, 3, 4};
    CopyArr<int >((__sa4+ 0),_tt6, 4, 4);
    int _tt7[4] = {11, 12, 13, 14};
    CopyArr<int >((__sa4+ 4),_tt7, 4, 4);
    int _tt8[4] = {21, 22, 23, 24};
    CopyArr<int >((__sa4+ 8),_tt8, 4, 4);
    int _tt9[3] = {t_0, t_0 * 2, t_0 * 4};
    (f->b[t_0]) = Moo::create(4, _tt9, 3, __sa4, 4 * 3);
    t_0 = t_0 + 1;
    __sa0 = (t_0) < (f->m);
    delete[] __sa4;
  }
  bool  __sa1=(0) < (f->n);
  int  t_1=0;
  while (__sa1) {
    assert (((f->a[t_1])) == (m1));;
    t_1 = t_1 + 1;
    __sa1 = (t_1) < (f->n);
  }
  bool  __sa2=(0) < (f->m);
  int  t_2=0;
  while (__sa2) {
    assert ((((f->b[t_2])->x[0])) == (t_2));;
    assert ((((f->b[t_2])->x[2])) == ((t_2 * 4)));;
    t_2 = t_2 + 1;
    __sa2 = (t_2) < (f->m);
  }
}

}
