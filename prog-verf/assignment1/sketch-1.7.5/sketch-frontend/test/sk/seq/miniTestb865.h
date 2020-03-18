#ifndef MINITESTB865_H
#define MINITESTB865_H

#include <cstring>

#include "vops.h"

namespace String_adt{
class T; 
class Str; 
class Len; 
class Concat; 
class Plus; 
class Error; 
class Object; 
}
namespace String_adt{
class T; 
class Str; 
class Len; 
class Concat; 
class Plus; 
class Error; 
class Object; 
class T{
  public:
  typedef enum {STR_type, LEN_type, CONCAT_type, PLUS_type, ERROR_type} _kind;
  _kind type;
  ~T(){
  }
  void operator delete(void* p){ free(p); }
};
class Str : public T{
  public:
  int  n;
  char  s[];
  Str(){}
template<typename T_0>
  static Str* create(  int  n_,   T_0* s_, int s_len);
  ~Str(){
  }
  void operator delete(void* p){ free(p); }
};
class Len : public T{
  public:
  T*  t;
  Len(){}
  static Len* create(  T*  t_);
  ~Len(){
  }
  void operator delete(void* p){ free(p); }
};
class Concat : public T{
  public:
  T*  t1;
  T*  t2;
  Concat(){}
  static Concat* create(  T*  t1_,   T*  t2_);
  ~Concat(){
  }
  void operator delete(void* p){ free(p); }
};
class Plus : public T{
  public:
  T*  left;
  T*  right;
  Plus(){}
  static Plus* create(  T*  left_,   T*  right_);
  ~Plus(){
  }
  void operator delete(void* p){ free(p); }
};
class Error : public T{
  public:
  static Error* create();
  ~Error(){
  }
  void operator delete(void* p){ free(p); }
};
class Object{
  public:
  int  __cid;
  T*  t;
  Object(){}
  static Object* create(  int  __cid_,   T*  t_);
  ~Object(){
  }
  void operator delete(void* p){ free(p); }
};
extern void mn__Wrapper();
extern void mn__WrapperNospec();
extern void mn();
extern void string(Object*& _out);
extern void String(int& _out);
extern void length(T* t, Object*& _out);
extern void plus(T* left, T* right, Object*& _out);
extern void concat(T* t1, T* t2, Object*& _out);
extern void xform(T* t, int d_0, T*& _out);
extern void equals_T_s0(T* left_s1, T* right_s2, int bnd_s3, bool& _out);
}

#endif
