#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb816.h"
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
  Leaf*  l=Leaf::create(4);
  Branch*  b=Branch::create(NULL, NULL, 6);
  Tree*  _out_s13=NULL;
  foo(Leaf::create(0), _out_s13);
  bool  _out_s15=0;
  equals_Tree_s0(l, _out_s13, 6, _out_s15);
  assert (_out_s15);;
  Tree*  _out_s17=NULL;
  foo(Branch::create(NULL, NULL, 0), _out_s17);
  bool  _out_s19=0;
  equals_Tree_s0(b, _out_s17, 6, _out_s19);
  assert (_out_s19);;
}
void foo(Tree* t, Tree*& _out) {
  Leaf*  l=Leaf::create(4);
  Branch*  b=Branch::create(NULL, NULL, 6);
  switch(t->type){
  case Leaf::LEAF_type:
    {
    Leaf*  _t = (Leaf* )  t;

    _out = l;
    return;
  
    break;
  }
  case Branch::BRANCH_type:
    {
    Branch*  _t = (Branch* )  t;

    _out = b;
    return;
  
    break;
  }

 }
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

      bool  _pac_sc_s7_s9=0;
      equals_Tree_s0(_left_s1->l, _right_s2->l, bnd_s3 - 1, _pac_sc_s7_s9);
      bool  _pac_sc_s7=0;
      _pac_sc_s7 = _pac_sc_s7_s9;
      if (_pac_sc_s7_s9) {
        bool  _pac_sc_s7_s11=0;
        equals_Tree_s0(_left_s1->r, _right_s2->r, bnd_s3 - 1, _pac_sc_s7_s11);
        _pac_sc_s7 = _pac_sc_s7_s11;
      }
      bool  _pac_sc_s6=_pac_sc_s7;
      if (_pac_sc_s7) {
        _pac_sc_s6 = (_left_s1->v) == (_right_s2->v);
      }
      _out = _pac_sc_s6;
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
