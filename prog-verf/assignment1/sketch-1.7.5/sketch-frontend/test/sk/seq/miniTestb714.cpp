#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb714.h"
namespace A{

void main__Wrapper(int in) {
  _main(in);
}
void main__WrapperNospec(int in) {}
void _main(int in) {
  assert (((in + 2)) == ((in + 2)));;
}

}
namespace ANONYMOUS{


}
namespace B{

void main__Wrapper(int in) {
  _main(in);
}
void main__WrapperNospec(int in) {}
void _main(int in) {
  assert (((in + 2)) < ((in + 4)));;
}

}
