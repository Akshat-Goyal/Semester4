#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb486.h"
namespace ANONYMOUS{

void main__Wrapper(int p) {
  _main(p);
}
void main__WrapperNospec(int p) {}
void _main(int p) {
  if ((p) <= (1)) {
    return;
  }
  int  i=0;
  int  rspec=1;
  for (i = 2;(i) < (p);i = i + 1){
    if (((p % i)) == (0)) {
      rspec = 0;
    }
  }
  i = 2;
  int  __sa0_s3=0;
  msqrt(p, __sa0_s3);
  bool  __sa0=0;
  __sa0 = (2) <= (__sa0_s3);
  int  rsk=1;
  while (__sa0) {
    if (((p % i)) == (0)) {
      rsk = 0;
    }
    i = i + 1;
    int  __sa0_s5=0;
    msqrt(p, __sa0_s5);
    __sa0 = (i) <= (__sa0_s5);
  }
  assert ((rsk) == (rspec));;
}
void msqrt(int i, int& _out) {
  int  rv_s7=0;
  sqrtuf(i, rv_s7);
  _out = rv_s7;
  if ((i) == (0)) {
    assert ((rv_s7) == (0));;
  }
  assert (((rv_s7 * rv_s7)) <= (i));;
  assert ((((rv_s7 + 1) * (rv_s7 + 1))) > (i));;
  return;
}
void sqrtuf(int i, int& _out) { for(int t=0; t<i; ++t){  if((t+1)*(t+1)>i){_out=t; return; }  } }

}
