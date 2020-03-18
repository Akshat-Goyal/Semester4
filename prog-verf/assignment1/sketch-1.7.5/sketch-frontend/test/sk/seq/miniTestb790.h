#ifndef MINITESTB790_H
#define MINITESTB790_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Opr; 
class A; 
class B; 
class C; 
}
namespace ANONYMOUS{
class Opr; 
class A; 
class B; 
class C; 
class Opr{
  public:
  typedef enum {A_type, B_type, C_type} _kind;
  _kind type;
  ~Opr(){
  }
  void operator delete(void* p){ free(p); }
};
class A : public Opr{
  public:
  static A* create();
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public Opr{
  public:
  static B* create();
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
class C : public Opr{
  public:
  static C* create();
  ~C(){
  }
  void operator delete(void* p){ free(p); }
};
extern void f__Wrapper();
extern void f__WrapperNospec();
extern void f();
}

#endif
