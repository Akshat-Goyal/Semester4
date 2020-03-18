#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb573.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  int*  a= new int [80]; CopyArr<int >(a,0, 80);
  for (int  t=0;(t) < (80);t = t + 1){
    (a[t]) = t;
  }
  for (int  t_0=0;(t_0) < (80);t_0 = t_0 + 1){
    (a[t_0]) = (a[t_0]) + t_0;
  }
  for (int  t_1=0;(t_1) < (80);t_1 = t_1 + 1){
    (a[t_1]) = (a[t_1]) + t_1;
    assert ((t_1) < (5));;
  delete[] a;
    return;
  }
  for (int  t_2=0;(t_2) < (80);t_2 = t_2 + 1){
    (a[t_2]) = (a[t_2]) + t_2;
  }
  for (int  t_3=0;(t_3) < (80);t_3 = 1 + t_3){
    (a[t_3]) = (a[t_3]) + t_3;
  }
  delete[] a;
}

}
