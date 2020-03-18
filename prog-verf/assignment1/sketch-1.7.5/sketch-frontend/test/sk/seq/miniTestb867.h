#ifndef MINITESTB867_H
#define MINITESTB867_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class info; 
class T; 
class A; 
class B; 
}
namespace ANONYMOUS{
class info; 
class T; 
class A; 
class B; 
class info{
  public:
  int  i;
  T*  t;
  info(){}
  static info* create(  int  i_,   T*  t_);
  ~info(){
  }
  void operator delete(void* p){ free(p); }
};
class T{
  public:
  typedef enum {A_type, B_type} _kind;
  _kind type;
  ~T(){
  }
  void operator delete(void* p){ free(p); }
};
class A : public T{
  public:
  int  x;
  int  y;
  A(){}
  static A* create(  int  x_,   int  y_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
class B : public T{
  public:
  info*  inf;
  B(){}
  static B* create(  info*  inf_);
  ~B(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
extern void equals_T_s0(T* left_s1, T* right_s2, int bnd_s3, bool& _out);
}

#endif
