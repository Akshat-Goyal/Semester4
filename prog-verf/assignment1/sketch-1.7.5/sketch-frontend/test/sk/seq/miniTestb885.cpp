#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb885.h"
namespace ANONYMOUS{

template<typename T>
Node<T>* Node<T>::create(T  val_, Tree<T > *  left_, Tree<T > *  right_){
  void* temp= malloc( sizeof(Node<T>)  ); 
  Node<T>* rv = new (temp)Node<T>();
  rv->val =  val_;
  rv->left =  left_;
  rv->right =  right_;
  rv->type= Tree<T>::NODE_type;
  return rv;
}
template<typename T>
Nil<T>* Nil<T>::create(){
  void* temp= malloc( sizeof(Nil<T>)  ); 
  Nil<T>* rv = new (temp)Nil<T>();
  rv->type= Tree<T>::NIL_type;
  return rv;
}
pair* pair::create(int  x_, int  y_){
  void* temp= malloc( sizeof(pair)  ); 
  pair* rv = new (temp)pair();
  rv->x =  x_;
  rv->y =  y_;
  rv->type= opt::PAIR_type;
  return rv;
}
none* none::create(){
  void* temp= malloc( sizeof(none)  ); 
  none* rv = new (temp)none();
  rv->type= opt::NONE_type;
  return rv;
}
void main2__Wrapper(int x, int y, int z, int oth) {
  main2(x, y, z, oth);
}
void main2__WrapperNospec(int x, int y, int z, int oth) {}
void main__Wrapper(int x, int y, int z, int oth) {
  _main(x, y, z, oth);
}
void main__WrapperNospec(int x, int y, int z, int oth) {}
void main2(int x, int y, int z, int oth) {
  Tree<opt* > *  t=NULL;
  t = Nil<opt* >::create();
  Tree<opt* > *  t_s7=NULL;
  add_lt1_eq2T_opt(t, pair::create(x, x), t_s7);
  Tree<opt* > *  t_s9=NULL;
  add_lt1_eq2T_opt(t_s7, pair::create(y, y), t_s9);
  Tree<opt* > *  t_s11=NULL;
  add_lt1_eq2T_opt(t_s9, pair::create(x, z), t_s11);
  opt*  _out_s13=NULL;
  get_lt1_eq2T_opt(t_s11, pair::create(x, x), none::create(), _out_s13);
  bool  _out_s15=0;
  equals_opt_s0(_out_s13, pair::create(x, x), 6, _out_s15);
  assert (_out_s15);;
  opt*  _out_s17=NULL;
  get_lt1_eq2T_opt(t_s11, pair::create(y, y), pair::create(-1, -1), _out_s17);
  bool  _out_s19=0;
  equals_opt_s0(_out_s17, pair::create(y, y), 6, _out_s19);
  assert (_out_s19);;
}
void _main(int x, int y, int z, int oth) {
  Tree<int > *  t=NULL;
  t = Nil<int >::create();
  Tree<int > *  t_s21=NULL;
  add_lt3_eq4T_int(t, x, t_s21);
  Tree<int > *  t_s23=NULL;
  add_lt3_eq4T_int(t_s21, y, t_s23);
  Tree<int > *  t_s25=NULL;
  add_lt3_eq4T_int(t_s23, z, t_s25);
  int  _out_s27=0;
  get_lt3_eq4T_int(t_s25, x, -1, _out_s27);
  assert ((_out_s27) == (x));;
  int  _out_s29=0;
  get_lt3_eq4T_int(t_s25, y, -1, _out_s29);
  assert ((_out_s29) == (y));;
  int  _out_s31=0;
  get_lt3_eq4T_int(t_s25, z, -1, _out_s31);
  assert ((_out_s31) == (z));;
  int  _out_s33=0;
  get_lt3_eq4T_int(t_s25, oth, -1, _out_s33);
  if ((_out_s33) == (oth)) {
    assert ((((oth) == (x)) || ((oth) == (y))) || ((oth) == (z)));;
  }
}
void add_lt1_eq2T_opt(Tree<opt* > * t, opt* val, Tree<opt* > *& _out) {
  Tree<opt* > *  nil=Nil<opt* >::create();
  switch(t->type){
  case Nil<opt* >::NIL_type:
    {
    Nil<opt* > *  _t = (Nil<opt* > * )  t;

    _out = Node<opt* >::create(val, nil, nil);
    return;
  
    break;
  }
  case Node<opt* >::NODE_type:
    {
    Node<opt* > *  _t = (Node<opt* > * )  t;

    opt*  a=_t->val;
    bool  _out_s5=0;
    equals_opt_s0(a, val, 6, _out_s5);
    if (_out_s5) {
      _out = _t;
      return;
    }
    opt*  a_0=_t->val;
    bool  _out_s69=0;
    switch(a_0->type){
    case pair::PAIR_type:
        {
        pair*  _a_0 = (pair* )  a_0;

      switch(val->type){
      case pair::PAIR_type:
            {
            pair*  _val = (pair* )  val;

        _out_s69 = ((_a_0->x) < (_val->x)) || (((_a_0->x) == (_val->x)) && ((_a_0->y) < (_val->y)));
      
            break;
      }
      case none::NONE_type:
            {
            none*  _val = (none* )  val;

        _out_s69 = 0;
      
            break;
      }

 }
    
        break;
    }
    case none::NONE_type:
        {
        none*  _a_0 = (none* )  a_0;

      _out_s69 = 0;
    
        break;
    }

 }
    if (_out_s69) {
      Tree<opt* > *  _out_s71=NULL;
      add_lt1_eq2T_opt(_t->right, val, _out_s71);
      _out = Node<opt* >::create(_t->val, _t->left, _out_s71);
      return;
    } else {
      Tree<opt* > *  _out_s73=NULL;
      add_lt1_eq2T_opt(_t->left, val, _out_s73);
      _out = Node<opt* >::create(_t->val, _out_s73, _t->right);
      return;
    }
  
    break;
  }

 }
}
void get_lt1_eq2T_opt(Tree<opt* > * t, opt* val, opt* deflt, opt*& _out) {
  switch(t->type){
  case Nil<opt* >::NIL_type:
    {
    Nil<opt* > *  _t = (Nil<opt* > * )  t;

    _out = deflt;
    return;
  
    break;
  }
  case Node<opt* >::NODE_type:
    {
    Node<opt* > *  _t = (Node<opt* > * )  t;

    opt*  a=_t->val;
    bool  _out_s5=0;
    equals_opt_s0(a, val, 6, _out_s5);
    if (_out_s5) {
      _out = _t->val;
      return;
    }
    opt*  a_0=_t->val;
    bool  _out_s53=0;
    switch(a_0->type){
    case pair::PAIR_type:
        {
        pair*  _a_0 = (pair* )  a_0;

      switch(val->type){
      case pair::PAIR_type:
            {
            pair*  _val = (pair* )  val;

        _out_s53 = ((_a_0->x) < (_val->x)) || (((_a_0->x) == (_val->x)) && ((_a_0->y) < (_val->y)));
      
            break;
      }
      case none::NONE_type:
            {
            none*  _val = (none* )  val;

        _out_s53 = 0;
      
            break;
      }

 }
    
        break;
    }
    case none::NONE_type:
        {
        none*  _a_0 = (none* )  a_0;

      _out_s53 = 0;
    
        break;
    }

 }
    if (_out_s53) {
      opt*  _out_s55=NULL;
      get_lt1_eq2T_opt_ANONYMOUS(_t->right, val, deflt, _out_s55);
      _out = _out_s55;
      return;
    } else {
      opt*  _out_s57=NULL;
      get_lt1_eq2T_opt_ANONYMOUS(_t->left, val, deflt, _out_s57);
      _out = _out_s57;
      return;
    }
  
    break;
  }

 }
}
void equals_opt_s0(opt* left_s1, opt* right_s2, int bnd_s3, bool& _out) {
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
  case pair::PAIR_type:
    {
    pair*  _left_s1 = (pair* )  left_s1;

    switch(right_s2->type){
    case pair::PAIR_type:
        {
        pair*  _right_s2 = (pair* )  right_s2;

      _out = ((_left_s1->x) == (_right_s2->x)) && ((_left_s1->y) == (_right_s2->y));
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
  case none::NONE_type:
    {
    none*  _left_s1 = (none* )  left_s1;

    switch(right_s2->type){
    case none::NONE_type:
        {
        none*  _right_s2 = (none* )  right_s2;

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
void add_lt3_eq4T_int(Tree<int > * t, int val, Tree<int > *& _out) {
  Tree<int > *  nil=Nil<int >::create();
  switch(t->type){
  case Nil<int >::NIL_type:
    {
    Nil<int > *  _t = (Nil<int > * )  t;

    _out = Node<int >::create(val, nil, nil);
    return;
  
    break;
  }
  case Node<int >::NODE_type:
    {
    Node<int > *  _t = (Node<int > * )  t;

    int  a=_t->val;
    if ((a) == (val)) {
      _out = _t;
      return;
    }
    int  a_0=_t->val;
    if ((a_0) < (val)) {
      Tree<int > *  _out_s47=NULL;
      add_lt3_eq4T_int(_t->right, val, _out_s47);
      _out = Node<int >::create(_t->val, _t->left, _out_s47);
      return;
    } else {
      Tree<int > *  _out_s49=NULL;
      add_lt3_eq4T_int(_t->left, val, _out_s49);
      _out = Node<int >::create(_t->val, _out_s49, _t->right);
      return;
    }
  
    break;
  }

 }
}
void get_lt3_eq4T_int(Tree<int > * t, int val, int deflt, int& _out) {
  switch(t->type){
  case Nil<int >::NIL_type:
    {
    Nil<int > *  _t = (Nil<int > * )  t;

    _out = deflt;
    return;
  
    break;
  }
  case Node<int >::NODE_type:
    {
    Node<int > *  _t = (Node<int > * )  t;

    int  a=_t->val;
    if ((a) == (val)) {
      _out = _t->val;
      return;
    }
    int  a_0=_t->val;
    if ((a_0) < (val)) {
      int  _out_s39=0;
      get_lt3_eq4T_int(_t->right, val, deflt, _out_s39);
      _out = _out_s39;
      return;
    } else {
      int  _out_s41=0;
      get_lt3_eq4T_int(_t->left, val, deflt, _out_s41);
      _out = _out_s41;
      return;
    }
  
    break;
  }

 }
}
void get_lt1_eq2T_opt_ANONYMOUS(Tree<opt* > * t, opt* val, opt* deflt, opt*& _out) {
  switch(t->type){
  case Nil<opt* >::NIL_type:
    {
    Nil<opt* > *  _t = (Nil<opt* > * )  t;

    _out = deflt;
    return;
  
    break;
  }
  case Node<opt* >::NODE_type:
    {
    Node<opt* > *  _t = (Node<opt* > * )  t;

    opt*  a=_t->val;
    bool  _out_s5=0;
    equals_opt_s0(a, val, 6, _out_s5);
    if (_out_s5) {
      _out = _t->val;
      return;
    }
    opt*  a_0=_t->val;
    bool  _out_s61=0;
    switch(a_0->type){
    case pair::PAIR_type:
        {
        pair*  _a_0 = (pair* )  a_0;

      switch(val->type){
      case pair::PAIR_type:
            {
            pair*  _val = (pair* )  val;

        _out_s61 = ((_a_0->x) < (_val->x)) || (((_a_0->x) == (_val->x)) && ((_a_0->y) < (_val->y)));
      
            break;
      }
      case none::NONE_type:
            {
            none*  _val = (none* )  val;

        _out_s61 = 0;
      
            break;
      }

 }
    
        break;
    }
    case none::NONE_type:
        {
        none*  _a_0 = (none* )  a_0;

      _out_s61 = 0;
    
        break;
    }

 }
    if (_out_s61) {
      opt*  _out_s63=NULL;
      get_lt1_eq2T_opt_ANONYMOUS(_t->right, val, deflt, _out_s63);
      _out = _out_s63;
      return;
    } else {
      opt*  _out_s65=NULL;
      get_lt1_eq2T_opt_ANONYMOUS(_t->left, val, deflt, _out_s65);
      _out = _out_s65;
      return;
    }
  
    break;
  }

 }
}

}
