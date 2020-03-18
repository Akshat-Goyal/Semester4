#ifndef MINITESTB501_H
#define MINITESTB501_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Node; 
}
namespace ANONYMOUS{
class Node; 
class Node{
  public:
  int  type;
  Node*  m;
  Node*  f;
  Node(){}
  static Node* create(  int  type_,   Node*  m_,   Node*  f_);
  ~Node(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main2__Wrapper();
extern void main2__WrapperNospec();
extern void main2();
extern void parse(int n, char* x/* len = n */, int inpos_0, int& outpos, int rbnd, Node*& _out);
}

#endif
