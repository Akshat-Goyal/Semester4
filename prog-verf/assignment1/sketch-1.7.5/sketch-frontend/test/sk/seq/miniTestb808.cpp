#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb808.h"
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
  bool  _out_s6=0;
  equals_Leaf_s0(l1, l1, 6, _out_s6);
  assert (_out_s6);;
}
void equals_Leaf_s0(Leaf* left_s1, Leaf* right_s2, int bnd_s3, bool& _out) {
  if ((bnd_s3) <= (0)) {
    _out = 0;
    return;
  }
  if (((left_s1) == (NULL)) && ((right_s2) == (NULL))) {
    _out = 1;
    return;
  }
  if ((left_s1) == (NULL)) {
    _out = 0;
    return;
  }
  if ((right_s2) == (NULL)) {
    _out = 0;
    return;
  }
  if (!((left_s1->v) == (right_s2->v))) {
    _out = 0;
    return;
  }
  if (!((left_s1->b) == (right_s2->b))) {
    _out = 0;
    return;
  }
  _out = 1;
  return;
}

}
