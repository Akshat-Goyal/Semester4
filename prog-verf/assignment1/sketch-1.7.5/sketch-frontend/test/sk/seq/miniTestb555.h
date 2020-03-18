#ifndef MINITESTB555_H
#define MINITESTB555_H

#include <cstring>

#include "vops.h"

namespace str{
class Str; 
}
namespace ANONYMOUS{
}
namespace str{
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
extern void newStr(int n, char* w/* len = n */, Str*& _out);
extern void cat(Str* s1, Str* s2, Str*& _out);
extern void print(Str* s);
extern void println(Str* s);
}
namespace ANONYMOUS{
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
}

#endif
