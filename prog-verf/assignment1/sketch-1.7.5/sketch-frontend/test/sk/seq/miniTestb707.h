#ifndef MINITESTB707_H
#define MINITESTB707_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class A; 
}
namespace ANONYMOUS{
class A; 
class A{
  public:
  int  x;
  A*  nxt;
  int  y[];
  A(){}
template<typename T_0>
  static A* create(  int  x_,   A*  nxt_,   T_0* y_, int y_len);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
}

#endif
