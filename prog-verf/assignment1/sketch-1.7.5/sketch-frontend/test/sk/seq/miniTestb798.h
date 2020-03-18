#ifndef MINITESTB798_H
#define MINITESTB798_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Vector; 
class Opr; 
class BroadCast; 
class Lift; 
class Plus; 
class Minus; 
class Times; 
class Dot; 
class L2norm; 
}
namespace ANONYMOUS{
class Vector; 
class Opr; 
class BroadCast; 
class Lift; 
class Plus; 
class Minus; 
class Times; 
class Dot; 
class L2norm; 
class Vector{
  public:
  int  len;
  int  data[];
  Vector(){}
template<typename T_0>
  static Vector* create(  int  len_,   T_0* data_, int data_len);
  ~Vector(){
  }
  void operator delete(void* p){ free(p); }
};
class Opr{
  public:
  typedef enum {BROADCAST_type, LIFT_type, PLUS_type, MINUS_type, TIMES_type, DOT_type, L2NORM_type} _kind;
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
class Lift : public Opr{
  public:
  Vector*  v;
  Lift(){}
  static Lift* create(  Vector*  v_);
  ~Lift(){
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
class Minus : public Opr{
  public:
  Opr*  left;
  Opr*  right;
  Minus(){}
  static Minus* create(  Opr*  left_,   Opr*  right_);
  ~Minus(){
  }
  void operator delete(void* p){ free(p); }
};
class Times : public Opr{
  public:
  Opr*  left;
  int  right;
  Times(){}
  static Times* create(  Opr*  left_,   int  right_);
  ~Times(){
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
class L2norm : public Opr{
  public:
  Opr*  v;
  L2norm(){}
  static L2norm* create(  Opr*  v_);
  ~L2norm(){
  }
  void operator delete(void* p){ free(p); }
};
extern void g(int len, int* x/* len = len */, int* y/* len = len */, int alpha, int beta, int gamma, int* _out/* len = len */);
extern void f(int len, int* x/* len = len */, int* y/* len = len */, int alpha, int beta, int gamma, int* _out/* len = len */);
}

#endif
