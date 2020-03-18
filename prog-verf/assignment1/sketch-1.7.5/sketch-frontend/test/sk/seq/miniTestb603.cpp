#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb603.h"
namespace ANONYMOUS{

void main__Wrapper(int w) {
  _main(w);
}
void main__WrapperNospec(int w) {}
void _main(int w) {
  moo(w, 1);
}
void moo(int w, bool qq) {
  int  t1=0;
  int  t2=0;
  foo(w, t1, t2);
  int  t3=0;
  int  t4=0;
  foo((qq ? w : ((int) (0))), t3, t4);
  assert ((t4) > (t3));;
  assert ((t2) > (t1));;
}
void foo(int x, int& a, int& b) {
  a = x;
  b = x + 1;
}

}
