#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb235.h"
namespace ANONYMOUS{

void testSK1(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=1;(i) < ((N - 1));i = i + 1){
    (_out[i]) = (in[(i - 1)]) + (in[(i + 1)]);
  }
  return;
}
void test1(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=1;(i) < ((N - 1));i = i + 1){
    (_out[i]) = (in[(i - 1)]) + (in[(i + 1)]);
  }
  return;
}

}
