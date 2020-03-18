#ifndef MINITESTB651_H
#define MINITESTB651_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class parent; 
class A; 
class B; 
}
namespace ANONYMOUS{
class parent; 
class A; 
class B; 
class parent{
  public:
  typedef enum {A_type, B_type} _kind;
  _kind type;
  ~parent(){
  }
  void operator delete(void* p){ free(p); }
};
class A : public parent{
  public:
  int  x;
  A*  nxt;
  A(){}
  static A* create(  int  x_,   A*  nxt_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public parent{
  public:
  int  x;
  B(){}
  static B* create(  int  x_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
}

#endif
