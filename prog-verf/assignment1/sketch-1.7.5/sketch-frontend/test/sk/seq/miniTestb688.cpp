#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb688.h"
namespace ANONYMOUS{

void m2(double* a/* len = 10 */, double* b/* len = 10 */) {
  assert ((fabs((a[5]) - (b[5])-((a[5]) + -((b[5])))) < 0.0001));;
}
void m(double* a/* len = 10 */, double* b/* len = 10 */) {}
void foo__Wrapper(int n, double* x/* len = n */) {
  foo(n, x);
}
void foo__WrapperNospec(int n, double* x/* len = n */) {}
void foo(int n, double* x/* len = n */) {
  if(!((n) > (5))){ throw AssumptionFailedException();  };
  assert ((fabs((x[3]) + (x[4])-((((x[3]) - (x[0])) + (x[4])) + (x[0]))) < 0.0001));;
}

}
