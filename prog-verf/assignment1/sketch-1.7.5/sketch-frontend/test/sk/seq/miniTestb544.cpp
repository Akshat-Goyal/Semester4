#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb544.h"
namespace ANONYMOUS{

car* car::create(bool  x_){
  void* temp= malloc( sizeof(car)  ); 
  car* rv = new (temp)car();
  rv->x =  x_;
  return rv;
}
void sk(bool x_x_s0, int& _out) {
  _out = (x_x_s0 ? 5 : 7);
  return;
}
void spec(bool x_x_s1, int& _out) {
  _out = (x_x_s1 ? 5 : 7);
  return;
}

}
