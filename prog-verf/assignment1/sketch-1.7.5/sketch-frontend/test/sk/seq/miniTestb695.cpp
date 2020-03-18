#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb695.h"
namespace ANONYMOUS{

circle* circle::create(int  x_){
  void* temp= malloc( sizeof(circle)  ); 
  circle* rv = new (temp)circle();
  rv->x =  x_;
  rv->type= shape::CIRCLE_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  shape*  t_s1=NULL;
  sh1(t_s1);
  assert ((((circle*)(t_s1))->x) == (11));;
}
void sh1(shape*& _out) {
  circle*  c=NULL;
  c = circle::create(11);
  assert ((c->x) > (10));;
  _out = c;
  return;
}

}
