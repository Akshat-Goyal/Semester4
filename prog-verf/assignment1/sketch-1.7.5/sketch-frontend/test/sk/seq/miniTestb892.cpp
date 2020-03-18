#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb892.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  stack::Stack<int > *  stack_s1=NULL;
  stack::Empty(stack_s1);
  stack::Stack<int > *  stack_s3=NULL;
  stack::push(stack_s1, x, stack_s3);
  int  _out_s5=0;
  stack::peek(stack_s3, _out_s5);
  assert ((_out_s5) == (x));;
  stack::Stack<int > *  _out_s7=NULL;
  stack::pop(stack_s3, _out_s7);
}

}
namespace stack{

template<typename T>
Nil<T>* Nil<T>::create(){
  void* temp= malloc( sizeof(Nil<T>)  ); 
  Nil<T>* rv = new (temp)Nil<T>();
  rv->type= Stack<T>::NIL_type;
  return rv;
}
template<typename T>
Content<T>* Content<T>::create(T  val_, Stack<T > *  prev_){
  void* temp= malloc( sizeof(Content<T>)  ); 
  Content<T>* rv = new (temp)Content<T>();
  rv->val =  val_;
  rv->prev =  prev_;
  rv->type= Stack<T>::CONTENT_type;
  return rv;
}
template<typename T>
void Empty(Stack<T > *& _out) {
  _out = Nil<T >::create();
  return;
}
template<typename T>
void push(Stack<T > * prev, T val, Stack<T > *& _out) {
  _out = Content<T >::create(val, prev);
  return;
}
template<typename T>
void peek(Stack<T > * st, T& _out) {
  Content<T > *  c=((Content<T > *)(st));
  _out = c->val;
  return;
}
template<typename T>
void pop(Stack<T > * st, Stack<T > *& _out) {
  Content<T > *  c=((Content<T > *)(st));
  _out = c->prev;
  return;
}

}
