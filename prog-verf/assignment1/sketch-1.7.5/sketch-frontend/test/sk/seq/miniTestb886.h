#ifndef MINITESTB886_H
#define MINITESTB886_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
template<typename T>
class Tree; 
template<typename T>
class Node; 
template<typename T>
class Nil; 
class AST; 
class Plus; 
class Minus; 
class Const; 
class None; 
}
namespace ANONYMOUS{
template<typename T>
class Tree; 
template<typename T>
class Node; 
template<typename T>
class Nil; 
class AST; 
class Plus; 
class Minus; 
class Const; 
class None; 
template<typename T>
class Tree{
  public:
  typedef enum {NODE_type, NIL_type} _kind;
  _kind type;
  ~Tree(){
  }
  void operator delete(void* p){ free(p); }
};
template<typename T>
class Node : public Tree<T>{
  public:
  T  val;
  Tree<T > *  left;
  Tree<T > *  right;
  Node(){}
  static Node* create(  T  val_,   Tree<T > *  left_,   Tree<T > *  right_);
  ~Node(){
  }
  void operator delete(void* p){ free(p); }
};
template<typename T>
class Nil : public Tree<T>{
  public:
  static Nil* create();
  ~Nil(){
  }
  void operator delete(void* p){ free(p); }
};
class AST{
  public:
  typedef enum {PLUS_type, MINUS_type, CONST_type, NONE_type} _kind;
  _kind type;
  int  id;
  AST(){}
  ~AST(){
  }
  void operator delete(void* p){ free(p); }
};
class Plus : public AST{
  public:
  AST*  left;
  AST*  right;
  Plus(){}
  static Plus* create(  AST*  left_,   AST*  right_,   int  id_);
  ~Plus(){
  }
  void operator delete(void* p){ free(p); }
};
class Minus : public AST{
  public:
  AST*  left;
  AST*  right;
  Minus(){}
  static Minus* create(  AST*  left_,   AST*  right_,   int  id_);
  ~Minus(){
  }
  void operator delete(void* p){ free(p); }
};
class Const : public AST{
  public:
  int  n;
  Const(){}
  static Const* create(  int  n_,   int  id_);
  ~Const(){
  }
  void operator delete(void* p){ free(p); }
};
class None : public AST{
  public:
  static None* create(  int  id_);
  ~None(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void glblInit_ID__ANONYMOUS_s104(int& ID__ANONYMOUS_s103);
extern void _main(int& ID__ANONYMOUS_s101, Tree<AST* > *& set__ANONYMOUS_s96);
extern void equals_AST_s0(AST* left_s1, AST* right_s2, int bnd_s3, bool& _out);
extern void print(AST* n);
extern void foo(int& ID__ANONYMOUS_s102, Tree<AST* > *& set__ANONYMOUS_s97);
}

#endif
