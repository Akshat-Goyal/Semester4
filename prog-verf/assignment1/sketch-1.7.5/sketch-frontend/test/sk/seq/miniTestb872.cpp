#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb872.h"
namespace ANONYMOUS{

T* T::create(int  x_, int  y_, int  z_, Foo*  f_){
  void* temp= malloc( sizeof(T)  ); 
  T* rv = new (temp)T();
  rv->x =  x_;
  rv->y =  y_;
  rv->z =  z_;
  rv->f =  f_;
  return rv;
}
Car* Car::create(int  x_, int  y_){
  void* temp= malloc( sizeof(Car)  ); 
  Car* rv = new (temp)Car();
  rv->x =  x_;
  rv->y =  y_;
  rv->type= Foo::CAR_type;
  return rv;
}
Dog* Dog::create(int  z_, int  u_){
  void* temp= malloc( sizeof(Dog)  ); 
  Dog* rv = new (temp)Dog();
  rv->z =  z_;
  rv->u =  u_;
  rv->type= Foo::DOG_type;
  return rv;
}
Tv* Tv::create(T*  t_, Foo*  f_){
  void* temp= malloc( sizeof(Tv)  ); 
  Tv* rv = new (temp)Tv();
  rv->t =  t_;
  rv->f =  f_;
  rv->type= Foo::TV_type;
  return rv;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  Foo*  f=Car::create(4, 0);
  T*  t=T::create(0, 0, 0, f);
  Foo*  h=Tv::create(t, NULL);
  assert ((f) != (NULL));;
  assert (!((f) == (NULL)));;
  Tv*  tv=((Tv*)(h));
  assert ((tv->f) == (NULL));;
}

}
