#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb754.h"
namespace ANONYMOUS{

void localVariable__Wrapper(int x, int y) {
  localVariable(x, y);
}
void localVariable__WrapperNospec(int x, int y) {}
void localVariable(int x, int y) {
  assert (((x * 2)) == ((x + x)));;
}

}
