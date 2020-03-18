#ifndef MINITESTB692_H
#define MINITESTB692_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Some; 
}
namespace ANONYMOUS{
class Some; 
class Some{
  public:
  int  x;
  Some(){}
  static Some* create(  int  x_);
  ~Some(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
template<typename T>
extern void nc(T x, int n, T* _out/* len = n */);
}

#endif
