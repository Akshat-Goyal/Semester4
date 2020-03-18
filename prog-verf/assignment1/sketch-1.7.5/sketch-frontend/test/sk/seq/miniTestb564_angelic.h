#ifndef MINITESTB564_ANGELIC_H
#define MINITESTB564_ANGELIC_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int N, int* a/* len = N */);
extern void main__WrapperNospec(int N, int* a/* len = N */);
extern void _main(int N, int* a/* len = N */);
extern void foo(int N, int* in/* len = N */, int p, int q, int* _out/* len = N */);
extern void moo(int N, int* in/* len = N */, int p, int q, int* _out/* len = N */);
}

#endif
