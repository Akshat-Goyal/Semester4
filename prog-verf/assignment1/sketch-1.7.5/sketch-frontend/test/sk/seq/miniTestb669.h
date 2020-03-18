#ifndef MINITESTB669_H
#define MINITESTB669_H

#include <cstring>

#include "vops.h"

namespace YY{
class A; 
class B; 
class C; 
}
namespace XX{
class A; 
class B; 
class C; 
}
namespace ANONYMOUS{
}
namespace YY{
class A; 
class B; 
class C; 
class A{
  public:
  typedef enum {B_type, C_type} _kind;
  _kind type;
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public A{
  public:
  int  m;
  int  x[];
  B(){}
template<typename T_0>
  static B* create(  int  m_,   T_0* x_, int x_len);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
class C : public A{
  public:
  int  m;
  int  t[];
  C(){}
template<typename T_0>
  static C* create(  int  m_,   T_0* t_, int t_len);
  ~C(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int n);
extern void main__WrapperNospec(int n);
extern void _main(int n);
}
namespace XX{
class A; 
class B; 
class C; 
class A{
  public:
  typedef enum {B_type, C_type} _kind;
  _kind type;
  int  n;
  A(){}
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public A{
  public:
  int  x[];
  B(){}
template<typename T_0>
  static B* create(  T_0* x_, int x_len,   int  n_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
class C : public A{
  public:
  int  y[];
  C(){}
template<typename T_0>
  static C* create(  T_0* y_, int y_len,   int  n_);
  ~C(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int n);
extern void main__WrapperNospec(int n);
extern void _main(int n);
extern void foo(int* x/* len = 3 */);
extern void moo(A* a);
}
namespace ANONYMOUS{
}

#endif
