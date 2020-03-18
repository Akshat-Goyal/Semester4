#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb535.h"
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
  p2->x = 5;
  p2->y = 3;
}

}
