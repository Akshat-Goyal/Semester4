#ifndef MINITESTB500_H
#define MINITESTB500_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Str; 
}
namespace ANONYMOUS{
class Str; 
class Str{
  public:
  int  n;
  char  buf[];
  Str(){}
template<typename T_0>
  static Str* create(  int  n_,   T_0* buf_, int buf_len);
  ~Str(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void cat(Str* s1, Str* s2, Str*& _out);
extern void Comp(Str* s1, Str* s2, bool& _out);
}

#endif
