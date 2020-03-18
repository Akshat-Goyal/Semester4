#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb829.h"
namespace ANONYMOUS{

Num* Num::create(int  n_){
  void* temp= malloc( sizeof(Num)  ); 
  Num* rv = new (temp)Num();
  rv->n =  n_;
  rv->type= Exp::NUM_type;
  return rv;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  Exp*  e1=Num::create(x + 4);
  Exp*  e2=Num::create(x + 4);
  Exp*  e3=Num::create(x + 4);
  bool  _out_s1=(((Num*)(e2))->n) < (((Num*)(e1))->n);
  assert (!(_out_s1));;
  bool  _out_s3=(((Num*)(e3))->n) < (((Num*)(e2))->n);
  assert (!(_out_s3));;
  bool  _out_s5=(((Num*)(e1))->n) < (((Num*)(e3))->n);
  assert (!(_out_s5));;
}

}
