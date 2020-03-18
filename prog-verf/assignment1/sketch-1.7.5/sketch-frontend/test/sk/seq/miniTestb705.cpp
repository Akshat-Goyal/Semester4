#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb705.h"
namespace ANONYMOUS{

Num* Num::create(int  val_){
  void* temp= malloc( sizeof(Num)  ); 
  Num* rv = new (temp)Num();
  rv->val =  val_;
  rv->type= E::NUM_type;
  return rv;
}
Var* Var::create(int  name_){
  void* temp= malloc( sizeof(Var)  ); 
  Var* rv = new (temp)Var();
  rv->name =  name_;
  rv->type= E::VAR_type;
  return rv;
}
Abs* Abs::create(int  var_, E*  a_){
  void* temp= malloc( sizeof(Abs)  ); 
  Abs* rv = new (temp)Abs();
  rv->var =  var_;
  rv->a =  a_;
  rv->type= E::ABS_type;
  return rv;
}
App* App::create(E*  a_, E*  b_){
  void* temp= malloc( sizeof(App)  ); 
  App* rv = new (temp)App();
  rv->a =  a_;
  rv->b =  b_;
  rv->type= E::APP_type;
  return rv;
}
Int* Int::create(){
  void* temp= malloc( sizeof(Int)  ); 
  Int* rv = new (temp)Int();
  rv->type= Type::INT_type;
  return rv;
}
Function* Function::create(Type*  in_, Type*  out_){
  void* temp= malloc( sizeof(Function)  ); 
  Function* rv = new (temp)Function();
  rv->in =  in_;
  rv->out =  out_;
  rv->type= Type::FUNCTION_type;
  return rv;
}
Unknown* Unknown::create(int  id_){
  void* temp= malloc( sizeof(Unknown)  ); 
  Unknown* rv = new (temp)Unknown();
  rv->id =  id_;
  rv->type= Type::UNKNOWN_type;
  return rv;
}
Equals* Equals::create(Type*  l_, Type*  r_){
  void* temp= malloc( sizeof(Equals)  ); 
  Equals* rv = new (temp)Equals();
  rv->l =  l_;
  rv->r =  r_;
  rv->type= Constraint::EQUALS_type;
  return rv;
}
And* And::create(Constraint*  a_, Constraint*  b_){
  void* temp= malloc( sizeof(And)  ); 
  And* rv = new (temp)And();
  rv->a =  a_;
  rv->b =  b_;
  rv->type= Constraint::AND_type;
  return rv;
}
void main8__Wrapper(int id_0) {
  main8(id_0);
}
void main8__WrapperNospec(int id_0) {}
void main7__Wrapper(int id_0) {
  main7(id_0);
}
void main7__WrapperNospec(int id_0) {}
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
void main8(int id_0) {
  Type**  envt= new Type* [32]; CopyArr<Type* >(envt,NULL, 32, 0);
  for (int  i=0;(i) < (32);i = i + 1){
    (envt[i]) = NULL;
  }
  (envt[0]) = Unknown::create(1);
  Constraint*  out_s50=NULL;
  int  id=1;
  Type* * _tt0= new Type* [32]; 
  CopyArr<Type*>(_tt0,envt, 32, 32);
  getConstraints(Var::create(0), Unknown::create(id_0), _tt0, id, out_s50);
  Constraint*  exp=Equals::create(Unknown::create(1), Unknown::create(id_0));
  bool  _out_s52=0;
  equals_Constraint_s0(exp, out_s50, 6, _out_s52);
  assert (_out_s52);;
  delete[] envt;
  delete[] _tt0;
}
void main7(int id_0) {
  Type**  envt= new Type* [32]; CopyArr<Type* >(envt,NULL, 32, 0);
  for (int  i=0;(i) < (32);i = i + 1){
    (envt[i]) = NULL;
  }
  Constraint*  out_s70=NULL;
  int  id=1;
  Type* * _tt1= new Type* [32]; 
  CopyArr<Type*>(_tt1,envt, 32, 32);
  getConstraints(Num::create(1), Unknown::create(id_0), _tt1, id, out_s70);
  Constraint*  exp=Equals::create(Int::create(), Unknown::create(id_0));
  bool  _out_s72=0;
  equals_Constraint_s0(exp, out_s70, 6, _out_s72);
  assert (_out_s72);;
  delete[] envt;
  delete[] _tt1;
}
void main6() {
  Type**  envt= new Type* [32]; CopyArr<Type* >(envt,NULL, 32, 0);
  for (int  i=0;(i) < (32);i = i + 1){
    (envt[i]) = NULL;
  }
  Constraint*  out_s74=NULL;
  int  id=1;
  Type* * _tt2= new Type* [32]; 
  CopyArr<Type*>(_tt2,envt, 32, 32);
  getConstraints(Abs::create(0, Var::create(0)), Unknown::create(33), _tt2, id, out_s74);
  Constraint*  exp=And::create(Equals::create(Unknown::create(0), Unknown::create(1)), Equals::create(Unknown::create(33), Function::create(Unknown::create(0), Unknown::create(1))));
  bool  _out_s76=0;
  equals_Constraint_s0(exp, out_s74, 6, _out_s76);
  assert (_out_s76);;
  delete[] envt;
  delete[] _tt2;
}
void main5() {
  Type**  envt= new Type* [32]; CopyArr<Type* >(envt,NULL, 32, 0);
  for (int  i=0;(i) < (32);i = i + 1){
    (envt[i]) = NULL;
  }
  Constraint*  out_s78=NULL;
  int  id=1;
  Type* * _tt3= new Type* [32]; 
  CopyArr<Type*>(_tt3,envt, 32, 32);
  getConstraints(Abs::create(0, Num::create(0)), Unknown::create(33), _tt3, id, out_s78);
  Constraint*  exp=And::create(Equals::create(Int::create(), Unknown::create(1)), Equals::create(Unknown::create(33), Function::create(Unknown::create(0), Unknown::create(1))));
  bool  _out_s80=0;
  equals_Constraint_s0(exp, out_s78, 6, _out_s80);
  assert (_out_s80);;
  delete[] envt;
  delete[] _tt3;
}
void main4() {
  Type**  envt= new Type* [32]; CopyArr<Type* >(envt,NULL, 32, 0);
  for (int  i=0;(i) < (32);i = i + 1){
    (envt[i]) = NULL;
  }
  Constraint*  out_s82=NULL;
  int  id=1;
  Type* * _tt4= new Type* [32]; 
  CopyArr<Type*>(_tt4,envt, 32, 32);
  getConstraints(App::create(Abs::create(0, Var::create(0)), Num::create(1)), Unknown::create(33), _tt4, id, out_s82);
  Constraint*  exp=And::create(And::create(Equals::create(Unknown::create(0), Unknown::create(1)), Equals::create(Function::create(Unknown::create(4), Unknown::create(33)), Function::create(Unknown::create(0), Unknown::create(1)))), Equals::create(Int::create(), Unknown::create(4)));
  bool  _out_s84=0;
  equals_Constraint_s0(exp, out_s82, 6, _out_s84);
  assert (_out_s84);;
  delete[] envt;
  delete[] _tt4;
}
void main3() {
  Type**  envt= new Type* [32]; CopyArr<Type* >(envt,NULL, 32, 0);
  for (int  i=0;(i) < (32);i = i + 1){
    (envt[i]) = NULL;
  }
  (envt[1]) = Unknown::create(5);
  Constraint*  out_s86=NULL;
  int  id=1;
  Type* * _tt5= new Type* [32]; 
  CopyArr<Type*>(_tt5,envt, 32, 32);
  getConstraints(App::create(Abs::create(0, Var::create(0)), Var::create(1)), Unknown::create(33), _tt5, id, out_s86);
  Constraint*  exp=And::create(And::create(Equals::create(Unknown::create(0), Unknown::create(1)), Equals::create(Function::create(Unknown::create(4), Unknown::create(33)), Function::create(Unknown::create(0), Unknown::create(1)))), Equals::create(Unknown::create(5), Unknown::create(4)));
  bool  _out_s88=0;
  equals_Constraint_s0(exp, out_s86, 6, _out_s88);
  assert (_out_s88);;
  delete[] envt;
  delete[] _tt5;
}
void main2() {
  Type**  envt= new Type* [32]; CopyArr<Type* >(envt,NULL, 32, 0);
  for (int  i=0;(i) < (32);i = i + 1){
    (envt[i]) = NULL;
  }
  (envt[1]) = Unknown::create(5);
  Constraint*  out_s90=NULL;
  int  id=1;
  Type* * _tt6= new Type* [32]; 
  CopyArr<Type*>(_tt6,envt, 32, 32);
  getConstraints(App::create(Abs::create(0, Num::create(1)), Num::create(2)), Unknown::create(33), _tt6, id, out_s90);
  Constraint*  exp=And::create(And::create(Equals::create(Int::create(), Unknown::create(1)), Equals::create(Function::create(Unknown::create(4), Unknown::create(33)), Function::create(Unknown::create(0), Unknown::create(1)))), Equals::create(Int::create(), Unknown::create(4)));
  bool  _out_s92=0;
  equals_Constraint_s0(exp, out_s90, 6, _out_s92);
  assert (_out_s92);;
  delete[] envt;
  delete[] _tt6;
}
void main1() {
  Type**  envt= new Type* [32]; CopyArr<Type* >(envt,NULL, 32, 0);
  for (int  i=0;(i) < (32);i = i + 1){
    (envt[i]) = NULL;
  }
  (envt[1]) = Unknown::create(5);
  Constraint*  out_s94=NULL;
  int  id=1;
  Type* * _tt7= new Type* [32]; 
  CopyArr<Type*>(_tt7,envt, 32, 32);
  getConstraints(App::create(Abs::create(0, Num::create(1)), Var::create(1)), Unknown::create(33), _tt7, id, out_s94);
  Constraint*  exp=And::create(And::create(Equals::create(Int::create(), Unknown::create(1)), Equals::create(Function::create(Unknown::create(4), Unknown::create(33)), Function::create(Unknown::create(0), Unknown::create(1)))), Equals::create(Unknown::create(5), Unknown::create(4)));
  bool  _out_s96=0;
  equals_Constraint_s0(exp, out_s94, 6, _out_s96);
  assert (_out_s96);;
  delete[] envt;
  delete[] _tt7;
}
void getConstraints(E* e, Type* t, Type** envt_0/* len = 32 */, int& id, Constraint*& _out) {
  Type**  envt= new Type* [32]; CopyArr<Type* >(envt,envt_0, 32, 32);
  if ((e) == (NULL)) {
    _out = NULL;
  delete[] envt;
    return;
  }
  int  uo_s8=id;
  id = id + 1;
  id = id + 1;
  switch(e->type){
  case Num::NUM_type:
    {
    Num*  _e = (Num* )  e;

    Type*  Type_=NULL;
    (envt[_e->val]) = Type_;
    Type*  tmp=Unknown::create(uo_s8);
    Constraint*  a_s54=NULL;
    Type* * _tt8= new Type* [32]; 
    CopyArr<Type*>(_tt8,envt, 32, 32);
    getConstraints(NULL, tmp, _tt8, id, a_s54);
    Type*  tmp_0=Unknown::create(uo_s8);
    Constraint*  b_s56=NULL;
    Type* * _tt9= new Type* [32]; 
    CopyArr<Type*>(_tt9,envt, 32, 32);
    getConstraints(NULL, tmp_0, _tt9, id, b_s56);
    Type*  Type__0=Int::create();
    _out = Equals::create(Type__0, t);
    delete[] _tt8;
    delete[] _tt9;
  delete[] envt;
    return;
  
    break;
  }
  case Var::VAR_type:
    {
    Var*  _e = (Var* )  e;

    Type*  t1=(envt_0[_e->name]);
    Type*  Type__1=Int::create();
    Constraint*  a_s58=NULL;
    Type* * _tt10= new Type* [32]; 
    CopyArr<Type*>(_tt10,envt_0, 32, 32);
    getConstraints(NULL, Type__1, _tt10, id, a_s58);
    Type*  Type__2=Int::create();
    Constraint*  b_s60=NULL;
    Type* * _tt11= new Type* [32]; 
    CopyArr<Type*>(_tt11,envt_0, 32, 32);
    getConstraints(NULL, Type__2, _tt11, id, b_s60);
    _out = Equals::create(t1, t);
    delete[] _tt10;
    delete[] _tt11;
  delete[] envt;
    return;
  
    break;
  }
  case Abs::ABS_type:
    {
    Abs*  _e = (Abs* )  e;

    Type*  Type__3=Unknown::create(0);
    (envt[_e->var]) = Type__3;
    Type*  Type__4=Unknown::create(1);
    Constraint*  a_s62=NULL;
    Type* * _tt12= new Type* [32]; 
    CopyArr<Type*>(_tt12,envt, 32, 32);
    getConstraints(_e->a, Type__4, _tt12, id, a_s62);
    Type*  tmp_1=Unknown::create(uo_s8);
    Constraint*  b_s64=NULL;
    Type* * _tt13= new Type* [32]; 
    CopyArr<Type*>(_tt13,envt, 32, 32);
    getConstraints(_e->a, tmp_1, _tt13, id, b_s64);
    Type*  Type__s1489=Unknown::create(0);
    Type*  Type__s1496=Unknown::create(1);
    Type*  r=Function::create(Type__s1489, Type__s1496);
    Constraint*  Constraint_=Equals::create(t, r);
    _out = And::create(a_s62, Constraint_);
    delete[] _tt12;
    delete[] _tt13;
  delete[] envt;
    return;
  
    break;
  }
  case App::APP_type:
    {
    App*  _e = (App* )  e;

    Type*  Type__5=Int::create();
    (envt[0]) = Type__5;
    Type*  in=Unknown::create(4);
    Type*  Type__6=Function::create(in, t);
    Constraint*  a_s66=NULL;
    Type* * _tt14= new Type* [32]; 
    CopyArr<Type*>(_tt14,envt, 32, 32);
    getConstraints(_e->a, Type__6, _tt14, id, a_s66);
    Type*  Type__7=Unknown::create(4);
    Constraint*  b_s68=NULL;
    Type* * _tt15= new Type* [32]; 
    CopyArr<Type*>(_tt15,envt, 32, 32);
    getConstraints(_e->b, Type__7, _tt15, id, b_s68);
    _out = And::create(a_s66, b_s68);
    delete[] _tt14;
    delete[] _tt15;
  delete[] envt;
    return;
  
    break;
  }

 }
}
void equals_Constraint_s0(Constraint* left_s1, Constraint* right_s2, int bnd_s3, bool& _out) {
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
  case Equals::EQUALS_type:
    {
    Equals*  _left_s1 = (Equals* )  left_s1;

    switch(right_s2->type){
    case Equals::EQUALS_type:
        {
        Equals*  _right_s2 = (Equals* )  right_s2;

      bool  _pac_sc_s39_s41=0;
      equals_Type_s4(_left_s1->l, _right_s2->l, bnd_s3 - 1, _pac_sc_s39_s41);
      bool  _pac_sc_s39=0;
      _pac_sc_s39 = _pac_sc_s39_s41;
      if (_pac_sc_s39_s41) {
        bool  _pac_sc_s39_s43=0;
        equals_Type_s4(_left_s1->r, _right_s2->r, bnd_s3 - 1, _pac_sc_s39_s43);
        _pac_sc_s39 = _pac_sc_s39_s43;
      }
      _out = _pac_sc_s39;
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
  case And::AND_type:
    {
    And*  _left_s1 = (And* )  left_s1;

    switch(right_s2->type){
    case And::AND_type:
        {
        And*  _right_s2 = (And* )  right_s2;

      bool  _pac_sc_s44_s46=0;
      equals_Constraint_s0(_left_s1->a, _right_s2->a, bnd_s3 - 1, _pac_sc_s44_s46);
      bool  _pac_sc_s44=0;
      _pac_sc_s44 = _pac_sc_s44_s46;
      if (_pac_sc_s44_s46) {
        bool  _pac_sc_s44_s48=0;
        equals_Constraint_s0(_left_s1->b, _right_s2->b, bnd_s3 - 1, _pac_sc_s44_s48);
        _pac_sc_s44 = _pac_sc_s44_s48;
      }
      _out = _pac_sc_s44;
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
void equals_Type_s4(Type* left_s5, Type* right_s6, int bnd_s7, bool& _out) {
  if ((bnd_s7) <= (0)) {
    _out = 0;
    return;
  }
  if (((left_s5) == (NULL)) && ((right_s6) == (NULL))) {
    _out = 1;
    return;
  }
  if ((left_s5) == (NULL)) {
    _out = 0;
    return;
  }
  if ((right_s6) == (NULL)) {
    _out = 0;
    return;
  }
  switch(left_s5->type){
  case Int::INT_type:
    {
    Int*  _left_s5 = (Int* )  left_s5;

    switch(right_s6->type){
    case Int::INT_type:
        {
        Int*  _right_s6 = (Int* )  right_s6;

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
  case Function::FUNCTION_type:
    {
    Function*  _left_s5 = (Function* )  left_s5;

    switch(right_s6->type){
    case Function::FUNCTION_type:
        {
        Function*  _right_s6 = (Function* )  right_s6;

      bool  _pac_sc_s34_s36=0;
      equals_Type_s4(_left_s5->in, _right_s6->in, bnd_s7 - 1, _pac_sc_s34_s36);
      bool  _pac_sc_s34=0;
      _pac_sc_s34 = _pac_sc_s34_s36;
      if (_pac_sc_s34_s36) {
        bool  _pac_sc_s34_s38=0;
        equals_Type_s4(_left_s5->out, _right_s6->out, bnd_s7 - 1, _pac_sc_s34_s38);
        _pac_sc_s34 = _pac_sc_s34_s38;
      }
      _out = _pac_sc_s34;
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
  case Unknown::UNKNOWN_type:
    {
    Unknown*  _left_s5 = (Unknown* )  left_s5;

    switch(right_s6->type){
    case Unknown::UNKNOWN_type:
        {
        Unknown*  _right_s6 = (Unknown* )  right_s6;

      _out = (_left_s5->id) == (_right_s6->id);
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
