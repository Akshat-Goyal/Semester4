#ifndef MINITESTB811_H
#define MINITESTB811_H

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
  ~Tree(){
  }
  void operator delete(void* p){ free(p); }
};
class Leaf : public Tree{
  public:
  int  v;
  int  b;
  Leaf(){}
  static Leaf* create(  int  v_,   int  b_);
  ~Leaf(){
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
}

#endif
