#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb598_adt.h"
namespace ANONYMOUS{

Plus* Plus::create(Expression*  left_, Expression*  right_, int  type_){
  void* temp= malloc( sizeof(Plus)  ); 
  Plus* rv = new (temp)Plus();
  rv->left =  left_;
  rv->right =  right_;
  rv->type =  type_;
  rv->_type= ASTNode::PLUS_type;
  return rv;
}
Times* Times::create(Expression*  left_, Expression*  right_, int  type_){
  void* temp= malloc( sizeof(Times)  ); 
  Times* rv = new (temp)Times();
  rv->left =  left_;
  rv->right =  right_;
  rv->type =  type_;
  rv->_type= ASTNode::TIMES_type;
  return rv;
}
IfStmt* IfStmt::create(Expression*  cond_, Statement*  tpart_, Statement*  epart_, int  type_){
  void* temp= malloc( sizeof(IfStmt)  ); 
  IfStmt* rv = new (temp)IfStmt();
  rv->cond =  cond_;
  rv->tpart =  tpart_;
  rv->epart =  epart_;
  rv->type =  type_;
  rv->_type= ASTNode::IFSTMT_type;
  return rv;
}
WhileStmt* WhileStmt::create(Expression*  cond_, Statement*  body_, int  type_){
  void* temp= malloc( sizeof(WhileStmt)  ); 
  WhileStmt* rv = new (temp)WhileStmt();
  rv->cond =  cond_;
  rv->body =  body_;
  rv->type =  type_;
  rv->_type= ASTNode::WHILESTMT_type;
  return rv;
}

}
