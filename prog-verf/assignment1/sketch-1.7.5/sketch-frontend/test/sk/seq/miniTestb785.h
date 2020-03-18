#ifndef MINITESTB785_H
#define MINITESTB785_H

#include <cstring>

#include "vops.h"

namespace la{
class Opr; 
class BroadCast; 
class Plus; 
}
namespace la{
class Opr; 
class BroadCast; 
class Plus; 
class Opr{
  public:
  typedef enum {BROADCAST_type, PLUS_type} _kind;
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
class Plus : public Opr{
  public:
  Opr*  left;
  Opr*  right;
  Plus(){}
  static Plus* create(  Opr*  left_,   Opr*  right_);
  ~Plus(){
  }
  void operator delete(void* p){ free(p); }
};
extern void g(int alpha, int beta, int* _out/* len = 1 */);
extern void f(int alpha, int beta, int* _out/* len = 1 */);
}

#endif
