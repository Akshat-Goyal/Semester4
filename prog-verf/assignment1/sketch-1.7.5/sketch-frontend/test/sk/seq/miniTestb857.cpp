#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb857.h"
namespace ANONYMOUS{

S1* S1::create(){
  void* temp= malloc( sizeof(S1)  ); 
  S1* rv = new (temp)S1();
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  void * _tt0[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  S1**  s1= new S1* [10]; CopyArr<S1* >(s1,_tt0, 10, 10);
  S1* * _tt1= new S1* [10]; 
  CopyArr<S1*>(_tt1,s1, 10, 10);
  f1_f3T_S1(_tt1);
  delete[] s1;
  delete[] _tt1;
}
void f1_f3T_S1(S1** in/* len = 10 */) {
  void * _tt2[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  S1**  t1= new S1* [10 * 10]; CopyArr<S1* >(t1,_tt2, 10 * 10, 10);
  S1* * _tt3= new S1* [10]; 
  CopyArr<S1*>(_tt3,in, 10, 10);
  f2(_tt3, t1);
  delete[] t1;
  delete[] _tt3;
}
template<typename T>
void f2(T* in/* len = 10 */, T* t1/* len = 10 * 10 */) {}

}
