#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Node; 
class List; 
}
namespace ANONYMOUS{
class Node; 
class List; 
class Node{
  public:
  Node*  next;
  int  val;
  Node(){}
  static Node* create(  Node*  next_,   int  val_);
  ~Node(){
  }
  void operator delete(void* p){ free(p); }
};
class List{
  public:
  Node*  head;
  List(){}
  static List* create(  Node*  head_);
  ~List(){
  }
  void operator delete(void* p){ free(p); }
};
extern void testInsert__Wrapper();
extern void testInsert__WrapperNospec();
extern void testAppend__Wrapper();
extern void testAppend__WrapperNospec();
extern void testInsert();
extern void testAppend();
extern void populate(List* l, List*& _out);
extern void insertAt(List* lst, Node* n, int pos, List*& _out);
extern void append(List* lst, Node* n, List*& _out);
}

#endif
