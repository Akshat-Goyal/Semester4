#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb706.h"
namespace ANONYMOUS{

Branch* Branch::create(int  value_, BinaryTree*  l_, BinaryTree*  r_){
  void* temp= malloc( sizeof(Branch)  ); 
  Branch* rv = new (temp)Branch();
  rv->value =  value_;
  rv->l =  l_;
  rv->r =  r_;
  rv->type= BinaryTree::BRANCH_type;
  return rv;
}
Leaf* Leaf::create(int  value_){
  void* temp= malloc( sizeof(Leaf)  ); 
  Leaf* rv = new (temp)Leaf();
  rv->value =  value_;
  rv->type= BinaryTree::LEAF_type;
  return rv;
}
Empty* Empty::create(){
  void* temp= malloc( sizeof(Empty)  ); 
  Empty* rv = new (temp)Empty();
  rv->type= BinaryTree::EMPTY_type;
  return rv;
}
void main7__Wrapper() {
  main7();
}
void main7__WrapperNospec() {}
void main6__Wrapper() {
  main6();
}
void main6__WrapperNospec() {}
void main5__Wrapper() {
  main5();
}
void main5__WrapperNospec() {}
void main4__Wrapper() {
  main4();
}
void main4__WrapperNospec() {}
void main3__Wrapper() {
  main3();
}
void main3__WrapperNospec() {}
void main2__Wrapper() {
  main2();
}
void main2__WrapperNospec() {}
void main1__Wrapper() {
  main1();
}
void main1__WrapperNospec() {}
void main7() {
  BinaryTree*  in=Leaf::create(3);
  BinaryTree*  out_s17=NULL;
  insertNode(in, 4, out_s17);
  BinaryTree*  exp=Branch::create(3, Empty::create(), Leaf::create(4));
  bool  _out_s19=0;
  equals_BinaryTree_s0(exp, out_s17, 6, _out_s19);
  assert (_out_s19);;
}
void main6() {
  BinaryTree*  in=Leaf::create(3);
  BinaryTree*  out_s33=NULL;
  insertNode(in, 2, out_s33);
  BinaryTree*  exp=Branch::create(3, Leaf::create(2), Empty::create());
  bool  _out_s35=0;
  equals_BinaryTree_s0(exp, out_s33, 6, _out_s35);
  assert (_out_s35);;
}
void main5() {
  BinaryTree*  in=Branch::create(1, Empty::create(), Leaf::create(2));
  BinaryTree*  out_s37=NULL;
  insertNode(in, 3, out_s37);
  BinaryTree*  exp=Branch::create(1, Empty::create(), Branch::create(2, Empty::create(), Leaf::create(3)));
  bool  _out_s39=0;
  equals_BinaryTree_s0(exp, out_s37, 6, _out_s39);
  assert (_out_s39);;
}
void main4() {
  BinaryTree*  in=Branch::create(1, Empty::create(), Leaf::create(3));
  BinaryTree*  out_s41=NULL;
  insertNode(in, 2, out_s41);
  BinaryTree*  exp=Branch::create(1, Empty::create(), Branch::create(3, Leaf::create(2), Empty::create()));
  bool  _out_s43=0;
  equals_BinaryTree_s0(exp, out_s41, 6, _out_s43);
  assert (_out_s43);;
}
void main3() {
  BinaryTree*  in=Branch::create(3, Leaf::create(2), Empty::create());
  BinaryTree*  out_s45=NULL;
  insertNode(in, 1, out_s45);
  BinaryTree*  exp=Branch::create(3, Branch::create(2, Leaf::create(1), Empty::create()), Empty::create());
  bool  _out_s47=0;
  equals_BinaryTree_s0(exp, out_s45, 6, _out_s47);
  assert (_out_s47);;
}
void main2() {
  BinaryTree*  in=Branch::create(2, Leaf::create(1), Empty::create());
  BinaryTree*  out_s49=NULL;
  insertNode(in, 3, out_s49);
  BinaryTree*  exp=Branch::create(2, Leaf::create(1), Leaf::create(3));
  bool  _out_s51=0;
  equals_BinaryTree_s0(exp, out_s49, 6, _out_s51);
  assert (_out_s51);;
}
void main1() {
  BinaryTree*  in=Branch::create(2, Empty::create(), Leaf::create(3));
  BinaryTree*  out_s53=NULL;
  insertNode(in, 1, out_s53);
  BinaryTree*  exp=Branch::create(2, Leaf::create(1), Leaf::create(3));
  bool  _out_s55=0;
  equals_BinaryTree_s0(exp, out_s53, 6, _out_s55);
  assert (_out_s55);;
}
void insertNode(BinaryTree* tree, int x, BinaryTree*& _out) {
  _out = NULL;
  if ((tree) == (NULL)) {
    _out = NULL;
    return;
  }
  switch(tree->type){
  case Branch::BRANCH_type:
    {
    Branch*  _tree = (Branch* )  tree;

    if ((x) >= (_tree->value)) {
      BinaryTree*  l_s21=NULL;
      insertNode(_tree->l, x, l_s21);
      BinaryTree*  r_s23=NULL;
      insertNode(_tree->r, x, r_s23);
      int  tmp=_tree->value;
      BinaryTree*  tmp_0=_tree->l;
      BinaryTree*  BinaryTree_=Branch::create(tmp, tmp_0, r_s23);
      _out = BinaryTree_;
      return;
    }
    BinaryTree*  l_s21_0=NULL;
    insertNode(_tree->r, x, l_s21_0);
    BinaryTree*  r_s23_0=NULL;
    insertNode(_tree->l, x, r_s23_0);
    int  tmp_1=_tree->value;
    BinaryTree*  tmp_2=_tree->r;
    BinaryTree*  BinaryTree__0=Branch::create(tmp_1, r_s23_0, tmp_2);
    _out = BinaryTree__0;
    return;
  
    break;
  }
  case Leaf::LEAF_type:
    {
    Leaf*  _tree = (Leaf* )  tree;

    if ((x) > (_tree->value)) {
      BinaryTree*  l_s25=NULL;
      insertNode(NULL, x, l_s25);
      BinaryTree*  r_s27=NULL;
      insertNode(NULL, x, r_s27);
      int  tmp_3=_tree->value;
      BinaryTree*  l=Empty::create();
      BinaryTree*  r=Leaf::create(x);
      BinaryTree*  BinaryTree__1=Branch::create(tmp_3, l, r);
      _out = BinaryTree__1;
      return;
    }
    if ((x) <= (_tree->value)) {
      BinaryTree*  l_s25_0=NULL;
      insertNode(NULL, x, l_s25_0);
      BinaryTree*  r_s27_0=NULL;
      insertNode(NULL, x, r_s27_0);
      int  tmp_4=_tree->value;
      BinaryTree*  l_0=Leaf::create(x);
      BinaryTree*  r_0=Empty::create();
      BinaryTree*  BinaryTree__2=Branch::create(tmp_4, l_0, r_0);
      _out = BinaryTree__2;
      return;
    }
  
    break;
  }
  case Empty::EMPTY_type:
    {
    Empty*  _tree = (Empty* )  tree;

    BinaryTree*  l_s29=NULL;
    insertNode(NULL, x, l_s29);
    BinaryTree*  r_s31=NULL;
    insertNode(NULL, x, r_s31);
    BinaryTree*  BinaryTree__3=Leaf::create(x);
    _out = BinaryTree__3;
    return;
  
    break;
  }

 }
}
void equals_BinaryTree_s0(BinaryTree* left_s1, BinaryTree* right_s2, int bnd_s3, bool& _out) {
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
  case Branch::BRANCH_type:
    {
    Branch*  _left_s1 = (Branch* )  left_s1;

    switch(right_s2->type){
    case Branch::BRANCH_type:
        {
        Branch*  _right_s2 = (Branch* )  right_s2;

      bool  _pac_sc_s11=(_left_s1->value) == (_right_s2->value);
      if (_pac_sc_s11) {
        bool  _pac_sc_s11_s13=0;
        equals_BinaryTree_s0(_left_s1->l, _right_s2->l, bnd_s3 - 1, _pac_sc_s11_s13);
        _pac_sc_s11 = _pac_sc_s11_s13;
      }
      bool  _pac_sc_s10=_pac_sc_s11;
      if (_pac_sc_s11) {
        bool  _pac_sc_s10_s15=0;
        equals_BinaryTree_s0(_left_s1->r, _right_s2->r, bnd_s3 - 1, _pac_sc_s10_s15);
        _pac_sc_s10 = _pac_sc_s10_s15;
      }
      _out = _pac_sc_s10;
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
  case Leaf::LEAF_type:
    {
    Leaf*  _left_s1 = (Leaf* )  left_s1;

    switch(right_s2->type){
    case Leaf::LEAF_type:
        {
        Leaf*  _right_s2 = (Leaf* )  right_s2;

      _out = (_left_s1->value) == (_right_s2->value);
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
  case Empty::EMPTY_type:
    {
    Empty*  _left_s1 = (Empty* )  left_s1;

    switch(right_s2->type){
    case Empty::EMPTY_type:
        {
        Empty*  _right_s2 = (Empty* )  right_s2;

      _out = 1;
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
