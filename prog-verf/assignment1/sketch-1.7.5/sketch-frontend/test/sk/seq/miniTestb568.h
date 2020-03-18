#ifndef MINITESTB568_H
#define MINITESTB568_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Foo; 
}
namespace ANONYMOUS{
class Foo; 
class Foo{
  public:
  int  x;
  Foo(){}
  static Foo* create(  int  x_);
  ~Foo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
}

#endif
