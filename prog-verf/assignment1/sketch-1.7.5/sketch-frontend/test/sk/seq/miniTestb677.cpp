#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb677.h"
namespace ANONYMOUS{

B* B::create(int  x_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->x =  x_;
  rv->type= A::B_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  B*  a=B::create(1);
  assert ((a->x) == (1));;
}

}
