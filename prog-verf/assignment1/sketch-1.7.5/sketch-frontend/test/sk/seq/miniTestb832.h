#ifndef MINITESTB832_H
#define MINITESTB832_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class scalar; 
}
namespace ANONYMOUS{
class scalar; 
class scalar{
  public:
  bool  supp;
  int  val;
  scalar(){}
  static scalar* create(  bool  supp_,   int  val_);
  ~scalar(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(bool b, int v);
extern void main__WrapperNospec(bool b, int v);
extern void _main(bool b, int v);
extern void foo(bool b, int v, bool& _out_supp_s23, int& _out_val_s24);
extern void moo(bool a_supp_s19, int a_val_s20, scalar* b, bool& _out_supp_s21, int& _out_val_s22);
}

#endif
