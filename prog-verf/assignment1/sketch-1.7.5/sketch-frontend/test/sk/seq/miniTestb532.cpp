#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb532.h"
namespace ANONYMOUS{

void boo__Wrapper(int x_0) {
  int  x=x_0;
  boo(x);
}
void boo__WrapperNospec(int x) {}
void boo(int& x) {
  x = x + 1;
}

}
