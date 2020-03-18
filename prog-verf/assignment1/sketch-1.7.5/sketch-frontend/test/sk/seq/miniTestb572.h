#ifndef MINITESTB572_H
#define MINITESTB572_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Node; 
}
namespace ANONYMOUS{
class Node; 
class Node{
  public:
  Node*  a;
  bool  mark;
  int  v;
  Node(){}
  static Node* create(  Node*  a_,   bool  mark_,   int  v_);
  ~Node(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x, int* y/* len = x */);
extern void main__WrapperNospec(int x, int* y/* len = x */);
extern void _main(int x, int* y/* len = x */);
}

#endif
