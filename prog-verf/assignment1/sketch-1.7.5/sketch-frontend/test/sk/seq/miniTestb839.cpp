#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb839.h"
namespace ANONYMOUS{

void main__Wrapper(int x, int y, int z) {
  _main(x, y, z);
}
void main__WrapperNospec(int x, int y, int z) {}
void _main(int x, int y, int z) {
  if(!((x) == (z))){ throw AssumptionFailedException();  };
  bool  _out_s1=0;
  goo(z, x, _out_s1);
  if(!(_out_s1)){ throw AssumptionFailedException();  };
  int  _out_s3=0;
  foo(y, _out_s3);
  if(!((_out_s3) > (2))){ throw AssumptionFailedException();  };
  int  _out_s5=0;
  foo(2 * x, _out_s5);
  if ((_out_s5) > (5)) {
    int  _out_s7=0;
    foo(x + x, _out_s7);
    int  _out_s9=0;
    foo(y, _out_s9);
    assert (((_out_s7 + _out_s9)) > (6));;
  }
  int  _out_s11=0;
  foo(x, _out_s11);
  int  _out_s13=0;
  foo(y, _out_s13);
  int  _out_s15=0;
  foo(x, _out_s15);
  int  _out_s17=0;
  foo(z, _out_s17);
  assert (((_out_s11 * 2)) == ((_out_s15 + _out_s17)));;
}
void goo(int z, int x, bool& _out) {
  int  _out_s19=0;
  foo(z + x, _out_s19);
  _out = (_out_s19) > (0);
  return;
}
void foo(int x, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
