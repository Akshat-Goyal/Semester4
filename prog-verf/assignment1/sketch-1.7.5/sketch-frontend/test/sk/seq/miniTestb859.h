#ifndef MINITESTB859_H
#define MINITESTB859_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace math{
}
namespace ANONYMOUS{
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
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
