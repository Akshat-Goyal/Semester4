#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb584.h"
namespace ANONYMOUS{

A* A::create(int  x_, A*  nxt_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  rv->nxt =  nxt_;
  return rv;
}
void maian__Wrapper(int i) {
  maian(i);
}
void maian__WrapperNospec(int i) {}
void maian(int i) {
  if (((i) > (0)) && ((i) < (7))) {
    A*  a=NULL;
    A*  a_s1=NULL;
    foo(i, a, a_s1);
    A*  a_s3=NULL;
    foo(i + 1, a_s1, a_s3);
    A*  a_s5=NULL;
    foo(i + 2, a_s3, a_s5);
    if ((i) == (2)) {
      A*  pp=A::create(1, NULL);
      for (int  qq=0;(qq) < (5);qq = qq + 1){
        pp->x = pp->x + pp->x;
      }
      assert ((a_s5->x) == (4));;
      assert ((a_s5->nxt->x) == (3));;
      assert ((a_s5->nxt->nxt->x) == (2));;
      assert ((pp->x) == (32));;
    }
  }
}
void foo(int i, A* a, A*& _out) {
  if ((i) < (5)) {
    _out = A::create(i, a);
    return;
  }
  _out = a;
  return;
}

}
