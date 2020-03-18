#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb558.h"
namespace ANONYMOUS{

void main__Wrapper(int n, bool* a/* len = n */) {
  _main(n, a);
}
void main__WrapperNospec(int n, bool* a/* len = n */) {}
void _main(int n, bool* a/* len = n */) {
  if(!((n) < (8))){ throw AssumptionFailedException();  };
  bool*  b_s3= new bool [n]; CopyArr<bool >(b_s3,0, n);
  reverse(n, a, b_s3);
  bool*  c_s5= new bool [n]; CopyArr<bool >(c_s5,0, n);
  reverse_sk(n, a, c_s5);
  assert (arrCompare(b_s3, n, c_s5, n) && ((n) == (n)));;
  delete[] b_s3;
  delete[] c_s5;
}
void reverse(int n, bool* a/* len = n */, bool* _out/* len = n */) {
  bool*  rv_s7= new bool [n]; CopyArr<bool >(rv_s7,0, n);
  moo(n, a, rv_s7);
  CopyArr<bool >(_out,rv_s7, n, n);
  int  i=0;
  int  j=n - 1;
  while ((i) < (n)) {
    assert (((rv_s7[i])) == ((a[j])));;
    i = i + 1;
    j = j - 1;
  }
  delete[] rv_s7;
  return;
}
void reverse_sk(int n, bool* a/* len = n */, bool* _out/* len = n */) {
  CopyArr<bool >(_out,0, n);
  for (int  i=0;(i) < (n);i = i + 1){
    (_out[i]) = (a[(n - 1) - i]);
  }
  return;
}
void moo(int n, bool* a/* len = n */, bool* _out/* len = n */) { for(int i=0; i<n; ++i){ _out[i] = a[n-i-1]; } }

}
