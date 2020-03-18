#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb806.h"
namespace ANONYMOUS{

Leaf* Leaf::create(int  v_){
  void* temp= malloc( sizeof(Leaf)  ); 
  Leaf* rv = new (temp)Leaf();
  rv->v =  v_;
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
  Leaf*  l1=Leaf::create(5);
  Branch*  b1=Branch::create(l1, NULL, 4);
  bool  _out_s12=0;
  equals_Tree_s0(b1, b1, 6, _out_s12);
  assert (_out_s12);;
}
void equals_Tree_s0(Tree* left_s1, Tree* right_s2, int bnd_s3, bool& _out) {
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
  switch(left_s1->type){
  case Leaf::LEAF_type:
    {
    Leaf*  _left_s1 = (Leaf* )  left_s1;

    switch(right_s2->type){
    case Leaf::LEAF_type:
        {
        Leaf*  _right_s2 = (Leaf* )  right_s2;

      _out = (_left_s1->v) == (_right_s2->v);
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }
  case Branch::BRANCH_type:
    {
    Branch*  _left_s1 = (Branch* )  left_s1;

    switch(right_s2->type){
    case Branch::BRANCH_type:
        {
        Branch*  _right_s2 = (Branch* )  right_s2;

      bool  _pac_sc_s6_s8=0;
      equals_Tree_s0(_left_s1->l, _right_s2->l, bnd_s3 - 1, _pac_sc_s6_s8);
      bool  _pac_sc_s6=0;
      _pac_sc_s6 = _pac_sc_s6_s8;
      if (_pac_sc_s6_s8) {
        bool  _pac_sc_s6_s10=0;
        equals_Tree_s0(_left_s1->r, _right_s2->r, bnd_s3 - 1, _pac_sc_s6_s10);
        _pac_sc_s6 = _pac_sc_s6_s10;
      }
      bool  _pac_sc_s5=_pac_sc_s6;
      if (_pac_sc_s6) {
        _pac_sc_s5 = (_left_s1->v) == (_right_s2->v);
      }
      _out = _pac_sc_s5;
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }

 }
}

}
