#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb564_angelic.h"
namespace ANONYMOUS{

void main__Wrapper(int N, int* a/* len = N */) {}
void main__WrapperNospec(int N, int* a/* len = N */) {}
void _main(int N, int* a/* len = N */) {}
void foo(int N, int* in/* len = N */, int p, int q, int* _out/* len = N */) {
  int*  o_s3= new int [N]; CopyArr<int >(o_s3,0, N);
  moo(N, in, p, q, o_s3);
  CopyArr<int >(_out,o_s3, N, N);
  int  prev=p;
  for (int  i=0;(i) < (N);i = i + 1){
    assert (((o_s3[i])) == (((prev + (in[i])) % q)));;
    prev = (o_s3[i]);
  }
  delete[] o_s3;
  return;
}
void moo(int N, int* in/* len = N */, int p, int q, int* _out/* len = N */) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	CopyArr<int >(_out,0, N);

}

}
