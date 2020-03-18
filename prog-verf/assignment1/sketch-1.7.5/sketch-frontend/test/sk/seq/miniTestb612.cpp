#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb612.h"
namespace ANONYMOUS{

void inv__Wrapper() {
  bool  _out_s3=0;
  inv(_out_s3);
}
void inv__WrapperNospec() {}
void inv(bool& _out) {
  bool _tt0[5] = {0, 0, 0, 0, 0};
  int*  list= new int [5]; CopyArr<int >(list,_tt0, 5, 5);
  bool  _out_s1=0;
  bug3_bug3(5, list, _out_s1);
  _out = _out_s1;
  delete[] list;
  return;
}
void bug3_bug3(int n, int* list/* len = n */, bool& _out) {
  _out = 0;
  return;
}

}
