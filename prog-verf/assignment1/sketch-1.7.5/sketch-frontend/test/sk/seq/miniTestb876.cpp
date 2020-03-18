#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb876.h"
namespace ANONYMOUS{

Range* Range::create(int  lo_, int  hi_){
  void* temp= malloc( sizeof(Range)  ); 
  Range* rv = new (temp)Range();
  rv->lo =  lo_;
  rv->hi =  hi_;
  return rv;
}
void main__Wrapper(int alo, int ahi, int blo, int bhi, int a, int b) {
  _main(alo, ahi, blo, bhi, a, b);
}
void main__WrapperNospec(int alo, int ahi, int blo, int bhi, int a, int b) {}
void _main(int alo_0, int ahi_1, int blo_2, int bhi_3, int a_4, int b_5) {
  int  b=b_5;
  int  a=a_4;
  int  bhi=bhi_3;
  int  blo=blo_2;
  int  ahi=ahi_1;
  int  alo=alo_0;
  alo = alo_0 - 10;
  ahi = ahi_1 - 10;
  blo = blo_2 - 10;
  bhi = bhi_3 - 10;
  a = a_4 - 10;
  b = b_5 - 10;
  if(!((alo) <= (ahi))){ throw AssumptionFailedException();  };
  if(!((blo) <= (bhi))){ throw AssumptionFailedException();  };
  if(!((b) != (0))){ throw AssumptionFailedException();  };
  Range*  ar=Range::create(alo, ahi);
  Range*  br=Range::create(blo, bhi);
  Range*  c_s3=NULL;
  opDiv(ar, br, c_s3);
  assert ((c_s3->lo) <= (c_s3->hi));;
  if (((alo) <= (a)) && ((a) <= (ahi))) {
    if (((blo) <= (b)) && ((b) <= (bhi))) {
      int  t=a / b;
      assert (((c_s3->lo) <= (t)) && ((t) <= (c_s3->hi)));;
    }
  }
}
void opDiv(Range* a, Range* b, Range*& _out) {
  if (((a->lo) >= (0)) && ((b->lo) > (0))) {
    _out = Range::create(a->lo / b->hi, a->hi / b->lo);
    return;
  }
  if (((a->hi) <= (0)) && ((b->hi) < (0))) {
    _out = Range::create(a->hi / b->lo, a->lo / b->hi);
    return;
  }
  if (((a->hi) <= (0)) && ((b->lo) > (0))) {
    _out = Range::create(a->lo / b->lo, a->hi / b->hi);
    return;
  }
  if (((a->lo) >= (0)) && ((b->hi) < (0))) {
    _out = Range::create(a->hi / b->hi, a->lo / b->lo);
    return;
  }
  if ((-(a->lo)) >= (a->hi)) {
    _out = Range::create(a->lo, -(a->lo));
    return;
  }
  _out = Range::create(-(a->hi), a->hi);
  return;
}

}
