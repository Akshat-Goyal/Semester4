#ifndef MINITESTB833_H
#define MINITESTB833_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class foo; 
class moo; 
}
namespace ANONYMOUS{
class foo; 
class moo; 
class foo{
  public:
  int  x;
  foo(){}
  static foo* create(  int  x_);
  ~foo(){
  }
  void operator delete(void* p){ free(p); }
};
class moo{
  public:
  foo*  t[];
  moo(){}
template<typename T_0>
  static moo* create(  T_0* t_, int t_len);
  ~moo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
template<typename T>
extern void getFirst(int n, T* x/* len = n */, T& _out);
}

#endif
