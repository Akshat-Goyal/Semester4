#ifndef MINITESTB829_H
#define MINITESTB829_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Exp; 
class Num; 
}
namespace ANONYMOUS{
class Exp; 
class Num; 
class Exp{
  public:
  typedef enum {NUM_type} _kind;
  _kind type;
  ~Exp(){
  }
  void operator delete(void* p){ free(p); }
};
class Num : public Exp{
  public:
  int  n;
  Num(){}
  static Num* create(  int  n_);
  ~Num(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
}

#endif
