#ifndef MINITESTB893_H
#define MINITESTB893_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace stack{
template<typename T>
class Stack; 
template<typename T>
class Nil; 
template<typename T>
class Content; 
}
namespace ANONYMOUS{
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
extern void action1(stack::Stack<int > *& stack, int x);
}
namespace stack{
template<typename T>
class Stack; 
template<typename T>
class Nil; 
template<typename T>
class Content; 
template<typename T>
class Stack{
  public:
  typedef enum {NIL_type, CONTENT_type} _kind;
  _kind type;
  ~Stack(){
  }
  void operator delete(void* p){ free(p); }
};
template<typename T>
class Nil : public Stack<T>{
  public:
  static Nil* create();
  ~Nil(){
  }
  void operator delete(void* p){ free(p); }
};
template<typename T>
class Content : public Stack<T>{
  public:
  T  val;
  Stack<T > *  prev;
  Content(){}
  static Content* create(  T  val_,   Stack<T > *  prev_);
  ~Content(){
  }
  void operator delete(void* p){ free(p); }
};
template<typename T>
extern void Empty(Stack<T > *& _out);
template<typename T>
extern void push(Stack<T > * prev, T val, Stack<T > *& _out);
template<typename T>
extern void peek(Stack<T > * st, T& _out);
}

#endif
