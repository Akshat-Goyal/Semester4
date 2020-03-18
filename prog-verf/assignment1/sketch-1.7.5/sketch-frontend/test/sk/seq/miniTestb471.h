#ifndef MINITESTB471_H
#define MINITESTB471_H

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
  int  x;
  A(){}
  static A* create(  int  x_);
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
class C{
  public:
  int  x;
  C(){}
  static C* create(  int  x_);
  ~C(){
  }
  void operator delete(void* p){ free(p); }
};
class D{
  public:
  int  x;
  C*  c;
  D(){}
  static D* create(  int  x_,   C*  c_);
  ~D(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
extern void f();
extern void g();
extern void p();
extern void k();
extern void h();
extern void q(D*& _out);
extern void r(D* d);
extern void m(int& _out);
}

#endif
