#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb862.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  int  t_s1=0;
  piecewise(x, t_s1);
  int  t_s3=0;
  abs(t_s1 - (x * x), t_s3);
  assert ((t_s3) >= (0));;
  /* minimize(t_s3) */;
}
void piecewise(int x, int& _out) {
  _out = 0;
  if ((28) < (x)) {
    _out = 30 * x;
    return;
  }
  if ((25) < (x)) {
    _out = 27 * x;
    return;
  }
  if ((21) < (x)) {
    _out = 24 * x;
    return;
  }
  if ((15) < (x)) {
    _out = 19 * x;
    return;
  }
  if ((6) < (x)) {
    _out = 13 * x;
    return;
  }
}
void abs(int x, int& _out) {
  if ((6) < (x)) {
    _out = x;
    return;
  } else {
    _out = -(x);
    return;
  }
}
void gtpred0(int x, bool& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void gtpred1(int x, bool& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void gtpred2(int x, bool& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void gtpred3(int x, bool& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void gtpred4(int x, bool& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void gtpred5(int x, bool& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
