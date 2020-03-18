#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb697.h"
namespace ANONYMOUS{

void sketch(bool* mem_0/* len = 17 * 4 */, bool* _out/* len = 17 * 4 */) {
  for (int  __sa0=0;(__sa0) < (4);__sa0 = __sa0 + 1){
    assert (((__sa0) >= (0)) && ((__sa0) < (4)));;
    CopyArr<bool >((_out+ 17 * __sa0),0, 17);
  }
  bool*  mem= new bool [17 * 4]; CopyArr<bool >(mem,mem_0, 17 * 4, 17 * 4);
  bool _tt0[17] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((mem+ 0),_tt0, 17, 17);
  CopyArr<bool >(_out,mem, 17 * 4, 17 * 4);
  delete[] mem;
  return;
}
void spec(bool* mem_0/* len = 17 * 4 */, bool* _out/* len = 17 * 4 */) {
  for (int  __sa1=0;(__sa1) < (4);__sa1 = __sa1 + 1){
    assert (((__sa1) >= (0)) && ((__sa1) < (4)));;
    CopyArr<bool >((_out+ 17 * __sa1),0, 17);
  }
  bool*  mem= new bool [17 * 4]; CopyArr<bool >(mem,mem_0, 17 * 4, 17 * 4);
  bool _tt1[17] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((mem+ 0),_tt1, 17, 17);
  CopyArr<bool >(_out,mem, 17 * 4, 17 * 4);
  delete[] mem;
  return;
}

}
