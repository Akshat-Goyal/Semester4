#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb778.h"
namespace ANONYMOUS{

NumS* NumS::create(int  v_){
  void* temp= malloc( sizeof(NumS)  ); 
  NumS* rv = new (temp)NumS();
  rv->v =  v_;
  rv->type= srcAST::NUMS_type;
  return rv;
}
PlusS* PlusS::create(srcAST*  a_, srcAST*  b_){
  void* temp= malloc( sizeof(PlusS)  ); 
  PlusS* rv = new (temp)PlusS();
  rv->a =  a_;
  rv->b =  b_;
  rv->type= srcAST::PLUSS_type;
  return rv;
}
MinusS* MinusS::create(srcAST*  a_, srcAST*  b_){
  void* temp= malloc( sizeof(MinusS)  ); 
  MinusS* rv = new (temp)MinusS();
  rv->a =  a_;
  rv->b =  b_;
  rv->type= srcAST::MINUSS_type;
  return rv;
}
TrueS* TrueS::create(){
  void* temp= malloc( sizeof(TrueS)  ); 
  TrueS* rv = new (temp)TrueS();
  rv->type= srcAST::TRUES_type;
  return rv;
}
FalseS* FalseS::create(){
  void* temp= malloc( sizeof(FalseS)  ); 
  FalseS* rv = new (temp)FalseS();
  rv->type= srcAST::FALSES_type;
  return rv;
}
NumD* NumD::create(int  v_){
  void* temp= malloc( sizeof(NumD)  ); 
  NumD* rv = new (temp)NumD();
  rv->v =  v_;
  rv->type= dstAST::NUMD_type;
  return rv;
}
BinopD* BinopD::create(opcode*  op_, dstAST*  a_, dstAST*  b_){
  void* temp= malloc( sizeof(BinopD)  ); 
  BinopD* rv = new (temp)BinopD();
  rv->op =  op_;
  rv->a =  a_;
  rv->b =  b_;
  rv->type= dstAST::BINOPD_type;
  return rv;
}
BoolD* BoolD::create(bool  val_){
  void* temp= malloc( sizeof(BoolD)  ); 
  BoolD* rv = new (temp)BoolD();
  rv->val =  val_;
  rv->type= dstAST::BOOLD_type;
  return rv;
}
PlusOp* PlusOp::create(){
  void* temp= malloc( sizeof(PlusOp)  ); 
  PlusOp* rv = new (temp)PlusOp();
  rv->type= opcode::PLUSOP_type;
  return rv;
}
MinusOp* MinusOp::create(){
  void* temp= malloc( sizeof(MinusOp)  ); 
  MinusOp* rv = new (temp)MinusOp();
  rv->type= opcode::MINUSOP_type;
  return rv;
}
void main4__Wrapper(int x1, int x2) {
  main4(x1, x2);
}
void main4__WrapperNospec(int x1, int x2) {}
void main3__Wrapper(int x1, int x2) {
  main3(x1, x2);
}
void main3__WrapperNospec(int x1, int x2) {}
void main2__Wrapper() {
  main2();
}
void main2__WrapperNospec() {}
void main1__Wrapper() {
  main1();
}
void main1__WrapperNospec() {}
void main4(int x1, int x2) {
  srcAST*  in=PlusS::create(NumS::create(x1), NumS::create(x2));
  dstAST*  out_s17=NULL;
  desugar(in, out_s17);
  dstAST*  exp=BinopD::create(PlusOp::create(), NumD::create(x1), NumD::create(x2));
  bool  _out_s19=0;
  equals_dstAST_s0(exp, out_s17, 6, _out_s19);
  assert (_out_s19);;
}
void main3(int x1, int x2) {
  srcAST*  in=NULL;
  in = MinusS::create(NumS::create(x1), NumS::create(x2));
  dstAST*  out_s41=NULL;
  desugar(in, out_s41);
  dstAST*  exp=BinopD::create(MinusOp::create(), NumD::create(x1), NumD::create(x2));
  bool  _out_s43=0;
  equals_dstAST_s0(exp, out_s41, 6, _out_s43);
  assert (_out_s43);;
}
void main2() {
  srcAST*  in=TrueS::create();
  dstAST*  out_s45=NULL;
  desugar(in, out_s45);
  dstAST*  exp=BoolD::create(1);
  bool  _out_s47=0;
  equals_dstAST_s0(exp, out_s45, 6, _out_s47);
  assert (_out_s47);;
}
void main1() {
  srcAST*  in=FalseS::create();
  dstAST*  out_s49=NULL;
  desugar(in, out_s49);
  dstAST*  exp=BoolD::create(0);
  bool  _out_s51=0;
  equals_dstAST_s0(exp, out_s49, 6, _out_s51);
  assert (_out_s51);;
}
void desugar(srcAST* src, dstAST*& _out) {
  if ((src) == (NULL)) {
    _out = NULL;
    return;
  }
  switch(src->type){
  case NumS::NUMS_type:
    {
    NumS*  _src = (NumS* )  src;

    dstAST*  _out_s21=NULL;
    desugar(NULL, _out_s21);
    dstAST*  _out_s23=NULL;
    desugar(NULL, _out_s23);
    _out = NumD::create(_src->v);
    return;
  
    break;
  }
  case PlusS::PLUSS_type:
    {
    PlusS*  _src = (PlusS* )  src;

    dstAST*  _out_s25=NULL;
    desugar(_src->a, _out_s25);
    dstAST*  _out_s27=NULL;
    desugar(_src->b, _out_s27);
    opcode*  opcode_=PlusOp::create();
    _out = BinopD::create(opcode_, _out_s25, _out_s27);
    return;
  
    break;
  }
  case MinusS::MINUSS_type:
    {
    MinusS*  _src = (MinusS* )  src;

    dstAST*  _out_s29=NULL;
    desugar(_src->a, _out_s29);
    dstAST*  _out_s31=NULL;
    desugar(_src->b, _out_s31);
    opcode*  opcode__0=MinusOp::create();
    _out = BinopD::create(opcode__0, _out_s29, _out_s31);
    return;
  
    break;
  }
  case TrueS::TRUES_type:
    {
    TrueS*  _src = (TrueS* )  src;

    dstAST*  _out_s33=NULL;
    desugar(NULL, _out_s33);
    dstAST*  _out_s35=NULL;
    desugar(NULL, _out_s35);
    _out = BoolD::create(1);
    return;
  
    break;
  }
  case FalseS::FALSES_type:
    {
    FalseS*  _src = (FalseS* )  src;

    dstAST*  _out_s37=NULL;
    desugar(NULL, _out_s37);
    dstAST*  _out_s39=NULL;
    desugar(NULL, _out_s39);
    _out = BoolD::create(0);
    return;
  
    break;
  }

 }
}
void equals_dstAST_s0(dstAST* left_s1, dstAST* right_s2, int bnd_s3, bool& _out) {
  if ((bnd_s3) <= (0)) {
    _out = 0;
    return;
  }
  if (((left_s1) == (NULL)) && ((right_s2) == (NULL))) {
    _out = 1;
    return;
  }
  if ((left_s1) == (NULL)) {
    _out = 0;
    return;
  }
  if ((right_s2) == (NULL)) {
    _out = 0;
    return;
  }
  switch(left_s1->type){
  case NumD::NUMD_type:
    {
    NumD*  _left_s1 = (NumD* )  left_s1;

    switch(right_s2->type){
    case NumD::NUMD_type:
        {
        NumD*  _right_s2 = (NumD* )  right_s2;

      _out = (_left_s1->v) == (_right_s2->v);
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }
  case BinopD::BINOPD_type:
    {
    BinopD*  _left_s1 = (BinopD* )  left_s1;

    switch(right_s2->type){
    case BinopD::BINOPD_type:
        {
        BinopD*  _right_s2 = (BinopD* )  right_s2;

      bool  _pac_sc_s9_s11=0;
      equals_opcode_s4(_left_s1->op, _right_s2->op, bnd_s3 - 1, _pac_sc_s9_s11);
      bool  _pac_sc_s9=0;
      _pac_sc_s9 = _pac_sc_s9_s11;
      if (_pac_sc_s9_s11) {
        bool  _pac_sc_s9_s13=0;
        equals_dstAST_s0(_left_s1->a, _right_s2->a, bnd_s3 - 1, _pac_sc_s9_s13);
        _pac_sc_s9 = _pac_sc_s9_s13;
      }
      bool  _pac_sc_s8=_pac_sc_s9;
      if (_pac_sc_s9) {
        bool  _pac_sc_s8_s15=0;
        equals_dstAST_s0(_left_s1->b, _right_s2->b, bnd_s3 - 1, _pac_sc_s8_s15);
        _pac_sc_s8 = _pac_sc_s8_s15;
      }
      _out = _pac_sc_s8;
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }
  case BoolD::BOOLD_type:
    {
    BoolD*  _left_s1 = (BoolD* )  left_s1;

    switch(right_s2->type){
    case BoolD::BOOLD_type:
        {
        BoolD*  _right_s2 = (BoolD* )  right_s2;

      _out = (_left_s1->val) == (_right_s2->val);
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }

 }
}
void equals_opcode_s4(opcode* left_s5, opcode* right_s6, int bnd_s7, bool& _out) {
  if ((bnd_s7) <= (0)) {
    _out = 0;
    return;
  }
  if (((left_s5) == (NULL)) && ((right_s6) == (NULL))) {
    _out = 1;
    return;
  }
  if ((left_s5) == (NULL)) {
    _out = 0;
    return;
  }
  if ((right_s6) == (NULL)) {
    _out = 0;
    return;
  }
  switch(left_s5->type){
  case PlusOp::PLUSOP_type:
    {
    PlusOp*  _left_s5 = (PlusOp* )  left_s5;

    switch(right_s6->type){
    case PlusOp::PLUSOP_type:
        {
        PlusOp*  _right_s6 = (PlusOp* )  right_s6;

      _out = 1;
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }
  case MinusOp::MINUSOP_type:
    {
    MinusOp*  _left_s5 = (MinusOp* )  left_s5;

    switch(right_s6->type){
    case MinusOp::MINUSOP_type:
        {
        MinusOp*  _right_s6 = (MinusOp* )  right_s6;

      _out = 1;
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }

 }
}

}
