#ifndef MINITESTB794_H
#define MINITESTB794_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Opr; 
class BroadCast; 
}
namespace ANONYMOUS{
class Opr; 
class BroadCast; 
class Opr{
  public:
  typedef enum {BROADCAST_type} _kind;
  _kind type;
  ~Opr(){
  }
  void operator delete(void* p){ free(p); }
};
class BroadCast : public Opr{
  public:
  int  c;
  BroadCast(){}
  static BroadCast* create(  int  c_);
  ~BroadCast(){
  }
  void operator delete(void* p){ free(p); }
};
extern void g(int alpha, int* _out/* len = 1 */);
extern void f(int alpha, int* _out/* len = 1 */);
}

#endif
