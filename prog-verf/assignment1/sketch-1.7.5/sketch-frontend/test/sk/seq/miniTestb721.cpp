#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb721.h"
namespace ANONYMOUS{

template<typename T_0>
moo* moo::create(T_0* mama_, int mama_len){
  int tlen_mama = 10; 
  void* temp= malloc( sizeof(moo)   + sizeof(moo* )*tlen_mama); 
  moo* rv = new (temp)moo();
  CopyArr(rv->mama, mama_, tlen_mama, mama_len ); 
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i_0) {
  int  i=i_0;
  if ((i_0) > (8)) {
    i = 8;
  }
  moo*  m=NULL;
  m = moo::create((moo**)NULL, 0);
  moo*  t=moo::create((moo**)NULL, 0);
  (m->mama[0]) = t;
  (m->mama[1]) = t;
  (m->mama[2]) = t;
  assert (((m->mama[(((20 + i) % 5) + 3)])) == (NULL));;
}

}
