#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb887.h"
namespace ANONYMOUS{

Vector* Vector::create(float  x_, float  y_, float  z_){
  void* temp= malloc( sizeof(Vector)  ); 
  Vector* rv = new (temp)Vector();
  rv->x =  x_;
  rv->y =  y_;
  rv->z =  z_;
  return rv;
}
Sphere* Sphere::create(float  radiusSquared_, Vector*  center_){
  void* temp= malloc( sizeof(Sphere)  ); 
  Sphere* rv = new (temp)Sphere();
  rv->radiusSquared =  radiusSquared_;
  rv->center =  center_;
  rv->type= Expression::SPHERE_type;
  return rv;
}
Union* Union::create(Expression*  a_, Expression*  b_){
  void* temp= malloc( sizeof(Union)  ); 
  Union* rv = new (temp)Union();
  rv->a =  a_;
  rv->b =  b_;
  rv->type= Expression::UNION_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  float  _out_s24=0.0f;
  math::_cast_int_float(33, _out_s24);
  float  _out_s24_0=0.0f;
  math::_cast_int_float(37, _out_s24_0);
  float  _out_s24_1=0.0f;
  math::_cast_int_float(52, _out_s24_1);
  float  _out_s24_2=0.0f;
  math::_cast_int_float(32, _out_s24_2);
  Vector*  _out_s12=Vector::create((_out_s24_0 - 32.0f) / 5.0f, (_out_s24_1 - 32.0f) / 5.0f, (_out_s24_2 - 32.0f) / 5.0f);
  Expression*  e_s1=Sphere::create((_out_s24 - 32.0f) / 5.0f, _out_s12);
  Vector*  p=Vector::create(1.0f, 4.0f, 0.0f);
  bool  _out_s3=0;
  contains(p, e_s1, _out_s3);
  assert (_out_s3);;
}
void contains(Vector* p, Expression* e, bool& _out) {
  switch(e->type){
  case Sphere::SPHERE_type:
    {
    Sphere*  _e = (Sphere* )  e;

    _out = (((((_e->center->x - p->x) * (_e->center->x - p->x)) + ((_e->center->y - p->y) * (_e->center->y - p->y))) + ((_e->center->z - p->z) * (_e->center->z - p->z)))) < (_e->radiusSquared);
    return;
  
    break;
  }
  case Union::UNION_type:
    {
    Union*  _e = (Union* )  e;

    bool  _pac_sc_s4_s6=0;
    contains(p, _e->a, _pac_sc_s4_s6);
    bool  _pac_sc_s4=0;
    _pac_sc_s4 = _pac_sc_s4_s6;
    if (!(_pac_sc_s4_s6)) {
      bool  _pac_sc_s4_s8=0;
      contains(p, _e->b, _pac_sc_s4_s8);
      _pac_sc_s4 = _pac_sc_s4_s8;
    }
    _out = _pac_sc_s4;
    return;
  
    break;
  }

 }
}

}
namespace math{

void sin(float v, float& _out) {_out = sinf(v);}
void cos(float v, float& _out) {_out = cosf(v);}
void tan(float v, float& _out) {_out = tanf(v);}
void sqrt(float v, float& _out) {_out = sqrtf(v);}
void log(float v, float& _out) {_out = logf(v);}
void arctan(float v, float& _out) {_out = atanf(v);}
void _cast_int_float(int v, float& _out) {_out = (float)v;}

}
