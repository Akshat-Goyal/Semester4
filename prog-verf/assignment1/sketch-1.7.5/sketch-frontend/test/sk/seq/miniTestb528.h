#ifndef MINITESTB528_H
#define MINITESTB528_H

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
extern void moo__Wrapper();
extern void moo__WrapperNospec();
extern void moo();
extern void foo(int& x_x_s6, int& x_y_s7, Q*& x_q_s8);
extern void secretAssertEquals(int v1, int v2);
}

#endif
