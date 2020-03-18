#ifndef PRODUCT_H
#define PRODUCT_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void multTest__Wrapper();
extern void multTest__WrapperNospec();
extern void multTest();
extern void product(int M, int N, int P, int Q, int* a/* len = N * M */, int* b/* len = Q * P */, int* _out/* len = Q * M */);
extern void productSK(int M, int N, int P, int Q, int* a/* len = N * M */, int* b/* len = Q * P */, int* _out/* len = Q * M */);
}

#endif
