#ifndef MINITESTB621_H
#define MINITESTB621_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class T; 
class A; 
class B; 
}
namespace ANONYMOUS{
class T; 
class A; 
class B; 
class T{
  public:
  typedef enum {A_type, B_type} _kind;
  _kind type;
  ~T(){
  }
  void operator delete(void* p){ free(p); }
};
class A : public T{
  public:
  int  x;
  int  y;
  A(){}
  static A* create(  int  x_,   int  y_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public T{
  public:
  int  a;
  int  b;
  B(){}
  static B* create(  int  a_,   int  b_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
}

#endif
