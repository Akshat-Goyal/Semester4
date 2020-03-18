#ifndef MINITESTB649_H
#define MINITESTB649_H

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
  int  y;
  B(){}
  static B* create(  int  y_,   int  x_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
}

#endif
