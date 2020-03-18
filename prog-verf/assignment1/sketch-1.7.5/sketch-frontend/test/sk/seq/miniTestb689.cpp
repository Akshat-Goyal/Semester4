#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb689.h"
namespace ANONYMOUS{

void lssSketch(int* in_0/* len = 4 */, int& _out) {
  int*  in= new int [4]; CopyArr<int >(in,in_0, 4, 4);
  for (int  i=0;(i) < (4);i = i + 1){
    (in[i]) = (in[i]) - 3;
  }
  _out = 0;
  int  sum=0;
  for (int  i_0=0;(i_0) < (4);i_0 = i_0 + 1){
    sum = sum + (in[i_0]);
    if (((3 + sum)) <= (3)) {
      sum = sum - sum;
    }
    if ((sum) > (_out)) {
      _out = sum;
    }
  }
  delete[] in;
  return;
}
void lss(int* in_0/* len = 4 */, int& _out) {
  int*  in= new int [4]; CopyArr<int >(in,in_0, 4, 4);
  for (int  i=0;(i) < (4);i = i + 1){
    (in[i]) = (in[i]) - 3;
  }
  _out = 0;
  int  sum=0;
  for (int  i_0=0;(i_0) < (4);i_0 = i_0 + 1){
    sum = 0;
    for (int  j=i_0;(j) < (4);j = j + 1){
      sum = sum + (in[j]);
      if ((sum) > (_out)) {
        _out = sum;
      }
    }
  }
  delete[] in;
  return;
}

}
