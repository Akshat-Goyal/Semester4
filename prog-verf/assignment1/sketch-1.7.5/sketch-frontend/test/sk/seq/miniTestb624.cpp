#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb624.h"
namespace ANONYMOUS{

void foo__Wrapper(int w) {
  int  x__ANONYMOUS_s4=0;
  foo(w, x__ANONYMOUS_s4);
}
void foo__WrapperNospec(int w) {}
void foo(int w, int& x__ANONYMOUS_s2) {
  x__ANONYMOUS_s2 = 0;
  too1(x__ANONYMOUS_s2);
  assert ((x__ANONYMOUS_s2) == (1));;
  int*  bb_s1= new int [w]; CopyArr<int >(bb_s1,0, w);
  bar2(w, bb_s1);
  for (int  i=0;(i) < (w);i = i + 1){
    assert (((bb_s1[i])) == (3));;
  }
  delete[] bb_s1;
}
void too1(int& x__ANONYMOUS_s3) {
  x__ANONYMOUS_s3 = x__ANONYMOUS_s3 + 1;
}
void bar2(int w, int* _out/* len = w */) {
  CopyArr<int >(_out,0, w);
  int _tt0[2] = {5, 5};
  moo3(2, _tt0, w, _out);
  return;
}
void moo3(int vvv, int* pp/* len = vvv */, int w, int* q/* len = w */) {
  for (int  i=0;(i) < (w);i = i + 1){
    (q[i]) = 3;
  }
  assert (((pp[0])) == (5));;
}

}
