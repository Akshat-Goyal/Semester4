#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestBigInts2.h"
namespace ANONYMOUS{

void sketch__Wrapper(int x, int y, int z) {
  sketch(x, y, z);
}
void sketch__WrapperNospec(int x, int y, int z) {}
void sketch(int x, int y, int z) {
  int  a_s3=(y + z) + (y + z);
  assert (((a_s3 * x)) == (((x + x) * (y + z))));;
}

}
