#ifndef MINITESTB813_H
#define MINITESTB813_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Tree; 
class Leaf; 
class Leaf1; 
class Leaf2; 
class Branch; 
}
namespace ANONYMOUS{
class Tree; 
class Leaf; 
class Leaf1; 
class Leaf2; 
class Branch; 
class Tree{
  public:
  typedef enum {LEAF_type, BRANCH_type, LEAF1_type, LEAF2_type} _kind;
  _kind type;
  ~Tree(){
  }
  void operator delete(void* p){ free(p); }
};
class Leaf : public Tree{
  public:
  int  v;
  Leaf(){}
  ~Leaf(){
  }
  void operator delete(void* p){ free(p); }
};
class Leaf1 : public Leaf{
  public:
  int  v1;
  Leaf1(){}
  static Leaf1* create(  int  v1_,   int  v_);
  ~Leaf1(){
  }
  void operator delete(void* p){ free(p); }
};
class Leaf2 : public Leaf{
  public:
  int  v2;
  Leaf2(){}
  static Leaf2* create(  int  v2_,   int  v_);
  ~Leaf2(){
  }
  void operator delete(void* p){ free(p); }
};
class Branch : public Tree{
  public:
  Tree*  l;
  Tree*  r;
  int  v;
  Branch(){}
  static Branch* create(  Tree*  l_,   Tree*  r_,   int  v_);
  ~Branch(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void equals_Tree_s0(Tree* left_s1, Tree* right_s2, int bnd_s3, bool& _out);
}

#endif
