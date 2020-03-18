#ifndef MINITESTB646_H
#define MINITESTB646_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class A; 
class B; 
class C; 
class D; 
}
namespace ANONYMOUS{
class A; 
class B; 
class C; 
class D; 
class A{
  public:
  typedef enum {B_type, C_type, D_type} _kind;
  _kind type;
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public A{
  public:
  A*  x;
  B(){}
  static B* create(  A*  x_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
class C : public A{
  public:
  A*  y;
  C(){}
  static C* create(  A*  y_);
  ~C(){
  }
  void operator delete(void* p){ free(p); }
};
class D : public A{
  public:
  A*  x;
  A*  z;
  D(){}
  static D* create(  A*  x_,   A*  z_);
  ~D(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void checkEq(A* a, A* b, bool& _out);
}

#endif
