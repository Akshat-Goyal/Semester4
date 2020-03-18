#ifndef MINITESTB888_H
#define MINITESTB888_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Point; 
}
namespace ANONYMOUS{
class Point; 
class Point{
  public:
  int  x;
  int  y;
  Point(){}
  static Point* create(  int  x_,   int  y_);
  ~Point(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i, int j);
extern void main__WrapperNospec(int i, int j);
extern void aaa__Wrapper(int i, int j);
extern void aaa__WrapperNospec(int i, int j);
extern void glblInit_p3__ANONYMOUS_s3(int& p3__ANONYMOUS_s2_x_s14, int& p3__ANONYMOUS_s2_y_s15);
extern void _main(int i, int j);
extern void aaa(int i, int j, int& p3__ANONYMOUS_s0_x_s8, int& p3__ANONYMOUS_s0_y_s9);
extern void foo(int& p_x_s6, int& p_y_s7);
}

#endif
