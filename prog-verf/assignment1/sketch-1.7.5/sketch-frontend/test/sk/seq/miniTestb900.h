#ifndef MINITESTB900_H
#define MINITESTB900_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace list{
template<typename T>
class List; 
template<typename T>
class Cons; 
template<typename T>
class Nil; 
}
namespace ANONYMOUS{
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
}
namespace list{
template<typename T>
class List; 
template<typename T>
class Cons; 
template<typename T>
class Nil; 
template<typename T>
class List{
  public:
  typedef enum {CONS_type, NIL_type} _kind;
  _kind type;
  ~List(){
  }
  void operator delete(void* p){ free(p); }
};
template<typename T>
class Cons : public List<T>{
  public:
  T  val;
  List<T > *  next;
  Cons(){}
  static Cons* create(  T  val_,   List<T > *  next_);
  ~Cons(){
  }
  void operator delete(void* p){ free(p); }
};
template<typename T>
class Nil : public List<T>{
  public:
  static Nil* create();
  ~Nil(){
  }
  void operator delete(void* p){ free(p); }
};
template<typename T>
extern void empty(List<T > *& _out);
template<typename T>
extern void add(List<T > * lst, T val, List<T > *& _out);
template<typename T>
extern void head(List<T > * l, T& _out);
}

#endif
