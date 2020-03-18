#ifndef MINITESTB712_H
#define MINITESTB712_H

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
extern void reduce_ggT_int(int t1, int t2, int t3, int& _out);
extern void doTwo2(int t1, int t2, int& _out);
template<typename T>
extern void gg(int x, T y, int& _out);
}
namespace ANONYMOUS{
}
namespace P2{
extern void main__Wrapper(int q);
extern void main__WrapperNospec(int q);
extern void _main(int q);
extern void reduce_gg1T_int(int t1, int t2, int t3, int& _out);
extern void apply_ggQ_intT_int(int t1, int t2, int& _out);
extern void apply_gg1Q_intT_int(int t1, int t2, int& _out);
extern void gg1(int x, int y, int& _out);
}

#endif
