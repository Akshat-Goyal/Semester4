#ifndef MINITESTB652_H
#define MINITESTB652_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class A; 
class B; 
}
namespace ANONYMOUS{
class A; 
class B; 
class A{
  public:
  int  x;
  B*  b;
  A(){}
  static A* create(  int  x_,   B*  b_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B{
  public:
  int  x;
  B(){}
  static B* create(  int  x_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void produce(int x, bool t, A*& _out);
extern void check(A* a, bool& _out);
}

#endif
