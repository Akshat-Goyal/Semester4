#ifndef MINITESTB654_H
#define MINITESTB654_H

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
  int  x;
  parent(){}
  ~parent(){
  }
  void operator delete(void* p){ free(p); }
};
class A : public parent{
  public:
  parent*  nxt;
  A(){}
  static A* create(  parent*  nxt_,   int  x_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public parent{
  public:
  static B* create(  int  x_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x, bool cond);
extern void main__WrapperNospec(int x, bool cond);
extern void _main(int x, bool cond);
}

#endif
