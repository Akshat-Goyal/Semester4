#ifndef MINITESTB857_H
#define MINITESTB857_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class S1; 
}
namespace ANONYMOUS{
class S1; 
class S1{
  public:
  static S1* create();
  ~S1(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void f1_f3T_S1(S1** in/* len = 10 */);
template<typename T>
extern void f2(T* in/* len = 10 */, T* t1/* len = 10 * 10 */);
}

#endif
