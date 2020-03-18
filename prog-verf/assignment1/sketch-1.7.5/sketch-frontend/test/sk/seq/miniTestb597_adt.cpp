#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb597_adt.h"
namespace ANONYMOUS{

template<typename T_0>
Leaf* Leaf::create(int  value_, int  x_, T_0* array_, int array_len){
  int tlen_array = 5; 
  void* temp= malloc( sizeof(Leaf)   + sizeof(int )*tlen_array); 
  Leaf* rv = new (temp)Leaf();
  rv->value =  value_;
  rv->x =  x_;
  rv->array= (int* ) (((char*)&(rv->array))   + sizeof(int )*tlen_array); 
  CopyArr(rv->array, array_, tlen_array, array_len ); 
  rv->type= Tree::LEAF_type;
  return rv;
}
template<typename T_0>
Branch* Branch::create(Tree*  left_, Tree*  right_, int  x_, T_0* array_, int array_len){
  int tlen_array = 5; 
  void* temp= malloc( sizeof(Branch)   + sizeof(int )*tlen_array); 
  Branch* rv = new (temp)Branch();
  rv->left =  left_;
  rv->right =  right_;
  rv->x =  x_;
  rv->array= (int* ) (((char*)&(rv->array))   + sizeof(int )*tlen_array); 
  CopyArr(rv->array, array_, tlen_array, array_len ); 
  rv->type= Tree::BRANCH_type;
  return rv;
}
void test__Wrapper() {
  test();
}
void test__WrapperNospec() {}
void test() {
  Leaf*  leaf1=Leaf::create(5, 0, (int*)NULL, 0);
  leaf1->x = 0;
  int _tt0[5] = {1, 2, 3, 4, 5};
  CopyArr<int >(leaf1->array,_tt0, 5, 5);
  Leaf*  leaf2=Leaf::create(4, 0, (int*)NULL, 0);
  Branch*  branch=Branch::create(NULL, NULL, 0, (int*)NULL, 0);
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
