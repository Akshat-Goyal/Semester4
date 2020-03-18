#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "minitestb821.h"
namespace ANONYMOUS{

void main__Wrapper(int N, int M) {
  _main(N, M);
}
void main__WrapperNospec(int N, int M) {}
void _main(int N, int M) {
  if(!(((((N) < (5)) && ((M) < (5))) && ((N) > (0))) && ((M) > (0)))){ throw AssumptionFailedException();  };
  int  cmax=0;
  forall_lam_s02(0, N, M, cmax);
  assert (((N) < (M) ? (cmax) == ((M - 1)) : (cmax) == ((N - 1))));;
}
void forall_lam_s02(int a, int b, int M1, int& cmax0) {
  for (int  i=a;(i) < (b);i = i + 1){
    forall_lam_s23(0, M1, i, cmax0);
  }
}
void forall_lam_s23(int a, int b, int i2, int& cmax0) {
  for (int  i=a;(i) < (b);i = i + 1){
    body1(i2, i, cmax0);
  }
}
void body1(int i, int j, int& cmax) {
  if ((i) > (cmax)) {
    cmax = i;
  }
  if ((j) > (cmax)) {
    cmax = j;
  }
}

}
