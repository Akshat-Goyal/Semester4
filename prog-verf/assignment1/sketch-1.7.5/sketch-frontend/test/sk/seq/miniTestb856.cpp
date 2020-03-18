#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb856.h"
namespace ANONYMOUS{

void main__Wrapper(int x, int y) {
  _main(x, y);
}
void main__WrapperNospec(int x, int y) {}
void _main(int x, int y) {
  float  xf_s1=0.0f;
  math::_cast_int_float(x, xf_s1);
  float  yf_s3=0.0f;
  math::_cast_int_float(y, yf_s3);
  if ((y) != (0)) {
    float  _out_s5=0.0f;
    math::arctan(xf_s1 / yf_s3, _out_s5);
    float  _out_s7=0.0f;
    math::sin(_out_s5, _out_s7);
    float  _out_s9=0.0f;
    math::sqrt((xf_s1 * xf_s1) + (yf_s3 * yf_s3), _out_s9);
    assert ((fabs(_out_s7-(xf_s1 / _out_s9)) < 0.0001));;
  }
  float  _out_s13=0.0f;
  math::sin(1.5707963267948966f, _out_s13);
  float  _out_s15=0.0f;
  math::abs(_out_s13 - 1.0f, _out_s15);
  assert ((_out_s15) < (1.0E-4f));;
}

}
namespace math{

void abs(float v, float& _out) {_out = fabs(v);}
void sin(float v, float& _out) {_out = sinf(v);}
void sqrt(float v, float& _out) {_out = sqrtf(v);}
void arctan(float v, float& _out) {_out = atanf(v);}
void cos(float v, float& _out) {_out = cosf(v);}
void tan(float v, float& _out) {_out = tanf(v);}
void log(float v, float& _out) {_out = logf(v);}
void _cast_int_float(int v, float& _out) {_out = (float)v;}

}
