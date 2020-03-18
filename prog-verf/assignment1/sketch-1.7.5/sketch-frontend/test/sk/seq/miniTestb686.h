#ifndef MINITESTB686_H
#define MINITESTB686_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void mainb__Wrapper(int n);
extern void mainb__WrapperNospec(int n);
extern void main__Wrapper(int n);
extern void main__WrapperNospec(int n);
extern void mainb(int n);
extern void _main(int n, int& _out);
extern void foo(int n, int* x/* len = n */, int& _out);
extern void bar(int n, int* t/* len = n */, int& _out);
}

#endif
