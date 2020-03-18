#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb888.h"
namespace ANONYMOUS{

Point* Point::create(int  x_, int  y_){
  void* temp= malloc( sizeof(Point)  ); 
  Point* rv = new (temp)Point();
  rv->x =  x_;
  rv->y =  y_;
  return rv;
}
void main__Wrapper(int i, int j) {
  _main(i, j);
}
void main__WrapperNospec(int i, int j) {}
void aaa__Wrapper(int i, int j) {
  int  p3__ANONYMOUS_s1_x_s12=0;
  int  p3__ANONYMOUS_s1_y_s13=0;
  glblInit_p3__ANONYMOUS_s3(p3__ANONYMOUS_s1_x_s12, p3__ANONYMOUS_s1_y_s13);
  aaa(i, j, p3__ANONYMOUS_s1_x_s12, p3__ANONYMOUS_s1_y_s13);
}
void aaa__WrapperNospec(int i, int j) {}
void glblInit_p3__ANONYMOUS_s3(int& p3__ANONYMOUS_s2_x_s14, int& p3__ANONYMOUS_s2_y_s15) {
  p3__ANONYMOUS_s2_x_s14 = 5;
  p3__ANONYMOUS_s2_y_s15 = 3;
}
void _main(int i, int j) {
  Point*  p2=Point::create(3, 2);
  int  p_x_s6_s38=p2->x;
  int  p_y_s7_s39=p2->y;
  foo(p_x_s6_s38, p_y_s7_s39);
  p2->x = p_x_s6_s38;
  p2->y = p_y_s7_s39;
  assert ((p2->x) == (4));;
}
void aaa(int i, int j, int& p3__ANONYMOUS_s0_x_s8, int& p3__ANONYMOUS_s0_y_s9) {
  Point*  p=Point::create(3, 2);
  int  p_x_s6_s40=p->x;
  int  p_y_s7_s41=p->y;
  foo(p_x_s6_s40, p_y_s7_s41);
  p->x = p_x_s6_s40;
  p->y = p_y_s7_s41;
  foo(p3__ANONYMOUS_s0_x_s8, p3__ANONYMOUS_s0_y_s9);
  assert ((p->x) == (4));;
}
void foo(int& p_x_s6, int& p_y_s7) {
  p_x_s6 = p_x_s6 + 1;
}

}
