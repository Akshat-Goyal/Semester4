#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb844.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  if(!((x) < (8))){ throw AssumptionFailedException();  };
  int*  a= new int [x]; CopyArr<int >(a,0, x);
  int  i=0;
  forall_f1T_int(x, a, i);
  int*  b= new int [x / 2]; CopyArr<int >(b,0, x / 2);
  forall_f1T_int(x / 2, b, i);
  int*  t_s7= new int [x]; CopyArr<int >(t_s7,0, x);
  int * _tt0= new int [x]; 
  CopyArr<int>(_tt0,b, x, x / 2);
  combine_lam_s02T_int(x, a, _tt0, t_s7);
  int*  uu_s9= new int [((((((x / 2)) < (x)) ? x : (x / 2))) < (x) ? x : (((x / 2)) < (x) ? x : x / 2))]; CopyArr<int >(uu_s9,0, ((((((x / 2)) < (x)) ? x : (x / 2))) < (x) ? x : (((x / 2)) < (x) ? x : x / 2)));
  int * _tt1= new int [((((((x / 2)) < (x)) ? x : (x / 2))) < (x) ? x : (((x / 2)) < (x) ? x : x / 2))]; 
  CopyArr<int>(_tt1,b, ((((((x / 2)) < (x)) ? x : (x / 2))) < (x) ? x : (((x / 2)) < (x) ? x : x / 2)), x / 2);
  int * _tt2= new int [((((((x / 2)) < (x)) ? x : (x / 2))) < (x) ? x : (((x / 2)) < (x) ? x : x / 2))]; 
  CopyArr<int>(_tt2,a, ((((((x / 2)) < (x)) ? x : (x / 2))) < (x) ? x : (((x / 2)) < (x) ? x : x / 2)), x);
  fstT_intAr(((((((x / 2)) < (x)) ? x : (x / 2))) < (x) ? x : (((x / 2)) < (x) ? x : x / 2)), _tt1, _tt2, uu_s9);
  int*  uu= new int [x]; CopyArr<int >(uu,0, x);
  CopyArr<int >(uu,uu_s9, x, ((((((x / 2)) < (x)) ? x : (x / 2))) < (x) ? x : (((x / 2)) < (x) ? x : x / 2)));
  for (int  ii=0;(ii) < ((x / 2));ii = ii + 1){
    assert (((t_s7[ii])) == (((2 * ii) + x)));;
    assert (((uu[ii])) == ((b[ii])));;
  }
  for (int  ii_0=x / 2;(ii_0) < (x);ii_0 = ii_0 + 1){
    assert (((t_s7[ii_0])) == (ii_0));;
  }
  delete[] a;
  delete[] b;
  delete[] t_s7;
  delete[] _tt0;
  delete[] uu_s9;
  delete[] _tt1;
  delete[] _tt2;
  delete[] uu;
}
void forall_f1T_int(int n, int* x/* len = n */, int& i0) {
  for (int  i=0;(i) < (n);i = i + 1){
    f1((x[i]), i0);
  }
}
void combine_lam_s02T_int(int n, int* x/* len = n */, int* y/* len = n */, int* _out/* len = n */) {
  CopyArr<int >(_out,0, n);
  for (int  i=0;(i) < (n);i = i + 1){
    int  u=(x[i]);
    int  v=(y[i]);
    (_out[i]) = u + v;
  }
  return;
}
void fstT_intAr(int __sa3, int* x/* len = __sa3 */, int* y/* len = __sa3 */, int* _out/* len = __sa3 */) {
  CopyArr<int >(_out,x, __sa3, __sa3);
  return;
}
void f1(int& s, int& i) {
  int  uo_s5=i;
  i = i + 1;
  s = uo_s5;
}

}
