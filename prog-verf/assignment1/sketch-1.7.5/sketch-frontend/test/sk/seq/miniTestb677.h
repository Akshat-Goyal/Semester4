#ifndef MINITESTB677_H
#define MINITESTB677_H

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
  typedef enum {B_type} _kind;
  _kind type;
  int  x;
  A(){}
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public A{
  public:
  static B* create(  int  x_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
}

#endif
