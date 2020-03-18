#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb542.h"
namespace ANONYMOUS{

template<typename T_0, typename T_1>
Stack* Stack::create(T_0* ptr_, int ptr_len, T_1* body_, int body_len){
  int tlen_ptr = 18; 
  int tlen_body = 18 * 8; 
  void* temp= malloc( sizeof(Stack)   + sizeof(bool )*tlen_ptr + sizeof(bool )*tlen_body); 
  Stack* rv = new (temp)Stack();
  rv->ptr= (bool* ) (((char*)&(rv->body))   + sizeof(bool )*tlen_body); 
  CopyArr(rv->ptr, ptr_, tlen_ptr, ptr_len ); 
  CopyArr(rv->body, body_, tlen_body, body_len ); 
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {}

}
