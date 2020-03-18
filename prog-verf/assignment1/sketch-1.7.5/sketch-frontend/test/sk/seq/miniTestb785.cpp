#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb785.h"
namespace la{

BroadCast* BroadCast::create(int  c_){
  void* temp= malloc( sizeof(BroadCast)  ); 
  BroadCast* rv = new (temp)BroadCast();
  rv->c =  c_;
  rv->type= Opr::BROADCAST_type;
  return rv;
}
Plus* Plus::create(Opr*  left_, Opr*  right_){
  void* temp= malloc( sizeof(Plus)  ); 
  Plus* rv = new (temp)Plus();
  rv->left =  left_;
  rv->right =  right_;
  rv->type= Opr::PLUS_type;
  return rv;
}
void g(int alpha, int beta, int* _out/* len = 1 */) {
  CopyArr<int >(_out,0, 1);
  BroadCast*  o_s1=BroadCast::create(alpha);
  BroadCast*  o_s3=BroadCast::create(beta);
  Plus*  o_s5=Plus::create(o_s1, o_s3);
  for (int  i=0;(i) < (1);i = i + 1){
    int  _out_s7=0;
    switch(o_s5->type){
    case BroadCast::BROADCAST_type:
        {
        BroadCast*  _o_s5 = (BroadCast* )  o_s5;

      _out_s7 = _o_s5->c;
    
        break;
    }
    case Plus::PLUS_type:
        {
        Plus*  _o_s5 = (Plus* )  o_s5;

      Opr*  op=_o_s5->left;
      int  _out_s9=0;
      switch(op->type){
      case BroadCast::BROADCAST_type:
            {
            BroadCast*  _op = (BroadCast* )  op;

        _out_s9 = _op->c;
      
            break;
      }
      case Plus::PLUS_type:
            {
            Plus*  _op = (Plus* )  op;

        assert (0);;
      
            break;
      }

 }
      Opr*  op_0=_o_s5->right;
      int  _out_s11=0;
      switch(op_0->type){
      case BroadCast::BROADCAST_type:
            {
            BroadCast*  _op_0 = (BroadCast* )  op_0;

        _out_s11 = _op_0->c;
      
            break;
      }
      case Plus::PLUS_type:
            {
            Plus*  _op_0 = (Plus* )  op_0;

        assert (0);;
      
            break;
      }

 }
      _out_s7 = _out_s9 + _out_s11;
    
        break;
    }

 }
    (_out[i]) = _out_s7;
  }
  return;
}
void f(int alpha, int beta, int* _out/* len = 1 */) {
  CopyArr<int >(_out,0, 1);
  (_out[0]) = alpha + beta;
  return;
}

}
