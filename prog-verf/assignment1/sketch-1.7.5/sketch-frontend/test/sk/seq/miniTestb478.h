#ifndef MINITESTB478_H
#define MINITESTB478_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class M; 
class P; 
}
namespace ANONYMOUS{
class M; 
class P; 
class M{
  public:
  int  x;
  int  y[];
  M(){}
template<typename T_0>
  static M* create(  int  x_,   T_0* y_, int y_len);
  ~M(){
  }
  void operator delete(void* p){ free(p); }
};
class P{
  public:
  int  x;
  double  y[];
  P(){}
template<typename T_0>
  static P* create(  int  x_,   T_0* y_, int y_len);
  ~P(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int n);
extern void main__WrapperNospec(int n);
extern void _main(int n);
extern void foo(M* m, int* test/* len = m->x */);
extern void fooP(P* m, double* test/* len = m->x */);
extern void fooP3(P* m, double* test/* len = 3 * m->x */);
}

#endif
