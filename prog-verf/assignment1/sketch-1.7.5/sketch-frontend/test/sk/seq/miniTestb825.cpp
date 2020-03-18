#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb825.h"
namespace ANONYMOUS{

void main__Wrapper(int y) {
  _main(y);
}
void main__WrapperNospec(int y) {}
void _main(int y) {
  if(!((y) > (2))){ throw AssumptionFailedException();  };
  int*  p= new int [y]; CopyArr<int >(p,0, y);
  (p[0]) = y;
  foo_boo1((y - 1) + 1, y, p);
  delete[] p;
}
void foo_boo1(int x, int y1, int* p0/* len = y1 */) {
  int  y=x + 5;
  int*  q= new int [y]; CopyArr<int >(q,0, y);
  mama2(y1, y, p0, q);
  delete[] q;
}
void mama2(int y1, int y, int* p0/* len = y1 */, int* q/* len = y */) {
  boo1(y, y1, p0);
  assert (((q[0])) == (0));;
}
void boo1(int t, int y, int* p/* len = y */) {
  assert ((t) == (((p[0]) + 5)));;
  assert ((y) == ((p[0])));;
}

}
