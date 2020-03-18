#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "product.h"
namespace ANONYMOUS{

void multTest__Wrapper() {
  multTest();
}
void multTest__WrapperNospec() {}
void multTest() {
  bool _tt0[3] = {0, 0, 0};
  int*  __sa7= new int [2 * 3]; CopyArr<int >(__sa7,_tt0, 2 * 3, 3);
  int _tt1[2] = {1, 2};
  CopyArr<int >((__sa7+ 0),_tt1, 2, 2);
  int _tt2[2] = {1, 5};
  CopyArr<int >((__sa7+ 2),_tt2, 2, 2);
  int _tt3[2] = {3, 4};
  CopyArr<int >((__sa7+ 4),_tt3, 2, 2);
  bool _tt4[2] = {0, 0};
  int*  __sa8= new int [3 * 2]; CopyArr<int >(__sa8,_tt4, 3 * 2, 2);
  int _tt5[3] = {1, 2, 3};
  CopyArr<int >((__sa8+ 0),_tt5, 3, 3);
  int _tt6[3] = {0, 2, 1};
  CopyArr<int >((__sa8+ 3),_tt6, 3, 3);
  bool _tt7[3] = {0, 0, 0};
  int*  _out_s4= new int [3 * 3]; CopyArr<int >(_out_s4,_tt7, 3 * 3, 3);
  product(3, 2, 2, 3, __sa7, __sa8, _out_s4);
  bool _tt8[3] = {0, 0, 0};
  int*  __sa9= new int [3 * 3]; CopyArr<int >(__sa9,_tt8, 3 * 3, 3);
  int _tt9[3] = {1, 6, 5};
  CopyArr<int >((__sa9+ 0),_tt9, 3, 3);
  int _tt10[3] = {1, 12, 8};
  CopyArr<int >((__sa9+ 3),_tt10, 3, 3);
  int _tt11[3] = {3, 14, 13};
  CopyArr<int >((__sa9+ 6),_tt11, 3, 3);
  assert (arrCompare(_out_s4, (3 * 3), __sa9, (3 * 3)) && (((3) == (3)) && ((3) == (3))));;
  bool _tt12[3] = {0, 0, 0};
  int*  __sa10= new int [2 * 3]; CopyArr<int >(__sa10,_tt12, 2 * 3, 3);
  int _tt13[2] = {1, 2};
  CopyArr<int >((__sa10+ 0),_tt13, 2, 2);
  int _tt14[2] = {1, 5};
  CopyArr<int >((__sa10+ 2),_tt14, 2, 2);
  int _tt15[2] = {3, 4};
  CopyArr<int >((__sa10+ 4),_tt15, 2, 2);
  bool _tt16[2] = {0, 0};
  int*  __sa11= new int [3 * 2]; CopyArr<int >(__sa11,_tt16, 3 * 2, 2);
  int _tt17[3] = {1, 2, 3};
  CopyArr<int >((__sa11+ 0),_tt17, 3, 3);
  int _tt18[3] = {0, 2, 1};
  CopyArr<int >((__sa11+ 3),_tt18, 3, 3);
  bool _tt19[3] = {0, 0, 0};
  int*  _out_s6= new int [3 * 3]; CopyArr<int >(_out_s6,_tt19, 3 * 3, 3);
  productSK(3, 2, 2, 3, __sa10, __sa11, _out_s6);
  bool _tt20[3] = {0, 0, 0};
  int*  __sa12= new int [3 * 3]; CopyArr<int >(__sa12,_tt20, 3 * 3, 3);
  int _tt21[3] = {1, 6, 5};
  CopyArr<int >((__sa12+ 0),_tt21, 3, 3);
  int _tt22[3] = {1, 12, 8};
  CopyArr<int >((__sa12+ 3),_tt22, 3, 3);
  int _tt23[3] = {3, 14, 13};
  CopyArr<int >((__sa12+ 6),_tt23, 3, 3);
  assert (arrCompare(_out_s6, (3 * 3), __sa12, (3 * 3)) && (((3) == (3)) && ((3) == (3))));;
  delete[] __sa7;
  delete[] __sa8;
  delete[] _out_s4;
  delete[] __sa9;
  delete[] __sa10;
  delete[] __sa11;
  delete[] _out_s6;
  delete[] __sa12;
}
void product(int M, int N, int P, int Q, int* a/* len = N * M */, int* b/* len = Q * P */, int* _out/* len = Q * M */) {
  for (int  __sa14=0;(__sa14) < (M);__sa14 = __sa14 + 1){
    assert (((__sa14) >= (0)) && ((__sa14) < (M)));;
    CopyArr<int >((_out+ Q * __sa14),0, Q);
  }
  assert ((P) == (N));;
  int  sum=0;
  for (int  i=0;(i) < (M);i = i + 1){
    for (int  j=0;(j) < (Q);j = j + 1){
      sum = 0;
      for (int  k=0;(k) < (P);k = k + 1){
        assert (((i) >= (0)) && ((i) < (M)));;
        assert (((k) >= (0)) && ((k) < (N)));;
        assert (((k) >= (0)) && ((k) < (P)));;
        assert (((j) >= (0)) && ((j) < (Q)));;
        sum = sum + ((a[((N * i) + k)]) * (b[((Q * k) + j)]));
      }
      assert (((i) >= (0)) && ((i) < (M)));;
      assert (((j) >= (0)) && ((j) < (Q)));;
      (_out[(Q * i) + j]) = sum;
    }
  }
  return;
}
void productSK(int M, int N, int P, int Q, int* a/* len = N * M */, int* b/* len = Q * P */, int* _out/* len = Q * M */) {
  for (int  __sa13=0;(__sa13) < (M);__sa13 = __sa13 + 1){
    assert (((__sa13) >= (0)) && ((__sa13) < (M)));;
    CopyArr<int >((_out+ Q * __sa13),0, Q);
  }
  assert ((P) == (N));;
  int  sum=0;
  int  tmp=0;
  for (int  i=0;(i) < (M);i = i + 1){
    for (int  j=0;(j) < (Q);j = j + 1){
      sum = 0;
      for (int  k=0;(k) < (P);k = k + 1){
        assert (((i) >= (0)) && ((i) < (M)));;
        assert (((k) >= (0)) && ((k) < (N)));;
        assert (((k) >= (0)) && ((k) < (P)));;
        assert (((j) >= (0)) && ((j) < (Q)));;
        tmp = (a[((N * i) + k)]) * (b[((Q * k) + j)]);
        int  _tmprhs_s1=sum + tmp;
        sum = _tmprhs_s1;
      }
      assert (((i) >= (0)) && ((i) < (M)));;
      assert (((j) >= (0)) && ((j) < (Q)));;
      (_out[(Q * i) + j]) = sum;
    }
  }
  return;
}

}
