#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb883.h"
namespace A{

template<typename T>
I<T>* I<T>::create(T  v_){
  void* temp= malloc( sizeof(I<T>)  ); 
  I<T>* rv = new (temp)I<T>();
  rv->v =  v_;
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  I<int > *  _out_s1=NULL;
  store(i, _out_s1);
  int  _out_s3=0;
  read(_out_s1, _out_s3);
  assert ((i) == (_out_s3));;
}
template<typename T>
void store(T v, I<T > *& _out) {
  _out = I<T >::create(v);
  return;
}
template<typename T>
void read(I<T > * x, T& _out) {
  _out = x->v;
  return;
}

}
namespace ANONYMOUS{


}
namespace B{

template<typename X>
I<X>* I<X>::create(X  t_){
  void* temp= malloc( sizeof(I<X>)  ); 
  I<X>* rv = new (temp)I<X>();
  rv->t =  t_;
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  A::I<int > *  _out_s5=NULL;
  A::store(i, _out_s5);
  int  _out_s7=0;
  A::read(_out_s5, _out_s7);
  assert ((i) == (_out_s7));;
  I<int > *  _out_s9=NULL;
  store(i, _out_s9);
  int  _out_s11=0;
  read(_out_s9, _out_s11);
  assert ((i) == (_out_s11));;
  A::I<int > *  _out_s13=NULL;
  A::store(i, _out_s13);
  I<A::I<int > * > *  _out_s15=NULL;
  store(_out_s13, _out_s15);
  A::I<int > *  _out_s17=NULL;
  read(_out_s15, _out_s17);
  int  _out_s19=0;
  A::read(_out_s17, _out_s19);
  assert ((i) == (_out_s19));;
}
template<typename T>
void store(T v, I<T > *& _out) {
  _out = I<T >::create(v);
  return;
}
template<typename T>
void read(I<T > * x, T& _out) {
  _out = x->t;
  return;
}

}
