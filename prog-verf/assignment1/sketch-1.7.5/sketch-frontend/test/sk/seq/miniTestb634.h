#ifndef MINITESTB634_H
#define MINITESTB634_H

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
extern void main__Wrapper(bool t);
extern void main__WrapperNospec(bool t);
extern void _main(bool t);
}

#endif
