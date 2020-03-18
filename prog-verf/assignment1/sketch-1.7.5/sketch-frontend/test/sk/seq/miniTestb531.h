#ifndef MINITESTB531_H
#define MINITESTB531_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Grid; 
}
namespace ANONYMOUS{
class Grid; 
class Grid{
  public:
  int  n;
  int  m;
  int  y[];
  Grid(){}
template<typename T_0>
  static Grid* create(  int  n_,   int  m_,   T_0* y_, int y_len);
  ~Grid(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int n, int m, int* x/* len = n * m */);
extern void main__WrapperNospec(int n, int m, int* x/* len = n * m */);
extern void _main(int n, int m, int* x/* len = n * m */);
}

#endif
