#ifndef MINITESTB558_H
#define MINITESTB558_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int n, bool* a/* len = n */);
extern void main__WrapperNospec(int n, bool* a/* len = n */);
extern void _main(int n, bool* a/* len = n */);
extern void reverse(int n, bool* a/* len = n */, bool* _out/* len = n */);
extern void reverse_sk(int n, bool* a/* len = n */, bool* _out/* len = n */);
extern void moo(int n, bool* a/* len = n */, bool* _out/* len = n */);
}

#endif
