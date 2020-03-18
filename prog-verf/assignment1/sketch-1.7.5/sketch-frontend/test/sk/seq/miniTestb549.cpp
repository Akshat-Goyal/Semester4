#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb549.h"
namespace ANONYMOUS{

void main__Wrapper(int i, int j) {
  _main(i, j);
}
void main__WrapperNospec(int i, int j) {}
void _main(int i, int j) {
  int  zz=i + j;
  int  w=zz + 5;
  int  z=0;
  z = zz / 2;
  int  y=(w + z) + zz;
  zz = zz - 7;
  int  x=(zz + y) + w;
  print(w, x, i, j);
  assert ((x) == (((((i * 27) + (j * 27)) + 20) / 6)));;
}
void print(int x, int y, int i, int j) { printf(" w=%d, b=%d \n ", x, y); assert( x == i + j+5); assert(y==(i*9+j*9)/2+3); }

}
