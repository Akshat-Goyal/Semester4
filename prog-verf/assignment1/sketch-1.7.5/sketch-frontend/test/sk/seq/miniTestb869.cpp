#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb869.h"
namespace ANONYMOUS{

void main__Wrapper(int al, int ah, int bl, int bh, int a, int b) {
  _main(al, ah, bl, bh, a, b);
}
void main__WrapperNospec(int al, int ah, int bl, int bh, int a, int b) {}
void _main(int al_0, int ah_1, int bl_2, int bh_3, int a_4, int b_5) {
  int  b=b_5;
  int  a=a_4;
  int  bh=bh_3;
  int  bl=bl_2;
  int  ah=ah_1;
  int  al=al_0;
  al = al_0 - 10;
  ah = ah_1 - 10;
  bl = bl_2 - 10;
  bh = bh_3 - 10;
  a = a_4 - 10;
  b = b_5 - 10;
  if(!((al) <= (a))){ throw AssumptionFailedException();  };
  if(!((a) <= (ah))){ throw AssumptionFailedException();  };
  if(!((bl) <= (b))){ throw AssumptionFailedException();  };
  if(!((b) <= (bh))){ throw AssumptionFailedException();  };
  if(!((bh) != (0))){ throw AssumptionFailedException();  };
  if(!((bl) != (0))){ throw AssumptionFailedException();  };
  bool _tt0[2] = {0, 0};
  int*  r_s7= new int [2]; CopyArr<int >(r_s7,_tt0, 2, 2);
  range(al, ah, bl, bh, r_s7);
  int  _out_s9=0;
  div(a, b, _out_s9);
  assert (((r_s7[0])) <= (_out_s9));;
  int  _out_s11=0;
  div(a, b, _out_s11);
  assert (((r_s7[1])) >= (_out_s11));;
  if (((((al) == (5)) && ((ah) == (10))) && ((bl) == (2))) && ((bh) == (4))) {
    assert ((((r_s7[1]) - (r_s7[0]))) < (5));;
  }
  if (((((al) == (-10)) && ((ah) == (-5))) && ((bl) == (-4))) && ((bh) == (-2))) {
    assert ((((r_s7[1]) - (r_s7[0]))) < (5));;
  }
  if (((((al) == (-10)) && ((ah) == (-5))) && ((bl) == (2))) && ((bh) == (4))) {
    assert ((((r_s7[1]) - (r_s7[0]))) < (5));;
  }
  if (((((al) == (5)) && ((ah) == (10))) && ((bl) == (-4))) && ((bh) == (-2))) {
    assert ((((r_s7[1]) - (r_s7[0]))) < (5));;
  }
}
void range(int alo, int ahi, int blo, int bhi, int* _out/* len = 2 */) {
  if (((alo) > (0)) && ((blo) > (0))) {
    int  _out_s19=0;
    div(alo, bhi, _out_s19);
    int  _out_s21=0;
    div(ahi, blo, _out_s21);
    int _tt1[2] = {_out_s19, _out_s21};
    CopyArr<int >(_out,_tt1, 2, 2);
    return;
  }
  if (((ahi) <= (0)) && ((bhi) < (0))) {
    int  _out_s13=0;
    div(ahi, blo, _out_s13);
    int  _out_s13_0=0;
    div(alo, bhi, _out_s13_0);
    int _tt2[2] = {_out_s13, _out_s13_0};
    CopyArr<int >(_out,_tt2, 2, 2);
    return;
  }
  if (((ahi) <= (0)) && ((blo) > (0))) {
    int  _out_s13_1=0;
    div(alo, blo, _out_s13_1);
    int  _out_s13_2=0;
    div(ahi, bhi, _out_s13_2);
    int _tt3[2] = {_out_s13_1, _out_s13_2};
    CopyArr<int >(_out,_tt3, 2, 2);
    return;
  }
  if (((alo) > (0)) && ((bhi) < (0))) {
    int  _out_s13_3=0;
    div(ahi, bhi, _out_s13_3);
    int  _out_s13_4=0;
    div(alo, blo, _out_s13_4);
    int _tt4[2] = {_out_s13_3, _out_s13_4};
    CopyArr<int >(_out,_tt4, 2, 2);
    return;
  }
  if ((-(ahi)) > (alo)) {
    int _tt5[2] = {alo, -(alo)};
    CopyArr<int >(_out,_tt5, 2, 2);
    return;
  }
  int _tt6[2] = {-(ahi), ahi};
  CopyArr<int >(_out,_tt6, 2, 2);
  return;
}
void div(int a, int b, int& _out) {
  if ((b) != (0)) {
    _out = a / b;
    return;
  } else {
    _out = a;
    return;
  }
}

}
