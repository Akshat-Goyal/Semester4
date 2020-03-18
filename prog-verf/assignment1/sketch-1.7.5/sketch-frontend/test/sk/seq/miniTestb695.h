#ifndef MINITESTB695_H
#define MINITESTB695_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class shape; 
class circle; 
}
namespace ANONYMOUS{
class shape; 
class circle; 
class shape{
  public:
  typedef enum {CIRCLE_type} _kind;
  _kind type;
  ~shape(){
  }
  void operator delete(void* p){ free(p); }
};
class circle : public shape{
  public:
  int  x;
  circle(){}
  static circle* create(  int  x_);
  ~circle(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void sh1(shape*& _out);
}

#endif
