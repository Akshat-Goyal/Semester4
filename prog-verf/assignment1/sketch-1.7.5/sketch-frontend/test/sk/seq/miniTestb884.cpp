#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb884.h"
namespace ANONYMOUS{

template<typename T>
cons<T>* cons<T>::create(T  val_, List<T > *  next_){
  void* temp= malloc( sizeof(cons<T>)  ); 
  cons<T>* rv = new (temp)cons<T>();
  rv->val =  val_;
  rv->next =  next_;
  rv->type= List<T>::CONS_type;
  return rv;
}
template<typename T>
nil<T>* nil<T>::create(){
  void* temp= malloc( sizeof(nil<T>)  ); 
  nil<T>* rv = new (temp)nil<T>();
  rv->type= List<T>::NIL_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  List<int > *  l_s20=NULL;
  single(0, l_s20);
  List<int > *  l_s22=NULL;
  add(l_s20, ((int)(1)), l_s22);
  List<int > *  l_s24=NULL;
  add(l_s22, 2, l_s24);
  List<int > *  l=NULL;
  l = l_s24;
  List<List<int > * > *  ll_s26=NULL;
  single(l_s24, ll_s26);
  List<List<int > * > *  ll_s28=NULL;
  add(ll_s26, l_s24, ll_s28);
  List<List<int > * > *  ll_s30=NULL;
  add(ll_s28, l_s24, ll_s30);
  bool  __sa4_s32=0;
  equals_List_s0(l_s24, nil<int >::create(), 6, __sa4_s32);
  bool  __sa4=0;
  __sa4 = !(__sa4_s32);
  while (__sa4) {
    l = ((cons<int > *)(l))->next;
    bool  __sa4_s34=0;
    equals_List_s0(l, nil<int >::create(), 6, __sa4_s34);
    __sa4 = !(__sa4_s34);
  }
  List<List<int > * > *  nl=nil<List<int > * >::create();
  List<List<int > * > *  tmp=ll_s30;
  bool  __sa9_s36=0;
  equals_List_s5(ll_s30, nl, 6, __sa9_s36);
  bool  __sa9=0;
  __sa9 = !(__sa9_s36);
  while (__sa9) {
    tmp = ((cons<List<int > * > *)(tmp))->next;
    bool  __sa9_s38=0;
    equals_List_s5(tmp, nl, 6, __sa9_s38);
    __sa9 = !(__sa9_s38);
  }
  List<List<int > * > *  tmp_0=ll_s30;
  bool  __sa10=0;
  bool  __sa41=1;
  while (__sa41) {
    tmp_0 = ((cons<List<int > * > *)(tmp_0))->next;
    bool  __sa10_s40=0;
    equals_List_s5(tmp_0, nl, 6, __sa10_s40);
    __sa10 = !(__sa10_s40);
    __sa41 = __sa10;
  }
}
template<typename T>
void single(T x, List<T > *& _out) {
  _out = cons<T >::create(x, nil<T >::create());
  return;
}
template<typename T>
void add(List<T > * lst, T val, List<T > *& _out) {
  _out = cons<T >::create(val, lst);
  return;
}
void equals_List_s0(List<int > * left_s1, List<int > * right_s2, int bnd_s3, bool& _out) {
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
  case cons<int >::CONS_type:
    {
    cons<int > *  _left_s1 = (cons<int > * )  left_s1;

    switch(right_s2->type){
    case cons<int >::CONS_type:
        {
        cons<int > *  _right_s2 = (cons<int > * )  right_s2;

      bool  _pac_sc_s11=(_left_s1->val) == (_right_s2->val);
      if (_pac_sc_s11) {
        bool  _pac_sc_s11_s13=0;
        equals_List_s0(_left_s1->next, _right_s2->next, bnd_s3 - 1, _pac_sc_s11_s13);
        _pac_sc_s11 = _pac_sc_s11_s13;
      }
      _out = _pac_sc_s11;
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
  case nil<int >::NIL_type:
    {
    nil<int > *  _left_s1 = (nil<int > * )  left_s1;

    switch(right_s2->type){
    case nil<int >::NIL_type:
        {
        nil<int > *  _right_s2 = (nil<int > * )  right_s2;

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
void equals_List_s5(List<List<int > * > * left_s6, List<List<int > * > * right_s7, int bnd_s8, bool& _out) {
  if ((bnd_s8) <= (0)) {
    _out = 0;
    return;
  }
  if (((left_s6) == (NULL)) && ((right_s7) == (NULL))) {
    _out = 1;
    return;
  }
  if ((left_s6) == (NULL)) {
    _out = 0;
    return;
  }
  if ((right_s7) == (NULL)) {
    _out = 0;
    return;
  }
  switch(left_s6->type){
  case cons<List<int > * >::CONS_type:
    {
    cons<List<int > * > *  _left_s6 = (cons<List<int > * > * )  left_s6;

    switch(right_s7->type){
    case cons<List<int > * >::CONS_type:
        {
        cons<List<int > * > *  _right_s7 = (cons<List<int > * > * )  right_s7;

      bool  _pac_sc_s14_s16=0;
      equals_List_s0(_left_s6->val, _right_s7->val, bnd_s8 - 1, _pac_sc_s14_s16);
      bool  _pac_sc_s14=0;
      _pac_sc_s14 = _pac_sc_s14_s16;
      if (_pac_sc_s14_s16) {
        bool  _pac_sc_s14_s18=0;
        equals_List_s5(_left_s6->next, _right_s7->next, bnd_s8 - 1, _pac_sc_s14_s18);
        _pac_sc_s14 = _pac_sc_s14_s18;
      }
      _out = _pac_sc_s14;
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
  case nil<List<int > * >::NIL_type:
    {
    nil<List<int > * > *  _left_s6 = (nil<List<int > * > * )  left_s6;

    switch(right_s7->type){
    case nil<List<int > * >::NIL_type:
        {
        nil<List<int > * > *  _right_s7 = (nil<List<int > * > * )  right_s7;

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
