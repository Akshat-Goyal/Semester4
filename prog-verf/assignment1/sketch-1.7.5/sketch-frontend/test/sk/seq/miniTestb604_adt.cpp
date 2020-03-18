#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb604_adt.h"
namespace ANONYMOUS{

template<typename T_0>
Leaf* Leaf::create(int  value_, T_0* str_, int str_len, int  x_){
  int tlen_str = value_; 
  void* temp= malloc( sizeof(Leaf)   + sizeof(char )*tlen_str); 
  Leaf* rv = new (temp)Leaf();
  rv->value =  value_;
  rv->x =  x_;
  CopyArr(rv->str, str_, tlen_str, str_len ); 
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
  Leaf*  leaf1=Leaf::create(5, (char*)NULL, 0, 0);
  leaf1->x = 0;
  char _tt0[5] = {'j', 'e', 'e', 'v', '\0'};
  CopyArr<char >(leaf1->str,_tt0, leaf1->value, 5);
  Branch*  branch=Branch::create(NULL, NULL, 0);
  branch->left = leaf1;
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
