#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb538.h"
namespace ANONYMOUS{

template<typename T_0>
Buf* Buf::create(int  x_, T_0* m_, int m_len){
  int tlen_m = 33; 
  void* temp= malloc( sizeof(Buf)   + sizeof(int )*tlen_m); 
  Buf* rv = new (temp)Buf();
  rv->x =  x_;
  CopyArr(rv->m, m_, tlen_m, m_len ); 
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  Buf*  p2=Buf::create(3, (int*)NULL, 0);
  int  p_x_s2_s16=p2->x;
  int*  p_m_s3_s17= new int [33]; CopyArr<int >(p_m_s3_s17,p2->m, 33, 33);
  foo(p_x_s2_s16, p_m_s3_s17);
  p2->x = p_x_s2_s16;
  CopyArr<int >(p2->m,p_m_s3_s17, 33, 33);
  bool  __sa1=(0) < (p2->x);
  int  i=0;
  while (__sa1) {
    assert (((p2->m[i])) == (i));;
    i = i + 1;
    __sa1 = (i) < (p2->x);
  }
}
void foo(int& p_x_s2, int* p_m_s3/* len = 33 */) {
  bool  __sa0=(0) < (p_x_s2);
  int  i=0;
  while (__sa0) {
    assert ((i) <= (33));;
    (p_m_s3[i]) = i;
    i = i + 1;
    __sa0 = (i) < (p_x_s2);
  }
}

}
