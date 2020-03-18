#ifndef MINITESTB489_H
#define MINITESTB489_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int* arr/* len = 5 */);
extern void main__WrapperNospec(int* arr/* len = 5 */);
extern void test2__Wrapper(int x);
extern void test2__WrapperNospec(int x);
extern void _main(int* arr/* len = 5 */);
extern void test2(int x);
extern void msort(int* x/* len = 5 */, int* _out/* len = 5 */);
extern void bsort(int* input/* len = 5 */, int* _out/* len = 5 */);
extern void sortuf(int* x/* len = 5 */, int* _out/* len = 5 */);
}

#endif
