#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb719.h"
namespace ANONYMOUS{

void main__Wrapper(int in) {
  _main(in);
}
void main__WrapperNospec(int in) {}
void _main(int in) {
  int  _out_s1=0;
  ff(in, 8, _out_s1);
  if ((_out_s1) == (4)) {
    int  f_s3=0;
    ff(in, 8, f_s3);
    bool  f=0;
    f = (7) == (f_s3);
    assert (((in) < (9)) || f);;
  }
  int  g_s5=0;
  ff(in, 8, g_s5);
  assert ((g_s5) > (3));;
}
void ff(int x, int y, int& _out) {
  if ((y) > (0)) {
    int  _out_s7=0;
    ff(x - 1, y - 1, _out_s7);
    _out = _out_s7;
    return;
  } else {
    if ((x) > (0)) {
      _out = 7;
      return;
    } else {
      _out = 4;
      return;
    }
  }
}

}
