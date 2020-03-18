#ifndef MINITESTB819_H
#define MINITESTB819_H

#include <cstring>

#include "vops.h"

namespace YY{
class A; 
class B; 
}
namespace ANONYMOUS{
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
}
namespace ANONYMOUS{
}

#endif
