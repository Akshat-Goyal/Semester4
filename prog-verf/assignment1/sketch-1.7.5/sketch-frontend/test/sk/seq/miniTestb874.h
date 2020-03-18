#ifndef MINITESTB874_H
#define MINITESTB874_H

#include <cstring>

#include "vops.h"

namespace Integer{
}
namespace simple_test{
}
namespace ANONYMOUS{
}
namespace simple_hash{
}
namespace Assert{
}
namespace Number{
}
namespace array{
class Array_bit; 
class Array_char; 
class Array_int; 
class Array_float; 
class Array_double; 
class Array_Object; 
}
namespace meta{
}
namespace ArrayList{
}
namespace Object{
class Object; 
}
namespace String{
}
namespace Integer{
extern void glblInit_MAX_VALUE__Integer_s454(int& MAX_VALUE__Integer_s453);
extern void glblInit_MIN_VALUE__Integer_s456(int& MIN_VALUE__Integer_s455);
extern void Integer_Integer_int(Object::Object* self, int value, Object::Object*& _out);
}
namespace simple_test{
extern void test__Wrapper();
extern void test__WrapperNospec();
extern void test(bool& _out);
}
namespace ANONYMOUS{
}
namespace simple_hash{
extern void simple_hash_simple_hash(Object::Object* self, Object::Object*& _out);
extern void put_int_int(Object::Object* self, int i, int j);
extern void rehashng(Object::Object* self);
}
namespace Assert{
}
namespace Number{
extern void intValue(Object::Object* self, int& _out);
}
namespace array{
class Array_bit; 
class Array_char; 
class Array_int; 
class Array_float; 
class Array_double; 
class Array_Object; 
class Array_bit{
  public:
  int  length;
  bool  A[];
  Array_bit(){}
template<typename T_0>
  static Array_bit* create(  int  length_,   T_0* A_, int A_len);
  ~Array_bit(){
  }
  void operator delete(void* p){ free(p); }
};
class Array_char{
  public:
  int  length;
  char  A[];
  Array_char(){}
template<typename T_0>
  static Array_char* create(  int  length_,   T_0* A_, int A_len);
  ~Array_char(){
  }
  void operator delete(void* p){ free(p); }
};
class Array_int{
  public:
  int  length;
  int  A[];
  Array_int(){}
template<typename T_0>
  static Array_int* create(  int  length_,   T_0* A_, int A_len);
  ~Array_int(){
  }
  void operator delete(void* p){ free(p); }
};
class Array_float{
  public:
  int  length;
  float  A[];
  Array_float(){}
template<typename T_0>
  static Array_float* create(  int  length_,   T_0* A_, int A_len);
  ~Array_float(){
  }
  void operator delete(void* p){ free(p); }
};
class Array_double{
  public:
  int  length;
  double  A[];
  Array_double(){}
template<typename T_0>
  static Array_double* create(  int  length_,   T_0* A_, int A_len);
  ~Array_double(){
  }
  void operator delete(void* p){ free(p); }
};
class Array_Object{
  public:
  int  length;
  Object::Object*  A[];
  Array_Object(){}
template<typename T_0>
  static Array_Object* create(  int  length_,   T_0* A_, int A_len);
  ~Array_Object(){
  }
  void operator delete(void* p){ free(p); }
};
}
namespace meta{
extern void Object(int& _out);
extern void simple_hash(int& _out);
extern void String(int& _out);
extern void Integer(int& _out);
extern void ArrayList(int& _out);
}
namespace ArrayList{
extern void glblInit_EMPTY_ELEMENTDATA__ArrayList_s450(array::Array_Object*& EMPTY_ELEMENTDATA__ArrayList_s449);
extern void glblInit_MAX_ARRAY_SIZE__ArrayList_s452(int& MAX_ARRAY_SIZE__ArrayList_s451);
extern void ArrayList_ArrayList(Object::Object* self, Object::Object*& _out);
extern void size(Object::Object* self, int& _out);
}
namespace Object{
class Object; 
class Object{
  public:
  int  __cid;
  array::Array_Object*  elementData_ArrayList;
  int  DEFAULT_CAPACITY_ArrayList;
  int  numElements_ArrayList;
  int  capacity_ArrayList;
  int  size_simple_hash;
  int  numElements_simple_hash;
  int  value_Integer;
  array::Array_char*  _value_String;
  int  _count_String;
  Object(){}
  static Object* create(  int  __cid_,   array::Array_Object*  elementData_ArrayList_,   int  DEFAULT_CAPACITY_ArrayList_,   int  numElements_ArrayList_,   int  capacity_ArrayList_,   int  size_simple_hash_,   int  numElements_simple_hash_,   int  value_Integer_,   array::Array_char*  _value_String_,   int  _count_String_);
  ~Object(){
  }
  void operator delete(void* p){ free(p); }
};
extern void Object_Object(Object* self, Object*& _out);
}
namespace String{
extern void String_String_char_int_int(Object::Object* self, array::Array_char* ca, int offset, int count, Object::Object*& _out);
}

#endif
