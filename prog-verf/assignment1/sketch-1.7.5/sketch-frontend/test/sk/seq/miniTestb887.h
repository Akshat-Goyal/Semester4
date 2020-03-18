#ifndef MINITESTB887_H
#define MINITESTB887_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Vector; 
class Expression; 
class Sphere; 
class Union; 
}
namespace math{
}
namespace ANONYMOUS{
class Vector; 
class Expression; 
class Sphere; 
class Union; 
class Vector{
  public:
  float  x;
  float  y;
  float  z;
  Vector(){}
  static Vector* create(  float  x_,   float  y_,   float  z_);
  ~Vector(){
  }
  void operator delete(void* p){ free(p); }
};
class Expression{
  public:
  typedef enum {SPHERE_type, UNION_type} _kind;
  _kind type;
  ~Expression(){
  }
  void operator delete(void* p){ free(p); }
};
class Sphere : public Expression{
  public:
  float  radiusSquared;
  Vector*  center;
  Sphere(){}
  static Sphere* create(  float  radiusSquared_,   Vector*  center_);
  ~Sphere(){
  }
  void operator delete(void* p){ free(p); }
};
class Union : public Expression{
  public:
  Expression*  a;
  Expression*  b;
  Union(){}
  static Union* create(  Expression*  a_,   Expression*  b_);
  ~Union(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void contains(Vector* p, Expression* e, bool& _out);
}
namespace math{
extern void sin(float v, float& _out);
extern void cos(float v, float& _out);
extern void tan(float v, float& _out);
extern void sqrt(float v, float& _out);
extern void log(float v, float& _out);
extern void arctan(float v, float& _out);
extern void _cast_int_float(int v, float& _out);
}

#endif
