#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb572.h"
namespace ANONYMOUS{

Node* Node::create(Node*  a_, bool  mark_, int  v_){
  void* temp= malloc( sizeof(Node)  ); 
  Node* rv = new (temp)Node();
  rv->a =  a_;
  rv->mark =  mark_;
  rv->v =  v_;
  return rv;
}
void main__Wrapper(int x, int* y/* len = x */) {
  _main(x, y);
}
void main__WrapperNospec(int x, int* y/* len = x */) {}
void _main(int x, int* y/* len = x */) {
  if(!((x) > (0))){ throw AssumptionFailedException();  };
  Node**  nn= new Node* [x]; CopyArr<Node* >(nn,NULL, x);
  for (int  i=0;(i) < (x);i = i + 1){
    (nn[i]) = Node::create(NULL, 0, i);
  }
  for (int  i_0=0;(i_0) < (x);i_0 = i_0 + 1){
    if(!(((y[i_0])) < (x))){ throw AssumptionFailedException();  };
    (nn[i_0])->a = (nn[(y[i_0])]);
  }
  Node*  cur=(nn[0]);
  cur->mark = 0;
  int  c=0;
  while ((c) < (x)) {
    if ((cur->mark) == (0)) {
      cur->mark = 1;
      cur = (nn[(cur->v + 1) % x]);
      c = c + 1;
    }
  }
  for (int  i_1=0;(i_1) < (x);i_1 = i_1 + 1){
    assert (((nn[i_1])->mark) == (1));;
  }
  delete[] nn;
}

}
