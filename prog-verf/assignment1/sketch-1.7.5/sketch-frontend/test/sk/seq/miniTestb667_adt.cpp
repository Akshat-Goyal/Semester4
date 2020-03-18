#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb667_adt.h"
namespace ANONYMOUS{

B* B::create(C*  c_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->c =  c_;
  rv->type= A::B_type;
  return rv;
}
C* C::create(){
  void* temp= malloc( sizeof(C)  ); 
  C* rv = new (temp)C();
  return rv;
}

}
