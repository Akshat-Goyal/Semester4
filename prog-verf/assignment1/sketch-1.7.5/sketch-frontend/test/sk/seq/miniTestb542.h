#ifndef MINITESTB542_H
#define MINITESTB542_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Stack; 
}
namespace ANONYMOUS{
class Stack; 
class Stack{
  public:
  bool*  ptr;
  bool  body[];
  Stack(){}
template<typename T_0, typename T_1>
  static Stack* create(  T_0* ptr_, int ptr_len,   T_1* body_, int body_len);
  ~Stack(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
}

#endif
