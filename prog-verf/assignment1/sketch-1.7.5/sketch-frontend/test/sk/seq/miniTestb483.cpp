#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb483.h"
namespace ANONYMOUS{

void main__Wrapper(int i1, int j1, int i2, int j2) {
  _main(i1, j1, i2, j2);
}
void main__WrapperNospec(int i1, int j1, int i2, int j2) {}
void _main(int i1, int j1, int i2, int j2) {
  int  i=i2 - i1;
  int  i_0=j2 - j1;
  int  dist_s7=0;
  sqrt((i * i) + (i_0 * i_0), dist_s7);
  if (((i1) == (i2)) && ((j1) == (j2))) {
    assert ((dist_s7) == (0));;
  }
  int  i_1=i1 - i1;
  int  _out_s9=((i_1) >= (0) ? i_1 : -(i_1));
  assert ((dist_s7) >= (_out_s9));;
  int  i_2=j1 - j1;
  int  _out_s11=((i_2) >= (0) ? i_2 : -(i_2));
  assert ((dist_s7) >= (_out_s11));;
}
void sqrt(int i, int& _out) {
  int  rv_s13=0;
  msqrt(i, rv_s13);
  _out = rv_s13;
  if ((i) == (0)) {
    assert ((rv_s13) == (0));;
  }
  assert (((rv_s13 * rv_s13)) <= (i));;
  assert ((((rv_s13 + 1) * (rv_s13 + 1))) > (i));;
  return;
}
void msqrt(int i, int& _out) { for(int t=0; t<=i; ++t){  if((t+1)*(t+1)>i){_out=t; printf("%d -> %d\n",i, _out); return; }  } }

}
