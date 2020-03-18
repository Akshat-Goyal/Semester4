#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb600_adt.h"
namespace ANONYMOUS{

Leaf* Leaf::create(int  value_){
  void* temp= malloc( sizeof(Leaf)  ); 
  Leaf* rv = new (temp)Leaf();
  rv->value =  value_;
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
  Leaf*  leaf1=Leaf::create(5);
  Leaf*  leaf2=Leaf::create(4);
  Branch*  branch=Branch::create(NULL, NULL);
  branch->left = leaf1;
  branch->right = leaf2;
  int  x_s1=0;
  sum(branch, x_s1);
}
void sum(Tree* t, int& _out) {
  switch(t->type){
  case Leaf::LEAF_type:
    {
    Leaf*  _t = (Leaf* )  t;

    _out = _t->value;
    return;
  
    break;
  }
  case Branch::BRANCH_type:
    {
    Branch*  _t = (Branch* )  t;

    int  _out_s3=0;
    sum(_t->left, _out_s3);
    int  _out_s5=0;
    sum(_t->right, _out_s5);
    _out = _out_s3 + _out_s5;
    return;
  
    break;
  }

 }
}

}
