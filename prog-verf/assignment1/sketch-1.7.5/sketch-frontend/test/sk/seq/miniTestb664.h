#ifndef MINITESTB664_H
#define MINITESTB664_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class sourceAST; 
class SNum; 
class SVar; 
class STrue; 
class SFalse; 
class SAssign; 
class SLet; 
class SPrim1; 
class SPrim2; 
class SBetween; 
class SIf; 
class coreAST; 
class CPrim2; 
class CNum; 
class CVar; 
class CBool; 
class CIf; 
class CPrim1; 
class CAssign; 
class CLet; 
}
namespace ANONYMOUS{
class sourceAST; 
class SNum; 
class SVar; 
class STrue; 
class SFalse; 
class SAssign; 
class SLet; 
class SPrim1; 
class SPrim2; 
class SBetween; 
class SIf; 
class coreAST; 
class CPrim2; 
class CNum; 
class CVar; 
class CBool; 
class CIf; 
class CPrim1; 
class CAssign; 
class CLet; 
class sourceAST{
  public:
  typedef enum {SNUM_type, SVAR_type, STRUE_type, SFALSE_type, SASSIGN_type, SLET_type, SPRIM1_type, SPRIM2_type, SBETWEEN_type, SIF_type} _kind;
  _kind type;
  ~sourceAST(){
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
class SVar : public sourceAST{
  public:
  int  str;
  SVar(){}
  static SVar* create(  int  str_);
  ~SVar(){
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
class SAssign : public sourceAST{
  public:
  int  str;
  sourceAST*  a;
  SAssign(){}
  static SAssign* create(  int  str_,   sourceAST*  a_);
  ~SAssign(){
  }
  void operator delete(void* p){ free(p); }
};
class SLet : public sourceAST{
  public:
  int  str;
  sourceAST*  a;
  sourceAST*  b;
  SLet(){}
  static SLet* create(  int  str_,   sourceAST*  a_,   sourceAST*  b_);
  ~SLet(){
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
class coreAST{
  public:
  typedef enum {CPRIM2_type, CNUM_type, CVAR_type, CBOOL_type, CIF_type, CPRIM1_type, CASSIGN_type, CLET_type} _kind;
  _kind type;
  ~coreAST(){
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
class CNum : public coreAST{
  public:
  int  val;
  CNum(){}
  static CNum* create(  int  val_);
  ~CNum(){
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
class CBool : public coreAST{
  public:
  bool  val;
  CBool(){}
  static CBool* create(  bool  val_);
  ~CBool(){
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
class CAssign : public coreAST{
  public:
  int  str;
  coreAST*  a;
  CAssign(){}
  static CAssign* create(  int  str_,   coreAST*  a_);
  ~CAssign(){
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
extern void main0__Wrapper(int* arr/* len = 30 */, int sbnd);
extern void main0__WrapperNospec(int* arr/* len = 30 */, int sbnd);
extern void main0(int* arr/* len = 30 */, int sbnd_0, coreAST** cmtStore__ANONYMOUS_s168/* len = 5 */, sourceAST** smtStore__ANONYMOUS_s169/* len = 5 */);
extern void produce(int* encoding/* len = 50 */, int& idx, int bnd, int sbnd, sourceAST*& _out);
extern void interpretSourceAST(sourceAST* s, int& idx, int bnd, sourceAST*& _out, sourceAST** smtStore__ANONYMOUS_s170/* len = 5 */);
extern void desugar(sourceAST* s, int bnd2, coreAST*& _out);
extern void interpretCoreAST(coreAST* s, int& idx, int bnd, int bnd2, coreAST*& _out, coreAST** cmtStore__ANONYMOUS_s171/* len = 5 */);
extern void equals(sourceAST* c1, coreAST* c2, bool& _out);
extern void gOp(int n, int op, sourceAST** p/* len = n */, sourceAST*& _out);
extern void gBetween(sourceAST* a, sourceAST* b, sourceAST* c, sourceAST*& _out);
extern void gIf(sourceAST* cond, sourceAST* th, sourceAST* el, sourceAST*& _out);
}

#endif
