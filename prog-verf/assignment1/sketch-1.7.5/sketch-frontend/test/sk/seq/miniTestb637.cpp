#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb637.h"
namespace ANONYMOUS{

B* B::create(int  x_){
  void* temp= malloc( sizeof(B)  ); 
  B* rv = new (temp)B();
  rv->x =  x_;
  rv->type= A::B_type;
  return rv;
}
C* C::create(){
  void* temp= malloc( sizeof(C)  ); 
  C* rv = new (temp)C();
  rv->type= A::C_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  B*  b=B::create(0);
  bool _tt0[2] = {0, 0};
  int*  _out_s1= new int [2]; CopyArr<int >(_out_s1,_tt0, 2, 2);
  get(b, _out_s1);
  delete[] _out_s1;
}
void get(A* a, int* _out/* len = 2 */) {
  switch(a->type){
  case B::B_type:
    {
    B*  _a = (B* )  a;

    int _tt1[1] = {_a->x};
    CopyArr<int >(_out,_tt1, 2, 1);
    return;
  
    break;
  }
  case C::C_type:
    {
    C*  _a = (C* )  a;

    CopyArr<int >(_out,NULL, 2, 0);
    return;
  
    break;
  }

 }
}

}
