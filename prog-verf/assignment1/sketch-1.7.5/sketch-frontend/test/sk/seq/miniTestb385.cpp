#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb385.h"
namespace ANONYMOUS{

void moo(int x, int* y/* len = x */, int w, int* z/* len = w */, int* yy/* len = x */) {
  CopyArr<int >(y,yy, x, x);
  bool  xa_s36=(x) < (w);
  bool  xa=0;
  xa = xa_s36;
  if (xa_s36) {
    bool  xa_1=!((x) < (w));
    if (!((x) < (w))) {
      xa_1 = !((1) != (x));
    }
    bool  xa_0=!(xa_1);
    if (!(xa_1)) {
      xa_0 = 1;
    }
    xa = xa_0;
  }
  if (!(xa)) {
    CopyArr<int >(z,(yy+ 0), w, w);
  } else {
    CopyArr<int >(z,yy, w, x);
  }
}
void foo(int x, int* y/* len = x */, int w, int* z/* len = w */, int* yy/* len = x */) {
  CopyArr<int >(y,yy, x, x);
  if ((w) < (x)) {
    CopyArr<int >(z,(yy+ 0), w, w);
  } else {
    CopyArr<int >(z,yy, w, x);
  }
}

}
namespace generators{


}
