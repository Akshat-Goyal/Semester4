#ifndef MINITESTB633_H
#define MINITESTB633_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class A; 
}
namespace ANONYMOUS{
class A; 
class A{
  public:
  bool  x;
  A(){}
  static A* create(  bool  x_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
}

#endif
