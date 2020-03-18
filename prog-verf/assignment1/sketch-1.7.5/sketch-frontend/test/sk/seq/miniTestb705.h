#ifndef MINITESTB705_H
#define MINITESTB705_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class E; 
class Num; 
class Var; 
class Abs; 
class App; 
class Type; 
class Int; 
class Function; 
class Unknown; 
class Constraint; 
class Equals; 
class And; 
}
namespace ANONYMOUS{
class E; 
class Num; 
class Var; 
class Abs; 
class App; 
class Type; 
class Int; 
class Function; 
class Unknown; 
class Constraint; 
class Equals; 
class And; 
class E{
  public:
  typedef enum {NUM_type, VAR_type, ABS_type, APP_type} _kind;
  _kind type;
  ~E(){
  }
  void operator delete(void* p){ free(p); }
};
class Num : public E{
  public:
  int  val;
  Num(){}
  static Num* create(  int  val_);
  ~Num(){
  }
  void operator delete(void* p){ free(p); }
};
class Var : public E{
  public:
  int  name;
  Var(){}
  static Var* create(  int  name_);
  ~Var(){
  }
  void operator delete(void* p){ free(p); }
};
class Abs : public E{
  public:
  int  var;
  E*  a;
  Abs(){}
  static Abs* create(  int  var_,   E*  a_);
  ~Abs(){
  }
  void operator delete(void* p){ free(p); }
};
class App : public E{
  public:
  E*  a;
  E*  b;
  App(){}
  static App* create(  E*  a_,   E*  b_);
  ~App(){
  }
  void operator delete(void* p){ free(p); }
};
class Type{
  public:
  typedef enum {INT_type, FUNCTION_type, UNKNOWN_type} _kind;
  _kind type;
  ~Type(){
  }
  void operator delete(void* p){ free(p); }
};
class Int : public Type{
  public:
  static Int* create();
  ~Int(){
  }
  void operator delete(void* p){ free(p); }
};
class Function : public Type{
  public:
  Type*  in;
  Type*  out;
  Function(){}
  static Function* create(  Type*  in_,   Type*  out_);
  ~Function(){
  }
  void operator delete(void* p){ free(p); }
};
class Unknown : public Type{
  public:
  int  id;
  Unknown(){}
  static Unknown* create(  int  id_);
  ~Unknown(){
  }
  void operator delete(void* p){ free(p); }
};
class Constraint{
  public:
  typedef enum {EQUALS_type, AND_type} _kind;
  _kind type;
  ~Constraint(){
  }
  void operator delete(void* p){ free(p); }
};
class Equals : public Constraint{
  public:
  Type*  l;
  Type*  r;
  Equals(){}
  static Equals* create(  Type*  l_,   Type*  r_);
  ~Equals(){
  }
  void operator delete(void* p){ free(p); }
};
class And : public Constraint{
  public:
  Constraint*  a;
  Constraint*  b;
  And(){}
  static And* create(  Constraint*  a_,   Constraint*  b_);
  ~And(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main8__Wrapper(int id_0);
extern void main8__WrapperNospec(int id_0);
extern void main7__Wrapper(int id_0);
extern void main7__WrapperNospec(int id_0);
extern void main6__Wrapper();
extern void main6__WrapperNospec();
extern void main5__Wrapper();
extern void main5__WrapperNospec();
extern void main4__Wrapper();
extern void main4__WrapperNospec();
extern void main3__Wrapper();
extern void main3__WrapperNospec();
extern void main2__Wrapper();
extern void main2__WrapperNospec();
extern void main1__Wrapper();
extern void main1__WrapperNospec();
extern void main8(int id_0);
extern void main7(int id_0);
extern void main6();
extern void main5();
extern void main4();
extern void main3();
extern void main2();
extern void main1();
extern void getConstraints(E* e, Type* t, Type** envt_0/* len = 32 */, int& id, Constraint*& _out);
extern void equals_Constraint_s0(Constraint* left_s1, Constraint* right_s2, int bnd_s3, bool& _out);
extern void equals_Type_s4(Type* left_s5, Type* right_s6, int bnd_s7, bool& _out);
}

#endif
