#ifndef MINITESTB553_H
#define MINITESTB553_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class ff; 
}
namespace ANONYMOUS{
class ff; 
class ff{
  public:
  int  x;
  ff(){}
  static ff* create(  int  x_);
  ~ff(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
extern void rand(int& _out);
extern void outpp(int i);
}

#endif
