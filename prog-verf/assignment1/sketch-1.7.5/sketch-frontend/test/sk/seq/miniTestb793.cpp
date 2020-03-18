#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb793.h"
namespace ANONYMOUS{

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
Dot* Dot::create(Opr*  left_, Opr*  right_){
  void* temp= malloc( sizeof(Dot)  ); 
  Dot* rv = new (temp)Dot();
  rv->left =  left_;
  rv->right =  right_;
  rv->type= Opr::DOT_type;
  return rv;
}
void g(int x, int y, int& _out) {
  Opr*  X=BroadCast::create(x);
  Opr*  Y=BroadCast::create(y);
  Opr*  a=Plus::create(X, Y);
  int  _out_s1=0;
  switch(a->type){
  case BroadCast::BROADCAST_type:
    {
    BroadCast*  _a = (BroadCast* )  a;

    _out_s1 = _a->c;
  
    break;
  }
  case Dot::DOT_type:
    {
    Dot*  _a = (Dot* )  a;

    Opr*  op=_a->left;
    int  _out_s3=0;
    switch(op->type){
    case BroadCast::BROADCAST_type:
        {
        BroadCast*  _op = (BroadCast* )  op;

      _out_s3 = _op->c;
    
        break;
    }
    case Dot::DOT_type:
        {
        Dot*  _op = (Dot* )  op;

      assert (0);;
    
        break;
    }
    case Plus::PLUS_type:
        {
        Plus*  _op = (Plus* )  op;

      assert (0);;
    
        break;
    }

 }
    Opr*  op_0=_a->right;
    int  _out_s5=0;
    switch(op_0->type){
    case BroadCast::BROADCAST_type:
        {
        BroadCast*  _op_0 = (BroadCast* )  op_0;

      _out_s5 = _op_0->c;
    
        break;
    }
    case Dot::DOT_type:
        {
        Dot*  _op_0 = (Dot* )  op_0;

      assert (0);;
    
        break;
    }
    case Plus::PLUS_type:
        {
        Plus*  _op_0 = (Plus* )  op_0;

      assert (0);;
    
        break;
    }

 }
    _out_s1 = _out_s3 * _out_s5;
  
    break;
  }
  case Plus::PLUS_type:
    {
    Plus*  _a = (Plus* )  a;

    Opr*  op_1=_a->left;
    int  _out_s7=0;
    switch(op_1->type){
    case BroadCast::BROADCAST_type:
        {
        BroadCast*  _op_1 = (BroadCast* )  op_1;

      _out_s7 = _op_1->c;
    
        break;
    }
    case Dot::DOT_type:
        {
        Dot*  _op_1 = (Dot* )  op_1;

      assert (0);;
    
        break;
    }
    case Plus::PLUS_type:
        {
        Plus*  _op_1 = (Plus* )  op_1;

      assert (0);;
    
        break;
    }

 }
    Opr*  op_2=_a->right;
    int  _out_s9=0;
    switch(op_2->type){
    case BroadCast::BROADCAST_type:
        {
        BroadCast*  _op_2 = (BroadCast* )  op_2;

      _out_s9 = _op_2->c;
    
        break;
    }
    case Dot::DOT_type:
        {
        Dot*  _op_2 = (Dot* )  op_2;

      assert (0);;
    
        break;
    }
    case Plus::PLUS_type:
        {
        Plus*  _op_2 = (Plus* )  op_2;

      assert (0);;
    
        break;
    }

 }
    _out_s1 = _out_s7 + _out_s9;
  
    break;
  }

 }
  _out = _out_s1;
  return;
}
void f(int x, int y, int& _out) {
  _out = x + y;
  return;
}

}
