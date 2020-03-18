#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb609_adt.h"
namespace ANONYMOUS{

Leaf* Leaf::create(int  value_, int  x_){
  void* temp= malloc( sizeof(Leaf)  ); 
  Leaf* rv = new (temp)Leaf();
  rv->value =  value_;
  rv->x =  x_;
  rv->type= Tree::LEAF_type;
  return rv;
}
Branch* Branch::create(Tree*  left_, Tree*  right_, int  x_){
  void* temp= malloc( sizeof(Branch)  ); 
  Branch* rv = new (temp)Branch();
  rv->left =  left_;
  rv->right =  right_;
  rv->x =  x_;
  rv->type= Tree::BRANCH_type;
  return rv;
}
void test__Wrapper() {
  test();
}
void test__WrapperNospec() {}
void test() {
  Leaf*  leaf1=Leaf::create(5, 0);
  Leaf*  leaf2=Leaf::create(4, 0);
  Branch*  branch=Branch::create(NULL, NULL, 0);
  branch->left = leaf1;
  branch->right = leaf2;
  int  x_s1=0;
  sum(branch, x_s1);
}
void sum(Tree* t, int& _out) {
  _out = t->x;
  return;
}

}
