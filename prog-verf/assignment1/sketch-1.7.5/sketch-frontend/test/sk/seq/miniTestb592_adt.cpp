#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb592_adt.h"
namespace ANONYMOUS{

Leaf* Leaf::create(){
  void* temp= malloc( sizeof(Leaf)  ); 
  Leaf* rv = new (temp)Leaf();
  rv->type= Tree::LEAF_type;
  return rv;
}
Branch* Branch::create(Tree*  left_, Tree*  right_){
  void* temp= malloc( sizeof(Branch)  ); 
  Branch* rv = new (temp)Branch();
  rv->left =  left_;
  rv->right =  right_;
  rv->type= Tree::BRANCH_type;
  return rv;
}
void test__Wrapper() {
  test();
}
void test__WrapperNospec() {}
void test() {
  Tree*  tree1=Leaf::create();
  Tree*  tree2_s1=NULL;
  foo(tree1, tree2_s1);
}
void foo(Tree* t, Tree*& _out) {
  _out = t;
  return;
}

}
