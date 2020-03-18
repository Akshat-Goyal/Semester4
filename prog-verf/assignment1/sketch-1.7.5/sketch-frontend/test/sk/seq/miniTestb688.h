#ifndef MINITESTB688_H
#define MINITESTB688_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void m2(double* a/* len = 10 */, double* b/* len = 10 */);
extern void m(double* a/* len = 10 */, double* b/* len = 10 */);
extern void foo__Wrapper(int n, double* x/* len = n */);
extern void foo__WrapperNospec(int n, double* x/* len = n */);
extern void foo(int n, double* x/* len = n */);
}

#endif
