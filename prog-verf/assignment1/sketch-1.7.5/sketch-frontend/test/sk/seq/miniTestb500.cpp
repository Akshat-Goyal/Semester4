#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb500.h"
namespace ANONYMOUS{

template<typename T_0>
Str* Str::create(int  n_, T_0* buf_, int buf_len){
  int tlen_buf = n_; 
  void* temp= malloc( sizeof(Str)   + sizeof(char )*tlen_buf); 
  Str* rv = new (temp)Str();
  rv->n =  n_;
  CopyArr(rv->buf, buf_, tlen_buf, buf_len ); 
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  char _tt0[7] = {'H', 'e', 'l', 'l', 'o', ' ', '\0'};
  Str*  s1=Str::create(7, _tt0, 7);
  char _tt1[15] = {'W', 'a', 'r', 'm', 'd', 'i', 'a', 'f', 'u', 'y', 'k', '!', '\0', '\0', ' '};
  char*  cc= new char [15]; CopyArr<char >(cc,_tt1, 15, 15);
  Str*  s2=Str::create(15, cc, 15);
  /* minimize(s1->n) */;
  /* minimize(s2->n) */;
  char _tt2[19] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'a', 'r', 'm', 'd', 'i', 'a', 'f', 'u', 'y', 'k', '!', '\0'};
  Str*  s3=Str::create(19, _tt2, 19);
  Str*  _out_s3=NULL;
  cat(s1, s2, _out_s3);
  bool  _out_s5=0;
  Comp(s3, _out_s3, _out_s5);
  assert (_out_s5);;
  delete[] cc;
}
void cat(Str* s1, Str* s2, Str*& _out) {
  _out = Str::create(s1->n + s2->n, (char*)NULL, 0);
  bool  __sa1=(0) < (_out->n);
  bool  _has_out_=0;
  int  i=0;
  int  last=0;
  while (__sa1 && ((_has_out_) == (0))) {
    if (((s1->buf[(i - 0)])) == ('\0')) {
      last = i;
      _has_out_ = 1;
    }
    if ((_has_out_) == (0)) {
      (_out->buf[i]) = (s1->buf[i - 0]);
    }
    i = i + 1;
    if ((_has_out_) == (0)) {
      __sa1 = (i) < (_out->n);
    }
  }
  int  i_0=last;
  bool  __sa1_0=(last) < (_out->n);
  bool  _has_out__0=0;
  while (__sa1_0 && ((_has_out__0) == (0))) {
    if (((s2->buf[(i_0 - last)])) == ('\0')) {
      last = i_0;
      _has_out__0 = 1;
    }
    if ((_has_out__0) == (0)) {
      (_out->buf[i_0]) = (s2->buf[i_0 - last]);
    }
    i_0 = i_0 + 1;
    if ((_has_out__0) == (0)) {
      __sa1_0 = (i_0) < (_out->n);
    }
  }
  if ((last) < (_out->n)) {
    (_out->buf[last]) = '\0';
  }
  return;
}
void Comp(Str* s1, Str* s2, bool& _out) {
  bool  __sa0=(0) < (s1->n);
  int  i=0;
  while (__sa0) {
    if ((i) >= (s2->n)) {
      _out = 0;
      return;
    }
    if (((s1->buf[i])) != ((s2->buf[i]))) {
      _out = 0;
      return;
    }
    i = i + 1;
    __sa0 = (i) < (s1->n);
  }
  _out = 1;
  return;
}

}
