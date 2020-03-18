#ifndef MINITESTB706_H
#define MINITESTB706_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class BinaryTree; 
class Branch; 
class Leaf; 
class Empty; 
}
namespace ANONYMOUS{
class BinaryTree; 
class Branch; 
class Leaf; 
class Empty; 
class BinaryTree{
  public:
  typedef enum {BRANCH_type, LEAF_type, EMPTY_type} _kind;
  _kind type;
  ~BinaryTree(){
  }
  void operator delete(void* p){ free(p); }
};
class Branch : public BinaryTree{
  public:
  int  value;
  BinaryTree*  l;
  BinaryTree*  r;
  Branch(){}
  static Branch* create(  int  value_,   BinaryTree*  l_,   BinaryTree*  r_);
  ~Branch(){
  }
  void operator delete(void* p){ free(p); }
};
class Leaf : public BinaryTree{
  public:
  int  value;
  Leaf(){}
  static Leaf* create(  int  value_);
  ~Leaf(){
  }
  void operator delete(void* p){ free(p); }
};
class Empty : public BinaryTree{
  public:
  static Empty* create();
  ~Empty(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main7__Wrapper();
extern void main7__WrapperNospec();
extern void main6__Wrapper();
extern void main6__WrapperNospec();
extern void main5__Wrapper();
extern void main5__WrapperNospec();
extern void main4__Wrapper();
extern void main4__WrapperNospec();
extern void main3__Wrapper();
extern void main3__WrapperNospec();
extern void main2__Wrapper();
extern void main2__WrapperNospec();
extern void main1__Wrapper();
extern void main1__WrapperNospec();
extern void main7();
extern void main6();
extern void main5();
extern void main4();
extern void main3();
extern void main2();
extern void main1();
extern void insertNode(BinaryTree* tree, int x, BinaryTree*& _out);
extern void equals_BinaryTree_s0(BinaryTree* left_s1, BinaryTree* right_s2, int bnd_s3, bool& _out);
}

#endif
