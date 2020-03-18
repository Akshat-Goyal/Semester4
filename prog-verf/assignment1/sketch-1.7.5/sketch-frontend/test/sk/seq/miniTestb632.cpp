#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb632.h"
namespace ANONYMOUS{

B* B::create(B*  b_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->b =  b_;
  rv->type= A::B_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {}

}
