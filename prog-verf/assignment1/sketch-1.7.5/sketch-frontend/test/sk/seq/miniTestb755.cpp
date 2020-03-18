#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb755.h"
namespace ANONYMOUS{

void localVariable__Wrapper(int x, bool y) {
  localVariable(x, y);
}
void localVariable__WrapperNospec(int x, bool y) {}
void localVariable(int x, bool y) {
  assert (((x * 2)) == ((x + x)));;
}

}
