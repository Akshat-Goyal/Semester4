#ifndef MINITESTB476_H
#define MINITESTB476_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class foo; 
}
namespace ANONYMOUS{
class foo; 
class foo{
  public:
  int  x;
  int  y[];
  foo(){}
template<typename T_0>
  static foo* create(  int  x_,   T_0* y_, int y_len);
  ~foo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
}

#endif
