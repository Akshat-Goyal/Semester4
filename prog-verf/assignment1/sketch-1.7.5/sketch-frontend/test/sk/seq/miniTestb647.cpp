#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb647.h"
namespace ANONYMOUS{

SPrim1* SPrim1::create(int  op_, sourceAST*  a_){
  void* temp= malloc( sizeof(SPrim1)  ); 
  SPrim1* rv = new (temp)SPrim1();
  rv->op =  op_;
  rv->a =  a_;
  rv->type= sourceAST::SPRIM1_type;
  return rv;
}
SPrim2* SPrim2::create(int  op_, sourceAST*  a_, sourceAST*  b_){
  void* temp= malloc( sizeof(SPrim2)  ); 
  SPrim2* rv = new (temp)SPrim2();
  rv->op =  op_;
  rv->a =  a_;
  rv->b =  b_;
  rv->type= sourceAST::SPRIM2_type;
  return rv;
}
SBetween* SBetween::create(sourceAST*  a_, sourceAST*  b_, sourceAST*  c_){
  void* temp= malloc( sizeof(SBetween)  ); 
  SBetween* rv = new (temp)SBetween();
  rv->a =  a_;
  rv->b =  b_;
  rv->c =  c_;
  rv->type= sourceAST::SBETWEEN_type;
  return rv;
}
SIf* SIf::create(sourceAST*  a_, sourceAST*  b_, sourceAST*  c_){
  void* temp= malloc( sizeof(SIf)  ); 
  SIf* rv = new (temp)SIf();
  rv->a =  a_;
  rv->b =  b_;
  rv->c =  c_;
  rv->type= sourceAST::SIF_type;
  return rv;
}
SStr* SStr::create(int  str_){
  void* temp= malloc( sizeof(SStr)  ); 
  SStr* rv = new (temp)SStr();
  rv->str =  str_;
  rv->type= sourceAST::SSTR_type;
  return rv;
}
SNum* SNum::create(int  val_){
  void* temp= malloc( sizeof(SNum)  ); 
  SNum* rv = new (temp)SNum();
  rv->val =  val_;
  rv->type= sourceAST::SNUM_type;
  return rv;
}
STrue* STrue::create(){
  void* temp= malloc( sizeof(STrue)  ); 
  STrue* rv = new (temp)STrue();
  rv->type= sourceAST::STRUE_type;
  return rv;
}
SFalse* SFalse::create(){
  void* temp= malloc( sizeof(SFalse)  ); 
  SFalse* rv = new (temp)SFalse();
  rv->type= sourceAST::SFALSE_type;
  return rv;
}
CVar* CVar::create(int  str_){
  void* temp= malloc( sizeof(CVar)  ); 
  CVar* rv = new (temp)CVar();
  rv->str =  str_;
  rv->type= coreAST::CVAR_type;
  return rv;
}
CPrim1* CPrim1::create(int  op_, coreAST*  a_){
  void* temp= malloc( sizeof(CPrim1)  ); 
  CPrim1* rv = new (temp)CPrim1();
  rv->op =  op_;
  rv->a =  a_;
  rv->type= coreAST::CPRIM1_type;
  return rv;
}
CPrim2* CPrim2::create(int  op_, coreAST*  a_, coreAST*  b_){
  void* temp= malloc( sizeof(CPrim2)  ); 
  CPrim2* rv = new (temp)CPrim2();
  rv->op =  op_;
  rv->a =  a_;
  rv->b =  b_;
  rv->type= coreAST::CPRIM2_type;
  return rv;
}
CLet* CLet::create(int  str_, coreAST*  a_, coreAST*  b_){
  void* temp= malloc( sizeof(CLet)  ); 
  CLet* rv = new (temp)CLet();
  rv->str =  str_;
  rv->a =  a_;
  rv->b =  b_;
  rv->type= coreAST::CLET_type;
  return rv;
}
CIf* CIf::create(coreAST*  a_, coreAST*  b_, coreAST*  c_){
  void* temp= malloc( sizeof(CIf)  ); 
  CIf* rv = new (temp)CIf();
  rv->a =  a_;
  rv->b =  b_;
  rv->c =  c_;
  rv->type= coreAST::CIF_type;
  return rv;
}
CNum* CNum::create(int  val_){
  void* temp= malloc( sizeof(CNum)  ); 
  CNum* rv = new (temp)CNum();
  rv->val =  val_;
  rv->type= coreAST::CNUM_type;
  return rv;
}
CStr* CStr::create(int  str_){
  void* temp= malloc( sizeof(CStr)  ); 
  CStr* rv = new (temp)CStr();
  rv->str =  str_;
  rv->type= coreAST::CSTR_type;
  return rv;
}
CBool* CBool::create(bool  bval_){
  void* temp= malloc( sizeof(CBool)  ); 
  CBool* rv = new (temp)CBool();
  rv->bval =  bval_;
  rv->type= coreAST::CBOOL_type;
  return rv;
}
void main3__Wrapper(bool b1, int x, int y) {
  main3(b1, x, y);
}
void main3__WrapperNospec(bool b1, int x, int y) {}
void main1__Wrapper(int op, bool bsz, int x, int y) {
  main1(op, bsz, x, y);
}
void main1__WrapperNospec(int op, bool bsz, int x, int y) {}
void main2__Wrapper(int x, int y, int z) {
  main2(x, y, z);
}
void main2__WrapperNospec(int x, int y, int z) {}
void main3(bool b1, int x, int y) {
  sourceAST*  _pac_sc_s4=NULL;
  if (b1) {
    sourceAST*  s1_s6=NULL;
    gTrue(s1_s6);
    _pac_sc_s4 = s1_s6;
  } else {
    sourceAST*  s1_s8=NULL;
    gFalse(s1_s8);
    _pac_sc_s4 = s1_s8;
  }
  sourceAST*  s1_s10=NULL;
  gN(x, s1_s10);
  sourceAST*  s1_s12=NULL;
  gN(y, s1_s12);
  sourceAST*  s1_s14=NULL;
  gIf(_pac_sc_s4, s1_s10, s1_s12, s1_s14);
  coreAST*  t1_s16=NULL;
  desugar(s1_s14, 3, t1_s16);
  coreAST*  _out_s18=NULL;
  cBool(b1, _out_s18);
  coreAST*  _out_s20=NULL;
  cN(x, _out_s20);
  coreAST*  _out_s22=NULL;
  cN(y, _out_s22);
  coreAST*  _out_s24=NULL;
  cIf(_out_s18, _out_s20, _out_s22, _out_s24);
  bool  _out_s26=0;
  equals(t1_s16, _out_s24, 3, _out_s26);
  assert (_out_s26);;
}
void main1(int op, bool bsz, int x, int y) {
  int  sz=0;
  sz = (bsz ? ((int) (1)) : 2);
  sourceAST*  s1_s175=NULL;
  gN(x, s1_s175);
  sourceAST*  s1_s177=NULL;
  gN(y, s1_s177);
  sourceAST*  s1_s179=NULL;
  sourceAST* _tt0[2] = {s1_s175, s1_s177};
  gOp(sz, op, (_tt0+ 0), s1_s179);
  coreAST*  t1_s181=NULL;
  desugar(s1_s179, 3, t1_s181);
  coreAST*  _out_s183=NULL;
  cN(x, _out_s183);
  coreAST*  _out_s185=NULL;
  cN(y, _out_s185);
  coreAST*  _out_s187=NULL;
  coreAST* _tt1[2] = {_out_s183, _out_s185};
  cOp(sz, op, (_tt1+ 0), _out_s187);
  bool  _out_s189=0;
  equals(t1_s181, _out_s187, 3, _out_s189);
  assert (_out_s189);;
}
void main2(int x, int y, int z) {
  sourceAST*  s1_s191=NULL;
  gN(x, s1_s191);
  sourceAST*  s1_s193=NULL;
  gN(y, s1_s193);
  sourceAST*  s1_s195=NULL;
  gN(z, s1_s195);
  sourceAST*  s1_s197=NULL;
  gBetween(s1_s191, s1_s193, s1_s195, s1_s197);
  coreAST*  t1_s199=NULL;
  desugar(s1_s197, 3, t1_s199);
  coreAST*  c1_s201=NULL;
  cN(x, c1_s201);
  coreAST*  c1_s203=NULL;
  cN(y, c1_s203);
  coreAST*  c1_s205=NULL;
  coreAST* _tt2[2] = {c1_s201, c1_s203};
  cOp(2, 7, _tt2, c1_s205);
  coreAST*  c1_s207=NULL;
  cN(y, c1_s207);
  coreAST*  c1_s209=NULL;
  cN(z, c1_s209);
  coreAST*  c1_s211=NULL;
  coreAST* _tt3[2] = {c1_s207, c1_s209};
  cOp(2, 7, _tt3, c1_s211);
  coreAST*  c1_s213=NULL;
  coreAST* _tt4[2] = {c1_s205, c1_s211};
  cOp(2, 3, _tt4, c1_s213);
  bool  _out_s215=0;
  equals(c1_s213, t1_s199, 3, _out_s215);
  assert (_out_s215);;
}
void gTrue(sourceAST*& _out) {
  _out = STrue::create();
  return;
}
void gFalse(sourceAST*& _out) {
  _out = SFalse::create();
  return;
}
void gN(int n, sourceAST*& _out) {
  _out = SNum::create(n);
  return;
}
void gIf(sourceAST* cond, sourceAST* th, sourceAST* el, sourceAST*& _out) {
  _out = SIf::create(cond, th, el);
  return;
}
void desugar(sourceAST* s, int bnd2, coreAST*& _out) {
  if ((s) == (NULL)) {
    _out = NULL;
    return;
  }
  if ((bnd2) <= (0)) {
    _out = NULL;
    return;
  }
  switch(s->type){
  case SPrim1::SPRIM1_type:
    {
    SPrim1*  _s = (SPrim1* )  s;

    sourceAST*  fields_55=_s->a;
    coreAST**  v_s63= new coreAST* [3]; CopyArr<coreAST* >(v_s63,NULL, 3);
    coreAST*  _out_s61=NULL;
    desugar(fields_55, bnd2 - 1, _out_s61);
    (v_s63[0]) = _out_s61;
    int  op_5b=_s->op;
    coreAST*  c1=(v_s63[0]);
    _out = CPrim1::create(op_5b, c1);
    delete[] v_s63;
    return;
  
    break;
  }
  case SPrim2::SPRIM2_type:
    {
    SPrim2*  _s = (SPrim2* )  s;

    sourceAST*  fields_10f=_s->a;
    sourceAST*  fields_10f_0=_s->b;
    coreAST**  v_s77= new coreAST* [3]; CopyArr<coreAST* >(v_s77,NULL, 3);
    coreAST*  _out_s61_0=NULL;
    desugar(fields_10f, bnd2 - 1, _out_s61_0);
    (v_s77[0]) = _out_s61_0;
    coreAST*  _out_s61_1=NULL;
    desugar(fields_10f_0, bnd2 - 1, _out_s61_1);
    (v_s77[1]) = _out_s61_1;
    int  op_116=_s->op;
    coreAST*  c1_0=(v_s77[0]);
    coreAST*  c2=(v_s77[1]);
    _out = CPrim2::create(op_116, c1_0, c2);
    delete[] v_s77;
    return;
  
    break;
  }
  case SBetween::SBETWEEN_type:
    {
    SBetween*  _s = (SBetween* )  s;

    sourceAST*  fields_1ca=_s->a;
    sourceAST*  fields_1ca_0=_s->b;
    sourceAST*  fields_1ca_1=_s->c;
    coreAST**  v_s91= new coreAST* [3]; CopyArr<coreAST* >(v_s91,NULL, 3);
    coreAST*  _out_s61_2=NULL;
    desugar(fields_1ca, bnd2 - 1, _out_s61_2);
    (v_s91[0]) = _out_s61_2;
    coreAST*  _out_s61_3=NULL;
    desugar(fields_1ca_0, bnd2 - 1, _out_s61_3);
    (v_s91[1]) = _out_s61_3;
    coreAST*  _out_s61_4=NULL;
    desugar(fields_1ca_1, bnd2 - 1, _out_s61_4);
    (v_s91[2]) = _out_s61_4;
    coreAST*  c1_1=(v_s91[0]);
    coreAST*  c2_0=(v_s91[1]);
    coreAST*  _out_s95=CPrim2::create(7, c1_1, c2_0);
    coreAST*  c2_1=(v_s91[1]);
    coreAST*  c3=(v_s91[2]);
    coreAST*  _out_s97=CPrim2::create(7, c2_1, c3);
    _out = CPrim2::create(3, _out_s95, _out_s97);
    delete[] v_s91;
    return;
  
    break;
  }
  case SIf::SIF_type:
    {
    SIf*  _s = (SIf* )  s;

    sourceAST*  fields_286=_s->a;
    sourceAST*  fields_286_0=_s->b;
    sourceAST*  fields_286_1=_s->c;
    coreAST**  v_s105= new coreAST* [3]; CopyArr<coreAST* >(v_s105,NULL, 3);
    coreAST*  _out_s61_5=NULL;
    desugar(fields_286, bnd2 - 1, _out_s61_5);
    (v_s105[0]) = _out_s61_5;
    coreAST*  _out_s61_6=NULL;
    desugar(fields_286_0, bnd2 - 1, _out_s61_6);
    (v_s105[1]) = _out_s61_6;
    coreAST*  _out_s61_7=NULL;
    desugar(fields_286_1, bnd2 - 1, _out_s61_7);
    (v_s105[2]) = _out_s61_7;
    coreAST*  c1_2=(v_s105[0]);
    coreAST*  c2_2=(v_s105[1]);
    coreAST*  c3_0=(v_s105[2]);
    _out = CIf::create(c1_2, c2_2, c3_0);
    delete[] v_s105;
    return;
  
    break;
  }
  case SStr::SSTR_type:
    {
    SStr*  _s = (SStr* )  s;

    assert (0);;
    assert (0);;
    assert (0);;
    assert (0);;
    assert (0);;
    assert (0);;
    _out = CVar::create(1);
    return;
  
    break;
  }
  case SNum::SNUM_type:
    {
    SNum*  _s = (SNum* )  s;

    int  op_400=_s->val;
    _out = CNum::create(op_400);
    return;
  
    break;
  }
  case STrue::STRUE_type:
    {
    STrue*  _s = (STrue* )  s;

    _out = CBool::create(1);
    return;
  
    break;
  }
  case SFalse::SFALSE_type:
    {
    SFalse*  _s = (SFalse* )  s;

    _out = CBool::create(0);
    return;
  
    break;
  }

 }
}
void cBool(bool val, coreAST*& _out) {
  _out = CBool::create(val);
  return;
}
void cN(int n, coreAST*& _out) {
  _out = CNum::create(n);
  return;
}
void cIf(coreAST* cond, coreAST* th, coreAST* el, coreAST*& _out) {
  _out = CIf::create(cond, th, el);
  return;
}
void equals(coreAST* c1, coreAST* c2, int bnd, bool& _out) {
  if ((bnd) <= (0)) {
    _out = 0;
    return;
  }
  switch(c1->type){
  case CPrim1::CPRIM1_type:
    {
    CPrim1*  _c1 = (CPrim1* )  c1;

    switch(c2->type){
    case CPrim1::CPRIM1_type:
        {
        CPrim1*  _c2 = (CPrim1* )  c2;

      bool  _pac_sc_s27=(_c1->op) == (_c2->op);
      if (_pac_sc_s27) {
        bool  _pac_sc_s27_s29=0;
        equals(_c1->a, _c2->a, bnd - 1, _pac_sc_s27_s29);
        _pac_sc_s27 = _pac_sc_s27_s29;
      }
      _out = _pac_sc_s27;
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
  case CPrim2::CPRIM2_type:
    {
    CPrim2*  _c1 = (CPrim2* )  c1;

    switch(c2->type){
    case CPrim2::CPRIM2_type:
        {
        CPrim2*  _c2 = (CPrim2* )  c2;

      bool  _pac_sc_s31=(_c1->op) == (_c2->op);
      if (_pac_sc_s31) {
        bool  _pac_sc_s31_s33=0;
        equals(_c1->a, _c2->a, bnd - 1, _pac_sc_s31_s33);
        _pac_sc_s31 = _pac_sc_s31_s33;
      }
      bool  _pac_sc_s30=_pac_sc_s31;
      if (_pac_sc_s31) {
        bool  _pac_sc_s30_s35=0;
        equals(_c1->b, _c2->b, bnd - 1, _pac_sc_s30_s35);
        _pac_sc_s30 = _pac_sc_s30_s35;
      }
      _out = _pac_sc_s30;
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
  case CIf::CIF_type:
    {
    CIf*  _c1 = (CIf* )  c1;

    switch(c2->type){
    case CIf::CIF_type:
        {
        CIf*  _c2 = (CIf* )  c2;

      bool  _pac_sc_s37_s39=0;
      equals(_c1->a, _c2->a, bnd - 1, _pac_sc_s37_s39);
      bool  _pac_sc_s37=0;
      _pac_sc_s37 = _pac_sc_s37_s39;
      if (_pac_sc_s37_s39) {
        bool  _pac_sc_s37_s41=0;
        equals(_c1->b, _c2->b, bnd - 1, _pac_sc_s37_s41);
        _pac_sc_s37 = _pac_sc_s37_s41;
      }
      bool  _pac_sc_s36=_pac_sc_s37;
      if (_pac_sc_s37) {
        bool  _pac_sc_s36_s43=0;
        equals(_c1->c, _c2->c, bnd - 1, _pac_sc_s36_s43);
        _pac_sc_s36 = _pac_sc_s36_s43;
      }
      _out = _pac_sc_s36;
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
  case CNum::CNUM_type:
    {
    CNum*  _c1 = (CNum* )  c1;

    switch(c2->type){
    case CNum::CNUM_type:
        {
        CNum*  _c2 = (CNum* )  c2;

      _out = (_c1->val) == (_c2->val);
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
  case CLet::CLET_type:
    {
    CLet*  _c1 = (CLet* )  c1;

    switch(c2->type){
    case CLet::CLET_type:
        {
        CLet*  _c2 = (CLet* )  c2;

      bool  _pac_sc_s45=(_c1->str) == (_c2->str);
      if (_pac_sc_s45) {
        bool  _pac_sc_s45_s47=0;
        equals(_c1->a, _c2->a, bnd - 1, _pac_sc_s45_s47);
        _pac_sc_s45 = _pac_sc_s45_s47;
      }
      bool  _pac_sc_s44=_pac_sc_s45;
      if (_pac_sc_s45) {
        bool  _pac_sc_s44_s49=0;
        equals(_c1->b, _c2->b, bnd - 1, _pac_sc_s44_s49);
        _pac_sc_s44 = _pac_sc_s44_s49;
      }
      _out = _pac_sc_s44;
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
  case CVar::CVAR_type:
    {
    CVar*  _c1 = (CVar* )  c1;

    switch(c2->type){
    case CVar::CVAR_type:
        {
        CVar*  _c2 = (CVar* )  c2;

      _out = (_c1->str) == (_c2->str);
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
  case CStr::CSTR_type:
    {
    CStr*  _c1 = (CStr* )  c1;

    switch(c2->type){
    case CStr::CSTR_type:
        {
        CStr*  _c2 = (CStr* )  c2;

      _out = (_c1->str) == (_c2->str);
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
  case CBool::CBOOL_type:
    {
    CBool*  _c1 = (CBool* )  c1;

    switch(c2->type){
    case CBool::CBOOL_type:
        {
        CBool*  _c2 = (CBool* )  c2;

      _out = (_c1->bval) == (_c2->bval);
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
void gOp(int n, int op, sourceAST** p/* len = n */, sourceAST*& _out) {
  if ((n) == (1)) {
    _out = SPrim1::create(op, (p[0]));
    return;
  } else {
    _out = SPrim2::create(op, (p[0]), (p[1]));
    return;
  }
}
void cOp(int n, int op, coreAST** p/* len = n */, coreAST*& _out) {
  if ((n) == (1)) {
    _out = CPrim1::create(op, (p[0]));
    return;
  } else {
    _out = CPrim2::create(op, (p[0]), (p[1]));
    return;
  }
}
void gBetween(sourceAST* a, sourceAST* b, sourceAST* c, sourceAST*& _out) {
  _out = SBetween::create(a, b, c);
  return;
}

}
