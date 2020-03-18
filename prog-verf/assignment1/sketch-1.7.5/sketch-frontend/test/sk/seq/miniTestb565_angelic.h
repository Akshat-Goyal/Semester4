#ifndef MINITESTB565_ANGELIC_H
#define MINITESTB565_ANGELIC_H

#include <cstring>

#include "vops.h"

namespace generators{
}
namespace generators{
extern void main__Wrapper(int* a/* len = 4 */);
extern void main__WrapperNospec(int* a/* len = 4 */);
extern void _main(int* a/* len = 4 */);
extern void calc(int N, int* in/* len = 4 */, int* rator/* len = 8 */, int* xrand/* len = 8 */, int* yrand/* len = 8 */, int* _out/* len = N + 8 */);
extern void moo(int N, int* in/* len = 4 */, int* rator/* len = 8 */, int* xrand/* len = 8 */, int* yrand/* len = 8 */, int* _out/* len = N + 8 */);
}

#endif
