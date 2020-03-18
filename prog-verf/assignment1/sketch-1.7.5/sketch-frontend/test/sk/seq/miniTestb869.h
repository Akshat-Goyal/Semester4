#ifndef MINITESTB869_H
#define MINITESTB869_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int al, int ah, int bl, int bh, int a, int b);
extern void main__WrapperNospec(int al, int ah, int bl, int bh, int a, int b);
extern void _main(int al_0, int ah_1, int bl_2, int bh_3, int a_4, int b_5);
extern void range(int alo, int ahi, int blo, int bhi, int* _out/* len = 2 */);
extern void div(int a, int b, int& _out);
}

#endif
