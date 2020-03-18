#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb320_hole.h"
namespace ANONYMOUS{

void cacheObv1dSK(int N, int T, float* in/* len = N */, float* f/* len = N * T */, float* _out/* len = N * T */) {
  for (int  __sa21=0;(__sa21) < (T);__sa21 = __sa21 + 1){
    assert (((__sa21) >= (0)) && ((__sa21) < (T)));;
    CopyArr<float >((_out+ N * __sa21),0.0f, N);
  }
  for (int  __sa22=0;(__sa22) < (T);__sa22 = __sa22 + 1){
    assert (((__sa22) >= (0)) && ((__sa22) < (T)));;
    CopyArr<float >((_out+ N * __sa22),0.0f, N);
  }
  forLoop_t12(0, T, T, N, in, f, _out);
  return;
}
void cacheObv1d(int N, int T, float* in/* len = N */, float* f/* len = N * T */, float* _out/* len = N * T */) {
  for (int  __sa23=0;(__sa23) < (T);__sa23 = __sa23 + 1){
    assert (((__sa23) >= (0)) && ((__sa23) < (T)));;
    CopyArr<float >((_out+ N * __sa23),0.0f, N);
  }
  for (int  __sa24=0;(__sa24) < (T);__sa24 = __sa24 + 1){
    assert (((__sa24) >= (0)) && ((__sa24) < (T)));;
    CopyArr<float >((_out+ N * __sa24),0.0f, N);
  }
  for (int  i=0;(i) < (T);i = i + 1){
    for (int  j=0;(j) < (N);j = j + 1){
      assert (((i) >= (0)) && ((i) < (T)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert (((i) >= (0)) && ((i) < (T)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      (_out[(N * i) + j]) = (in[j]) + (f[((N * i) + j)]);
    }
  }
  return;
}
void forLoop_t12(int low, int high, int T1, int N0, float* in3_0/* len = N0 */, float* f4_1/* len = N0 * T1 */, float* out2/* len = N0 * T1 */) {
  if ((low) < (high)) {
    forLoop_t24(0, N0, T1, low, N0, in3_0, f4_1, out2);
    forLoop_t12(low + 1, high, T1, N0, in3_0, f4_1, out2);
  }
}
void forLoop_t24(int low, int high, int T1, int i5, int N0, float* in3_0/* len = N0 */, float* f4_1/* len = N0 * T1 */, float* out2/* len = N0 * T1 */) {
  if ((low) < (high)) {
    assert (((i5) >= (0)) && ((i5) < (T1)));;
    assert (((low) >= (0)) && ((low) < (N0)));;
    assert (((i5) >= (0)) && ((i5) < (T1)));;
    assert (((low) >= (0)) && ((low) < (N0)));;
    (out2[(N0 * i5) + low]) = (in3_0[low]) + (f4_1[((N0 * i5) + low)]);
    forLoop_t24(low + 1, high, T1, i5, N0, in3_0, f4_1, out2);
  }
}

}
