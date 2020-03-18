#ifndef MINITESTB856_H
#define MINITESTB856_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace math{
}
namespace ANONYMOUS{
extern void main__Wrapper(int x, int y);
extern void main__WrapperNospec(int x, int y);
extern void _main(int x, int y);
}
namespace math{
extern void abs(float v, float& _out);
extern void sin(float v, float& _out);
extern void sqrt(float v, float& _out);
extern void arctan(float v, float& _out);
extern void cos(float v, float& _out);
extern void tan(float v, float& _out);
extern void log(float v, float& _out);
extern void _cast_int_float(int v, float& _out);
}

#endif
