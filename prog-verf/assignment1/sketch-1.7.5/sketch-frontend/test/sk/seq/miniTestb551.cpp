#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb551.h"
namespace ANONYMOUS{

void main__Wrapper() {
  __main();
}
void main__WrapperNospec() {}
void __main() {
  int  x=0;
  while ((x) != (5)) {
    int  r_s3=0;
    rand(r_s3);
    outpp(r_s3);
    x = x + 1;
  }
  _main(7);
  return;
}
void rand(int& _out) {
  _out = 1;
  return;
}
void outpp(int i) {}
void _main(int vv) {
  bool  __sa6=1;
  int  x=0;
  while (__sa6) {
    int  r_s5=0;
    rand(r_s5);
    outpp(r_s5);
    x = x + 1;
    __sa6 = (x) != (5);
  }
  return;
}

}
