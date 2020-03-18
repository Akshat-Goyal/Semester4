#ifndef MINITESTB537_H
#define MINITESTB537_H

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
extern void _main(int i, int j);
extern void foo(int& p_x_s2, int& p_y_s3);
}

#endif
