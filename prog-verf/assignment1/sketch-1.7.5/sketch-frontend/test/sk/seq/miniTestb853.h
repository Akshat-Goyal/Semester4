#ifndef MINITESTB853_H
#define MINITESTB853_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class ASTNode; 
class Expression; 
class Plus; 
class Times; 
class Num; 
class Var; 
class Statement; 
class Assign; 
class IfStmt; 
class WhileStmt; 
}
namespace ANONYMOUS{
class ASTNode; 
class Expression; 
class Plus; 
class Times; 
class Num; 
class Var; 
class Statement; 
class Assign; 
class IfStmt; 
class WhileStmt; 
class ASTNode{
  public:
  typedef enum {EXPRESSION_type, STATEMENT_type, PLUS_type, TIMES_type, NUM_type, VAR_type, ASSIGN_type, IFSTMT_type, WHILESTMT_type} _kind;
  _kind type;
  ~ASTNode(){
  }
  void operator delete(void* p){ free(p); }
};
class Expression : public ASTNode{
  public:
  ~Expression(){
  }
  void operator delete(void* p){ free(p); }
};
class Plus : public Expression{
  public:
  Expression*  left;
  Expression*  right;
  Plus(){}
  static Plus* create(  Expression*  left_,   Expression*  right_);
  ~Plus(){
  }
  void operator delete(void* p){ free(p); }
};
class Times : public Expression{
  public:
  Expression*  left;
  Expression*  right;
  Times(){}
  static Times* create(  Expression*  left_,   Expression*  right_);
  ~Times(){
  }
  void operator delete(void* p){ free(p); }
};
class Num : public Expression{
  public:
  int  n;
  Num(){}
  static Num* create(  int  n_);
  ~Num(){
  }
  void operator delete(void* p){ free(p); }
};
class Var : public Expression{
  public:
  int  id;
  Var(){}
  static Var* create(  int  id_);
  ~Var(){
  }
  void operator delete(void* p){ free(p); }
};
class Statement : public ASTNode{
  public:
  ~Statement(){
  }
  void operator delete(void* p){ free(p); }
};
class Assign : public Statement{
  public:
  int  lhs;
  Expression*  rhs;
  Assign(){}
  static Assign* create(  int  lhs_,   Expression*  rhs_);
  ~Assign(){
  }
  void operator delete(void* p){ free(p); }
};
class IfStmt : public Statement{
  public:
  Expression*  cond;
  Statement*  tpart;
  Statement*  epart;
  IfStmt(){}
  static IfStmt* create(  Expression*  cond_,   Statement*  tpart_,   Statement*  epart_);
  ~IfStmt(){
  }
  void operator delete(void* p){ free(p); }
};
class WhileStmt : public Statement{
  public:
  Expression*  cond;
  Statement*  body;
  WhileStmt(){}
  static WhileStmt* create(  Expression*  cond_,   Statement*  body_);
  ~WhileStmt(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void calc(int n, Expression* e, int* state/* len = n */, int& _out);
}

#endif
