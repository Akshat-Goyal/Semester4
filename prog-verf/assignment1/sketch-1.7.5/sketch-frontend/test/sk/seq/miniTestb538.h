#ifndef MINITESTB538_H
#define MINITESTB538_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Buf; 
}
namespace ANONYMOUS{
class Buf; 
class Buf{
  public:
  int  x;
  int  m[];
  Buf(){}
template<typename T_0>
  static Buf* create(  int  x_,   T_0* m_, int m_len);
  ~Buf(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void foo(int& p_x_s2, int* p_m_s3/* len = 33 */);
}

#endif
