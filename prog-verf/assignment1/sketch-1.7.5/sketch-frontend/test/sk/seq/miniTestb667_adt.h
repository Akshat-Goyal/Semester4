#ifndef MINITESTB667_ADT_H
#define MINITESTB667_ADT_H

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
  typedef enum {B_type} _kind;
  _kind type;
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public A{
  public:
  C*  c;
  B(){}
  static B* create(  C*  c_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
class C{
  public:
  static C* create();
  ~C(){
  }
  void operator delete(void* p){ free(p); }
};
}

#endif
