#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb619.h"
namespace ANONYMOUS{

void test__Wrapper(int a) {
  test(a);
}
void test__WrapperNospec(int a) {}
void test(int a_0) {
  assert ((a_0) == (a_0));;
}

}
