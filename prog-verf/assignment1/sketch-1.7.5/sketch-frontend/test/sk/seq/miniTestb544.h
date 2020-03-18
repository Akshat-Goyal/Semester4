#ifndef MINITESTB544_H
#define MINITESTB544_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class car; 
}
namespace ANONYMOUS{
class car; 
class car{
  public:
  bool  x;
  car(){}
  static car* create(  bool  x_);
  ~car(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sk(bool x_x_s0, int& _out);
extern void spec(bool x_x_s1, int& _out);
}

#endif
