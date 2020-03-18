#ifndef MINITESTB876_H
#define MINITESTB876_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Range; 
}
namespace ANONYMOUS{
class Range; 
class Range{
  public:
  int  lo;
  int  hi;
  Range(){}
  static Range* create(  int  lo_,   int  hi_);
  ~Range(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int alo, int ahi, int blo, int bhi, int a, int b);
extern void main__WrapperNospec(int alo, int ahi, int blo, int bhi, int a, int b);
extern void _main(int alo_0, int ahi_1, int blo_2, int bhi_3, int a_4, int b_5);
extern void opDiv(Range* a, Range* b, Range*& _out);
}

#endif
