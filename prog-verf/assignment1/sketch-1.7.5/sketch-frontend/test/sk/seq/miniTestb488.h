#ifndef MINITESTB488_H
#define MINITESTB488_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int k, int* p/* len = 3 * k */);
extern void main__WrapperNospec(int k, int* p/* len = 3 * k */);
extern void _main(int k, int* p/* len = 3 * k */);
extern void mmul(int* x1/* len = 3 */, int* x2/* len = 3 */, int* _out/* len = 6 */);
extern void muluf(int* x1/* len = 3 */, int* x2/* len = 3 */, int* _out/* len = 6 */);
}

#endif
