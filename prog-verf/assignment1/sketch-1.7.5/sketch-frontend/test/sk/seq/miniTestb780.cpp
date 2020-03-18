#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb780.h"
namespace ANONYMOUS{

void main__Wrapper(int x, int y) {
  _main(x, y);
}
void main__WrapperNospec(int x, int y) {}
void _main(int x, int y) {
  assert ((((3 + x) / 3)) == ((1 + (x / 3))));;
  int _tt0[5] = {4, 5, 6, 7, 3};
  int*  t= new int [5]; CopyArr<int >(t,_tt0, 5, 5);
  assert (((t[((x + 11) % 5)])) == ((((x + 2) % 5) + 3)));;
  delete[] t;
}

}
