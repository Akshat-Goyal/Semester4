#ifndef MINITESTB569_H
#define MINITESTB569_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Foo; 
class Moo; 
}
namespace ANONYMOUS{
class Foo; 
class Moo; 
class Foo{
  public:
  int  n;
  int  m;
  Moo*  c;
  Moo**  a;
  Moo**  b;
  int  d[];
  Foo(){}
template<typename T_0, typename T_1, typename T_2>
  static Foo* create(  int  n_,   T_0* a_, int a_len,   int  m_,   T_1* b_, int b_len,   Moo*  c_,   T_2* d_, int d_len);
  ~Foo(){
  }
  void operator delete(void* p){ free(p); }
};
class Moo{
  public:
  int  sz;
  int*  x;
  int  y[];
  Moo(){}
template<typename T_0, typename T_1>
  static Moo* create(  int  sz_,   T_0* x_, int x_len,   T_1* y_, int y_len);
  ~Moo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
}

#endif
