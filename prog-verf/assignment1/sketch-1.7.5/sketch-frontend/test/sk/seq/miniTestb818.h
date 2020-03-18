#ifndef MINITESTB818_H
#define MINITESTB818_H

#include <cstring>

#include "vops.h"

namespace XX{
class A; 
class B; 
class C; 
}
namespace YY{
class A; 
class B; 
}
namespace ANONYMOUS{
}
namespace XX{
class A; 
class B; 
class C; 
class A{
  public:
  typedef enum {B_type, C_type} _kind;
  _kind type;
  int  x;
  int  y;
  A(){}
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public A{
  public:
  static B* create(  int  x_,   int  y_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
class C : public A{
  public:
  static C* create(  int  x_,   int  y_);
  ~C(){
  }
  void operator delete(void* p){ free(p); }
};
}
namespace YY{
class A; 
class B; 
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
  static B* create();
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void equals_B_s0(B* left_s1, B* right_s2, int bnd_s3, bool& _out);
extern void equals_B_s4(XX::B* left_s5, XX::B* right_s6, int bnd_s7, bool& _out);
}
namespace ANONYMOUS{
}

#endif
