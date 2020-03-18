#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb488.h"
namespace ANONYMOUS{

void main__Wrapper(int k, int* p/* len = 3 * k */) {
  _main(k, p);
}
void main__WrapperNospec(int k, int* p/* len = 3 * k */) {}
void _main(int k, int* p/* len = 3 * k */) {
  if ((k) <= (1)) {
    return;
  }
  int*  x= new int [3]; CopyArr<int >(x,0, 3);
  int*  y= new int [6]; CopyArr<int >(y,0, 6);
  int*  v1= new int [6 * k]; CopyArr<int >(v1,0, 6 * k);
  for (int  __sa4=0;(__sa4) < (k);__sa4 = __sa4 + 1){
    assert (((__sa4) >= (0)) && ((__sa4) < (k)));;
    CopyArr<int >((v1+ 6 * __sa4),0, 6);
  }
  if ((k) > (1)) {
    bool _tt0[6] = {0, 0, 0, 0, 0, 0};
    int*  _out_s1= new int [6]; CopyArr<int >(_out_s1,_tt0, 6, 6);
    assert ((1) < (k));;
    mmul(x, (p+ 3), _out_s1);
    assert ((1) < (k));;
    CopyArr<int >((v1+ 6),_out_s1, 6, 6);
    delete[] _out_s1;
  }
  assert ((0) < (k));;
  assert (arrCompare((v1+ 0), 6, y, 6) && ((6) == (6)));;
}
void mmul(int* x1/* len = 3 */, int* x2/* len = 3 */, int* _out/* len = 6 */) {
  bool _tt1[6] = {0, 0, 0, 0, 0, 0};
  int*  rv_s3= new int [6]; CopyArr<int >(rv_s3,_tt1, 6, 6);
  muluf(x1, x2, rv_s3);
  CopyArr<int >(_out,rv_s3, 6, 6);
  delete[] rv_s3;
  return;
}
void muluf(int* x1/* len = 3 */, int* x2/* len = 3 */, int* _out/* len = 6 */) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	CopyArr<int >(_out,0, 6);

}

}
