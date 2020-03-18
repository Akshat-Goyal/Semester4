#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb662.h"
namespace ANONYMOUS{

Queue* Queue::create(Node*  head_, Node*  tail_){
  void* temp= malloc( sizeof(Queue)  ); 
  Queue* rv = new (temp)Queue();
  rv->head =  head_;
  rv->tail =  tail_;
  return rv;
}
Node* Node::create(int  val_, Node*  next_){
  void* temp= malloc( sizeof(Node)  ); 
  Node* rv = new (temp)Node();
  rv->val =  val_;
  rv->next =  next_;
  return rv;
}
void test(bool x, bool& _out) {
  Node*  a=Node::create(0, NULL);
  Queue*  q=Queue::create(a, a);
  Node*  _out_s7=NULL;
  bool  _out_s9=0;
  equals_Node_s0(q->head->next, _out_s7, 6, _out_s9);
  _out = _out_s9;
  return;
}
void one(bool x, bool& _out) {
  _out = 1;
  return;
}
void equals_Node_s0(Node* left_s1, Node* right_s2, int bnd_s3, bool& _out) {
  if ((bnd_s3) <= (0)) {
    _out = 0;
    return;
  }
  if (((left_s1) == (NULL)) && ((right_s2) == (NULL))) {
    _out = 1;
    return;
  }
  if ((left_s1) == (NULL)) {
    _out = 0;
    return;
  }
  if ((right_s2) == (NULL)) {
    _out = 0;
    return;
  }
  if (!((left_s1->val) == (right_s2->val))) {
    _out = 0;
    return;
  }
  bool  _out_s5=0;
  equals_Node_s0(left_s1->next, right_s2->next, bnd_s3 - 1, _out_s5);
  if (!(_out_s5)) {
    _out = 0;
    return;
  }
  _out = 1;
  return;
}

}
