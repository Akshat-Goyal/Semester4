#ifndef MINITESTB666_ADT_H
#define MINITESTB666_ADT_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class A; 
class B; 
class C; 
class D; 
}
namespace ANONYMOUS{
class A; 
class B; 
class C; 
class D; 
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
  typedef enum {D_type} _kind;
  _kind type;
  ~C(){
  }
  void operator delete(void* p){ free(p); }
};
class D : public C{
  public:
  static D* create();
  ~D(){
  }
  void operator delete(void* p){ free(p); }
};
}

#endif
