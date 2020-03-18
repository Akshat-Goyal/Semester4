#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb484.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* x/* len = n */, int q) {
  _main(n, x, q);
}
void main__WrapperNospec(int n, int* x/* len = n */, int q) {}
void _main(int n, int* x_0/* len = n */, int q) {
  int*  x= new int [n]; CopyArr<int >(x,x_0, n, n);
  int  p=n;
  while ((p) > (q)) {
    int*  _out_s1= new int [p / 2]; CopyArr<int >(_out_s1,0, p / 2);
    foo(p, (x+ 0), _out_s1);
    CopyArr<int >((x+ 0),_out_s1, p / 2, p / 2);
    p = p / 2;
    delete[] _out_s1;
  }
}
void foo(int n, int* in/* len = n */, int* _out/* len = n / 2 */) {
  int*  rv_s3= new int [n / 2]; CopyArr<int >(rv_s3,0, n / 2);
  fooUF(n, in, rv_s3);
  CopyArr<int >(_out,rv_s3, n / 2, n / 2);
  delete[] rv_s3;
  return;
}
void fooUF(int n, int* in/* len = n */, int* _out/* len = n / 2 */) { CopyArr<int>(_out, in, n/2, n/2); }

}
