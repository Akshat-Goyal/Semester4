#ifndef MINITESTB882_H
#define MINITESTB882_H

#include <cstring>

#include "vops.h"

namespace A{
}
namespace ANONYMOUS{
}
namespace B{
}
namespace A{
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void get_f1(int& _out);
extern void identT_intAr(int __sa0, int* in/* len = __sa0 */, int* _out/* len = __sa0 */);
template<typename T>
extern void ident(T in, T& _out);
extern void f1(int& _out);
}
namespace ANONYMOUS{
}
namespace B{
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
template<typename T>
extern void ident(T in, T& _out);
}

#endif
