#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb874.h"
namespace Integer{

void glblInit_MAX_VALUE__Integer_s454(int& MAX_VALUE__Integer_s453) {
  MAX_VALUE__Integer_s453 = 2147483647;
}
void glblInit_MIN_VALUE__Integer_s456(int& MIN_VALUE__Integer_s455) {
  MIN_VALUE__Integer_s455 = -2147483648;
}
void Integer_Integer_int(Object::Object* self, int value, Object::Object*& _out) {
  self->value_Integer = value;
  _out = self;
  return;
}

}
namespace simple_test{

void test__Wrapper() {
  bool  _out_s74=0;
  test(_out_s74);
}
void test__WrapperNospec() {}
void test(bool& _out) {
  int  self_s56=0;
  meta::Object(self_s56);
  Object::Object*  self_s58=NULL;
  Object::Object_Object(Object::Object::create(self_s56, NULL, 0, 0, 0, 0, 0, 0, NULL, 0), self_s58);
  _out = 1;
  int  ht1_s60=0;
  meta::simple_hash(ht1_s60);
  Object::Object*  ht1_s62=NULL;
  simple_hash::simple_hash_simple_hash(Object::Object::create(ht1_s60, NULL, 0, 0, 0, 0, 0, 0, NULL, 0), ht1_s62);
  int  s_s64=0;
  meta::String(s_s64);
  Object::Object*  s_s66=NULL;
  char _tt0[1] = {'\0'};
  String::String_String_char_int_int(Object::Object::create(s_s64, NULL, 0, 0, 0, 0, 0, 0, NULL, 0), array::Array_char::create(1, _tt0, 1), 0, 0, s_s66);
  int  i2_s68=0;
  meta::Integer(i2_s68);
  Object::Object*  i2_s70=NULL;
  Integer::Integer_Integer_int(Object::Object::create(i2_s68, NULL, 0, 0, 0, 0, 0, 0, NULL, 0), 0, i2_s70);
  for (int  i=0;(i) < (2);i = i + 1){
    int  _out_s72=0;
    meta::simple_hash(_out_s72);
    if ((ht1_s62->__cid) == (_out_s72)) {
      simple_hash::put_int_int(ht1_s62, i, 4);
    }
  }
  return;
}

}
namespace ANONYMOUS{


}
namespace simple_hash{

void simple_hash_simple_hash(Object::Object* self, Object::Object*& _out) {
  self->size_simple_hash = 10;
  self->numElements_simple_hash = 0;
  _out = self;
  return;
}
void put_int_int(Object::Object* self, int i, int j) {
  self->numElements_simple_hash = self->numElements_simple_hash + 1;
  double  rehash=((double)(self->numElements_simple_hash)) / ((double)(self->size_simple_hash));
  if ((rehash) > (0.75)) {
    rehashng(self);
  }
}
void rehashng(Object::Object* self) {
  int  temp1_s76=0;
  meta::ArrayList(temp1_s76);
  Object::Object*  temp1_s78=NULL;
  ArrayList::ArrayList_ArrayList(Object::Object::create(temp1_s76, NULL, 0, 0, 0, 0, 0, 0, NULL, 0), temp1_s78);
  self->size_simple_hash = self->size_simple_hash * 10;
  int  __sa0_s80=0;
  meta::ArrayList(__sa0_s80);
  int  _pac_sc_s81=0;
  if ((temp1_s78->__cid) == (__sa0_s80)) {
    int  __sa0_s83=0;
    ArrayList::size(temp1_s78, __sa0_s83);
    _pac_sc_s81 = __sa0_s83;
  } else {
    _pac_sc_s81 = 0;
  }
  bool  __sa0=(0) < (_pac_sc_s81);
  int  i=0;
  while (__sa0) {
    put_int_int(self, 0, 0);
    i = i + 1;
    int  __sa0_s85=0;
    meta::ArrayList(__sa0_s85);
    int  _pac_sc_s86=0;
    if ((temp1_s78->__cid) == (__sa0_s85)) {
      int  __sa0_s88=0;
      ArrayList::size(temp1_s78, __sa0_s88);
      _pac_sc_s86 = __sa0_s88;
    } else {
      _pac_sc_s86 = 0;
    }
    __sa0 = (i) < (_pac_sc_s86);
  }
}

}
namespace Assert{


}
namespace Number{

void intValue(Object::Object* self, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
namespace array{

template<typename T_0>
Array_bit* Array_bit::create(int  length_, T_0* A_, int A_len){
  int tlen_A = length_; 
  void* temp= malloc( sizeof(Array_bit)   + sizeof(bool )*tlen_A); 
  Array_bit* rv = new (temp)Array_bit();
  rv->length =  length_;
  CopyArr(rv->A, A_, tlen_A, A_len ); 
  return rv;
}
template<typename T_0>
Array_char* Array_char::create(int  length_, T_0* A_, int A_len){
  int tlen_A = length_; 
  void* temp= malloc( sizeof(Array_char)   + sizeof(char )*tlen_A); 
  Array_char* rv = new (temp)Array_char();
  rv->length =  length_;
  CopyArr(rv->A, A_, tlen_A, A_len ); 
  return rv;
}
template<typename T_0>
Array_int* Array_int::create(int  length_, T_0* A_, int A_len){
  int tlen_A = length_; 
  void* temp= malloc( sizeof(Array_int)   + sizeof(int )*tlen_A); 
  Array_int* rv = new (temp)Array_int();
  rv->length =  length_;
  CopyArr(rv->A, A_, tlen_A, A_len ); 
  return rv;
}
template<typename T_0>
Array_float* Array_float::create(int  length_, T_0* A_, int A_len){
  int tlen_A = length_; 
  void* temp= malloc( sizeof(Array_float)   + sizeof(float )*tlen_A); 
  Array_float* rv = new (temp)Array_float();
  rv->length =  length_;
  CopyArr(rv->A, A_, tlen_A, A_len ); 
  return rv;
}
template<typename T_0>
Array_double* Array_double::create(int  length_, T_0* A_, int A_len){
  int tlen_A = length_; 
  void* temp= malloc( sizeof(Array_double)   + sizeof(double )*tlen_A); 
  Array_double* rv = new (temp)Array_double();
  rv->length =  length_;
  CopyArr(rv->A, A_, tlen_A, A_len ); 
  return rv;
}
template<typename T_0>
Array_Object* Array_Object::create(int  length_, T_0* A_, int A_len){
  int tlen_A = length_; 
  void* temp= malloc( sizeof(Array_Object)   + sizeof(Object::Object* )*tlen_A); 
  Array_Object* rv = new (temp)Array_Object();
  rv->length =  length_;
  CopyArr(rv->A, A_, tlen_A, A_len ); 
  return rv;
}

}
namespace meta{

void Object(int& _out) {
  _out = 1;
  return;
}
void simple_hash(int& _out) {
  _out = 3;
  return;
}
void String(int& _out) {
  _out = 8;
  return;
}
void Integer(int& _out) {
  _out = 5;
  return;
}
void ArrayList(int& _out) {
  _out = 7;
  return;
}

}
namespace ArrayList{

void glblInit_EMPTY_ELEMENTDATA__ArrayList_s450(array::Array_Object*& EMPTY_ELEMENTDATA__ArrayList_s449) {
  EMPTY_ELEMENTDATA__ArrayList_s449 = array::Array_Object::create(0, (Object::Object** )NULL, 0);
}
void glblInit_MAX_ARRAY_SIZE__ArrayList_s452(int& MAX_ARRAY_SIZE__ArrayList_s451) {
  MAX_ARRAY_SIZE__ArrayList_s451 = 1000000;
}
void ArrayList_ArrayList(Object::Object* self, Object::Object*& _out) {
  self->elementData_ArrayList = array::Array_Object::create(10, (Object::Object**)NULL, 0);
  self->capacity_ArrayList = 10;
  self->numElements_ArrayList = 0;
  self->DEFAULT_CAPACITY_ArrayList = 10;
  _out = self;
  return;
}
void size(Object::Object* self, int& _out) {
  _out = self->numElements_ArrayList;
  return;
}

}
namespace Object{

Object* Object::create(int  __cid_, array::Array_Object*  elementData_ArrayList_, int  DEFAULT_CAPACITY_ArrayList_, int  numElements_ArrayList_, int  capacity_ArrayList_, int  size_simple_hash_, int  numElements_simple_hash_, int  value_Integer_, array::Array_char*  _value_String_, int  _count_String_){
  void* temp= malloc( sizeof(Object)  ); 
  Object* rv = new (temp)Object();
  rv->__cid =  __cid_;
  rv->elementData_ArrayList =  elementData_ArrayList_;
  rv->DEFAULT_CAPACITY_ArrayList =  DEFAULT_CAPACITY_ArrayList_;
  rv->numElements_ArrayList =  numElements_ArrayList_;
  rv->capacity_ArrayList =  capacity_ArrayList_;
  rv->size_simple_hash =  size_simple_hash_;
  rv->numElements_simple_hash =  numElements_simple_hash_;
  rv->value_Integer =  value_Integer_;
  rv->_value_String =  _value_String_;
  rv->_count_String =  _count_String_;
  return rv;
}
void Object_Object(Object* self, Object*& _out) {
  _out = self;
  return;
}

}
namespace String{

void String_String_char_int_int(Object::Object* self, array::Array_char* ca, int offset, int count, Object::Object*& _out) {
  self->_value_String = ca;
  self->_count_String = count;
  _out = self;
  return;
}

}
