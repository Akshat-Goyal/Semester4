#ifndef MINITESTB711_H
#define MINITESTB711_H

#include <cstring>

#include "vops.h"

namespace P1{
}
namespace ANONYMOUS{
}
namespace P2{
}
namespace P1{
extern void main__Wrapper(int q);
extern void main__WrapperNospec(int q);
extern void _main(int q);
extern void foo_g1T_int(int t, int& _out);
extern void moo_g1_gg2Q_intT_int(int t, int q, int& _out);
extern void g1(int i, int& _out);
extern void gg2(int x, int y, int& _out);
}
namespace ANONYMOUS{
}
namespace P2{
extern void main__Wrapper(int q);
extern void main__WrapperNospec(int q);
extern void _main(int q);
extern void foo_gT_int(int t, int& _out);
extern void moo_g_gg3Q_intT_int(int t, int q, int& _out);
template<typename T>
extern void g(T i, int& _out);
extern void gg3(int x, int y, int& _out);
}

#endif
