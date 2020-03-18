#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb606.h"
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
template<typename T_0>
SStr* SStr::create(int  n_, T_0* str_, int str_len){
  int tlen_str = n_; 
  void* temp= malloc( sizeof(SStr)   + sizeof(char )*tlen_str); 
  SStr* rv = new (temp)SStr();
  rv->n =  n_;
  CopyArr(rv->str, str_, tlen_str, str_len ); 
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
template<typename T_0>
CVar* CVar::create(int  n_, T_0* str_, int str_len){
  int tlen_str = n_; 
  void* temp= malloc( sizeof(CVar)   + sizeof(char )*tlen_str); 
  CVar* rv = new (temp)CVar();
  rv->n =  n_;
  CopyArr(rv->str, str_, tlen_str, str_len ); 
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
template<typename T_0>
CLet* CLet::create(int  n_, T_0* str_, int str_len, coreAST*  a_, coreAST*  b_){
  int tlen_str = n_; 
  void* temp= malloc( sizeof(CLet)   + sizeof(char )*tlen_str); 
  CLet* rv = new (temp)CLet();
  rv->n =  n_;
  rv->a =  a_;
  rv->b =  b_;
  CopyArr(rv->str, str_, tlen_str, str_len ); 
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
template<typename T_0>
CStr* CStr::create(int  n_, T_0* str_, int str_len){
  int tlen_str = n_; 
  void* temp= malloc( sizeof(CStr)   + sizeof(char )*tlen_str); 
  CStr* rv = new (temp)CStr();
  rv->n =  n_;
  CopyArr(rv->str, str_, tlen_str, str_len ); 
  rv->type= coreAST::CSTR_type;
  return rv;
}
CBool* CBool::create(bool  val_){
  void* temp= malloc( sizeof(CBool)  ); 
  CBool* rv = new (temp)CBool();
  rv->val =  val_;
  rv->type= coreAST::CBOOL_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  sourceAST*  s_s1=NULL;
  gN(111, s_s1);
  sourceAST*  s_s3=NULL;
  gN(222, s_s3);
  sourceAST*  s_s5=NULL;
  sourceAST* _tt0[2] = {s_s1, s_s3};
  gOp(2, 7, _tt0, s_s5);
  sourceAST*  s_s7=NULL;
  gN(111, s_s7);
  sourceAST*  s_s9=NULL;
  gN(122, s_s9);
  sourceAST*  s_s11=NULL;
  gIf(s_s5, s_s7, s_s9, s_s11);
  coreAST*  ca_s13=NULL;
  desugar(s_s11, ca_s13);
}
void gN(int n, sourceAST*& _out) {
  _out = SNum::create(n);
  return;
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
void gIf(sourceAST* cond, sourceAST* th, sourceAST* el, sourceAST*& _out) {
  _out = SIf::create(cond, th, el);
  return;
}
void desugar(sourceAST* s, coreAST*& _out) {
  if ((s) == (NULL)) {
    _out = NULL;
    return;
  }
  switch(s->type){
  case SPrim1::SPRIM1_type:
    {
    SPrim1*  _s = (SPrim1* )  s;

    coreAST*  _out_s15=NULL;
    desugar(_s->a, _out_s15);
    _out = CPrim1::create(_s->op, _out_s15);
    return;
  
    break;
  }
  case SPrim2::SPRIM2_type:
    {
    SPrim2*  _s = (SPrim2* )  s;

    coreAST*  _out_s17=NULL;
    desugar(_s->a, _out_s17);
    coreAST*  _out_s19=NULL;
    desugar(_s->b, _out_s19);
    _out = CPrim2::create(_s->op, _out_s17, _out_s19);
    return;
  
    break;
  }
  case SBetween::SBETWEEN_type:
    {
    SBetween*  _s = (SBetween* )  s;

    coreAST*  _out_s21=NULL;
    desugar(_s->a, _out_s21);
    coreAST*  _out_s23=NULL;
    desugar(_s->b, _out_s23);
    coreAST*  _out_s25=NULL;
    desugar(_s->c, _out_s25);
    char _tt1[4] = {'%', 'x', '1', '\0'};
    char _tt2[4] = {'%', 'x', '2', '\0'};
    char _tt3[4] = {'%', 'x', '3', '\0'};
    char _tt4[4] = {'%', 'x', '1', '\0'};
    char _tt5[4] = {'%', 'x', '2', '\0'};
    char _tt6[4] = {'%', 'x', '2', '\0'};
    char _tt7[4] = {'%', 'x', '3', '\0'};
    _out = CLet::create(4, _tt1, 4, _out_s21, CLet::create(4, _tt2, 4, _out_s23, CLet::create(4, _tt3, 4, _out_s25, CPrim2::create(3, CPrim2::create(7, CVar::create(4, _tt4, 4), CVar::create(4, _tt5, 4)), CPrim2::create(7, CVar::create(4, _tt6, 4), CVar::create(4, _tt7, 4))))));
    return;
  
    break;
  }
  case SIf::SIF_type:
    {
    SIf*  _s = (SIf* )  s;

    coreAST*  _out_s27=NULL;
    desugar(_s->a, _out_s27);
    coreAST*  _out_s29=NULL;
    desugar(_s->b, _out_s29);
    coreAST*  _out_s31=NULL;
    desugar(_s->c, _out_s31);
    _out = CIf::create(_out_s27, _out_s29, _out_s31);
    return;
  
    break;
  }
  case SStr::SSTR_type:
    {
    SStr*  _s = (SStr* )  s;

    _out = CStr::create(_s->n, _s->str, _s->n);
    return;
  
    break;
  }
  case SNum::SNUM_type:
    {
    SNum*  _s = (SNum* )  s;

    _out = CNum::create(_s->val);
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

}
