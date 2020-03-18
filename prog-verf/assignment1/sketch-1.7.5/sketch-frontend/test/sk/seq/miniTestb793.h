#ifndef MINITESTB793_H
#define MINITESTB793_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Opr; 
class BroadCast; 
class Plus; 
class Dot; 
}
namespace ANONYMOUS{
class Opr; 
class BroadCast; 
class Plus; 
class Dot; 
class Opr{
  public:
  typedef enum {BROADCAST_type, PLUS_type, DOT_type} _kind;
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
class Dot : public Opr{
  public:
  Opr*  left;
  Opr*  right;
  Dot(){}
  static Dot* create(  Opr*  left_,   Opr*  right_);
  ~Dot(){
  }
  void operator delete(void* p){ free(p); }
};
extern void g(int x, int y, int& _out);
extern void f(int x, int y, int& _out);
}

#endif
