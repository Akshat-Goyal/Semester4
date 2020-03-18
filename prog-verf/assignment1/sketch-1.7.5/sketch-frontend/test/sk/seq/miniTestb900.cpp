#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb900.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  list::List<int > *  lst_s1=NULL;
  list::empty(lst_s1);
  list::List<int > *  lst_s3=NULL;
  list::add(lst_s1, 1, lst_s3);
  list::List<int > *  lst_s5=NULL;
  list::add(lst_s3, 2, lst_s5);
  list::List<int > *  lst_s7=NULL;
  list::add(lst_s5, 3, lst_s7);
  int  _out_s9=0;
  list::head(lst_s7, _out_s9);
  assert ((_out_s9) == (3));;
}

}
namespace list{

template<typename T>
Cons<T>* Cons<T>::create(T  val_, List<T > *  next_){
  void* temp= malloc( sizeof(Cons<T>)  ); 
  Cons<T>* rv = new (temp)Cons<T>();
  rv->val =  val_;
  rv->next =  next_;
  rv->type= List<T>::CONS_type;
  return rv;
}
template<typename T>
Nil<T>* Nil<T>::create(){
  void* temp= malloc( sizeof(Nil<T>)  ); 
  Nil<T>* rv = new (temp)Nil<T>();
  rv->type= List<T>::NIL_type;
  return rv;
}
template<typename T>
void empty(List<T > *& _out) {
  _out = Nil<T >::create();
  return;
}
template<typename T>
void add(List<T > * lst, T val, List<T > *& _out) {
  _out = Cons<T >::create(val, lst);
  return;
}
template<typename T>
void head(List<T > * l, T& _out) {
  _out = ((Cons<T > *)(l))->val;
  return;
}

}
