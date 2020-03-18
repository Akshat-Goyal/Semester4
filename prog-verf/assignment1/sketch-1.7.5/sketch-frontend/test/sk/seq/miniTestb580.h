#ifndef MINITESTB580_H
#define MINITESTB580_H

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
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
extern void foo(int i);
}

#endif
