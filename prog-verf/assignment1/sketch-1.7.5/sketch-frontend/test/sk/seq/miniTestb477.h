#ifndef MINITESTB477_H
#define MINITESTB477_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class m; 
}
namespace ANONYMOUS{
class m; 
class m{
  public:
  int  x;
  int  y[];
  m(){}
template<typename T_0>
  static m* create(  int  x_,   T_0* y_, int y_len);
  ~m(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
extern void foo(m* mm, int* t/* len = mm->x */);
}

#endif
