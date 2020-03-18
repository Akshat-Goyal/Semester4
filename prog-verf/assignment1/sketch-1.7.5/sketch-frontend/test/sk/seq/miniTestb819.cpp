#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb819.h"
namespace YY{

B* B::create(){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->type= A::B_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  B*  a=B::create();
  bool  _out_s6=0;
  equals_B_s0(a, a, 6, _out_s6);
  assert (_out_s6);;
}
void equals_B_s0(B* left_s1, B* right_s2, int bnd_s3, bool& _out) {
  if ((bnd_s3) <= (0)) {
    _out = 0;
    return;
  }
  if (((left_s1) == (NULL)) && ((right_s2) == (NULL))) {
    _out = 1;
    return;
  }
  if ((left_s1) == (NULL)) {
    _out = 0;
    return;
  }
  if ((right_s2) == (NULL)) {
    _out = 0;
    return;
  }
  _out = 1;
  return;
}

}
namespace ANONYMOUS{


}
