#ifndef MINITESTB598_ADT_H
#define MINITESTB598_ADT_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class ASTNode; 
class Expression; 
class Statement; 
class Plus; 
class Times; 
class IfStmt; 
class WhileStmt; 
}
namespace ANONYMOUS{
class ASTNode; 
class Expression; 
class Statement; 
class Plus; 
class Times; 
class IfStmt; 
class WhileStmt; 
class ASTNode{
  public:
  typedef enum {EXPRESSION_type, STATEMENT_type, PLUS_type, TIMES_type, IFSTMT_type, WHILESTMT_type} _kind;
  _kind _type;
  int  type;
  ASTNode(){}
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
class Statement : public ASTNode{
  public:
  ~Statement(){
  }
  void operator delete(void* p){ free(p); }
};
class Plus : public Expression{
  public:
  Expression*  left;
  Expression*  right;
  Plus(){}
  static Plus* create(  Expression*  left_,   Expression*  right_,   int  type_);
  ~Plus(){
  }
  void operator delete(void* p){ free(p); }
};
class Times : public Expression{
  public:
  Expression*  left;
  Expression*  right;
  Times(){}
  static Times* create(  Expression*  left_,   Expression*  right_,   int  type_);
  ~Times(){
  }
  void operator delete(void* p){ free(p); }
};
class IfStmt : public Statement{
  public:
  Expression*  cond;
  Statement*  tpart;
  Statement*  epart;
  IfStmt(){}
  static IfStmt* create(  Expression*  cond_,   Statement*  tpart_,   Statement*  epart_,   int  type_);
  ~IfStmt(){
  }
  void operator delete(void* p){ free(p); }
};
class WhileStmt : public Statement{
  public:
  Expression*  cond;
  Statement*  body;
  WhileStmt(){}
  static WhileStmt* create(  Expression*  cond_,   Statement*  body_,   int  type_);
  ~WhileStmt(){
  }
  void operator delete(void* p){ free(p); }
};
}

#endif
