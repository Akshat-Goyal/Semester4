#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb499.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  char _tt0[20] = {'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a', 'w', 'e', 's', 'o', 'm', 'e', '!', '!', '\0', '\0', '\0'};
  char*  tt= new char [20]; CopyArr<char >(tt,_tt0, 20, 20);
  char _tt1[18] = {'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a', 'w', 'e', 's', 'o', 'm', 'e', '!', '!', '\0'};
  assert (arrCompare((tt+ 0), 18, _tt1, 18) && ((18) == (18)));;
  delete[] tt;
}

}
