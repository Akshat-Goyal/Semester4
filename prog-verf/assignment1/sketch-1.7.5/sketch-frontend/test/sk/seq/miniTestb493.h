#ifndef MINITESTB493_H
#define MINITESTB493_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Bar; 
}
namespace ANONYMOUS{
class Bar; 
class Bar{
  public:
  int  n;
  int  x[];
  Bar(){}
template<typename T_0>
  static Bar* create(  int  n_,   T_0* x_, int x_len);
  ~Bar(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int n, int* t/* len = n */);
extern void main__WrapperNospec(int n, int* t/* len = n */);
extern void _main(int n, int* t/* len = n */);
extern void foo(int n, int* a/* len = n */, int* b/* len = n */);
}

#endif
