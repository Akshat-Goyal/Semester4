#ifndef MINITESTB495_H
#define MINITESTB495_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Bar; 
}
namespace ANONYMOUS{
class Bar; 
class Bar{
  public:
  int  x;
  Bar(){}
  static Bar* create(  int  x_);
  ~Bar(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int t);
extern void main__WrapperNospec(int t);
extern void _main(int t, int& gt__ANONYMOUS_s1);
extern void moo(int& t, Bar* b, int& gt__ANONYMOUS_s0);
extern void foo(int& a, int b);
}

#endif
