#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb794.h"
namespace ANONYMOUS{

BroadCast* BroadCast::create(int  c_){
  void* temp= malloc( sizeof(BroadCast)  ); 
  BroadCast* rv = new (temp)BroadCast();
  rv->c =  c_;
  rv->type= Opr::BROADCAST_type;
  return rv;
}
void g(int alpha, int* _out/* len = 1 */) {
  CopyArr<int >(_out,0, 1);
  BroadCast*  op_s1=BroadCast::create(alpha);
  for (int  i=0;(i) < (1);i = i + 1){
    int  _out_s3=0;
    switch(op_s1->type){
    case BroadCast::BROADCAST_type:
        {
        BroadCast*  _op_s1 = (BroadCast* )  op_s1;

      _out_s3 = _op_s1->c;
    
        break;
    }
    default:
        {
        
      _out_s3 = 0;
    
        break;
    }

 }
    (_out[i]) = _out_s3;
  }
  return;
}
void f(int alpha, int* _out/* len = 1 */) {
  CopyArr<int >(_out,0, 1);
  for (int  i=0;(i) < (1);i = i + 1){
    (_out[i]) = alpha;
  }
  return;
}

}
