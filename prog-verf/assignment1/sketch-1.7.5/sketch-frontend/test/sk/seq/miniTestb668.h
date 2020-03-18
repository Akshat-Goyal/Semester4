#ifndef MINITESTB668_H
#define MINITESTB668_H

#include <cstring>

#include "vops.h"

namespace P1{
}
namespace P2{
}
namespace P3{
}
namespace P1{
extern void foo(int& _out);
}
namespace P2{
extern void foo(int x, int& _out);
}
namespace P3{
extern void main__Wrapper(int x, int y);
extern void main__WrapperNospec(int x, int y);
extern void _main(int x, int y);
extern void foo(int x);
}

#endif
