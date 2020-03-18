#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb701.h"
namespace ANONYMOUS{

void mainB(bool* x/* len = 3 */, bool* y/* len = 3 */, bool* _out/* len = 3 */) {
  CopyArr<bool >(_out,0, 3);
  bool* _tt0= new bool [3]; 
  CopyArr<bool >(_out,SumArr(_tt0, 3, _out, 3, x, 3), 3, 3);
  bool* _tt1= new bool [3]; 
  CopyArr<bool >(_out,SumArr(_tt1, 3, _out, 3, y, 3), 3, 3);
  delete[] _tt0;
  delete[] _tt1;
  return;
}
void _main(bool* x/* len = 3 */, bool* y/* len = 3 */, bool* _out/* len = 3 */) {
  bool* _tt2= new bool [3]; 
  CopyArr<bool >(_out,SumArr(_tt2, 3, x, 3, y, 3), 3, 3);
  delete[] _tt2;
  return;
}

}
