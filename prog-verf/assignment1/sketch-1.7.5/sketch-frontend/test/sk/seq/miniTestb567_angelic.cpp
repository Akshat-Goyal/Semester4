#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb567_angelic.h"
namespace generators{

void partition__Wrapper(int p, int P, int N) {}
void partition__WrapperNospec(int p, int P, int N) {}
void partition(int p, int P, int N) {}
void calc(int len, int N, int* in_0/* len = N */, int* rator/* len = 5 */, int* xrand/* len = 5 */, int* yrand/* len = 5 */, int* _out/* len = 6 */) {
  bool _tt0[6] = {0, 0, 0, 0, 0, 0};
  int*  result_s16= new int [6]; CopyArr<int >(result_s16,_tt0, 6, 6);
  moo(len, N, in_0, rator, xrand, yrand, result_s16);
  CopyArr<int >(_out,result_s16, 6, 6);
  int  o=0;
  o = (rator[0]);
  int  x=0;
  x = (xrand[0]);
  int  y=0;
  y = (yrand[0]);
  bool  flag=0;
  if (!((((o) <= (4)) && ((x) < (N))) && ((y) < (N)))) {
    flag = 1;
  }
  int  a_s18=0;
  if ((x) < (N)) {
    a_s18 = (in_0[x]);
  } else {
    a_s18 = (result_s16[x - N]);
  }
  int  b_s20=0;
  if ((y) < (N)) {
    b_s20 = (in_0[y]);
  } else {
    b_s20 = (result_s16[y - N]);
  }
  if ((o) == (0)) {
    int  r=a_s18 + b_s20;
    if ((r) > (15)) {
      flag = 1;
    } else {
      assert ((r) == ((result_s16[0])));;
    }
  }
  if ((o) == (1)) {
    if ((a_s18) < (b_s20)) {
      flag = 1;
    } else {
      assert (((a_s18 - b_s20)) == ((result_s16[0])));;
    }
  }
  if ((o) == (2)) {
    int  r_1=a_s18 * b_s20;
    if ((r_1) > (15)) {
      flag = 1;
    } else {
      assert ((r_1) == ((result_s16[0])));;
    }
  }
  if ((o) == (3)) {
    if ((b_s20) == (0)) {
      flag = 1;
    } else {
      assert (((a_s18 / b_s20)) == ((result_s16[0])));;
    }
  }
  if ((o) == (4)) {
    if ((b_s20) == (0)) {
      flag = 1;
    } else {
      assert (((a_s18 % b_s20)) == ((result_s16[0])));;
    }
  }
  if (!(((((rator[1])) <= (4)) && (((xrand[1])) < ((N + 1)))) && (((yrand[1])) < ((N + 1))))) {
    flag = 1;
  }
  int  a_s18_0=0;
  if (((xrand[1])) < (N)) {
    a_s18_0 = (in_0[(xrand[1])]);
  } else {
    a_s18_0 = (result_s16[(xrand[1]) - N]);
  }
  int  b_s20_0=0;
  if (((yrand[1])) < (N)) {
    b_s20_0 = (in_0[(yrand[1])]);
  } else {
    b_s20_0 = (result_s16[(yrand[1]) - N]);
  }
  if (((rator[1])) == (0)) {
    int  r_4=a_s18_0 + b_s20_0;
    if ((r_4) > (15)) {
      flag = 1;
    } else {
      assert ((r_4) == ((result_s16[1])));;
    }
  }
  if (((rator[1])) == (1)) {
    if ((a_s18_0) < (b_s20_0)) {
      flag = 1;
    } else {
      assert (((a_s18_0 - b_s20_0)) == ((result_s16[1])));;
    }
  }
  if (((rator[1])) == (2)) {
    int  r_6=a_s18_0 * b_s20_0;
    if ((r_6) > (15)) {
      flag = 1;
    } else {
      assert ((r_6) == ((result_s16[1])));;
    }
  }
  if (((rator[1])) == (3)) {
    if ((b_s20_0) == (0)) {
      flag = 1;
    } else {
      assert (((a_s18_0 / b_s20_0)) == ((result_s16[1])));;
    }
  }
  if (((rator[1])) == (4)) {
    if ((b_s20_0) == (0)) {
      flag = 1;
    } else {
      assert (((a_s18_0 % b_s20_0)) == ((result_s16[1])));;
    }
  }
  if (!(((((rator[2])) <= (4)) && (((xrand[2])) < ((N + 2)))) && (((yrand[2])) < ((N + 2))))) {
    flag = 1;
  }
  int  a_s18_1=0;
  if (((xrand[2])) < (N)) {
    a_s18_1 = (in_0[(xrand[2])]);
  } else {
    a_s18_1 = (result_s16[(xrand[2]) - N]);
  }
  int  b_s20_1=0;
  if (((yrand[2])) < (N)) {
    b_s20_1 = (in_0[(yrand[2])]);
  } else {
    b_s20_1 = (result_s16[(yrand[2]) - N]);
  }
  if (((rator[2])) == (0)) {
    int  r_9=a_s18_1 + b_s20_1;
    if ((r_9) > (15)) {
      flag = 1;
    } else {
      assert ((r_9) == ((result_s16[2])));;
    }
  }
  if (((rator[2])) == (1)) {
    if ((a_s18_1) < (b_s20_1)) {
      flag = 1;
    } else {
      assert (((a_s18_1 - b_s20_1)) == ((result_s16[2])));;
    }
  }
  if (((rator[2])) == (2)) {
    int  r_11=a_s18_1 * b_s20_1;
    if ((r_11) > (15)) {
      flag = 1;
    } else {
      assert ((r_11) == ((result_s16[2])));;
    }
  }
  if (((rator[2])) == (3)) {
    if ((b_s20_1) == (0)) {
      flag = 1;
    } else {
      assert (((a_s18_1 / b_s20_1)) == ((result_s16[2])));;
    }
  }
  if (((rator[2])) == (4)) {
    if ((b_s20_1) == (0)) {
      flag = 1;
    } else {
      assert (((a_s18_1 % b_s20_1)) == ((result_s16[2])));;
    }
  }
  if (!(((((rator[3])) <= (4)) && (((xrand[3])) < ((N + 3)))) && (((yrand[3])) < ((N + 3))))) {
    flag = 1;
  }
  int  a_s18_2=0;
  if (((xrand[3])) < (N)) {
    a_s18_2 = (in_0[(xrand[3])]);
  } else {
    a_s18_2 = (result_s16[(xrand[3]) - N]);
  }
  int  b_s20_2=0;
  if (((yrand[3])) < (N)) {
    b_s20_2 = (in_0[(yrand[3])]);
  } else {
    b_s20_2 = (result_s16[(yrand[3]) - N]);
  }
  if (((rator[3])) == (0)) {
    int  r_14=a_s18_2 + b_s20_2;
    if ((r_14) > (15)) {
      flag = 1;
    } else {
      assert ((r_14) == ((result_s16[3])));;
    }
  }
  if (((rator[3])) == (1)) {
    if ((a_s18_2) < (b_s20_2)) {
      flag = 1;
    } else {
      assert (((a_s18_2 - b_s20_2)) == ((result_s16[3])));;
    }
  }
  if (((rator[3])) == (2)) {
    int  r_16=a_s18_2 * b_s20_2;
    if ((r_16) > (15)) {
      flag = 1;
    } else {
      assert ((r_16) == ((result_s16[3])));;
    }
  }
  if (((rator[3])) == (3)) {
    if ((b_s20_2) == (0)) {
      flag = 1;
    } else {
      assert (((a_s18_2 / b_s20_2)) == ((result_s16[3])));;
    }
  }
  if (((rator[3])) == (4)) {
    if ((b_s20_2) == (0)) {
      flag = 1;
    } else {
      assert (((a_s18_2 % b_s20_2)) == ((result_s16[3])));;
    }
  }
  if (!(((((rator[4])) <= (4)) && (((xrand[4])) < ((N + 4)))) && (((yrand[4])) < ((N + 4))))) {
    flag = 1;
  }
  int  a_s18_3=0;
  if (((xrand[4])) < (N)) {
    a_s18_3 = (in_0[(xrand[4])]);
  } else {
    a_s18_3 = (result_s16[(xrand[4]) - N]);
  }
  int  b_s20_3=0;
  if (((yrand[4])) < (N)) {
    b_s20_3 = (in_0[(yrand[4])]);
  } else {
    b_s20_3 = (result_s16[(yrand[4]) - N]);
  }
  if (((rator[4])) == (0)) {
    int  r_19=a_s18_3 + b_s20_3;
    if ((r_19) > (15)) {
      flag = 1;
    } else {
      assert ((r_19) == ((result_s16[4])));;
    }
  }
  if (((rator[4])) == (1)) {
    if ((a_s18_3) < (b_s20_3)) {
      flag = 1;
    } else {
      assert (((a_s18_3 - b_s20_3)) == ((result_s16[4])));;
    }
  }
  if (((rator[4])) == (2)) {
    int  r_21=a_s18_3 * b_s20_3;
    if ((r_21) > (15)) {
      flag = 1;
    } else {
      assert ((r_21) == ((result_s16[4])));;
    }
  }
  if (((rator[4])) == (3)) {
    if ((b_s20_3) == (0)) {
      flag = 1;
    } else {
      assert (((a_s18_3 / b_s20_3)) == ((result_s16[4])));;
    }
  }
  if (((rator[4])) == (4)) {
    if ((b_s20_3) == (0)) {
      flag = 1;
    } else {
      assert (((a_s18_3 % b_s20_3)) == ((result_s16[4])));;
    }
  }
  assert ((flag) == ((result_s16[5])));;
  delete[] result_s16;
  return;
}
void moo(int len, int N, int* in/* len = N */, int* rator/* len = 5 */, int* xrand/* len = 5 */, int* yrand/* len = 5 */, int* _out/* len = 6 */) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	CopyArr<int >(_out,0, 6);

}

}
