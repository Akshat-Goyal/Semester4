#ifndef MINITESTB683_H
#define MINITESTB683_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class srcAST; 
class NumS; 
class PlusS; 
class MinusS; 
class TrueS; 
class FalseS; 
class dstAST; 
class NumD; 
class BinopD; 
class BoolD; 
class opcode; 
class PlusOp; 
class MinusOp; 
}
namespace ANONYMOUS{
class srcAST; 
class NumS; 
class PlusS; 
class MinusS; 
class TrueS; 
class FalseS; 
class dstAST; 
class NumD; 
class BinopD; 
class BoolD; 
class opcode; 
class PlusOp; 
class MinusOp; 
class srcAST{
  public:
  typedef enum {NUMS_type, PLUSS_type, MINUSS_type, TRUES_type, FALSES_type} _kind;
  _kind type;
  ~srcAST(){
  }
  void operator delete(void* p){ free(p); }
};
class NumS : public srcAST{
  public:
  int  v;
  NumS(){}
  static NumS* create(  int  v_);
  ~NumS(){
  }
  void operator delete(void* p){ free(p); }
};
class PlusS : public srcAST{
  public:
  srcAST*  a;
  srcAST*  b;
  PlusS(){}
  static PlusS* create(  srcAST*  a_,   srcAST*  b_);
  ~PlusS(){
  }
  void operator delete(void* p){ free(p); }
};
class MinusS : public srcAST{
  public:
  srcAST*  a;
  srcAST*  b;
  MinusS(){}
  static MinusS* create(  srcAST*  a_,   srcAST*  b_);
  ~MinusS(){
  }
  void operator delete(void* p){ free(p); }
};
class TrueS : public srcAST{
  public:
  static TrueS* create();
  ~TrueS(){
  }
  void operator delete(void* p){ free(p); }
};
class FalseS : public srcAST{
  public:
  static FalseS* create();
  ~FalseS(){
  }
  void operator delete(void* p){ free(p); }
};
class dstAST{
  public:
  typedef enum {NUMD_type, BINOPD_type, BOOLD_type} _kind;
  _kind type;
  ~dstAST(){
  }
  void operator delete(void* p){ free(p); }
};
class NumD : public dstAST{
  public:
  int  v;
  NumD(){}
  static NumD* create(  int  v_);
  ~NumD(){
  }
  void operator delete(void* p){ free(p); }
};
class BinopD : public dstAST{
  public:
  opcode*  op;
  dstAST*  a;
  dstAST*  b;
  BinopD(){}
  static BinopD* create(  opcode*  op_,   dstAST*  a_,   dstAST*  b_);
  ~BinopD(){
  }
  void operator delete(void* p){ free(p); }
};
class BoolD : public dstAST{
  public:
  bool  val;
  BoolD(){}
  static BoolD* create(  bool  val_);
  ~BoolD(){
  }
  void operator delete(void* p){ free(p); }
};
class opcode{
  public:
  typedef enum {PLUSOP_type, MINUSOP_type} _kind;
  _kind type;
  ~opcode(){
  }
  void operator delete(void* p){ free(p); }
};
class PlusOp : public opcode{
  public:
  static PlusOp* create();
  ~PlusOp(){
  }
  void operator delete(void* p){ free(p); }
};
class MinusOp : public opcode{
  public:
  static MinusOp* create();
  ~MinusOp(){
  }
  void operator delete(void* p){ free(p); }
};
extern void test1__Wrapper(int x1, int x2);
extern void test1__WrapperNospec(int x1, int x2);
extern void test2__Wrapper(int x1, int x2);
extern void test2__WrapperNospec(int x1, int x2);
extern void test3__Wrapper();
extern void test3__WrapperNospec();
extern void test4__Wrapper();
extern void test4__WrapperNospec();
extern void test1(int x1, int x2);
extern void test2(int x1, int x2);
extern void test3();
extern void test4();
extern void desugar(srcAST* src, dstAST*& _out);
extern void equals_dstAST_s0(dstAST* left_s1, dstAST* right_s2, int bnd_s3, bool& _out);
extern void equals_opcode_s4(opcode* left_s5, opcode* right_s6, int bnd_s7, bool& _out);
}

#endif
