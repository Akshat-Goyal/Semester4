#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb694.h"
namespace A{

void main1__Wrapper() {
  main1();
}
void main1__WrapperNospec() {}
void glblInit_tt__A_s13(int& tt__A_s12) {
  tt__A_s12 = 3;
}
void glblInit_y__A_s15(int& y__A_s14) {
  y__A_s14 = 10;
}
void main1() {
  int  _out_s5=0;
  checky(10, _out_s5);
  int  _out_s9=0;
  checky(10, _out_s9);
  bool _tt0[3] = {0, 0, 0};
  int*  v_s11= new int [3]; CopyArr<int >(v_s11,_tt0, 3, 3);
  int _tt1[3] = {1, 2, 3};
  foo(_tt1, v_s11);
  delete[] v_s11;
}
void foo(int* x/* len = 3 */, int* _out/* len = 3 */) {
  CopyArr<int >(_out,x, 3, 3);
  return;
}
void checky(int t, int& _out) { assert(t==10); } 

}
namespace ANONYMOUS{


}
