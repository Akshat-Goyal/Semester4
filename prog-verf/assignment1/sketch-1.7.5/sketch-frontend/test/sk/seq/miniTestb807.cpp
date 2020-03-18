#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb807.h"
namespace ANONYMOUS{

Leaf* Leaf::create(int  v_, int  b_){
  void* temp= malloc( sizeof(Leaf)  ); 
  Leaf* rv = new (temp)Leaf();
  rv->v =  v_;
  rv->b =  b_;
  rv->type= Tree::LEAF_type;
  return rv;
}
Branch* Branch::create(Tree*  l_, Tree*  r_, int  v_){
  void* temp= malloc( sizeof(Branch)  ); 
  Branch* rv = new (temp)Branch();
  rv->l =  l_;
  rv->r =  r_;
  rv->v =  v_;
  rv->type= Tree::BRANCH_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  Leaf*  l1=Leaf::create(5, 6);
  assert ((l1->b) == (6));;
}

}
