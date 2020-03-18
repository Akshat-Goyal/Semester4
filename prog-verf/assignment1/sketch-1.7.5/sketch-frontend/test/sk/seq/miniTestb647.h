#ifndef MINITESTB647_H
#define MINITESTB647_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class sourceAST; 
class SPrim1; 
class SPrim2; 
class SBetween; 
class SIf; 
class SStr; 
class SNum; 
class STrue; 
class SFalse; 
class coreAST; 
class CVar; 
class CPrim1; 
class CPrim2; 
class CLet; 
class CIf; 
class CNum; 
class CStr; 
class CBool; 
}
namespace ANONYMOUS{
class sourceAST; 
class SPrim1; 
class SPrim2; 
class SBetween; 
class SIf; 
class SStr; 
class SNum; 
class STrue; 
class SFalse; 
class coreAST; 
class CVar; 
class CPrim1; 
class CPrim2; 
class CLet; 
class CIf; 
class CNum; 
class CStr; 
class CBool; 
class sourceAST{
  public:
  typedef enum {SPRIM1_type, SPRIM2_type, SBETWEEN_type, SIF_type, SSTR_type, SNUM_type, STRUE_type, SFALSE_type} _kind;
  _kind type;
  ~sourceAST(){
  }
  void operator delete(void* p){ free(p); }
};
class SPrim1 : public sourceAST{
  public:
  int  op;
  sourceAST*  a;
  SPrim1(){}
  static SPrim1* create(  int  op_,   sourceAST*  a_);
  ~SPrim1(){
  }
  void operator delete(void* p){ free(p); }
};
class SPrim2 : public sourceAST{
  public:
  int  op;
  sourceAST*  a;
  sourceAST*  b;
  SPrim2(){}
  static SPrim2* create(  int  op_,   sourceAST*  a_,   sourceAST*  b_);
  ~SPrim2(){
  }
  void operator delete(void* p){ free(p); }
};
class SBetween : public sourceAST{
  public:
  sourceAST*  a;
  sourceAST*  b;
  sourceAST*  c;
  SBetween(){}
  static SBetween* create(  sourceAST*  a_,   sourceAST*  b_,   sourceAST*  c_);
  ~SBetween(){
  }
  void operator delete(void* p){ free(p); }
};
class SIf : public sourceAST{
  public:
  sourceAST*  a;
  sourceAST*  b;
  sourceAST*  c;
  SIf(){}
  static SIf* create(  sourceAST*  a_,   sourceAST*  b_,   sourceAST*  c_);
  ~SIf(){
  }
  void operator delete(void* p){ free(p); }
};
class SStr : public sourceAST{
  public:
  int  str;
  SStr(){}
  static SStr* create(  int  str_);
  ~SStr(){
  }
  void operator delete(void* p){ free(p); }
};
class SNum : public sourceAST{
  public:
  int  val;
  SNum(){}
  static SNum* create(  int  val_);
  ~SNum(){
  }
  void operator delete(void* p){ free(p); }
};
class STrue : public sourceAST{
  public:
  static STrue* create();
  ~STrue(){
  }
  void operator delete(void* p){ free(p); }
};
class SFalse : public sourceAST{
  public:
  static SFalse* create();
  ~SFalse(){
  }
  void operator delete(void* p){ free(p); }
};
class coreAST{
  public:
  typedef enum {CVAR_type, CPRIM1_type, CPRIM2_type, CLET_type, CIF_type, CNUM_type, CSTR_type, CBOOL_type} _kind;
  _kind type;
  ~coreAST(){
  }
  void operator delete(void* p){ free(p); }
};
class CVar : public coreAST{
  public:
  int  str;
  CVar(){}
  static CVar* create(  int  str_);
  ~CVar(){
  }
  void operator delete(void* p){ free(p); }
};
class CPrim1 : public coreAST{
  public:
  int  op;
  coreAST*  a;
  CPrim1(){}
  static CPrim1* create(  int  op_,   coreAST*  a_);
  ~CPrim1(){
  }
  void operator delete(void* p){ free(p); }
};
class CPrim2 : public coreAST{
  public:
  int  op;
  coreAST*  a;
  coreAST*  b;
  CPrim2(){}
  static CPrim2* create(  int  op_,   coreAST*  a_,   coreAST*  b_);
  ~CPrim2(){
  }
  void operator delete(void* p){ free(p); }
};
class CLet : public coreAST{
  public:
  int  str;
  coreAST*  a;
  coreAST*  b;
  CLet(){}
  static CLet* create(  int  str_,   coreAST*  a_,   coreAST*  b_);
  ~CLet(){
  }
  void operator delete(void* p){ free(p); }
};
class CIf : public coreAST{
  public:
  coreAST*  a;
  coreAST*  b;
  coreAST*  c;
  CIf(){}
  static CIf* create(  coreAST*  a_,   coreAST*  b_,   coreAST*  c_);
  ~CIf(){
  }
  void operator delete(void* p){ free(p); }
};
class CNum : public coreAST{
  public:
  int  val;
  CNum(){}
  static CNum* create(  int  val_);
  ~CNum(){
  }
  void operator delete(void* p){ free(p); }
};
class CStr : public coreAST{
  public:
  int  str;
  CStr(){}
  static CStr* create(  int  str_);
  ~CStr(){
  }
  void operator delete(void* p){ free(p); }
};
class CBool : public coreAST{
  public:
  bool  bval;
  CBool(){}
  static CBool* create(  bool  bval_);
  ~CBool(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main3__Wrapper(bool b1, int x, int y);
extern void main3__WrapperNospec(bool b1, int x, int y);
extern void main1__Wrapper(int op, bool bsz, int x, int y);
extern void main1__WrapperNospec(int op, bool bsz, int x, int y);
extern void main2__Wrapper(int x, int y, int z);
extern void main2__WrapperNospec(int x, int y, int z);
extern void main3(bool b1, int x, int y);
extern void main1(int op, bool bsz, int x, int y);
extern void main2(int x, int y, int z);
extern void gTrue(sourceAST*& _out);
extern void gFalse(sourceAST*& _out);
extern void gN(int n, sourceAST*& _out);
extern void gIf(sourceAST* cond, sourceAST* th, sourceAST* el, sourceAST*& _out);
extern void desugar(sourceAST* s, int bnd2, coreAST*& _out);
extern void cBool(bool val, coreAST*& _out);
extern void cN(int n, coreAST*& _out);
extern void cIf(coreAST* cond, coreAST* th, coreAST* el, coreAST*& _out);
extern void equals(coreAST* c1, coreAST* c2, int bnd, bool& _out);
extern void gOp(int n, int op, sourceAST** p/* len = n */, sourceAST*& _out);
extern void cOp(int n, int op, coreAST** p/* len = n */, coreAST*& _out);
extern void gBetween(sourceAST* a, sourceAST* b, sourceAST* c, sourceAST*& _out);
}

#endif