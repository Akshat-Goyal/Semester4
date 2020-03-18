#ifndef MINITESTB588_ADT_H
#define MINITESTB588_ADT_H

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
  Tree(){}
  ~Tree(){
  }
  void operator delete(void* p){ free(p); }
};
class Leaf : public Tree{
  public:
  int  value;
  Leaf(){}
  static Leaf* create(  int  value_,   int  x_);
  ~Leaf(){
  }
  void operator delete(void* p){ free(p); }
};
class Branch : public Tree{
  public:
  Tree*  left;
  Tree*  right;
  Branch(){}
  static Branch* create(  Tree*  left_,   Tree*  right_,   int  x_);
  ~Branch(){
  }
  void operator delete(void* p){ free(p); }
};
extern void test__Wrapper();
extern void test__WrapperNospec();
extern void test();
extern void sum(Tree* t, Tree*& _out);
}

#endif
