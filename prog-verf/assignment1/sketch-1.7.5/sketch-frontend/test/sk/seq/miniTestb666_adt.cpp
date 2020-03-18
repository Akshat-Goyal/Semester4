#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb666_adt.h"
namespace ANONYMOUS{

B* B::create(C*  c_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->c =  c_;
  rv->type= A::B_type;
  return rv;
}
D* D::create(){
  void* temp= malloc( sizeof(D)  ); 
  D* rv = new (temp)D();
  rv->type= C::D_type;
  return rv;
}

}
