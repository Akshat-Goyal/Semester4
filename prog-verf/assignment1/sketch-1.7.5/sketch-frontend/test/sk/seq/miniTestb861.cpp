#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb861.h"
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
  assert ((t_s3) < (57));;
}
void piecewise(int x, int& _out) {
  if ((27) < (x)) {
    _out = 30 * x;
    return;
  } else {
    if ((22) < (x)) {
      _out = 25 * x;
      return;
    } else {
      if ((18) < (x)) {
        _out = 20 * x;
        return;
      } else {
        _out = 15 * x;
        return;
      }
    }
  }
}
void abs(int x, int& _out) {
  if ((7) < (x)) {
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

}
