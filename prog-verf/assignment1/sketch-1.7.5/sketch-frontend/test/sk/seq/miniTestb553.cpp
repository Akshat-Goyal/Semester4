#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb553.h"
namespace ANONYMOUS{

ff* ff::create(int  x_){
  void* temp= malloc( sizeof(ff)  ); 
  ff* rv = new (temp)ff();
  rv->x =  x_;
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  ff*  u=ff::create(i);
  if ((u->x) > ((2 + i))) {
    int  _out_s1=0;
    rand(_out_s1);
    outpp(_out_s1);
  }
  return;
}
void rand(int& _out) {
  _out = 1;
  return;
}
void outpp(int i) {}

}
