#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb681.h"
namespace ANONYMOUS{

void mainB__Wrapper(int x, int y) {
  mainB(x, y);
}
void mainB__WrapperNospec(int x, int y) {}
void mainC__Wrapper(int x, int y) {
  mainC(x, y);
}
void mainC__WrapperNospec(int x, int y) {}
void main__Wrapper(int x, int y) {
  _main(x, y);
}
void main__WrapperNospec(int x, int y) {}
void mainB(int x, int y) {
  if(!((y) > (x))){ throw AssumptionFailedException();  };
  if(!((y) < (x))){ throw AssumptionFailedException();  };
  assert (0);;
}
void mainC(int x, int y) {
  if (!((y) > (x))) {
    return;
  }
  if ((x) < (y)) {
    return;
  }
  assert (!((x) < (y)));;
}
void _main(int x, int y) {
  if(!((x) < ((y + 5)))){ throw AssumptionFailedException();  };
  assert (((x + 11)) <= ((y + 15)));;
}

}
