#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb826.h"
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
  int*  p= new int [y]; CopyArr<int >(p,0, y);
  mama2(y1, y, p0, p);
  delete[] p;
}
void mama2(int y1, int y, int* p0/* len = y1 */, int* p/* len = y */) {
  boo1(y, y1, p0);
  assert (((p[0])) == (0));;
}
void boo1(int t, int y, int* p/* len = y */) {
  assert ((t) == (((p[0]) + 5)));;
  assert ((y) == ((p[0])));;
}

}
