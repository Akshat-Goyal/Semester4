#ifndef MINITESTB788_H
#define MINITESTB788_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Opr; 
class A; 
}
namespace ANONYMOUS{
class Opr; 
class A; 
class Opr{
  public:
  typedef enum {A_type} _kind;
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
extern void f__Wrapper();
extern void f__WrapperNospec();
extern void f();
}

#endif
