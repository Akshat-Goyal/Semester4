#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb664.h"
namespace ANONYMOUS{

SNum* SNum::create(int  val_){
  void* temp= malloc( sizeof(SNum)  ); 
  SNum* rv = new (temp)SNum();
  rv->val =  val_;
  rv->type= sourceAST::SNUM_type;
  return rv;
}
SVar* SVar::create(int  str_){
  void* temp= malloc( sizeof(SVar)  ); 
  SVar* rv = new (temp)SVar();
  rv->str =  str_;
  rv->type= sourceAST::SVAR_type;
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
SAssign* SAssign::create(int  str_, sourceAST*  a_){
  void* temp= malloc( sizeof(SAssign)  ); 
  SAssign* rv = new (temp)SAssign();
  rv->str =  str_;
  rv->a =  a_;
  rv->type= sourceAST::SASSIGN_type;
  return rv;
}
SLet* SLet::create(int  str_, sourceAST*  a_, sourceAST*  b_){
  void* temp= malloc( sizeof(SLet)  ); 
  SLet* rv = new (temp)SLet();
  rv->str =  str_;
  rv->a =  a_;
  rv->b =  b_;
  rv->type= sourceAST::SLET_type;
  return rv;
}
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
CPrim2* CPrim2::create(int  op_, coreAST*  a_, coreAST*  b_){
  void* temp= malloc( sizeof(CPrim2)  ); 
  CPrim2* rv = new (temp)CPrim2();
  rv->op =  op_;
  rv->a =  a_;
  rv->b =  b_;
  rv->type= coreAST::CPRIM2_type;
  return rv;
}
CNum* CNum::create(int  val_){
  void* temp= malloc( sizeof(CNum)  ); 
  CNum* rv = new (temp)CNum();
  rv->val =  val_;
  rv->type= coreAST::CNUM_type;
  return rv;
}
CVar* CVar::create(int  str_){
  void* temp= malloc( sizeof(CVar)  ); 
  CVar* rv = new (temp)CVar();
  rv->str =  str_;
  rv->type= coreAST::CVAR_type;
  return rv;
}
CBool* CBool::create(bool  val_){
  void* temp= malloc( sizeof(CBool)  ); 
  CBool* rv = new (temp)CBool();
  rv->val =  val_;
  rv->type= coreAST::CBOOL_type;
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
CPrim1* CPrim1::create(int  op_, coreAST*  a_){
  void* temp= malloc( sizeof(CPrim1)  ); 
  CPrim1* rv = new (temp)CPrim1();
  rv->op =  op_;
  rv->a =  a_;
  rv->type= coreAST::CPRIM1_type;
  return rv;
}
CAssign* CAssign::create(int  str_, coreAST*  a_){
  void* temp= malloc( sizeof(CAssign)  ); 
  CAssign* rv = new (temp)CAssign();
  rv->str =  str_;
  rv->a =  a_;
  rv->type= coreAST::CASSIGN_type;
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
void main0__Wrapper(int* arr/* len = 30 */, int sbnd) {
  void * _tt0[5] = {NULL, NULL, NULL, NULL, NULL};
  coreAST**  cmtStore__ANONYMOUS_s172= new coreAST* [5]; CopyArr<coreAST* >(cmtStore__ANONYMOUS_s172,_tt0, 5, 5);
  void * _tt1[5] = {NULL, NULL, NULL, NULL, NULL};
  sourceAST**  smtStore__ANONYMOUS_s173= new sourceAST* [5]; CopyArr<sourceAST* >(smtStore__ANONYMOUS_s173,_tt1, 5, 5);
  main0(arr, sbnd, cmtStore__ANONYMOUS_s172, smtStore__ANONYMOUS_s173);
  delete[] cmtStore__ANONYMOUS_s172;
  delete[] smtStore__ANONYMOUS_s173;
}
void main0__WrapperNospec(int* arr/* len = 30 */, int sbnd) {}
void main0(int* arr/* len = 30 */, int sbnd_0, coreAST** cmtStore__ANONYMOUS_s168/* len = 5 */, sourceAST** smtStore__ANONYMOUS_s169/* len = 5 */) {
  int  sbnd=sbnd_0;
  sourceAST*  s_s11=NULL;
  int  idx=0;
  int * _tt2= new int [50]; 
  CopyArr<int>(_tt2,arr, 50, 30);
  produce(_tt2, idx, 1, sbnd_0, s_s11);
  for (int  i=0;(i) < (5);i = i + 1){
    (smtStore__ANONYMOUS_s169[i]) = NULL;
  }
  sourceAST*  c1_s13=NULL;
  int  vv=0;
  interpretSourceAST(s_s11, vv, 1, c1_s13, smtStore__ANONYMOUS_s169);
  if ((c1_s13) != (NULL)) {
    coreAST*  c2_s15=NULL;
    desugar(s_s11, 2, c2_s15);
    for (int  i_0=0;(i_0) < (5);i_0 = i_0 + 1){
      (cmtStore__ANONYMOUS_s168[i_0]) = NULL;
    }
    int  i_1=1;
    while (((sbnd / 2)) >= (1)) {
      sbnd = sbnd / 2;
      i_1 = i_1 + 1;
    }
    coreAST*  c3_s17=NULL;
    int  v=0;
    interpretCoreAST(c2_s15, v, 3, i_1 + 1, c3_s17, cmtStore__ANONYMOUS_s168);
    assert ((c3_s17) != (NULL));;
    bool  _out_s19=0;
    equals(c1_s13, c3_s17, _out_s19);
    assert (_out_s19);;
  }
}
void produce(int* encoding/* len = 50 */, int& idx, int bnd, int sbnd, sourceAST*& _out) {
  if (((bnd) <= (0)) || (((sbnd / 2)) == (0))) {
    if (((encoding[idx])) == (0)) {
      idx = idx + 1;
      int  uo_s1=idx;
      idx = idx + 1;
      _out = SNum::create((encoding[uo_s1]));
      return;
    }
    if (((encoding[idx])) == (1)) {
      idx = idx + 1;
      int  uo_s2=idx;
      idx = idx + 1;
      _out = SVar::create((encoding[uo_s2]));
      return;
    }
    if (((encoding[idx])) == (2)) {
      idx = idx + 1;
      _out = STrue::create();
      return;
    } else {
      idx = idx + 1;
      _out = SFalse::create();
      return;
    }
  }
  if (((encoding[idx])) == (0)) {
    idx = idx + 1;
    int  uo_s3=idx;
    idx = idx + 1;
    _out = SNum::create((encoding[uo_s3]));
    return;
  } else {
    if (((encoding[idx])) == (1)) {
      idx = idx + 1;
      int  uo_s4=idx;
      idx = idx + 1;
      _out = SVar::create((encoding[uo_s4]));
      return;
    } else {
      if (((encoding[idx])) == (2)) {
        idx = idx + 1;
        _out = STrue::create();
        return;
      } else {
        if (((encoding[idx])) == (3)) {
          idx = idx + 1;
          _out = SFalse::create();
          return;
        } else {
          if (((encoding[idx])) == (4)) {
            idx = idx + 1;
            int  uo_s5=idx;
            idx = idx + 1;
            sourceAST*  _out_s133=NULL;
            produce(encoding, idx, bnd - 1, sbnd / 2, _out_s133);
            sourceAST*  _out_s135=NULL;
            produce(encoding, idx, bnd - 1, sbnd / 2, _out_s135);
            sourceAST*  _out_s137=NULL;
            sourceAST* _tt3[2] = {_out_s133, _out_s135};
            gOp(2, (encoding[uo_s5]), _tt3, _out_s137);
            _out = _out_s137;
            return;
          } else {
            if (((encoding[idx])) == (5)) {
              idx = idx + 1;
              sourceAST*  _out_s139=NULL;
              produce(encoding, idx, bnd - 1, sbnd / 2, _out_s139);
              sourceAST*  _out_s141=NULL;
              produce(encoding, idx, bnd - 1, sbnd / 2, _out_s141);
              sourceAST*  _out_s143=NULL;
              produce(encoding, idx, bnd - 1, sbnd / 2, _out_s143);
              sourceAST*  _out_s145=NULL;
              gBetween(_out_s139, _out_s141, _out_s143, _out_s145);
              _out = _out_s145;
              return;
            } else {
              if (((encoding[idx])) == (6)) {
                idx = idx + 1;
                int  uo_s6=idx;
                idx = idx + 1;
                sourceAST*  _out_s147=NULL;
                produce(encoding, idx, bnd - 1, sbnd / 2, _out_s147);
                _out = SAssign::create((encoding[uo_s6]), _out_s147);
                return;
              } else {
                if (((encoding[idx])) == (7)) {
                  idx = idx + 1;
                  int  uo_s7=idx;
                  idx = idx + 1;
                  sourceAST*  _out_s149=NULL;
                  produce(encoding, idx, bnd - 1, sbnd / 2, _out_s149);
                  sourceAST*  _out_s151=NULL;
                  produce(encoding, idx, bnd - 1, sbnd / 2, _out_s151);
                  _out = SLet::create((encoding[uo_s7]), _out_s149, _out_s151);
                  return;
                } else {
                  if (((encoding[idx])) == (8)) {
                    idx = idx + 1;
                    sourceAST*  _out_s153=NULL;
                    produce(encoding, idx, bnd - 1, sbnd / 2, _out_s153);
                    sourceAST*  _out_s155=NULL;
                    produce(encoding, idx, bnd - 1, sbnd / 2, _out_s155);
                    sourceAST*  _out_s157=NULL;
                    produce(encoding, idx, bnd - 1, sbnd / 2, _out_s157);
                    sourceAST*  _out_s159=NULL;
                    gIf(_out_s153, _out_s155, _out_s157, _out_s159);
                    _out = _out_s159;
                    return;
                  } else {
                    if (((encoding[idx])) == (9)) {
                      idx = idx + 1;
                      sourceAST*  _out_s161=NULL;
                      produce(encoding, idx, bnd - 1, sbnd / 2, _out_s161);
                      sourceAST*  _out_s163=NULL;
                      produce(encoding, idx, bnd - 1, sbnd / 2, _out_s163);
                      sourceAST*  _out_s165=NULL;
                      produce(encoding, idx, bnd - 1, sbnd / 2, _out_s165);
                      sourceAST*  _out_s167=NULL;
                      gBetween(_out_s161, _out_s163, _out_s165, _out_s167);
                      _out = _out_s167;
                      return;
                    } else {
                      _out = NULL;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
void interpretSourceAST(sourceAST* s, int& idx, int bnd, sourceAST*& _out, sourceAST** smtStore__ANONYMOUS_s170/* len = 5 */) {
  if ((s) == (NULL)) {
    _out = NULL;
    return;
  }
  if ((bnd) < (0)) {
    _out = NULL;
    return;
  }
  switch(s->type){
  case SVar::SVAR_type:
    {
    SVar*  _s = (SVar* )  s;

    if ((_s->str) >= (idx)) {
      _out = _s;
      return;
    }
    sourceAST*  val=(smtStore__ANONYMOUS_s170[_s->str]);
    if ((val) == (NULL)) {
      _out = _s;
      return;
    }
    switch(val->type){
    case SNum::SNUM_type:
        {
        SNum*  _val = (SNum* )  val;

      _out = _val;
      return;
    
        break;
    }
    case STrue::STRUE_type:
        {
        STrue*  _val = (STrue* )  val;

      _out = _val;
      return;
    
        break;
    }
    case SFalse::SFALSE_type:
        {
        SFalse*  _val = (SFalse* )  val;

      _out = _val;
      return;
    
        break;
    }
    case SVar::SVAR_type:
        {
        SVar*  _val = (SVar* )  val;

      _out = _val;
      return;
    
        break;
    }
    default:
        {
        
      _out = NULL;
      return;
    
        break;
    }

 }
  
    break;
  }
  case SAssign::SASSIGN_type:
    {
    SAssign*  _s = (SAssign* )  s;

    if ((bnd) < (1)) {
      _out = NULL;
      return;
    } else {
      sourceAST*  s_a_s87=NULL;
      interpretSourceAST(_s->a, idx, bnd - 1, s_a_s87, smtStore__ANONYMOUS_s170);
      if (((_s->str) < (0)) || ((_s->str) >= (5))) {
        _out = NULL;
        return;
      }
      if ((idx) <= (_s->str)) {
        idx = _s->str + 1;
      }
      (smtStore__ANONYMOUS_s170[_s->str]) = s_a_s87;
      _out = s_a_s87;
      return;
    }
  
    break;
  }
  case SPrim1::SPRIM1_type:
    {
    SPrim1*  _s = (SPrim1* )  s;

    if ((bnd) < (1)) {
      _out = NULL;
      return;
    } else {
      if ((_s->op) == (2)) {
        sourceAST*  s_a_s89=NULL;
        interpretSourceAST(_s->a, idx, bnd - 1, s_a_s89, smtStore__ANONYMOUS_s170);
        if ((s_a_s89) == (NULL)) {
          _out = NULL;
          return;
        }
        switch(s_a_s89->type){
        case SNum::SNUM_type:
                {
                SNum*  _s_a_s89 = (SNum* )  s_a_s89;

          _out = SNum::create(0 - _s_a_s89->val);
          return;
        
                break;
        }
        default:
                {
                
          _out = NULL;
          return;
        
                break;
        }

 }
      } else {
        if ((_s->op) == (5)) {
          sourceAST*  s_a_s91=NULL;
          interpretSourceAST(_s->a, idx, bnd - 1, s_a_s91, smtStore__ANONYMOUS_s170);
          if ((s_a_s91) == (NULL)) {
            _out = NULL;
            return;
          }
          switch(s_a_s91->type){
          case STrue::STRUE_type:
                    {
                    STrue*  _s_a_s91 = (STrue* )  s_a_s91;

            _out = SFalse::create();
            return;
          
                    break;
          }
          case SFalse::SFALSE_type:
                    {
                    SFalse*  _s_a_s91 = (SFalse* )  s_a_s91;

            _out = STrue::create();
            return;
          
                    break;
          }
          default:
                    {
                    
            _out = NULL;
            return;
          
                    break;
          }

 }
        } else {
          _out = NULL;
          return;
        }
      }
    }
  
    break;
  }
  case SPrim2::SPRIM2_type:
    {
    SPrim2*  _s = (SPrim2* )  s;

    if ((bnd) < (1)) {
      _out = NULL;
      return;
    } else {
      if ((_s->op) == (0)) {
        int  a=0;
        int  b=0;
        sourceAST*  s_a_s93=NULL;
        interpretSourceAST(_s->a, idx, bnd - 1, s_a_s93, smtStore__ANONYMOUS_s170);
        if ((s_a_s93) == (NULL)) {
          _out = NULL;
          return;
        }
        switch(s_a_s93->type){
        case SNum::SNUM_type:
                {
                SNum*  _s_a_s93 = (SNum* )  s_a_s93;

          a = _s_a_s93->val;
        
                break;
        }
        default:
                {
                
          _out = NULL;
          return;
        
                break;
        }

 }
        sourceAST*  s_b_s95=NULL;
        interpretSourceAST(_s->b, idx, bnd - 1, s_b_s95, smtStore__ANONYMOUS_s170);
        if ((s_b_s95) == (NULL)) {
          _out = NULL;
          return;
        }
        switch(s_b_s95->type){
        case SNum::SNUM_type:
                {
                SNum*  _s_b_s95 = (SNum* )  s_b_s95;

          b = _s_b_s95->val;
        
                break;
        }
        default:
                {
                
          _out = NULL;
          return;
        
                break;
        }

 }
        _out = SNum::create(a + b);
        return;
      } else {
        if ((_s->op) == (1)) {
          int  a_0=0;
          int  b_0=0;
          sourceAST*  s_a_s97=NULL;
          interpretSourceAST(_s->a, idx, bnd - 1, s_a_s97, smtStore__ANONYMOUS_s170);
          if ((s_a_s97) == (NULL)) {
            _out = NULL;
            return;
          }
          switch(s_a_s97->type){
          case SNum::SNUM_type:
                    {
                    SNum*  _s_a_s97 = (SNum* )  s_a_s97;

            a_0 = _s_a_s97->val;
          
                    break;
          }
          default:
                    {
                    
            _out = NULL;
            return;
          
                    break;
          }

 }
          sourceAST*  s_b_s99=NULL;
          interpretSourceAST(_s->b, idx, bnd - 1, s_b_s99, smtStore__ANONYMOUS_s170);
          if ((s_b_s99) == (NULL)) {
            _out = NULL;
            return;
          }
          switch(s_b_s99->type){
          case SNum::SNUM_type:
                    {
                    SNum*  _s_b_s99 = (SNum* )  s_b_s99;

            b_0 = _s_b_s99->val;
          
                    break;
          }
          default:
                    {
                    
            _out = NULL;
            return;
          
                    break;
          }

 }
          _out = SNum::create(a_0 - b_0);
          return;
        } else {
          if ((_s->op) == (3)) {
            bool  a_1=0;
            bool  b_1=0;
            sourceAST*  s_a_s101=NULL;
            interpretSourceAST(_s->a, idx, bnd - 1, s_a_s101, smtStore__ANONYMOUS_s170);
            if ((s_a_s101) == (NULL)) {
              _out = NULL;
              return;
            }
            switch(s_a_s101->type){
            case STrue::STRUE_type:
                        {
                        STrue*  _s_a_s101 = (STrue* )  s_a_s101;

              a_1 = 1;
            
                        break;
            }
            case SFalse::SFALSE_type:
                        {
                        SFalse*  _s_a_s101 = (SFalse* )  s_a_s101;

              a_1 = 0;
            
                        break;
            }
            default:
                        {
                        
              _out = NULL;
              return;
            
                        break;
            }

 }
            sourceAST*  s_b_s103=NULL;
            interpretSourceAST(_s->b, idx, bnd - 1, s_b_s103, smtStore__ANONYMOUS_s170);
            if ((s_b_s103) == (NULL)) {
              _out = NULL;
              return;
            }
            switch(s_b_s103->type){
            case STrue::STRUE_type:
                        {
                        STrue*  _s_b_s103 = (STrue* )  s_b_s103;

              b_1 = 1;
            
                        break;
            }
            case SFalse::SFALSE_type:
                        {
                        SFalse*  _s_b_s103 = (SFalse* )  s_b_s103;

              b_1 = 0;
            
                        break;
            }
            default:
                        {
                        
              _out = NULL;
              return;
            
                        break;
            }

 }
            if (a_1 && b_1) {
              _out = STrue::create();
              return;
            } else {
              _out = SFalse::create();
              return;
            }
          } else {
            if ((_s->op) == (4)) {
              bool  a_2=0;
              bool  b_2=0;
              sourceAST*  s_a_s105=NULL;
              interpretSourceAST(_s->a, idx, bnd - 1, s_a_s105, smtStore__ANONYMOUS_s170);
              if ((s_a_s105) == (NULL)) {
                _out = NULL;
                return;
              }
              switch(s_a_s105->type){
              case STrue::STRUE_type:
                            {
                            STrue*  _s_a_s105 = (STrue* )  s_a_s105;

                a_2 = 1;
              
                            break;
              }
              case SFalse::SFALSE_type:
                            {
                            SFalse*  _s_a_s105 = (SFalse* )  s_a_s105;

                a_2 = 0;
              
                            break;
              }
              default:
                            {
                            
                _out = NULL;
                return;
              
                            break;
              }

 }
              sourceAST*  s_b_s107=NULL;
              interpretSourceAST(_s->b, idx, bnd - 1, s_b_s107, smtStore__ANONYMOUS_s170);
              if ((s_b_s107) == (NULL)) {
                _out = NULL;
                return;
              }
              switch(s_b_s107->type){
              case STrue::STRUE_type:
                            {
                            STrue*  _s_b_s107 = (STrue* )  s_b_s107;

                b_2 = 1;
              
                            break;
              }
              case SFalse::SFALSE_type:
                            {
                            SFalse*  _s_b_s107 = (SFalse* )  s_b_s107;

                b_2 = 0;
              
                            break;
              }
              default:
                            {
                            
                _out = NULL;
                return;
              
                            break;
              }

 }
              if (a_2 || b_2) {
                _out = STrue::create();
                return;
              } else {
                _out = SFalse::create();
                return;
              }
            } else {
              if ((_s->op) == (6)) {
                int  a_3=0;
                int  b_3=0;
                sourceAST*  s_a_s109=NULL;
                interpretSourceAST(_s->a, idx, bnd - 1, s_a_s109, smtStore__ANONYMOUS_s170);
                if ((s_a_s109) == (NULL)) {
                  _out = NULL;
                  return;
                }
                switch(s_a_s109->type){
                case SNum::SNUM_type:
                                {
                                SNum*  _s_a_s109 = (SNum* )  s_a_s109;

                  a_3 = _s_a_s109->val;
                
                                break;
                }
                default:
                                {
                                
                  _out = NULL;
                  return;
                
                                break;
                }

 }
                sourceAST*  s_b_s111=NULL;
                interpretSourceAST(_s->b, idx, bnd - 1, s_b_s111, smtStore__ANONYMOUS_s170);
                if ((s_b_s111) == (NULL)) {
                  _out = NULL;
                  return;
                }
                switch(s_b_s111->type){
                case SNum::SNUM_type:
                                {
                                SNum*  _s_b_s111 = (SNum* )  s_b_s111;

                  b_3 = _s_b_s111->val;
                
                                break;
                }
                default:
                                {
                                
                  _out = NULL;
                  return;
                
                                break;
                }

 }
                if ((a_3) > (b_3)) {
                  _out = STrue::create();
                  return;
                } else {
                  _out = SFalse::create();
                  return;
                }
              } else {
                if ((_s->op) == (7)) {
                  int  a_4=0;
                  int  b_4=0;
                  sourceAST*  s_a_s113=NULL;
                  interpretSourceAST(_s->a, idx, bnd - 1, s_a_s113, smtStore__ANONYMOUS_s170);
                  if ((s_a_s113) == (NULL)) {
                    _out = NULL;
                    return;
                  }
                  switch(s_a_s113->type){
                  case SNum::SNUM_type:
                                    {
                                    SNum*  _s_a_s113 = (SNum* )  s_a_s113;

                    a_4 = _s_a_s113->val;
                  
                                    break;
                  }
                  default:
                                    {
                                    
                    _out = NULL;
                    return;
                  
                                    break;
                  }

 }
                  sourceAST*  s_b_s115=NULL;
                  interpretSourceAST(_s->b, idx, bnd - 1, s_b_s115, smtStore__ANONYMOUS_s170);
                  if ((s_b_s115) == (NULL)) {
                    _out = NULL;
                    return;
                  }
                  switch(s_b_s115->type){
                  case SNum::SNUM_type:
                                    {
                                    SNum*  _s_b_s115 = (SNum* )  s_b_s115;

                    b_4 = _s_b_s115->val;
                  
                                    break;
                  }
                  default:
                                    {
                                    
                    _out = NULL;
                    return;
                  
                                    break;
                  }

 }
                  if ((a_4) < (b_4)) {
                    _out = STrue::create();
                    return;
                  } else {
                    _out = SFalse::create();
                    return;
                  }
                } else {
                  _out = NULL;
                  return;
                }
              }
            }
          }
        }
      }
    }
  
    break;
  }
  case SBetween::SBETWEEN_type:
    {
    SBetween*  _s = (SBetween* )  s;

    if ((bnd) < (1)) {
      _out = NULL;
      return;
    } else {
      int  a_5=0;
      int  b_5=0;
      int  c=0;
      sourceAST*  s_a_s117=NULL;
      interpretSourceAST(_s->a, idx, bnd - 1, s_a_s117, smtStore__ANONYMOUS_s170);
      if ((s_a_s117) == (NULL)) {
        _out = NULL;
        return;
      }
      switch(s_a_s117->type){
      case SNum::SNUM_type:
            {
            SNum*  _s_a_s117 = (SNum* )  s_a_s117;

        a_5 = _s_a_s117->val;
      
            break;
      }
      default:
            {
            
        _out = NULL;
        return;
      
            break;
      }

 }
      sourceAST*  s_b_s119=NULL;
      interpretSourceAST(_s->b, idx, bnd - 1, s_b_s119, smtStore__ANONYMOUS_s170);
      if ((s_b_s119) == (NULL)) {
        _out = NULL;
        return;
      }
      switch(s_b_s119->type){
      case SNum::SNUM_type:
            {
            SNum*  _s_b_s119 = (SNum* )  s_b_s119;

        b_5 = _s_b_s119->val;
      
            break;
      }
      default:
            {
            
        _out = NULL;
        return;
      
            break;
      }

 }
      sourceAST*  s_c_s121=NULL;
      interpretSourceAST(_s->c, idx, bnd - 1, s_c_s121, smtStore__ANONYMOUS_s170);
      if ((s_c_s121) == (NULL)) {
        _out = NULL;
        return;
      }
      switch(s_c_s121->type){
      case SNum::SNUM_type:
            {
            SNum*  _s_c_s121 = (SNum* )  s_c_s121;

        c = _s_c_s121->val;
      
            break;
      }
      default:
            {
            
        _out = NULL;
        return;
      
            break;
      }

 }
      if (((a_5) < (b_5)) && ((b_5) < (c))) {
        _out = STrue::create();
        return;
      } else {
        _out = SFalse::create();
        return;
      }
    }
  
    break;
  }
  case SIf::SIF_type:
    {
    SIf*  _s = (SIf* )  s;

    if ((bnd) < (1)) {
      _out = NULL;
      return;
    } else {
      sourceAST*  c_s123=NULL;
      interpretSourceAST(_s->a, idx, bnd - 1, c_s123, smtStore__ANONYMOUS_s170);
      if ((c_s123) == (NULL)) {
        _out = NULL;
        return;
      }
      switch(c_s123->type){
      case STrue::STRUE_type:
            {
            STrue*  _c_s123 = (STrue* )  c_s123;

        sourceAST*  _out_s125=NULL;
        interpretSourceAST(_s->b, idx, bnd - 1, _out_s125, smtStore__ANONYMOUS_s170);
        _out = _out_s125;
        return;
      
            break;
      }
      case SFalse::SFALSE_type:
            {
            SFalse*  _c_s123 = (SFalse* )  c_s123;

        sourceAST*  _out_s127=NULL;
        interpretSourceAST(_s->c, idx, bnd - 1, _out_s127, smtStore__ANONYMOUS_s170);
        _out = _out_s127;
        return;
      
            break;
      }
      default:
            {
            
        _out = NULL;
        return;
      
            break;
      }

 }
    }
  
    break;
  }
  case SLet::SLET_type:
    {
    SLet*  _s = (SLet* )  s;

    if ((bnd) < (1)) {
      _out = NULL;
      return;
    } else {
      sourceAST*  s_a_s129=NULL;
      interpretSourceAST(_s->a, idx, bnd - 1, s_a_s129, smtStore__ANONYMOUS_s170);
      if (((_s->str) < (0)) || ((_s->str) >= (5))) {
        _out = NULL;
        return;
      }
      if ((idx) <= (_s->str)) {
        idx = _s->str + 1;
      }
      (smtStore__ANONYMOUS_s170[_s->str]) = s_a_s129;
      sourceAST*  _out_s131=NULL;
      interpretSourceAST(_s->b, idx, bnd - 1, _out_s131, smtStore__ANONYMOUS_s170);
      _out = _out_s131;
      return;
    }
  
    break;
  }
  default:
    {
    
    _out = s;
    return;
  
    break;
  }

 }
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
  case SVar::SVAR_type:
    {
    SVar*  _s = (SVar* )  s;

    _out = CVar::create(_s->str);
    return;
  
    break;
  }
  case SAssign::SASSIGN_type:
    {
    SAssign*  _s = (SAssign* )  s;

    coreAST*  _out_s63=NULL;
    desugar(_s->a, bnd2 - 1, _out_s63);
    _out = CAssign::create(_s->str, _out_s63);
    return;
  
    break;
  }
  case SLet::SLET_type:
    {
    SLet*  _s = (SLet* )  s;

    coreAST*  _out_s65=NULL;
    desugar(_s->a, bnd2 - 1, _out_s65);
    coreAST*  _out_s67=NULL;
    desugar(_s->b, bnd2 - 1, _out_s67);
    _out = CLet::create(_s->str, _out_s65, _out_s67);
    return;
  
    break;
  }
  case SPrim1::SPRIM1_type:
    {
    SPrim1*  _s = (SPrim1* )  s;

    coreAST*  _out_s69=NULL;
    desugar(_s->a, bnd2 - 1, _out_s69);
    _out = CPrim1::create(_s->op, _out_s69);
    return;
  
    break;
  }
  case SPrim2::SPRIM2_type:
    {
    SPrim2*  _s = (SPrim2* )  s;

    coreAST*  _out_s71=NULL;
    desugar(_s->a, bnd2 - 1, _out_s71);
    coreAST*  _out_s73=NULL;
    desugar(_s->b, bnd2 - 1, _out_s73);
    _out = CPrim2::create(_s->op, _out_s71, _out_s73);
    return;
  
    break;
  }
  case SBetween::SBETWEEN_type:
    {
    SBetween*  _s = (SBetween* )  s;

    coreAST*  c_s75=NULL;
    desugar(_s->b, bnd2 - 1, c_s75);
    coreAST*  _out_s77=NULL;
    desugar(_s->a, bnd2 - 1, _out_s77);
    coreAST*  _out_s79=NULL;
    desugar(_s->c, bnd2 - 1, _out_s79);
    _out = CPrim2::create(3, CPrim2::create(7, _out_s77, c_s75), CPrim2::create(7, c_s75, _out_s79));
    return;
  
    break;
  }
  case SIf::SIF_type:
    {
    SIf*  _s = (SIf* )  s;

    coreAST*  _out_s81=NULL;
    desugar(_s->a, bnd2 - 1, _out_s81);
    coreAST*  _out_s83=NULL;
    desugar(_s->b, bnd2 - 1, _out_s83);
    coreAST*  _out_s85=NULL;
    desugar(_s->c, bnd2 - 1, _out_s85);
    _out = CIf::create(_out_s81, _out_s83, _out_s85);
    return;
  
    break;
  }

 }
}
void interpretCoreAST(coreAST* s, int& idx, int bnd, int bnd2, coreAST*& _out, coreAST** cmtStore__ANONYMOUS_s171/* len = 5 */) {
  assert ((bnd) >= (0));;
  if ((s) == (NULL)) {
    _out = NULL;
    return;
  }
  if (((bnd) < (0)) || ((bnd2) < (0))) {
    _out = NULL;
    return;
  }
  switch(s->type){
  case CVar::CVAR_type:
    {
    CVar*  _s = (CVar* )  s;

    if ((_s->str) >= (idx)) {
      _out = _s;
      return;
    }
    coreAST*  val=(cmtStore__ANONYMOUS_s171[_s->str]);
    if ((val) == (NULL)) {
      _out = _s;
      return;
    }
    switch(val->type){
    case CNum::CNUM_type:
        {
        CNum*  _val = (CNum* )  val;

      _out = _val;
      return;
    
        break;
    }
    case CBool::CBOOL_type:
        {
        CBool*  _val = (CBool* )  val;

      _out = _val;
      return;
    
        break;
    }
    case CVar::CVAR_type:
        {
        CVar*  _val = (CVar* )  val;

      _out = _val;
      return;
    
        break;
    }
    default:
        {
        
      _out = NULL;
      return;
    
        break;
    }

 }
  
    break;
  }
  case CAssign::CASSIGN_type:
    {
    CAssign*  _s = (CAssign* )  s;

    if (((bnd) < (1)) || ((bnd2) < (1))) {
      _out = NULL;
      return;
    } else {
      coreAST*  s_a_s21=NULL;
      interpretCoreAST(_s->a, idx, bnd - 1, bnd2 - 1, s_a_s21, cmtStore__ANONYMOUS_s171);
      if (((_s->str) < (0)) || ((_s->str) >= (5))) {
        _out = NULL;
        return;
      }
      if ((idx) <= (_s->str)) {
        idx = _s->str + 1;
      }
      (cmtStore__ANONYMOUS_s171[_s->str]) = s_a_s21;
      _out = s_a_s21;
      return;
    }
  
    break;
  }
  case CPrim1::CPRIM1_type:
    {
    CPrim1*  _s = (CPrim1* )  s;

    if (((bnd) < (1)) || ((bnd2) < (1))) {
      _out = NULL;
      return;
    } else {
      if ((_s->op) == (2)) {
        coreAST*  s_a_s23=NULL;
        interpretCoreAST(_s->a, idx, bnd - 1, bnd2 - 1, s_a_s23, cmtStore__ANONYMOUS_s171);
        if ((s_a_s23) == (NULL)) {
          _out = NULL;
          return;
        }
        switch(s_a_s23->type){
        case CNum::CNUM_type:
                {
                CNum*  _s_a_s23 = (CNum* )  s_a_s23;

          _out = CNum::create(0 - _s_a_s23->val);
          return;
        
                break;
        }
        default:
                {
                
          _out = NULL;
          return;
        
                break;
        }

 }
      } else {
        if ((_s->op) == (5)) {
          coreAST*  s_a_s25=NULL;
          interpretCoreAST(_s->a, idx, bnd - 1, bnd2 - 1, s_a_s25, cmtStore__ANONYMOUS_s171);
          if ((s_a_s25) == (NULL)) {
            _out = NULL;
            return;
          }
          switch(s_a_s25->type){
          case CBool::CBOOL_type:
                    {
                    CBool*  _s_a_s25 = (CBool* )  s_a_s25;

            _out = CBool::create(!(_s_a_s25->val));
            return;
          
                    break;
          }
          default:
                    {
                    
            _out = NULL;
            return;
          
                    break;
          }

 }
        } else {
          _out = NULL;
          return;
        }
      }
    }
  
    break;
  }
  case CPrim2::CPRIM2_type:
    {
    CPrim2*  _s = (CPrim2* )  s;

    if (((bnd) < (1)) || ((bnd2) < (1))) {
      _out = NULL;
      return;
    } else {
      if ((_s->op) == (0)) {
        int  a=0;
        int  b=0;
        coreAST*  s_a_s27=NULL;
        interpretCoreAST(_s->a, idx, bnd - 1, bnd2 - 1, s_a_s27, cmtStore__ANONYMOUS_s171);
        if ((s_a_s27) == (NULL)) {
          _out = NULL;
          return;
        }
        switch(s_a_s27->type){
        case CNum::CNUM_type:
                {
                CNum*  _s_a_s27 = (CNum* )  s_a_s27;

          a = _s_a_s27->val;
        
                break;
        }
        default:
                {
                
          _out = NULL;
          return;
        
                break;
        }

 }
        coreAST*  s_b_s29=NULL;
        interpretCoreAST(_s->b, idx, bnd - 1, bnd2 - 1, s_b_s29, cmtStore__ANONYMOUS_s171);
        if ((s_b_s29) == (NULL)) {
          _out = NULL;
          return;
        }
        switch(s_b_s29->type){
        case CNum::CNUM_type:
                {
                CNum*  _s_b_s29 = (CNum* )  s_b_s29;

          b = _s_b_s29->val;
        
                break;
        }
        default:
                {
                
          _out = NULL;
          return;
        
                break;
        }

 }
        _out = CNum::create(a + b);
        return;
      } else {
        if ((_s->op) == (1)) {
          int  a_0=0;
          int  b_0=0;
          coreAST*  s_a_s31=NULL;
          interpretCoreAST(_s->a, idx, bnd - 1, bnd2 - 1, s_a_s31, cmtStore__ANONYMOUS_s171);
          if ((s_a_s31) == (NULL)) {
            _out = NULL;
            return;
          }
          switch(s_a_s31->type){
          case CNum::CNUM_type:
                    {
                    CNum*  _s_a_s31 = (CNum* )  s_a_s31;

            a_0 = _s_a_s31->val;
          
                    break;
          }
          default:
                    {
                    
            _out = NULL;
            return;
          
                    break;
          }

 }
          coreAST*  s_b_s33=NULL;
          interpretCoreAST(_s->b, idx, bnd - 1, bnd2 - 1, s_b_s33, cmtStore__ANONYMOUS_s171);
          if ((s_b_s33) == (NULL)) {
            _out = NULL;
            return;
          }
          switch(s_b_s33->type){
          case CNum::CNUM_type:
                    {
                    CNum*  _s_b_s33 = (CNum* )  s_b_s33;

            b_0 = _s_b_s33->val;
          
                    break;
          }
          default:
                    {
                    
            _out = NULL;
            return;
          
                    break;
          }

 }
          _out = CNum::create(a_0 - b_0);
          return;
        } else {
          if ((_s->op) == (3)) {
            bool  a_1=0;
            bool  b_1=0;
            coreAST*  s_a_s35=NULL;
            interpretCoreAST(_s->a, idx, bnd - 1, bnd2 - 1, s_a_s35, cmtStore__ANONYMOUS_s171);
            if ((s_a_s35) == (NULL)) {
              _out = NULL;
              return;
            }
            switch(s_a_s35->type){
            case CBool::CBOOL_type:
                        {
                        CBool*  _s_a_s35 = (CBool* )  s_a_s35;

              a_1 = _s_a_s35->val;
            
                        break;
            }
            default:
                        {
                        
              _out = NULL;
              return;
            
                        break;
            }

 }
            coreAST*  s_b_s37=NULL;
            interpretCoreAST(_s->b, idx, bnd - 1, bnd2 - 1, s_b_s37, cmtStore__ANONYMOUS_s171);
            if ((s_b_s37) == (NULL)) {
              _out = NULL;
              return;
            }
            switch(s_b_s37->type){
            case CBool::CBOOL_type:
                        {
                        CBool*  _s_b_s37 = (CBool* )  s_b_s37;

              b_1 = _s_b_s37->val;
            
                        break;
            }
            default:
                        {
                        
              _out = NULL;
              return;
            
                        break;
            }

 }
            _out = CBool::create(a_1 && b_1);
            return;
          } else {
            if ((_s->op) == (4)) {
              bool  a_2=0;
              bool  b_2=0;
              coreAST*  s_a_s39=NULL;
              interpretCoreAST(_s->a, idx, bnd - 1, bnd2 - 1, s_a_s39, cmtStore__ANONYMOUS_s171);
              if ((s_a_s39) == (NULL)) {
                _out = NULL;
                return;
              }
              switch(s_a_s39->type){
              case CBool::CBOOL_type:
                            {
                            CBool*  _s_a_s39 = (CBool* )  s_a_s39;

                a_2 = _s_a_s39->val;
              
                            break;
              }
              default:
                            {
                            
                _out = NULL;
                return;
              
                            break;
              }

 }
              coreAST*  s_b_s41=NULL;
              interpretCoreAST(_s->b, idx, bnd - 1, bnd2 - 1, s_b_s41, cmtStore__ANONYMOUS_s171);
              if ((s_b_s41) == (NULL)) {
                _out = NULL;
                return;
              }
              switch(s_b_s41->type){
              case CBool::CBOOL_type:
                            {
                            CBool*  _s_b_s41 = (CBool* )  s_b_s41;

                b_2 = _s_b_s41->val;
              
                            break;
              }
              default:
                            {
                            
                _out = NULL;
                return;
              
                            break;
              }

 }
              _out = CBool::create(a_2 || b_2);
              return;
            } else {
              if ((_s->op) == (6)) {
                int  a_3=0;
                int  b_3=0;
                coreAST*  s_a_s43=NULL;
                interpretCoreAST(_s->a, idx, bnd - 1, bnd2 - 1, s_a_s43, cmtStore__ANONYMOUS_s171);
                if ((s_a_s43) == (NULL)) {
                  _out = NULL;
                  return;
                }
                switch(s_a_s43->type){
                case CNum::CNUM_type:
                                {
                                CNum*  _s_a_s43 = (CNum* )  s_a_s43;

                  a_3 = _s_a_s43->val;
                
                                break;
                }
                default:
                                {
                                
                  _out = NULL;
                  return;
                
                                break;
                }

 }
                coreAST*  s_b_s45=NULL;
                interpretCoreAST(_s->b, idx, bnd - 1, bnd2 - 1, s_b_s45, cmtStore__ANONYMOUS_s171);
                if ((s_b_s45) == (NULL)) {
                  _out = NULL;
                  return;
                }
                switch(s_b_s45->type){
                case CNum::CNUM_type:
                                {
                                CNum*  _s_b_s45 = (CNum* )  s_b_s45;

                  b_3 = _s_b_s45->val;
                
                                break;
                }
                default:
                                {
                                
                  _out = NULL;
                  return;
                
                                break;
                }

 }
                _out = CBool::create((a_3) > (b_3));
                return;
              } else {
                if ((_s->op) == (7)) {
                  int  a_4=0;
                  int  b_4=0;
                  coreAST*  s_a_s47=NULL;
                  interpretCoreAST(_s->a, idx, bnd - 1, bnd2 - 1, s_a_s47, cmtStore__ANONYMOUS_s171);
                  if ((s_a_s47) == (NULL)) {
                    _out = NULL;
                    return;
                  }
                  switch(s_a_s47->type){
                  case CNum::CNUM_type:
                                    {
                                    CNum*  _s_a_s47 = (CNum* )  s_a_s47;

                    a_4 = _s_a_s47->val;
                  
                                    break;
                  }
                  default:
                                    {
                                    
                    _out = NULL;
                    return;
                  
                                    break;
                  }

 }
                  coreAST*  s_b_s49=NULL;
                  interpretCoreAST(_s->b, idx, bnd - 1, bnd2 - 1, s_b_s49, cmtStore__ANONYMOUS_s171);
                  if ((s_b_s49) == (NULL)) {
                    _out = NULL;
                    return;
                  }
                  switch(s_b_s49->type){
                  case CNum::CNUM_type:
                                    {
                                    CNum*  _s_b_s49 = (CNum* )  s_b_s49;

                    b_4 = _s_b_s49->val;
                  
                                    break;
                  }
                  default:
                                    {
                                    
                    _out = NULL;
                    return;
                  
                                    break;
                  }

 }
                  _out = CBool::create((a_4) < (b_4));
                  return;
                } else {
                  _out = NULL;
                  return;
                }
              }
            }
          }
        }
      }
    }
  
    break;
  }
  case CLet::CLET_type:
    {
    CLet*  _s = (CLet* )  s;

    if (((bnd) < (1)) || ((bnd2) < (1))) {
      _out = NULL;
      return;
    } else {
      coreAST*  s_a_s51=NULL;
      interpretCoreAST(_s->a, idx, bnd - 1, bnd2 - 1, s_a_s51, cmtStore__ANONYMOUS_s171);
      if (((_s->str) < (0)) || ((_s->str) >= (5))) {
        _out = NULL;
        return;
      }
      if ((idx) <= (_s->str)) {
        idx = _s->str + 1;
      }
      (cmtStore__ANONYMOUS_s171[_s->str]) = s_a_s51;
      coreAST*  _out_s53=NULL;
      interpretCoreAST(_s->b, idx, bnd - 1, bnd2 - 1, _out_s53, cmtStore__ANONYMOUS_s171);
      _out = _out_s53;
      return;
    }
  
    break;
  }
  case CIf::CIF_type:
    {
    CIf*  _s = (CIf* )  s;

    if (((bnd) < (1)) || ((bnd2) < (1))) {
      _out = NULL;
      return;
    } else {
      coreAST*  c_s55=NULL;
      interpretCoreAST(_s->a, idx, bnd - 1, bnd2 - 1, c_s55, cmtStore__ANONYMOUS_s171);
      if ((c_s55) == (NULL)) {
        _out = NULL;
        return;
      }
      switch(c_s55->type){
      case CBool::CBOOL_type:
            {
            CBool*  _c_s55 = (CBool* )  c_s55;

        if ((_c_s55->val) == (1)) {
          coreAST*  _out_s57=NULL;
          interpretCoreAST(_s->b, idx, bnd - 1, bnd2 - 1, _out_s57, cmtStore__ANONYMOUS_s171);
          _out = _out_s57;
          return;
        } else {
          coreAST*  _out_s59=NULL;
          interpretCoreAST(_s->c, idx, bnd - 1, bnd2 - 1, _out_s59, cmtStore__ANONYMOUS_s171);
          _out = _out_s59;
          return;
        }
      
            break;
      }
      default:
            {
            
        _out = NULL;
        return;
      
            break;
      }

 }
    }
  
    break;
  }
  default:
    {
    
    _out = s;
    return;
  
    break;
  }

 }
}
void equals(sourceAST* c1, coreAST* c2, bool& _out) {
  if ((c1) == (NULL)) {
    _out = 1;
    return;
  }
  if ((c2) == (NULL)) {
    _out = 0;
    return;
  }
  switch(c1->type){
  case SNum::SNUM_type:
    {
    SNum*  _c1 = (SNum* )  c1;

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
  case STrue::STRUE_type:
    {
    STrue*  _c1 = (STrue* )  c1;

    switch(c2->type){
    case CBool::CBOOL_type:
        {
        CBool*  _c2 = (CBool* )  c2;

      _out = (_c2->val) == (1);
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
  case SFalse::SFALSE_type:
    {
    SFalse*  _c1 = (SFalse* )  c1;

    switch(c2->type){
    case CBool::CBOOL_type:
        {
        CBool*  _c2 = (CBool* )  c2;

      _out = (_c2->val) == (0);
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
  case SVar::SVAR_type:
    {
    SVar*  _c1 = (SVar* )  c1;

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
  default:
    {
    
    _out = 1;
    return;
  
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
void gBetween(sourceAST* a, sourceAST* b, sourceAST* c, sourceAST*& _out) {
  _out = SBetween::create(a, b, c);
  return;
}
void gIf(sourceAST* cond, sourceAST* th, sourceAST* el, sourceAST*& _out) {
  _out = SIf::create(cond, th, el);
  return;
}

}
