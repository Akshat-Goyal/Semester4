#ifndef MINITESTB872_H
#define MINITESTB872_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class T; 
class Foo; 
class Car; 
class Dog; 
class Tv; 
}
namespace ANONYMOUS{
class T; 
class Foo; 
class Car; 
class Dog; 
class Tv; 
class T{
  public:
  int  x;
  int  y;
  int  z;
  Foo*  f;
  T(){}
  static T* create(  int  x_,   int  y_,   int  z_,   Foo*  f_);
  ~T(){
  }
  void operator delete(void* p){ free(p); }
};
class Foo{
  public:
  typedef enum {CAR_type, DOG_type, TV_type} _kind;
  _kind type;
  ~Foo(){
  }
  void operator delete(void* p){ free(p); }
};
class Car : public Foo{
  public:
  int  x;
  int  y;
  Car(){}
  static Car* create(  int  x_,   int  y_);
  ~Car(){
  }
  void operator delete(void* p){ free(p); }
};
class Dog : public Foo{
  public:
  int  z;
  int  u;
  Dog(){}
  static Dog* create(  int  z_,   int  u_);
  ~Dog(){
  }
  void operator delete(void* p){ free(p); }
};
class Tv : public Foo{
  public:
  T*  t;
  Foo*  f;
  Tv(){}
  static Tv* create(  T*  t_,   Foo*  f_);
  ~Tv(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
}

#endif
