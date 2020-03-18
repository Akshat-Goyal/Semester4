#ifndef MINITESTB597_ADT_H
#define MINITESTB597_ADT_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Tree; 
class Leaf; 
class Branch; 
}
namespace ANONYMOUS{
class Tree; 
class Leaf; 
class Branch; 
class Tree{
  public:
  typedef enum {LEAF_type, BRANCH_type} _kind;
  _kind type;
  int  x;
  int*  array;
  Tree(){}
  ~Tree(){
  }
  void operator delete(void* p){ free(p); }
};
class Leaf : public Tree{
  public:
  int  value;
  Leaf(){}
template<typename T_0>
  static Leaf* create(  int  value_,   int  x_,   T_0* array_, int array_len);
  ~Leaf(){
  }
  void operator delete(void* p){ free(p); }
};
class Branch : public Tree{
  public:
  Tree*  left;
  Tree*  right;
  Branch(){}
template<typename T_0>
  static Branch* create(  Tree*  left_,   Tree*  right_,   int  x_,   T_0* array_, int array_len);
  ~Branch(){
  }
  void operator delete(void* p){ free(p); }
};
extern void test__Wrapper();
extern void test__WrapperNospec();
extern void test();
extern void sum(Tree* t, int& _out);
}

#endif
