#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb299.h"
namespace ANONYMOUS{

void testComp__Wrapper(int a, int b, int c) {
  testComp(a, b, c);
}
void testComp__WrapperNospec(int a, int b, int c) {}
void testComp(int a, int b, int c) {
  bool  xa_s36=((2 + c)) < ((3 + b));
  bool  xa=0;
  xa = xa_s36;
  if (xa_s36) {
    xa = (a) < ((b + 1));
  }
  assert ((!(xa)) == ((((a) > (b)) || (((a + c)) > ((b + a))))));;
}

}
namespace generators{


}
