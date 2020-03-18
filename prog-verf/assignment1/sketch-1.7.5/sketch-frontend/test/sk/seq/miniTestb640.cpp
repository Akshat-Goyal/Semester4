#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb640.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  bool  _out_s1=0;
  bee(x, _out_s1);
  if (_out_s1) {
    bool  u_s3=0;
    baz(x, u_s3);
    if (u_s3 || ((x) > (3))) {
      bool  u_s5=0;
      baz(x, u_s5);
      if (u_s5) {
        bool  qq_s7=0;
        foo(x, qq_s7);
      }
    }
    bool  _out_s9=0;
    bar(x, _out_s9);
  }
}
void bee(int x, bool& _out) {
  bool  _out_s19=0;
  one(_out_s19);
  _out = _out_s19;
  return;
}
void baz(int x, bool& _out) {
  bool  _out_s17=0;
  foo(x, _out_s17);
  _out = _out_s17;
  return;
}
void bar(int x, bool& _out) {
  bool  _out_s13=0;
  moo(x, _out_s13);
  _out = _out_s13;
  return;
}
void one(bool& _out) {
  _out = 1;
  return;
}
void moo(int x, bool& _out) {
  bool  _out_s15=0;
  foo(x, _out_s15);
  _out = _out_s15;
  return;
}
void foo(int x, bool& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
