#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb176.h"
namespace ANONYMOUS{

void test(int* in/* len = 5 */, bool& _out) {
  int*  x= new int [5]; CopyArr<int >(x,0, 5);
  int*  s= new int [3]; CopyArr<int >(s,0, 3);
  (s[1]) = 3;
  bool  __sa0=1;
  int  t=0;
  while (__sa0) {
    (x[t]) = (in[t]);
    t = t + 1;
    __sa0 = (t) < ((s[1]));
  }
  assert ((((x[4])) == (0)) && (((x[2])) == ((in[2]))));;
  _out = 1;
  delete[] x;
  delete[] s;
  return;
}
void one(int* in/* len = 5 */, bool& _out) {
  _out = 1;
  return;
}

}
