#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb774.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s3=0;
  apply_lam_s01_lam_s12(7, _out_s3);
  assert ((_out_s3) == (35));;
}
void apply_lam_s01_lam_s12(int a0, int& _out) {
  _out = 5 * a0;
  return;
}

}
