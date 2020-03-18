#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb865.h"
namespace String_adt{

template<typename T_0>
Str* Str::create(int  n_, T_0* s_, int s_len){
  int tlen_s = n_; 
  void* temp= malloc( sizeof(Str)   + sizeof(char )*tlen_s); 
  Str* rv = new (temp)Str();
  rv->n =  n_;
  CopyArr(rv->s, s_, tlen_s, s_len ); 
  rv->type= T::STR_type;
  return rv;
}
Len* Len::create(T*  t_){
  void* temp= malloc( sizeof(Len)  ); 
  Len* rv = new (temp)Len();
  rv->t =  t_;
  rv->type= T::LEN_type;
  return rv;
}
Concat* Concat::create(T*  t1_, T*  t2_){
  void* temp= malloc( sizeof(Concat)  ); 
  Concat* rv = new (temp)Concat();
  rv->t1 =  t1_;
  rv->t2 =  t2_;
  rv->type= T::CONCAT_type;
  return rv;
}
Plus* Plus::create(T*  left_, T*  right_){
  void* temp= malloc( sizeof(Plus)  ); 
  Plus* rv = new (temp)Plus();
  rv->left =  left_;
  rv->right =  right_;
  rv->type= T::PLUS_type;
  return rv;
}
Error* Error::create(){
  void* temp= malloc( sizeof(Error)  ); 
  Error* rv = new (temp)Error();
  rv->type= T::ERROR_type;
  return rv;
}
Object* Object::create(int  __cid_, T*  t_){
  void* temp= malloc( sizeof(Object)  ); 
  Object* rv = new (temp)Object();
  rv->__cid =  __cid_;
  rv->t =  t_;
  return rv;
}
void mn__Wrapper() {
  mn();
}
void mn__WrapperNospec() {}
void mn() {
  Object*  s1_s19=NULL;
  string(s1_s19);
  Object*  s2_s21=NULL;
  string(s2_s21);
  Object*  s3_s23=NULL;
  string(s3_s23);
  Object*  s4_s25=NULL;
  string(s4_s25);
  int  len1_s27=0;
  String(len1_s27);
  Object*  _pac_sc_s28=NULL;
  if ((s1_s19->__cid) == (len1_s27)) {
    Object*  len1_s30=NULL;
    length(s1_s19->t, len1_s30);
    _pac_sc_s28 = len1_s30;
  } else {
    _pac_sc_s28 = NULL;
  }
  int  len2_s32=0;
  String(len2_s32);
  Object*  _pac_sc_s33=NULL;
  if ((s2_s21->__cid) == (len2_s32)) {
    Object*  len2_s35=NULL;
    length(s2_s21->t, len2_s35);
    _pac_sc_s33 = len2_s35;
  } else {
    _pac_sc_s33 = NULL;
  }
  int  len3_s37=0;
  String(len3_s37);
  Object*  _pac_sc_s38=NULL;
  if ((s3_s23->__cid) == (len3_s37)) {
    Object*  len3_s40=NULL;
    length(s3_s23->t, len3_s40);
    _pac_sc_s38 = len3_s40;
  } else {
    _pac_sc_s38 = NULL;
  }
  int  len4_s42=0;
  String(len4_s42);
  Object*  _pac_sc_s43=NULL;
  if ((s4_s25->__cid) == (len4_s42)) {
    Object*  len4_s45=NULL;
    length(s4_s25->t, len4_s45);
    _pac_sc_s43 = len4_s45;
  } else {
    _pac_sc_s43 = NULL;
  }
  Object*  len12_s47=NULL;
  plus(_pac_sc_s28->t, _pac_sc_s33->t, len12_s47);
  Object*  len34_s49=NULL;
  plus(_pac_sc_s38->t, _pac_sc_s43->t, len34_s49);
  Object*  len123_s51=NULL;
  plus(_pac_sc_s28->t, _pac_sc_s33->t, len123_s51);
  Object*  len123_s53=NULL;
  plus(len123_s51->t, _pac_sc_s38->t, len123_s53);
  Object*  len1234_s55=NULL;
  plus(len12_s47->t, len34_s49->t, len1234_s55);
  int  c12_s57=0;
  String(c12_s57);
  Object*  _pac_sc_s58=NULL;
  if ((s1_s19->__cid) == (c12_s57)) {
    Object*  c12_s60=NULL;
    concat(s1_s19->t, s2_s21->t, c12_s60);
    _pac_sc_s58 = c12_s60;
  } else {
    _pac_sc_s58 = NULL;
  }
  int  c34_s62=0;
  String(c34_s62);
  Object*  _pac_sc_s63=NULL;
  if ((s3_s23->__cid) == (c34_s62)) {
    Object*  c34_s65=NULL;
    concat(s3_s23->t, s4_s25->t, c34_s65);
    _pac_sc_s63 = c34_s65;
  } else {
    _pac_sc_s63 = NULL;
  }
  int  cc123_s67=0;
  String(cc123_s67);
  Object*  _pac_sc_s68=NULL;
  if ((_pac_sc_s58->__cid) == (cc123_s67)) {
    Object*  cc123_s70=NULL;
    concat(_pac_sc_s58->t, s3_s23->t, cc123_s70);
    _pac_sc_s68 = cc123_s70;
  } else {
    _pac_sc_s68 = NULL;
  }
  int  lenc12_s72=0;
  String(lenc12_s72);
  Object*  _pac_sc_s73=NULL;
  if ((_pac_sc_s58->__cid) == (lenc12_s72)) {
    Object*  lenc12_s75=NULL;
    length(_pac_sc_s58->t, lenc12_s75);
    _pac_sc_s73 = lenc12_s75;
  } else {
    _pac_sc_s73 = NULL;
  }
  int  lencc123_s77=0;
  String(lencc123_s77);
  Object*  _pac_sc_s78=NULL;
  if ((_pac_sc_s68->__cid) == (lencc123_s77)) {
    Object*  lencc123_s80=NULL;
    length(_pac_sc_s68->t, lencc123_s80);
    _pac_sc_s78 = lencc123_s80;
  } else {
    _pac_sc_s78 = NULL;
  }
  int  lenc34_s82=0;
  String(lenc34_s82);
  Object*  _pac_sc_s83=NULL;
  if ((_pac_sc_s63->__cid) == (lenc34_s82)) {
    Object*  lenc34_s85=NULL;
    length(_pac_sc_s63->t, lenc34_s85);
    _pac_sc_s83 = lenc34_s85;
  } else {
    _pac_sc_s83 = NULL;
  }
  Object*  lenc12lenc34_s87=NULL;
  plus(_pac_sc_s73->t, _pac_sc_s83->t, lenc12lenc34_s87);
  T*  _out_s89=NULL;
  xform(_pac_sc_s78->t, 4, _out_s89);
  bool  _out_s91=0;
  equals_T_s0(_out_s89, len123_s53->t, 6, _out_s91);
  assert (_out_s91);;
}
void string(Object*& _out) {
  int  _out_s111=0;
  String(_out_s111);
  _out = Object::create(_out_s111, Str::create(0, (char*)NULL, 0));
  return;
}
void String(int& _out) {
  _out = 1;
  return;
}
void length(T* t, Object*& _out) {
  int  _out_s107=0;
  String(_out_s107);
  _out = Object::create(_out_s107, Len::create(t));
  return;
}
void plus(T* left, T* right, Object*& _out) {
  int  _out_s105=0;
  String(_out_s105);
  _out = Object::create(_out_s105, Plus::create(left, right));
  return;
}
void concat(T* t1, T* t2, Object*& _out) {
  int  _out_s109=0;
  String(_out_s109);
  _out = Object::create(_out_s109, Concat::create(t1, t2));
  return;
}
void xform(T* t, int d_0, T*& _out) {
  int  d=d_0;
  T*  t2=NULL;
  T*  t1=NULL;
  switch(t->type){
  case Str::STR_type:
    {
    Str*  _t = (Str* )  t;

    _out = _t;
    return;
  
    break;
  }
  case Len::LEN_type:
    {
    Len*  _t = (Len* )  t;

    t1 = _t->t;
  
    break;
  }
  case Plus::PLUS_type:
    {
    Plus*  _t = (Plus* )  t;

    t1 = _t->left;
    t2 = _t->right;
  
    break;
  }
  case Concat::CONCAT_type:
    {
    Concat*  _t = (Concat* )  t;

    t1 = _t->t1;
    t2 = _t->t2;
  
    break;
  }
  case Error::ERROR_type:
    {
    Error*  _t = (Error* )  t;

    _out = _t;
    return;
  
    break;
  }

 }
  if ((t2) != (NULL)) {
    d = d_0 / 0;
    T*  tt1_s93=NULL;
    xform(t1, d, tt1_s93);
    d = d / 0;
    T*  tt2_s95=NULL;
    xform(t2, d, tt2_s95);
    switch(t->type){
    case Concat::CONCAT_type:
        {
        Concat*  _t = (Concat* )  t;

      _out = Concat::create(tt1_s93, tt2_s95);
      return;
    
        break;
    }
    case Plus::PLUS_type:
        {
        Plus*  _t = (Plus* )  t;

      _out = Plus::create(tt1_s93, tt2_s95);
      return;
    
        break;
    }
    case Str::STR_type:
        {
        Str*  _t = (Str* )  t;

      _out = Error::create();
      return;
    
        break;
    }
    case Error::ERROR_type:
        {
        Error*  _t = (Error* )  t;

      _out = Error::create();
      return;
    
        break;
    }
    case Len::LEN_type:
        {
        Len*  _t = (Len* )  t;

      _out = Error::create();
      return;
    
        break;
    }

 }
  } else {
    switch(t1->type){
    case Str::STR_type:
        {
        Str*  _t1 = (Str* )  t1;

      _out = t;
      return;
    
        break;
    }
    case Concat::CONCAT_type:
        {
        Concat*  _t1 = (Concat* )  t1;

      if (((d_0 % 2)) == (0)) {
        d = d_0 / 2;
        T*  tt1_s97=NULL;
        xform(Len::create(_t1->t1), d, tt1_s97);
        d = d / 2;
        T*  tt2_s99=NULL;
        xform(Len::create(_t1->t2), d, tt2_s99);
        _out = Plus::create(tt1_s97, tt2_s99);
        return;
      } else {
        d = d_0 / 2;
        T*  tt1_s101=NULL;
        xform(_t1->t1, d, tt1_s101);
        d = d / 2;
        T*  tt2_s103=NULL;
        xform(_t1->t2, d, tt2_s103);
        _out = Len::create(Concat::create(tt1_s101, tt2_s103));
        return;
      }
    
        break;
    }
    case Len::LEN_type:
        {
        Len*  _t1 = (Len* )  t1;

      _out = Error::create();
      return;
    
        break;
    }
    case Plus::PLUS_type:
        {
        Plus*  _t1 = (Plus* )  t1;

      _out = Error::create();
      return;
    
        break;
    }
    case Error::ERROR_type:
        {
        Error*  _t1 = (Error* )  t1;

      _out = Error::create();
      return;
    
        break;
    }

 }
  }
}
void equals_T_s0(T* left_s1, T* right_s2, int bnd_s3, bool& _out) {
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
  case Str::STR_type:
    {
    Str*  _left_s1 = (Str* )  left_s1;

    switch(right_s2->type){
    case Str::STR_type:
        {
        Str*  _right_s2 = (Str* )  right_s2;

      bool  __sa4=1;
      for (int  __sa5=0;(__sa5) < (_left_s1->n);__sa5 = __sa5 + 1){
        __sa4 = __sa4 && (((_left_s1->s[__sa5])) == ((_right_s2->s[__sa5])));
      }
      _out = ((_left_s1->n) == (_right_s2->n)) && __sa4;
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
  case Len::LEN_type:
    {
    Len*  _left_s1 = (Len* )  left_s1;

    switch(right_s2->type){
    case Len::LEN_type:
        {
        Len*  _right_s2 = (Len* )  right_s2;

      bool  _out_s7=0;
      equals_T_s0(_left_s1->t, _right_s2->t, bnd_s3 - 1, _out_s7);
      _out = _out_s7;
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
  case Concat::CONCAT_type:
    {
    Concat*  _left_s1 = (Concat* )  left_s1;

    switch(right_s2->type){
    case Concat::CONCAT_type:
        {
        Concat*  _right_s2 = (Concat* )  right_s2;

      bool  _pac_sc_s8_s10=0;
      equals_T_s0(_left_s1->t1, _right_s2->t1, bnd_s3 - 1, _pac_sc_s8_s10);
      bool  _pac_sc_s8=0;
      _pac_sc_s8 = _pac_sc_s8_s10;
      if (_pac_sc_s8_s10) {
        bool  _pac_sc_s8_s12=0;
        equals_T_s0(_left_s1->t2, _right_s2->t2, bnd_s3 - 1, _pac_sc_s8_s12);
        _pac_sc_s8 = _pac_sc_s8_s12;
      }
      _out = _pac_sc_s8;
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
  case Plus::PLUS_type:
    {
    Plus*  _left_s1 = (Plus* )  left_s1;

    switch(right_s2->type){
    case Plus::PLUS_type:
        {
        Plus*  _right_s2 = (Plus* )  right_s2;

      bool  _pac_sc_s13_s15=0;
      equals_T_s0(_left_s1->left, _right_s2->left, bnd_s3 - 1, _pac_sc_s13_s15);
      bool  _pac_sc_s13=0;
      _pac_sc_s13 = _pac_sc_s13_s15;
      if (_pac_sc_s13_s15) {
        bool  _pac_sc_s13_s17=0;
        equals_T_s0(_left_s1->right, _right_s2->right, bnd_s3 - 1, _pac_sc_s13_s17);
        _pac_sc_s13 = _pac_sc_s13_s17;
      }
      _out = _pac_sc_s13;
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
  case Error::ERROR_type:
    {
    Error*  _left_s1 = (Error* )  left_s1;

    switch(right_s2->type){
    case Error::ERROR_type:
        {
        Error*  _right_s2 = (Error* )  right_s2;

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
