#ifndef MINITESTB661_H
#define MINITESTB661_H

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
  A(){}
  static A* create(  int  x_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(bool t);
extern void main__WrapperNospec(bool t);
extern void _main(bool t);
}

#endif
