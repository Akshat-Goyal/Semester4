#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb576.h"
namespace ANONYMOUS{

void moo(int n, int* u/* len = n */) {
  for (int  i=0;(i) < (n);i = i + 1){
    (u[i]) = i + 5;
  }
  for (int  i_0=0;(i_0) < (n);i_0 = i_0 + 1){
    (u[i_0]) = (u[i_0]) - 5;
  }
}
void foo(int n, int* u/* len = n */) {
  for (int  i=0;(i) < (n);i = i + 1){
    (u[i]) = i;
  }
}

}
