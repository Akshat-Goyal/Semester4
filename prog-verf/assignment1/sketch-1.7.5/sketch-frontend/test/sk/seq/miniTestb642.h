#ifndef MINITESTB642_H
#define MINITESTB642_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class base; 
class A; 
class B; 
class D; 
class C; 
}
namespace ANONYMOUS{
class base; 
class A; 
class B; 
class D; 
class C; 
class base{
  public:
  typedef enum {A_type, B_type, D_type, C_type} _kind;
  _kind type;
  ~base(){
  }
  void operator delete(void* p){ free(p); }
};
class A : public base{
  public:
  base*  x;
  base*  y;
  A(){}
  static A* create(  base*  x_,   base*  y_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public base{
  public:
  base*  a;
  base*  b;
  B(){}
  static B* create(  base*  a_,   base*  b_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
class D : public base{
  public:
  base*  a;
  base*  b;
  D(){}
  static D* create(  base*  a_,   base*  b_);
  ~D(){
  }
  void operator delete(void* p){ free(p); }
};
class C : public base{
  public:
  static C* create();
  ~C(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void mc(base*& _out);
extern void mb(base* x, base* y, base*& _out);
extern void ma(base* x, base* y, base*& _out);
extern void visit(base* b, int& _out);
}

#endif
