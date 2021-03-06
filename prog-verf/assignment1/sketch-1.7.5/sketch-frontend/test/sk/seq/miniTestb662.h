#ifndef MINITESTB662_H
#define MINITESTB662_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Queue; 
class Node; 
}
namespace ANONYMOUS{
class Queue; 
class Node; 
class Queue{
  public:
  Node*  head;
  Node*  tail;
  Queue(){}
  static Queue* create(  Node*  head_,   Node*  tail_);
  ~Queue(){
  }
  void operator delete(void* p){ free(p); }
};
class Node{
  public:
  int  val;
  Node*  next;
  Node(){}
  static Node* create(  int  val_,   Node*  next_);
  ~Node(){
  }
  void operator delete(void* p){ free(p); }
};
extern void test(bool x, bool& _out);
extern void one(bool x, bool& _out);
extern void equals_Node_s0(Node* left_s1, Node* right_s2, int bnd_s3, bool& _out);
}

#endif
