#ifndef MINITESTB584_H
#define MINITESTB584_H

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
  A(){}
  static A* create(  int  x_,   A*  nxt_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void maian__Wrapper(int i);
extern void maian__WrapperNospec(int i);
extern void maian(int i);
extern void foo(int i, A* a, A*& _out);
}

#endif
