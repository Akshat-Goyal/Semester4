#ifndef MINITESTB885_H
#define MINITESTB885_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
template<typename T>
class Tree; 
template<typename T>
class Node; 
template<typename T>
class Nil; 
class opt; 
class pair; 
class none; 
}
namespace ANONYMOUS{
template<typename T>
class Tree; 
template<typename T>
class Node; 
template<typename T>
class Nil; 
class opt; 
class pair; 
class none; 
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
class opt{
  public:
  typedef enum {PAIR_type, NONE_type} _kind;
  _kind type;
  ~opt(){
  }
  void operator delete(void* p){ free(p); }
};
class pair : public opt{
  public:
  int  x;
  int  y;
  pair(){}
  static pair* create(  int  x_,   int  y_);
  ~pair(){
  }
  void operator delete(void* p){ free(p); }
};
class none : public opt{
  public:
  static none* create();
  ~none(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main2__Wrapper(int x, int y, int z, int oth);
extern void main2__WrapperNospec(int x, int y, int z, int oth);
extern void main__Wrapper(int x, int y, int z, int oth);
extern void main__WrapperNospec(int x, int y, int z, int oth);
extern void main2(int x, int y, int z, int oth);
extern void _main(int x, int y, int z, int oth);
extern void add_lt1_eq2T_opt(Tree<opt* > * t, opt* val, Tree<opt* > *& _out);
extern void get_lt1_eq2T_opt(Tree<opt* > * t, opt* val, opt* deflt, opt*& _out);
extern void equals_opt_s0(opt* left_s1, opt* right_s2, int bnd_s3, bool& _out);
extern void add_lt3_eq4T_int(Tree<int > * t, int val, Tree<int > *& _out);
extern void get_lt3_eq4T_int(Tree<int > * t, int val, int deflt, int& _out);
extern void get_lt1_eq2T_opt_ANONYMOUS(Tree<opt* > * t, opt* val, opt* deflt, opt*& _out);
}

#endif
