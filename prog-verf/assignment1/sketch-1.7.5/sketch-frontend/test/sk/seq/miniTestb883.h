#ifndef MINITESTB883_H
#define MINITESTB883_H

#include <cstring>

#include "vops.h"

namespace A{
template<typename T>
class I; 
}
namespace ANONYMOUS{
}
namespace B{
template<typename X>
class I; 
}
namespace A{
template<typename T>
class I; 
template<typename T>
class I{
  public:
  T  v;
  I(){}
  static I* create(  T  v_);
  ~I(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
template<typename T>
extern void store(T v, I<T > *& _out);
template<typename T>
extern void read(I<T > * x, T& _out);
}
namespace ANONYMOUS{
}
namespace B{
template<typename X>
class I; 
template<typename X>
class I{
  public:
  X  t;
  I(){}
  static I* create(  X  t_);
  ~I(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
template<typename T>
extern void store(T v, I<T > *& _out);
template<typename T>
extern void read(I<T > * x, T& _out);
}

#endif
