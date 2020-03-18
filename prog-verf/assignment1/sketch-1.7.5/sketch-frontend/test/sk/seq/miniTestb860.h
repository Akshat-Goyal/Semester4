#ifndef MINITESTB860_H
#define MINITESTB860_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
extern void piecewise(int x, int& _out);
extern void abs(int x, int& _out);
extern void gtpred3(int x, bool& _out);
extern void gtpred2(int x, bool& _out);
extern void gtpred1(int x, bool& _out);
extern void gtpred4(int x, bool& _out);
}

#endif
