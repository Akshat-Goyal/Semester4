#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb189.h"
namespace ANONYMOUS{

void sketch(int x, int y, int& _out) {
  _out = y * 2;
  _out = _out + x;
  _out = _out + x;
  return;
}
void spec(int x, int y, int& _out) {
  _out = x + y;
  _out = _out * 2;
  return;
}

}
