#ifndef MINITESTB848_H
#define MINITESTB848_H

#include <cstring>

#include "vops.h"

namespace A{
class A; 
}
namespace ANONYMOUS{
}
namespace B{
class A; 
}
namespace A{
class A; 
class A{
  public:
  int  v;
  A(){}
  static A* create(  int  v_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void qq_F2(int t);
extern void tt_U1(int t);
}
namespace ANONYMOUS{
}
namespace B{
class A; 
class A{
  public:
  int  x;
  int  y;
  A(){}
  static A* create(  int  x_,   int  y_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void uu__Wrapper(int y);
extern void uu__WrapperNospec(int y);
extern void uu(int y);
extern void F2(A::A* t, A*& _out);
}

#endif
