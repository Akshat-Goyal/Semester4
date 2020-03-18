#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb566_angelic.h"
namespace generators{

void main__Wrapper(int* a/* len = 4 */) {}
void main__WrapperNospec(int* a/* len = 4 */) {}
void _main(int* a/* len = 4 */) {}
void calc(int len, int N, int* in_0/* len = 4 */, int* rator/* len = 6 */, int* xrand/* len = 6 */, int* yrand/* len = 6 */, int* _out/* len = 6 */) {
  bool _tt0[6] = {0, 0, 0, 0, 0, 0};
  int*  result_s8= new int [6]; CopyArr<int >(result_s8,_tt0, 6, 6);
  moo(len, N, in_0, rator, xrand, yrand, result_s8);
  CopyArr<int >(_out,result_s8, 6, 6);
  int  o=0;
  o = (rator[0]);
  int  x=0;
  x = (xrand[0]);
  int  y=0;
  y = (yrand[0]);
  assert ((o) <= (4));;
  assert ((x) < (N));;
  assert ((y) < (N));;
  int  a_s10=0;
  if ((x) < (N)) {
    a_s10 = (in_0[x]);
  } else {
    a_s10 = (result_s8[x - N]);
  }
  int  b_s12=0;
  if ((y) < (N)) {
    b_s12 = (in_0[y]);
  } else {
    b_s12 = (result_s8[y - N]);
  }
  bool  _pac_sc_s13=(0) >= (len);
  if (!(_pac_sc_s13)) {
    bool  _has_out_=0;
    int  _pac_sc_s13_s15=0;
    if ((o) == (0)) {
      _pac_sc_s13_s15 = a_s10 + b_s12;
      _has_out_ = 1;
    }
    if ((_has_out_) == (0)) {
      if ((o) == (1)) {
        _pac_sc_s13_s15 = a_s10 - b_s12;
        _has_out_ = 1;
      }
    }
    if ((_has_out_) == (0)) {
      if ((o) == (2)) {
        _pac_sc_s13_s15 = a_s10 * b_s12;
        _has_out_ = 1;
      }
    }
    if ((_has_out_) == (0)) {
      if ((o) == (3)) {
        _pac_sc_s13_s15 = a_s10 / b_s12;
        _has_out_ = 1;
      }
    }
    if ((_has_out_) == (0)) {
      if ((o) == (4)) {
        _pac_sc_s13_s15 = a_s10 % b_s12;
      }
    }
    _pac_sc_s13 = ((result_s8[0])) == (_pac_sc_s13_s15);
  }
  assert (_pac_sc_s13);;
  assert (((rator[1])) <= (4));;
  assert (((xrand[1])) < ((N + 1)));;
  assert (((yrand[1])) < ((N + 1)));;
  int  a_s10_0=0;
  if (((xrand[1])) < (N)) {
    a_s10_0 = (in_0[(xrand[1])]);
  } else {
    a_s10_0 = (result_s8[(xrand[1]) - N]);
  }
  int  b_s12_0=0;
  if (((yrand[1])) < (N)) {
    b_s12_0 = (in_0[(yrand[1])]);
  } else {
    b_s12_0 = (result_s8[(yrand[1]) - N]);
  }
  bool  _pac_sc_s13_0=(1) >= (len);
  if (!(_pac_sc_s13_0)) {
    bool  _has_out__0=0;
    int  _pac_sc_s13_s15_0=0;
    if (((rator[1])) == (0)) {
      _pac_sc_s13_s15_0 = a_s10_0 + b_s12_0;
      _has_out__0 = 1;
    }
    if ((_has_out__0) == (0)) {
      if (((rator[1])) == (1)) {
        _pac_sc_s13_s15_0 = a_s10_0 - b_s12_0;
        _has_out__0 = 1;
      }
    }
    if ((_has_out__0) == (0)) {
      if (((rator[1])) == (2)) {
        _pac_sc_s13_s15_0 = a_s10_0 * b_s12_0;
        _has_out__0 = 1;
      }
    }
    if ((_has_out__0) == (0)) {
      if (((rator[1])) == (3)) {
        _pac_sc_s13_s15_0 = a_s10_0 / b_s12_0;
        _has_out__0 = 1;
      }
    }
    if ((_has_out__0) == (0)) {
      if (((rator[1])) == (4)) {
        _pac_sc_s13_s15_0 = a_s10_0 % b_s12_0;
      }
    }
    _pac_sc_s13_0 = ((result_s8[1])) == (_pac_sc_s13_s15_0);
  }
  assert (_pac_sc_s13_0);;
  assert (((rator[2])) <= (4));;
  assert (((xrand[2])) < ((N + 2)));;
  assert (((yrand[2])) < ((N + 2)));;
  int  a_s10_1=0;
  if (((xrand[2])) < (N)) {
    a_s10_1 = (in_0[(xrand[2])]);
  } else {
    a_s10_1 = (result_s8[(xrand[2]) - N]);
  }
  int  b_s12_1=0;
  if (((yrand[2])) < (N)) {
    b_s12_1 = (in_0[(yrand[2])]);
  } else {
    b_s12_1 = (result_s8[(yrand[2]) - N]);
  }
  bool  _pac_sc_s13_1=(2) >= (len);
  if (!(_pac_sc_s13_1)) {
    bool  _has_out__1=0;
    int  _pac_sc_s13_s15_1=0;
    if (((rator[2])) == (0)) {
      _pac_sc_s13_s15_1 = a_s10_1 + b_s12_1;
      _has_out__1 = 1;
    }
    if ((_has_out__1) == (0)) {
      if (((rator[2])) == (1)) {
        _pac_sc_s13_s15_1 = a_s10_1 - b_s12_1;
        _has_out__1 = 1;
      }
    }
    if ((_has_out__1) == (0)) {
      if (((rator[2])) == (2)) {
        _pac_sc_s13_s15_1 = a_s10_1 * b_s12_1;
        _has_out__1 = 1;
      }
    }
    if ((_has_out__1) == (0)) {
      if (((rator[2])) == (3)) {
        _pac_sc_s13_s15_1 = a_s10_1 / b_s12_1;
        _has_out__1 = 1;
      }
    }
    if ((_has_out__1) == (0)) {
      if (((rator[2])) == (4)) {
        _pac_sc_s13_s15_1 = a_s10_1 % b_s12_1;
      }
    }
    _pac_sc_s13_1 = ((result_s8[2])) == (_pac_sc_s13_s15_1);
  }
  assert (_pac_sc_s13_1);;
  assert (((rator[3])) <= (4));;
  assert (((xrand[3])) < ((N + 3)));;
  assert (((yrand[3])) < ((N + 3)));;
  int  a_s10_2=0;
  if (((xrand[3])) < (N)) {
    a_s10_2 = (in_0[(xrand[3])]);
  } else {
    a_s10_2 = (result_s8[(xrand[3]) - N]);
  }
  int  b_s12_2=0;
  if (((yrand[3])) < (N)) {
    b_s12_2 = (in_0[(yrand[3])]);
  } else {
    b_s12_2 = (result_s8[(yrand[3]) - N]);
  }
  bool  _pac_sc_s13_2=(3) >= (len);
  if (!(_pac_sc_s13_2)) {
    bool  _has_out__2=0;
    int  _pac_sc_s13_s15_2=0;
    if (((rator[3])) == (0)) {
      _pac_sc_s13_s15_2 = a_s10_2 + b_s12_2;
      _has_out__2 = 1;
    }
    if ((_has_out__2) == (0)) {
      if (((rator[3])) == (1)) {
        _pac_sc_s13_s15_2 = a_s10_2 - b_s12_2;
        _has_out__2 = 1;
      }
    }
    if ((_has_out__2) == (0)) {
      if (((rator[3])) == (2)) {
        _pac_sc_s13_s15_2 = a_s10_2 * b_s12_2;
        _has_out__2 = 1;
      }
    }
    if ((_has_out__2) == (0)) {
      if (((rator[3])) == (3)) {
        _pac_sc_s13_s15_2 = a_s10_2 / b_s12_2;
        _has_out__2 = 1;
      }
    }
    if ((_has_out__2) == (0)) {
      if (((rator[3])) == (4)) {
        _pac_sc_s13_s15_2 = a_s10_2 % b_s12_2;
      }
    }
    _pac_sc_s13_2 = ((result_s8[3])) == (_pac_sc_s13_s15_2);
  }
  assert (_pac_sc_s13_2);;
  assert (((rator[4])) <= (4));;
  assert (((xrand[4])) < ((N + 4)));;
  assert (((yrand[4])) < ((N + 4)));;
  int  a_s10_3=0;
  if (((xrand[4])) < (N)) {
    a_s10_3 = (in_0[(xrand[4])]);
  } else {
    a_s10_3 = (result_s8[(xrand[4]) - N]);
  }
  int  b_s12_3=0;
  if (((yrand[4])) < (N)) {
    b_s12_3 = (in_0[(yrand[4])]);
  } else {
    b_s12_3 = (result_s8[(yrand[4]) - N]);
  }
  bool  _pac_sc_s13_3=(4) >= (len);
  if (!(_pac_sc_s13_3)) {
    bool  _has_out__3=0;
    int  _pac_sc_s13_s15_3=0;
    if (((rator[4])) == (0)) {
      _pac_sc_s13_s15_3 = a_s10_3 + b_s12_3;
      _has_out__3 = 1;
    }
    if ((_has_out__3) == (0)) {
      if (((rator[4])) == (1)) {
        _pac_sc_s13_s15_3 = a_s10_3 - b_s12_3;
        _has_out__3 = 1;
      }
    }
    if ((_has_out__3) == (0)) {
      if (((rator[4])) == (2)) {
        _pac_sc_s13_s15_3 = a_s10_3 * b_s12_3;
        _has_out__3 = 1;
      }
    }
    if ((_has_out__3) == (0)) {
      if (((rator[4])) == (3)) {
        _pac_sc_s13_s15_3 = a_s10_3 / b_s12_3;
        _has_out__3 = 1;
      }
    }
    if ((_has_out__3) == (0)) {
      if (((rator[4])) == (4)) {
        _pac_sc_s13_s15_3 = a_s10_3 % b_s12_3;
      }
    }
    _pac_sc_s13_3 = ((result_s8[4])) == (_pac_sc_s13_s15_3);
  }
  assert (_pac_sc_s13_3);;
  assert (((rator[5])) <= (4));;
  assert (((xrand[5])) < ((N + 5)));;
  assert (((yrand[5])) < ((N + 5)));;
  int  a_s10_4=0;
  if (((xrand[5])) < (N)) {
    a_s10_4 = (in_0[(xrand[5])]);
  } else {
    a_s10_4 = (result_s8[(xrand[5]) - N]);
  }
  int  b_s12_4=0;
  if (((yrand[5])) < (N)) {
    b_s12_4 = (in_0[(yrand[5])]);
  } else {
    b_s12_4 = (result_s8[(yrand[5]) - N]);
  }
  bool  _pac_sc_s13_4=(5) >= (len);
  if (!(_pac_sc_s13_4)) {
    bool  _has_out__4=0;
    int  _pac_sc_s13_s15_4=0;
    if (((rator[5])) == (0)) {
      _pac_sc_s13_s15_4 = a_s10_4 + b_s12_4;
      _has_out__4 = 1;
    }
    if ((_has_out__4) == (0)) {
      if (((rator[5])) == (1)) {
        _pac_sc_s13_s15_4 = a_s10_4 - b_s12_4;
        _has_out__4 = 1;
      }
    }
    if ((_has_out__4) == (0)) {
      if (((rator[5])) == (2)) {
        _pac_sc_s13_s15_4 = a_s10_4 * b_s12_4;
        _has_out__4 = 1;
      }
    }
    if ((_has_out__4) == (0)) {
      if (((rator[5])) == (3)) {
        _pac_sc_s13_s15_4 = a_s10_4 / b_s12_4;
        _has_out__4 = 1;
      }
    }
    if ((_has_out__4) == (0)) {
      if (((rator[5])) == (4)) {
        _pac_sc_s13_s15_4 = a_s10_4 % b_s12_4;
      }
    }
    _pac_sc_s13_4 = ((result_s8[5])) == (_pac_sc_s13_s15_4);
  }
  assert (_pac_sc_s13_4);;
  delete[] result_s8;
  return;
}
void moo(int len, int N, int* in/* len = 4 */, int* rator/* len = 6 */, int* xrand/* len = 6 */, int* yrand/* len = 6 */, int* _out/* len = 6 */) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	CopyArr<int >(_out,0, 6);

}

}
