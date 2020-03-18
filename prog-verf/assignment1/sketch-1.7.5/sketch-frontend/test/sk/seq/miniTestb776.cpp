#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb776.h"
namespace ANONYMOUS{

void main__Wrapper(int* v/* len = 5 */, int x) {
  _main(v, x);
}
void main__WrapperNospec(int* v/* len = 5 */, int x) {}
void glblInit_t__ANONYMOUS_s1(int& t__ANONYMOUS_s0) {
  t__ANONYMOUS_s0 = 5;
}
void _main(int* v/* len = 5 */, int x) {
  assert (((x + x)) == ((x * 2)));;
}

}
