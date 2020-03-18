#ifndef MINITESTB637_H
#define MINITESTB637_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class A; 
class B; 
class C; 
}
namespace ANONYMOUS{
class A; 
class B; 
class C; 
class A{
  public:
  typedef enum {B_type, C_type} _kind;
  _kind type;
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public A{
  public:
  int  x;
  B(){}
  static B* create(  int  x_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
class C : public A{
  public:
  static C* create();
  ~C(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void get(A* a, int* _out/* len = 2 */);
}

#endif
