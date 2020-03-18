#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb479.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  bool _tt0[3] = {0, 0, 0};
  int*  __sa0= new int [4 * 3]; CopyArr<int >(__sa0,_tt0, 4 * 3, 3);
  int _tt1[3] = {1, 2, 3};
  CopyArr<int >((__sa0+ 0),_tt1, 4, 3);
  int _tt2[2] = {4, 5};
  CopyArr<int >((__sa0+ 4),_tt2, 4, 2);
  int _tt3[4] = {4, 3, 2, 1};
  CopyArr<int >((__sa0+ 8),_tt3, 4, 4);
  foo(__sa0);
  bool _tt4[2] = {0, 0};
  int*  __sa1= new int [2 * 2]; CopyArr<int >(__sa1,_tt4, 2 * 2, 2);
  int _tt5[2] = {1, 2};
  CopyArr<int >((__sa1+ 0),_tt5, 2, 2);
  bool _tt6[1] = {1};
  CopyArr<int >((__sa1+ 2),_tt6, 2, 1);
  bool _tt7[3] = {0, 0, 0};
  int*  __sa2= new int [4 * 3]; CopyArr<int >(__sa2,_tt7, 4 * 3, 3);
  for (int  __sa3=0;(__sa3) < (3);__sa3 = __sa3 + 1){
    if ((__sa3) < (2)) {
      assert (((__sa3) >= (0)) && ((__sa3) < (3)));;
      assert (((__sa3) >= (0)) && ((__sa3) < (2)));;
      CopyArr<int >((__sa2+ 4 * __sa3),(__sa1+ 2 * __sa3), 4, 2);
    } else {
      assert (((__sa3) >= (0)) && ((__sa3) < (3)));;
      CopyArr<int >((__sa2+ 4 * __sa3),0, 4);
    }
  }
  boo(__sa2);
  bool _tt8[3] = {0, 0, 0};
  int*  __sa5= new int [4 * 3]; CopyArr<int >(__sa5,_tt8, 4 * 3, 3);
  for (int  __sa6=0;(__sa6) < (3);__sa6 = __sa6 + 1){
    assert (((__sa6) >= (0)) && ((__sa6) < (3)));;
    CopyArr<int >((__sa5+ 4 * __sa6),0, 4);
  }
  moo(__sa5);
  delete[] __sa0;
  delete[] __sa1;
  delete[] __sa2;
  delete[] __sa5;
}
void foo(int* x/* len = 4 * 3 */) {
  assert (((x[3])) == (0));;
  int _tt9[4] = {4, 5, 0, 0};
  assert (arrCompare((x+ 4), 4, _tt9, 4) && ((4) == (4)));;
  int _tt10[4] = {1, 2, 3, 0};
  assert (arrCompare((x+ 0), 4, _tt10, 4) && ((4) == (4)));;
}
void boo(int* x/* len = 4 * 3 */) {
  assert (((x[3])) == (0));;
  bool _tt11[4] = {1, 0, 0, 0};
  assert (arrCompare((x+ 4), 4, _tt11, 4) && ((4) == (4)));;
  int _tt12[4] = {1, 2, 0, 0};
  assert (arrCompare((x+ 0), 4, _tt12, 4) && ((4) == (4)));;
}
void moo(int* x/* len = 4 * 3 */) {
  assert (((x[3])) == (0));;
  bool _tt13[4] = {0, 0, 0, 0};
  assert (arrCompare((x+ 4), 4, _tt13, 4) && ((4) == (4)));;
  bool _tt14[4] = {0, 0, 0, 0};
  assert (arrCompare((x+ 0), 4, _tt14, 4) && ((4) == (4)));;
}

}
