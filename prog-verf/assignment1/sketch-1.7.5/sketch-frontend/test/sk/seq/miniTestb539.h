#ifndef MINITESTB539_H
#define MINITESTB539_H

#include <cstring>

#include "vops.h"

namespace a{
class A; 
}
namespace b{
class A; 
}
namespace c{
class A; 
}
namespace a{
class A; 
class A{
  public:
  int  z;
  c::A*  a;
  A(){}
  static A* create(  int  z_,   c::A*  a_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void foo(A* a, c::A*& _out);
}
namespace b{
class A; 
class A{
  public:
  int  y;
  a::A*  a;
  A(){}
  static A* create(  int  y_,   a::A*  a_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void foo(A** a/* len = 1 */, A*& _out);
}
namespace c{
class A; 
class A{
  public:
  int  x;
  b::A*  a;
  A(){}
  static A* create(  int  x_,   b::A*  a_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
extern void foo(A* a, A*& _out);
}

#endif
