#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb537.h"
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
void _main(int i, int j) {
  Point*  p2=Point::create(3, 2);
  int  p_x_s2_s15=p2->x;
  int  p_y_s3_s16=p2->y;
  foo(p_x_s2_s15, p_y_s3_s16);
  p2->x = p_x_s2_s15;
  p2->y = p_y_s3_s16;
  assert ((p2->x) == (4));;
}
void foo(int& p_x_s2, int& p_y_s3) {
  p_x_s2 = p_x_s2 + 1;
}

}
