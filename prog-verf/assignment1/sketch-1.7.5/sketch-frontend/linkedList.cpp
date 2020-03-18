#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "linkedList.h"
namespace ANONYMOUS{

Node* Node::create(Node*  next_, int  val_){
  void* temp= malloc( sizeof(Node)  ); 
  Node* rv = new (temp)Node();
  rv->next =  next_;
  rv->val =  val_;
  return rv;
}
List* List::create(Node*  head_){
  void* temp= malloc( sizeof(List)  ); 
  List* rv = new (temp)List();
  rv->head =  head_;
  return rv;
}
void testInsert__Wrapper() {
  testInsert();
}
void testInsert__WrapperNospec() {}
void testAppend__Wrapper() {
  testAppend();
}
void testAppend__WrapperNospec() {}
void testInsert() {
  List*  l=List::create(NULL);
  List*  l_s9=NULL;
  populate(l, l_s9);
  Node*  n1=Node::create(NULL, 70);
  Node*  n2=Node::create(NULL, 40);
  Node*  n3=Node::create(NULL, 34);
  List*  l2_s11=NULL;
  insertAt(l_s9, n1, 1, l2_s11);
  assert ((l2_s11->head->next->val) == (70));;
  assert ((l2_s11->head->next->next->val) == (60));;
  List*  l3_s13=NULL;
  insertAt(l_s9, n2, 0, l3_s13);
  assert ((l3_s13->head->val) == (40));;
  assert ((l3_s13->head->next->val) == (5));;
  List*  l4_s15=NULL;
  insertAt(l_s9, n3, 4, l4_s15);
  assert ((l4_s15->head->next->next->next->next->val) == (34));;
}
void testAppend() {
  List*  l=List::create(NULL);
  List*  l_s17=NULL;
  populate(l, l_s17);
  Node*  n1=Node::create(NULL, 40);
  List*  l1_s19=NULL;
  append(l_s17, n1, l1_s19);
  assert ((l1_s19->head->next->next->val) == (40));;
  assert ((l1_s19->head->next->next->next) == (NULL));;
}
void populate(List* l, List*& _out) {
  Node*  n2=Node::create(NULL, 60);
  Node*  n1=Node::create(n2, 5);
  l->head = n1;
  _out = l;
  return;
}
void insertAt(List* lst, Node* n, int pos, List*& _out) {
  assert (((n) != (NULL)) && ((pos) >= (0)));;
  Node*  tmp=lst->head;
  if ((pos) == (0)) {
    lst->head = n;
    n->next = tmp;
    _out = lst;
    return;
  }
  assert ((tmp) != (NULL));;
  bool  __sa1=((tmp->next) != (NULL)) && ((0) < ((pos - 1)));
  int  i=0;
  while (__sa1) {
    tmp = tmp->next;
    i = i + 1;
    __sa1 = ((tmp->next) != (NULL)) && ((i) < ((pos - 1)));
  }
  assert ((i) == ((pos - 1)));;
  n->next = tmp->next;
  tmp->next = n;
  _out = lst;
  return;
}
void append(List* lst, Node* n, List*& _out) {
  if ((lst->head) == (NULL)) {
    lst->head = n;
    _out = lst;
    return;
  }
  Node*  tmp=lst->head;
  bool  __sa0=(tmp->next) != (NULL);
  while (__sa0) {
    tmp = tmp->next;
    __sa0 = (tmp->next) != (NULL);
  }
  tmp->next = n;
  _out = lst;
  return;
}

}
