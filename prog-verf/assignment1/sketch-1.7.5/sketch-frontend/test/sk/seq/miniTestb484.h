#ifndef MINITESTB484_H
#define MINITESTB484_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int n, int* x/* len = n */, int q);
extern void main__WrapperNospec(int n, int* x/* len = n */, int q);
extern void _main(int n, int* x_0/* len = n */, int q);
extern void foo(int n, int* in/* len = n */, int* _out/* len = n / 2 */);
extern void fooUF(int n, int* in/* len = n */, int* _out/* len = n / 2 */);
}

#endif
