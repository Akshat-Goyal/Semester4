#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb590_adt.h"
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
combinedTree* combinedTree::create(){
  void* temp= malloc( sizeof(combinedTree)  ); 
  combinedTree* rv = new (temp)combinedTree();
  return rv;
}
void test__Wrapper() {
  test();
}
void test__WrapperNospec() {}
void test() {
  Branch*  branch=Branch::create(NULL, NULL, 0);
  int  x_s1=0;
  sum(branch, x_s1);
}
void sum(Tree* t, int& _out) {
  switch(t->type){
  case Leaf::LEAF_type:
    {
    Leaf*  _t = (Leaf* )  t;

    _out = 1;
    return;
  
    break;
  }
  case Branch::BRANCH_type:
    {
    Branch*  _t = (Branch* )  t;

    _out = 2;
    return;
  
    break;
  }

 }
}

}
