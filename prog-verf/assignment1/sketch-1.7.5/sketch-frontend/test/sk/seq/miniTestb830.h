#ifndef MINITESTB830_H
#define MINITESTB830_H

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
  scalar(){}
  static scalar* create(  bool  supp_);
  ~scalar(){
  }
  void operator delete(void* p){ free(p); }
};
extern void test1__Wrapper(bool x, bool y);
extern void test1__WrapperNospec(bool x, bool y);
extern void test1(bool x, bool y);
extern void some(bool x, bool& _out_supp_s7);
extern void min2(bool a_supp_s8, bool& _out_supp_s9);
}

#endif
