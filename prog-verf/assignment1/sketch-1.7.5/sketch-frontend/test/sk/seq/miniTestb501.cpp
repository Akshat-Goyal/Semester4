#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb501.h"
namespace ANONYMOUS{

Node* Node::create(int  type_, Node*  m_, Node*  f_){
  void* temp= malloc( sizeof(Node)  ); 
  Node* rv = new (temp)Node();
  rv->type =  type_;
  rv->m =  m_;
  rv->f =  f_;
  return rv;
}
void main2__Wrapper() {
  main2();
}
void main2__WrapperNospec() {}
void main2() {
  char _tt0[8] = {'4', '+', '(', '3', '+', '2', ')', '\0'};
  char*  x= new char [8]; CopyArr<char >(x,_tt0, 8, 8);
  Node*  n_s1=NULL;
  int  op=0;
  parse(8, x, 0, op, 3, n_s1);
  assert ((n_s1->type) == (0));;
  assert ((n_s1->m->type) == (1));;
  assert ((n_s1->f->type) == (0));;
  assert ((n_s1->f->m->type) == (1));;
  assert ((n_s1->f->f->type) == (1));;
  delete[] x;
}
void parse(int n, char* x/* len = n */, int inpos_0, int& outpos, int rbnd, Node*& _out) {
  int  inpos=inpos_0;
  Node*  left=NULL;
  if ((((x[inpos_0])) == ('(')) && ((rbnd) > (0))) {
    Node*  left_s3=NULL;
    parse(n, x, inpos_0 + 1, outpos, rbnd - 1, left_s3);
    left = left_s3;
  } else {
    if ((((x[inpos_0])) <= ('A')) && (((x[inpos_0])) >= (')'))) {
      outpos = inpos_0;
      left = Node::create(1, NULL, NULL);
    }
  }
  inpos = outpos + 1;
  if ((((x[inpos])) == ('+')) && ((rbnd) > (0))) {
    Node*  right_s5=NULL;
    parse(n, x, inpos + 1, outpos, rbnd - 1, right_s5);
    _out = Node::create(0, left, right_s5);
    return;
  } else {
    _out = left;
    return;
  }
}

}
