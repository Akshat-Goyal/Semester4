#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb559_RemoveFunctionParameters.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  x=0;
  twice_addone1(x);
  assert ((x) == (6));;
}
void twice_addone1(int& x0) {
  addone1(x0);
  addone1(x0);
}
void addone1(int& x) {
  int  x_s1=0;
  num2(x_s1);
  x = x + x_s1;
}
void num2(int& _out) {
  _out = 3;
  return;
}

}
