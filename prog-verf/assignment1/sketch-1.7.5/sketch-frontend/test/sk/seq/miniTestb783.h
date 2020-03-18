#ifndef MINITESTB783_H
#define MINITESTB783_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Foo; 
class A; 
class B; 
}
namespace ANONYMOUS{
class Foo; 
class A; 
class B; 
class Foo{
  public:
  typedef enum {A_type, B_type} _kind;
  _kind type;
  ~Foo(){
  }
  void operator delete(void* p){ free(p); }
};
class A : public Foo{
  public:
  static A* create();
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public Foo{
  public:
  static B* create();
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void moo_foo1_boo2(Foo*& _out);
extern void too_ttt3T_Foo_ANONYMOUS(Foo* x, Foo* y, Foo*& _out);
extern void boo2(A*& _out);
extern void ttt3(Foo* x, Foo* y, Foo*& _out);
}

#endif
