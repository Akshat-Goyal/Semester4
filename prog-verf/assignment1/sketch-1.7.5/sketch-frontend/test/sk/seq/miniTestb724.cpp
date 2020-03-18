#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb724.h"
namespace ANONYMOUS{

void firstElementSketch(bool* in/* len = 4 */, bool* a/* len = 4 */, bool* b/* len = 5 */, bool& _out) {
  bool*  tmp= new bool [4]; CopyArr<bool >(tmp,in, 4, 4);
  (tmp[2]) = 1;
  (tmp[3]) = 0;
  _out = (tmp[0]);
  delete[] tmp;
  return;
}
void firstElement(bool* in/* len = 4 */, bool* a/* len = 4 */, bool* b/* len = 5 */, bool& _out) {
  _out = (in[0]);
  return;
}

}
