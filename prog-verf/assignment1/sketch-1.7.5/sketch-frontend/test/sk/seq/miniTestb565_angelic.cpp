#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb565_angelic.h"
namespace generators{

void main__Wrapper(int* a/* len = 4 */) {}
void main__WrapperNospec(int* a/* len = 4 */) {}
void _main(int* a/* len = 4 */) {}
void calc(int N, int* in/* len = 4 */, int* rator/* len = 8 */, int* xrand/* len = 8 */, int* yrand/* len = 8 */, int* _out/* len = N + 8 */) {
  int*  result_s9= new int [N + 8]; CopyArr<int >(result_s9,0, N + 8);
  moo(N, in, rator, xrand, yrand, result_s9);
  CopyArr<int >(_out,result_s9, N + 8, N + 8);
  assert (arrCompare((result_s9+ 0), N, in, 4) && ((N) == (4)));;
  int  r=0;
  r = (result_s9[N]);
  int  o=0;
  o = (rator[0]);
  int  x=0;
  x = (xrand[0]);
  int  y=0;
  y = (yrand[0]);
  assert ((o) <= (4));;
  assert ((x) < (N));;
  assert ((y) < (N));;
  int  a=(result_s9[x]);
  int  b=(result_s9[y]);
  bool  _has_out_=0;
  int  _out_s11=0;
  if ((o) == (0)) {
    _out_s11 = a + b;
    _has_out_ = 1;
  }
  if ((_has_out_) == (0)) {
    if ((o) == (1)) {
      _out_s11 = a - b;
      _has_out_ = 1;
    }
  }
  if ((_has_out_) == (0)) {
    if ((o) == (2)) {
      _out_s11 = a * b;
      _has_out_ = 1;
    }
  }
  if ((_has_out_) == (0)) {
    if ((o) == (3)) {
      _out_s11 = a / b;
      _has_out_ = 1;
    }
  }
  if ((_has_out_) == (0)) {
    if ((o) == (4)) {
      _out_s11 = a % b;
    }
  }
  assert ((r) == (_out_s11));;
  int  i=N + 1;
  int  r_0=(result_s9[i]);
  assert (((rator[1])) <= (4));;
  assert (((xrand[1])) < (i));;
  assert (((yrand[1])) < (i));;
  int  a_0=(result_s9[(xrand[1])]);
  int  b_0=(result_s9[(yrand[1])]);
  bool  _has_out__0=0;
  int  _out_s11_0=0;
  if (((rator[1])) == (0)) {
    _out_s11_0 = a_0 + b_0;
    _has_out__0 = 1;
  }
  if ((_has_out__0) == (0)) {
    if (((rator[1])) == (1)) {
      _out_s11_0 = a_0 - b_0;
      _has_out__0 = 1;
    }
  }
  if ((_has_out__0) == (0)) {
    if (((rator[1])) == (2)) {
      _out_s11_0 = a_0 * b_0;
      _has_out__0 = 1;
    }
  }
  if ((_has_out__0) == (0)) {
    if (((rator[1])) == (3)) {
      _out_s11_0 = a_0 / b_0;
      _has_out__0 = 1;
    }
  }
  if ((_has_out__0) == (0)) {
    if (((rator[1])) == (4)) {
      _out_s11_0 = a_0 % b_0;
    }
  }
  assert ((r_0) == (_out_s11_0));;
  i = i + 1;
  int  r_1=(result_s9[i]);
  assert (((rator[2])) <= (4));;
  assert (((xrand[2])) < (i));;
  assert (((yrand[2])) < (i));;
  int  a_1=(result_s9[(xrand[2])]);
  int  b_1=(result_s9[(yrand[2])]);
  bool  _has_out__1=0;
  int  _out_s11_1=0;
  if (((rator[2])) == (0)) {
    _out_s11_1 = a_1 + b_1;
    _has_out__1 = 1;
  }
  if ((_has_out__1) == (0)) {
    if (((rator[2])) == (1)) {
      _out_s11_1 = a_1 - b_1;
      _has_out__1 = 1;
    }
  }
  if ((_has_out__1) == (0)) {
    if (((rator[2])) == (2)) {
      _out_s11_1 = a_1 * b_1;
      _has_out__1 = 1;
    }
  }
  if ((_has_out__1) == (0)) {
    if (((rator[2])) == (3)) {
      _out_s11_1 = a_1 / b_1;
      _has_out__1 = 1;
    }
  }
  if ((_has_out__1) == (0)) {
    if (((rator[2])) == (4)) {
      _out_s11_1 = a_1 % b_1;
    }
  }
  assert ((r_1) == (_out_s11_1));;
  i = i + 1;
  int  r_2=(result_s9[i]);
  assert (((rator[3])) <= (4));;
  assert (((xrand[3])) < (i));;
  assert (((yrand[3])) < (i));;
  int  a_2=(result_s9[(xrand[3])]);
  int  b_2=(result_s9[(yrand[3])]);
  bool  _has_out__2=0;
  int  _out_s11_2=0;
  if (((rator[3])) == (0)) {
    _out_s11_2 = a_2 + b_2;
    _has_out__2 = 1;
  }
  if ((_has_out__2) == (0)) {
    if (((rator[3])) == (1)) {
      _out_s11_2 = a_2 - b_2;
      _has_out__2 = 1;
    }
  }
  if ((_has_out__2) == (0)) {
    if (((rator[3])) == (2)) {
      _out_s11_2 = a_2 * b_2;
      _has_out__2 = 1;
    }
  }
  if ((_has_out__2) == (0)) {
    if (((rator[3])) == (3)) {
      _out_s11_2 = a_2 / b_2;
      _has_out__2 = 1;
    }
  }
  if ((_has_out__2) == (0)) {
    if (((rator[3])) == (4)) {
      _out_s11_2 = a_2 % b_2;
    }
  }
  assert ((r_2) == (_out_s11_2));;
  i = i + 1;
  int  r_3=(result_s9[i]);
  assert (((rator[4])) <= (4));;
  assert (((xrand[4])) < (i));;
  assert (((yrand[4])) < (i));;
  int  a_3=(result_s9[(xrand[4])]);
  int  b_3=(result_s9[(yrand[4])]);
  bool  _has_out__3=0;
  int  _out_s11_3=0;
  if (((rator[4])) == (0)) {
    _out_s11_3 = a_3 + b_3;
    _has_out__3 = 1;
  }
  if ((_has_out__3) == (0)) {
    if (((rator[4])) == (1)) {
      _out_s11_3 = a_3 - b_3;
      _has_out__3 = 1;
    }
  }
  if ((_has_out__3) == (0)) {
    if (((rator[4])) == (2)) {
      _out_s11_3 = a_3 * b_3;
      _has_out__3 = 1;
    }
  }
  if ((_has_out__3) == (0)) {
    if (((rator[4])) == (3)) {
      _out_s11_3 = a_3 / b_3;
      _has_out__3 = 1;
    }
  }
  if ((_has_out__3) == (0)) {
    if (((rator[4])) == (4)) {
      _out_s11_3 = a_3 % b_3;
    }
  }
  assert ((r_3) == (_out_s11_3));;
  i = i + 1;
  int  r_4=(result_s9[i]);
  assert (((rator[5])) <= (4));;
  assert (((xrand[5])) < (i));;
  assert (((yrand[5])) < (i));;
  int  a_4=(result_s9[(xrand[5])]);
  int  b_4=(result_s9[(yrand[5])]);
  bool  _has_out__4=0;
  int  _out_s11_4=0;
  if (((rator[5])) == (0)) {
    _out_s11_4 = a_4 + b_4;
    _has_out__4 = 1;
  }
  if ((_has_out__4) == (0)) {
    if (((rator[5])) == (1)) {
      _out_s11_4 = a_4 - b_4;
      _has_out__4 = 1;
    }
  }
  if ((_has_out__4) == (0)) {
    if (((rator[5])) == (2)) {
      _out_s11_4 = a_4 * b_4;
      _has_out__4 = 1;
    }
  }
  if ((_has_out__4) == (0)) {
    if (((rator[5])) == (3)) {
      _out_s11_4 = a_4 / b_4;
      _has_out__4 = 1;
    }
  }
  if ((_has_out__4) == (0)) {
    if (((rator[5])) == (4)) {
      _out_s11_4 = a_4 % b_4;
    }
  }
  assert ((r_4) == (_out_s11_4));;
  i = i + 1;
  int  r_5=(result_s9[i]);
  assert (((rator[6])) <= (4));;
  assert (((xrand[6])) < (i));;
  assert (((yrand[6])) < (i));;
  int  a_5=(result_s9[(xrand[6])]);
  int  b_5=(result_s9[(yrand[6])]);
  bool  _has_out__5=0;
  int  _out_s11_5=0;
  if (((rator[6])) == (0)) {
    _out_s11_5 = a_5 + b_5;
    _has_out__5 = 1;
  }
  if ((_has_out__5) == (0)) {
    if (((rator[6])) == (1)) {
      _out_s11_5 = a_5 - b_5;
      _has_out__5 = 1;
    }
  }
  if ((_has_out__5) == (0)) {
    if (((rator[6])) == (2)) {
      _out_s11_5 = a_5 * b_5;
      _has_out__5 = 1;
    }
  }
  if ((_has_out__5) == (0)) {
    if (((rator[6])) == (3)) {
      _out_s11_5 = a_5 / b_5;
      _has_out__5 = 1;
    }
  }
  if ((_has_out__5) == (0)) {
    if (((rator[6])) == (4)) {
      _out_s11_5 = a_5 % b_5;
    }
  }
  assert ((r_5) == (_out_s11_5));;
  i = i + 1;
  int  r_6=(result_s9[i]);
  assert (((rator[7])) <= (4));;
  assert (((xrand[7])) < (i));;
  assert (((yrand[7])) < (i));;
  int  a_6=(result_s9[(xrand[7])]);
  int  b_6=(result_s9[(yrand[7])]);
  bool  _has_out__6=0;
  int  _out_s11_6=0;
  if (((rator[7])) == (0)) {
    _out_s11_6 = a_6 + b_6;
    _has_out__6 = 1;
  }
  if ((_has_out__6) == (0)) {
    if (((rator[7])) == (1)) {
      _out_s11_6 = a_6 - b_6;
      _has_out__6 = 1;
    }
  }
  if ((_has_out__6) == (0)) {
    if (((rator[7])) == (2)) {
      _out_s11_6 = a_6 * b_6;
      _has_out__6 = 1;
    }
  }
  if ((_has_out__6) == (0)) {
    if (((rator[7])) == (3)) {
      _out_s11_6 = a_6 / b_6;
      _has_out__6 = 1;
    }
  }
  if ((_has_out__6) == (0)) {
    if (((rator[7])) == (4)) {
      _out_s11_6 = a_6 % b_6;
    }
  }
  assert ((r_6) == (_out_s11_6));;
  delete[] result_s9;
  return;
}
void moo(int N, int* in/* len = 4 */, int* rator/* len = 8 */, int* xrand/* len = 8 */, int* yrand/* len = 8 */, int* _out/* len = N + 8 */) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	CopyArr<int >(_out,0, N + 8);

}

}
