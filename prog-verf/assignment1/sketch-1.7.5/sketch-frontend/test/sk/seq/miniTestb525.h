#ifndef MINITESTB525_H
#define MINITESTB525_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Q; 
class F; 
}
namespace ANONYMOUS{
class Q; 
class F; 
class Q{
  public:
  int  u;
  int  v;
  Q(){}
  static Q* create(  int  u_,   int  v_);
  ~Q(){
  }
  void operator delete(void* p){ free(p); }
};
class F{
  public:
  int  x;
  int  y;
  Q*  q;
  F(){}
  static F* create(  int  x_,   int  y_,   Q*  q_);
  ~F(){
  }
  void operator delete(void* p){ free(p); }
};
extern void foo__Wrapper();
extern void foo__WrapperNospec();
extern void foo();
}

#endif
