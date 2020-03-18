#ifndef MINITESTB507_H
#define MINITESTB507_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int n, int* x/* len = n */);
extern void main__WrapperNospec(int n, int* x/* len = n */);
extern void _main(int n, int* x/* len = n */);
extern void getLen(int n, int* x/* len = n */, int* y/* len = n */, int& _out);
}

#endif
