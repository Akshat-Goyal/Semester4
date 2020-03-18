#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb531.h"
namespace ANONYMOUS{

template<typename T_0>
Grid* Grid::create(int  n_, int  m_, T_0* y_, int y_len){
  int tlen_y = n_ * m_; 
  void* temp= malloc( sizeof(Grid)   + sizeof(int )*tlen_y); 
  Grid* rv = new (temp)Grid();
  rv->n =  n_;
  rv->m =  m_;
  CopyArr(rv->y, y_, tlen_y, y_len ); 
  return rv;
}
void main__Wrapper(int n, int m, int* x/* len = n * m */) {
  _main(n, m, x);
}
void main__WrapperNospec(int n, int m, int* x/* len = n * m */) {}
void _main(int n, int m, int* x/* len = n * m */) {
  Grid*  g=Grid::create(n, m, (int*)NULL, 0);
  for (int  i=0;(i) < (n);i = i + 1){
    for (int  j=0;(j) < (m);j = j + 1){
      assert (((j) >= (0)) && ((j) < (g->m)));;
      assert (((i) >= (0)) && ((i) < (g->n)));;
      assert (((j) >= (0)) && ((j) < (m)));;
      assert (((i) >= (0)) && ((i) < (n)));;
      (g->y[(g->n * j) + i]) = (x[(n * j) + i]);
    }
  }
  assert (arrCompare(x, (n * m), g->y, (g->n * g->m)) && (((m) == (g->m)) && ((n) == (g->n))));;
}

}
