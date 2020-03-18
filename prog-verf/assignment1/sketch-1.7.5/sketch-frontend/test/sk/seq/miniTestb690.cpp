#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb690.h"
namespace ANONYMOUS{

void main__Wrapper(int n) {
  _main(n);
}
void main__WrapperNospec(int n) {}
void _main(int n) {
  if(!((n) == (6))){ throw AssumptionFailedException();  };
  int _tt0[6] = {1, 2, 3, 4, 5, 6};
  int*  tt= new int [n]; CopyArr<int >(tt,_tt0, n, 6);
  int  x=(tt[1]);
  CopyArr<int >((tt+ 0),(tt+ 3), 3, 3);
  (tt[0]) = x;
  assert (((tt[0])) == (2));;
  delete[] tt;
}

}
