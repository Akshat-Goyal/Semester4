#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb818.h"
namespace XX{

B* B::create(int  x_, int  y_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->x =  x_;
  rv->y =  y_;
  rv->type= A::B_type;
  return rv;
}
C* C::create(int  x_, int  y_){
  void* temp= malloc( sizeof(C)  ); 
  C* rv = new (temp)C();
  rv->x =  x_;
  rv->y =  y_;
  rv->type= A::C_type;
  return rv;
}

}
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
  XX::B*  a1=XX::B::create(5, 7);
  B*  a2=B::create();
  bool  _out_s11=0;
  equals_B_s0(a2, a2, 6, _out_s11);
  assert (_out_s11);;
  bool  _out_s13=0;
  equals_B_s4(a1, a1, 6, _out_s13);
  assert (_out_s13);;
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
void equals_B_s4(XX::B* left_s5, XX::B* right_s6, int bnd_s7, bool& _out) {
  if ((bnd_s7) <= (0)) {
    _out = 0;
    return;
  }
  if (((left_s5) == (NULL)) && ((right_s6) == (NULL))) {
    _out = 1;
    return;
  }
  if ((left_s5) == (NULL)) {
    _out = 0;
    return;
  }
  if ((right_s6) == (NULL)) {
    _out = 0;
    return;
  }
  _out = 1;
  return;
}

}
namespace ANONYMOUS{


}
