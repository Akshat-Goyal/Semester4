#ifndef MINITESTB884_H
#define MINITESTB884_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
template<typename T>
class List; 
template<typename T>
class cons; 
template<typename T>
class nil; 
}
namespace ANONYMOUS{
template<typename T>
class List; 
template<typename T>
class cons; 
template<typename T>
class nil; 
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
class cons : public List<T>{
  public:
  T  val;
  List<T > *  next;
  cons(){}
  static cons* create(  T  val_,   List<T > *  next_);
  ~cons(){
  }
  void operator delete(void* p){ free(p); }
};
template<typename T>
class nil : public List<T>{
  public:
  static nil* create();
  ~nil(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
template<typename T>
extern void single(T x, List<T > *& _out);
template<typename T>
extern void add(List<T > * lst, T val, List<T > *& _out);
extern void equals_List_s0(List<int > * left_s1, List<int > * right_s2, int bnd_s3, bool& _out);
extern void equals_List_s5(List<List<int > * > * left_s6, List<List<int > * > * right_s7, int bnd_s8, bool& _out);
}

#endif
