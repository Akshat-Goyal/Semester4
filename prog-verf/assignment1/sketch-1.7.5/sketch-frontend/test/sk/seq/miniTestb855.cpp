#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb855.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  int  t_s1=0;
  f(x, t_s1);
  int  t_s3=0;
  f(x - 1, t_s3);
  int  _pac_sc_s4=0;
  if ((t_s1) == (t_s3)) {
    int  t_s6=0;
    f(x, t_s6);
    _pac_sc_s4 = t_s6;
  } else {
    int  t_s8=0;
    f(x - 1, t_s8);
    _pac_sc_s4 = t_s8;
  }
  int  _out_s10=0;
  f(x - 1, _out_s10);
  assert ((_pac_sc_s4) == (_out_s10));;
}
void f(int x, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
