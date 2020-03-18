#ifndef MINITESTB828_H
#define MINITESTB828_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class AST; 
class Plus; 
class Minus; 
class Num; 
}
namespace ANONYMOUS{
class AST; 
class Plus; 
class Minus; 
class Num; 
class AST{
  public:
  typedef enum {PLUS_type, MINUS_type, NUM_type} _kind;
  _kind type;
  ~AST(){
  }
  void operator delete(void* p){ free(p); }
};
class Plus : public AST{
  public:
  AST*  x;
  AST*  y;
  Plus(){}
  static Plus* create(  AST*  x_,   AST*  y_);
  ~Plus(){
  }
  void operator delete(void* p){ free(p); }
};
class Minus : public AST{
  public:
  AST*  x;
  AST*  y;
  Minus(){}
  static Minus* create(  AST*  x_,   AST*  y_);
  ~Minus(){
  }
  void operator delete(void* p){ free(p); }
};
class Num : public AST{
  public:
  int  x;
  Num(){}
  static Num* create(  int  x_);
  ~Num(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x_0);
}

#endif
