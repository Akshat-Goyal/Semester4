#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb770.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s2=0;
  apply_lam_s01(3, _out_s2);
  assert ((_out_s2) == (3));;
}
void apply_lam_s01(int joe0, int& _out) {
  _out = joe0;
  return;
}

}
