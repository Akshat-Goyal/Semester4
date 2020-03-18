#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb568.h"
namespace ANONYMOUS{

Foo* Foo::create(int  x_){
  void* temp= malloc( sizeof(Foo)  ); 
  Foo* rv = new (temp)Foo();
  rv->x =  x_;
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  if ((i) == (6)) {
    return;
  }
  Foo*  f=Foo::create(i);
  Foo*  g=Foo::create(i + 1);
  if ((i) == (15)) {
    f = NULL;
  }
  if ((i) == (15)) {
    f = g;
  }
  if ((i) == (6)) {
    g = NULL;
  }
  if ((f->x) == (g->x)) {
    return;
  }
  assert (!(((f->x + 1)) != (g->x)));;
}

}
