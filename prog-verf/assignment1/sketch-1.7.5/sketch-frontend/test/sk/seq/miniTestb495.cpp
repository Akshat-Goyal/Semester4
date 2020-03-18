#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb495.h"
namespace ANONYMOUS{

Bar* Bar::create(int  x_){
  void* temp= malloc( sizeof(Bar)  ); 
  Bar* rv = new (temp)Bar();
  rv->x =  x_;
  return rv;
}
void main__Wrapper(int t) {
  int  gt__ANONYMOUS_s2=0;
  _main(t, gt__ANONYMOUS_s2);
}
void main__WrapperNospec(int t) {}
void _main(int t, int& gt__ANONYMOUS_s1) {
  gt__ANONYMOUS_s1 = t;
  Bar*  b=Bar::create(t);
  int  t_s13=b->x;
  moo(t_s13, b, gt__ANONYMOUS_s1);
  b->x = t_s13;
  assert ((b->x) == (t));;
}
void moo(int& t, Bar* b, int& gt__ANONYMOUS_s0) {
  int  a_s14=b->x;
  foo(a_s14, t);
  b->x = a_s14;
  assert ((b->x) == (((gt__ANONYMOUS_s0 * 2) - 3)));;
}
void foo(int& a, int b) {
  a = b - 1;
  a = (a + b) - 2;
}

}
