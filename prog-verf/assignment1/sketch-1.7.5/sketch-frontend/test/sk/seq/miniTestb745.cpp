#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb745.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s2=0;
  apply_lambda1(_out_s2);
  assert ((_out_s2) == (2));;
}
void apply_lambda1(int& _out) {
  int  _out_s6=0;
  lambda1(_out_s6);
  _out = _out_s6;
  return;
}
void lambda1(int& _out) {
  _out = 2;
  return;
}

}
