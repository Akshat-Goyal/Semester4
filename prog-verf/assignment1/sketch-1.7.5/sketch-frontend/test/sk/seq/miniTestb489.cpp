#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb489.h"
namespace ANONYMOUS{

void main__Wrapper(int* arr/* len = 5 */) {
  _main(arr);
}
void main__WrapperNospec(int* arr/* len = 5 */) {}
void test2__Wrapper(int x) {
  test2(x);
}
void test2__WrapperNospec(int x) {}
void _main(int* arr/* len = 5 */) {
  int  t=(arr[1]) - (arr[0]);
  t = ((t) > (0) ? t : -(t));
  int  currmin=t;
  for (int  i=0;(i) < (5);i = i + 1){
    for (int  j=i + 1;(j) < (5);j = j + 1){
      t = (arr[j]) - (arr[i]);
      t = ((t) > (0) ? t : -(t));
      if ((currmin) > (t)) {
        currmin = t;
      }
    }
  }
  bool _tt0[5] = {0, 0, 0, 0, 0};
  int*  sarr_s7= new int [5]; CopyArr<int >(sarr_s7,_tt0, 5, 5);
  msort(arr, sarr_s7);
  t = (sarr_s7[1]) - (sarr_s7[0]);
  t = ((t) > (0) ? t : -(t));
  int  currmin2=t;
  bool  __sa0=1;
  int  i_0=1;
  while (__sa0) {
    t = (sarr_s7[(i_0 + 1)]) - (sarr_s7[i_0]);
    t = ((t) > (0) ? t : -(t));
    if ((currmin2) > (t)) {
      currmin2 = t;
    }
    i_0 = i_0 + 1;
    __sa0 = (i_0) < (4);
  }
  assert ((currmin) == (currmin2));;
}
void test2(int x) {
  bool _tt1[5] = {0, 0, 0, 0, 0};
  int*  _out_s11= new int [5]; CopyArr<int >(_out_s11,_tt1, 5, 5);
  int * _tt2= new int [5]; 
  CopyArr<int>(_tt2,x, 5);
  bsort(_tt2, _out_s11);
}
void msort(int* x/* len = 5 */, int* _out/* len = 5 */) {
  bool _tt3[5] = {0, 0, 0, 0, 0};
  int*  rv_s9= new int [5]; CopyArr<int >(rv_s9,_tt3, 5, 5);
  sortuf(x, rv_s9);
  CopyArr<int >(_out,rv_s9, 5, 5);
  for (int  i=0;(i) < (5);i = i + 1){
    if ((i) < (4)) {
      assert (((rv_s9[i])) <= ((rv_s9[(i + 1)])));;
    }
    int  c2=0;
    int  c1=0;
    for (int  j=0;(j) < (5);j = j + 1){
      if (((rv_s9[j])) == ((rv_s9[i]))) {
        c1 = c1 + 1;
      }
      if (((x[j])) == ((rv_s9[i]))) {
        c2 = c2 + 1;
      }
    }
    assert ((c1) == (c2));;
  }
  delete[] rv_s9;
  return;
}
void bsort(int* input/* len = 5 */, int* _out/* len = 5 */) {
  CopyArr<int >(_out,input, 5, 5);
  for (int  i=0;(i) < (5);i = i + 1){
    for (int  j=i + 1;(j) < (5);j = j + 1){
      if (((_out[j])) < ((_out[i]))) {
        int  tmp=(_out[j]);
        (_out[j]) = (_out[i]);
        (_out[i]) = tmp;
      }
    }
  }
  return;
}
void sortuf(int* x/* len = 5 */, int* _out/* len = 5 */) { bsort(x, _out); }

}
