#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb588_adt.h"
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
  Branch*  branch=Branch::create(NULL, NULL, 0);
  Tree*  b_s1=NULL;
  sum(branch, b_s1);
}
void sum(Tree* t, Tree*& _out) {
  switch(t->type){
  case Leaf::LEAF_type:
    {
    Leaf*  _t = (Leaf* )  t;

    _out = _t;
    return;
  
    break;
  }
  case Branch::BRANCH_type:
    {
    Branch*  _t = (Branch* )  t;

    _out = _t;
    return;
  
    break;
  }

 }
}

}
