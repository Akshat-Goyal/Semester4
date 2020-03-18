#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb555.h"
namespace str{

template<typename T_0>
Str* Str::create(int  n_, T_0* buf_, int buf_len){
  int tlen_buf = n_; 
  void* temp= malloc( sizeof(Str)   + sizeof(char )*tlen_buf); 
  Str* rv = new (temp)Str();
  rv->n =  n_;
  CopyArr(rv->buf, buf_, tlen_buf, buf_len ); 
  return rv;
}
void newStr(int n, char* w/* len = n */, Str*& _out) {
  _out = Str::create(n, w, n);
  return;
}
void cat(Str* s1, Str* s2, Str*& _out) {
  _out = Str::create(s1->n + s2->n, (char*)NULL, 0);
  bool  __sa0=(0) < (_out->n);
  bool  _has_out_=0;
  int  i=0;
  int  last=0;
  while (__sa0 && ((_has_out_) == (0))) {
    if ((((i - 0)) >= (s1->n)) || (((s1->buf[(i - 0)])) == ('\0'))) {
      last = i;
      _has_out_ = 1;
    }
    if ((_has_out_) == (0)) {
      (_out->buf[i]) = (s1->buf[i - 0]);
    }
    i = i + 1;
    if ((_has_out_) == (0)) {
      __sa0 = (i) < (_out->n);
    }
  }
  int  i_0=last;
  bool  __sa0_0=(last) < (_out->n);
  bool  _has_out__0=0;
  while (__sa0_0 && ((_has_out__0) == (0))) {
    if ((((i_0 - last)) >= (s2->n)) || (((s2->buf[(i_0 - last)])) == ('\0'))) {
      last = i_0;
      _has_out__0 = 1;
    }
    if ((_has_out__0) == (0)) {
      (_out->buf[i_0]) = (s2->buf[i_0 - last]);
    }
    i_0 = i_0 + 1;
    if ((_has_out__0) == (0)) {
      __sa0_0 = (i_0) < (_out->n);
    }
  }
  if ((last) < (_out->n)) {
    (_out->buf[last]) = '\0';
  }
  return;
}
void print(Str* s) {printf("%s", s->buf);}
void println(Str* s) { printf("%s \n ", s->buf); }

}
namespace ANONYMOUS{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  str::Str*  h_s3=NULL;
  char _tt0[7] = {'h', 'e', 'l', 'l', 'o', ' ', '\0'};
  str::newStr(7, _tt0, h_s3);
  str::Str*  hw_s5=NULL;
  char _tt1[6] = {'w', 'o', 'r', 'l', 'd', '\0'};
  str::newStr(6, _tt1, hw_s5);
  str::Str*  hw_s7=NULL;
  str::cat(h_s3, hw_s5, hw_s7);
  str::Str*  _out_s9=NULL;
  char _tt2[6] = {'O', 'U', 'T', ':', ' ', '\0'};
  str::newStr(6, _tt2, _out_s9);
  str::print(_out_s9);
  str::println(hw_s7);
}

}
