#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb859.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  float  _out_s10=0.0f;
  math::sin(1.5707963267948966f, _out_s10);
  assert ((fabs(_out_s10-(1.0f)) < 0.0001));;
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
