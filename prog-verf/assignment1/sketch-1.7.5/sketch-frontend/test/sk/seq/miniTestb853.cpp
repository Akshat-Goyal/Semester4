#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb853.h"
namespace ANONYMOUS{

Plus* Plus::create(Expression*  left_, Expression*  right_){
  void* temp= malloc( sizeof(Plus)  ); 
  Plus* rv = new (temp)Plus();
  rv->left =  left_;
  rv->right =  right_;
  rv->type= ASTNode::PLUS_type;
  return rv;
}
Times* Times::create(Expression*  left_, Expression*  right_){
  void* temp= malloc( sizeof(Times)  ); 
  Times* rv = new (temp)Times();
  rv->left =  left_;
  rv->right =  right_;
  rv->type= ASTNode::TIMES_type;
  return rv;
}
Num* Num::create(int  n_){
  void* temp= malloc( sizeof(Num)  ); 
  Num* rv = new (temp)Num();
  rv->n =  n_;
  rv->type= ASTNode::NUM_type;
  return rv;
}
Var* Var::create(int  id_){
  void* temp= malloc( sizeof(Var)  ); 
  Var* rv = new (temp)Var();
  rv->id =  id_;
  rv->type= ASTNode::VAR_type;
  return rv;
}
Assign* Assign::create(int  lhs_, Expression*  rhs_){
  void* temp= malloc( sizeof(Assign)  ); 
  Assign* rv = new (temp)Assign();
  rv->lhs =  lhs_;
  rv->rhs =  rhs_;
  rv->type= ASTNode::ASSIGN_type;
  return rv;
}
IfStmt* IfStmt::create(Expression*  cond_, Statement*  tpart_, Statement*  epart_){
  void* temp= malloc( sizeof(IfStmt)  ); 
  IfStmt* rv = new (temp)IfStmt();
  rv->cond =  cond_;
  rv->tpart =  tpart_;
  rv->epart =  epart_;
  rv->type= ASTNode::IFSTMT_type;
  return rv;
}
WhileStmt* WhileStmt::create(Expression*  cond_, Statement*  body_){
  void* temp= malloc( sizeof(WhileStmt)  ); 
  WhileStmt* rv = new (temp)WhileStmt();
  rv->cond =  cond_;
  rv->body =  body_;
  rv->type= ASTNode::WHILESTMT_type;
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  _out_s1=0;
  int * _tt0= new int [0]; 
  CopyArr<int>(_tt0,NULL, 0, 0);
  calc(0, Num::create(5), _tt0, _out_s1);
  assert ((_out_s1) == (5));;
  delete[] _tt0;
}
void calc(int n, Expression* e, int* state/* len = n */, int& _out) {
  switch(e->type){
  case Plus::PLUS_type:
    {
    Plus*  _e = (Plus* )  e;

    int  _out_s3=0;
    calc(n, _e->left, state, _out_s3);
    int  _out_s5=0;
    calc(n, _e->right, state, _out_s5);
    _out = _out_s3 + _out_s5;
    return;
  
    break;
  }
  case Times::TIMES_type:
    {
    Times*  _e = (Times* )  e;

    int  _out_s7=0;
    calc(n, _e->left, state, _out_s7);
    int  _out_s9=0;
    calc(n, _e->right, state, _out_s9);
    _out = _out_s7 * _out_s9;
    return;
  
    break;
  }
  case Num::NUM_type:
    {
    Num*  _e = (Num* )  e;

    _out = _e->n;
    return;
  
    break;
  }
  case Var::VAR_type:
    {
    Var*  _e = (Var* )  e;

    _out = (state[_e->id]);
    return;
  
    break;
  }

 }
}

}
