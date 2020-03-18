#ifndef MINITESTB670_H
#define MINITESTB670_H

#include <cstring>

#include "vops.h"

namespace XX{
class A; 
class B; 
class C; 
}
namespace YY{
class A; 
}
namespace ANONYMOUS{
}
namespace XX{
class A; 
class B; 
class C; 
class A{
  public:
  typedef enum {B_type, C_type} _kind;
  _kind type;
  int  x;
  int  y;
  A(){}
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public A{
  public:
  static B* create(  int  x_,   int  y_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
class C : public A{
  public:
  static C* create(  int  x_,   int  y_);
  ~C(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
}
namespace YY{
class A; 
class A{
  public:
  static A* create();
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void ppprint(int x);
}
namespace ANONYMOUS{
}

#endif
