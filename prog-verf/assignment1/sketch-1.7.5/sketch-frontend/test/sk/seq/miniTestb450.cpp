#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb450.h"
namespace ANONYMOUS{

MultiType* MultiType::create(int  val_, int  flag_, MTList*  lst_, MTDict*  dict_){
  void* temp= malloc( sizeof(MultiType)  ); 
  MultiType* rv = new (temp)MultiType();
  rv->val =  val_;
  rv->flag =  flag_;
  rv->lst =  lst_;
  rv->dict =  dict_;
  return rv;
}
template<typename T_0>
MTDict* MTDict::create(T_0* kvpairs_, int kvpairs_len, int  len_){
  int tlen_kvpairs = len_; 
  void* temp= malloc( sizeof(MTDict)   + sizeof(KeyValuePair* )*tlen_kvpairs); 
  MTDict* rv = new (temp)MTDict();
  rv->len =  len_;
  CopyArr(rv->kvpairs, kvpairs_, tlen_kvpairs, kvpairs_len ); 
  return rv;
}
KeyValuePair* KeyValuePair::create(MultiType*  Key_, MultiType*  Value_){
  void* temp= malloc( sizeof(KeyValuePair)  ); 
  KeyValuePair* rv = new (temp)KeyValuePair();
  rv->Key =  Key_;
  rv->Value =  Value_;
  return rv;
}
template<typename T_0>
MTList* MTList::create(int  len_, T_0* listValues_, int listValues_len){
  int tlen_listValues = len_; 
  void* temp= malloc( sizeof(MTList)   + sizeof(MultiType* )*tlen_listValues); 
  MTList* rv = new (temp)MTList();
  rv->len =  len_;
  CopyArr(rv->listValues, listValues_, tlen_listValues, listValues_len ); 
  return rv;
}
void main__Wrapper(int N, int* poly_list_int/* len = N */) {
  int  nchanges__ANONYMOUS_s744=0;
  glblInit_nchanges__ANONYMOUS_s896(nchanges__ANONYMOUS_s744);
  MultiType*  listTypeMT__ANONYMOUS_s796=NULL;
  glblInit_listTypeMT__ANONYMOUS_s894(listTypeMT__ANONYMOUS_s796);
  bool  choiceOperator6__ANONYMOUS_s743=0;
  glblInit_choiceOperator6__ANONYMOUS_s888(choiceOperator6__ANONYMOUS_s743);
  bool  choiceOperator5__ANONYMOUS_s742=0;
  glblInit_choiceOperator5__ANONYMOUS_s886(choiceOperator5__ANONYMOUS_s742);
  bool  choiceOperator4__ANONYMOUS_s741=0;
  glblInit_choiceOperator4__ANONYMOUS_s884(choiceOperator4__ANONYMOUS_s741);
  bool  choiceOperator3__ANONYMOUS_s740=0;
  glblInit_choiceOperator3__ANONYMOUS_s882(choiceOperator3__ANONYMOUS_s740);
  bool  choiceOperator2__ANONYMOUS_s739=0;
  glblInit_choiceOperator2__ANONYMOUS_s880(choiceOperator2__ANONYMOUS_s739);
  bool  choiceOperator1__ANONYMOUS_s738=0;
  glblInit_choiceOperator1__ANONYMOUS_s878(choiceOperator1__ANONYMOUS_s738);
  bool  choiceOperator0__ANONYMOUS_s737=0;
  glblInit_choiceOperator0__ANONYMOUS_s876(choiceOperator0__ANONYMOUS_s737);
  bool  choiceLoopIter1__ANONYMOUS_s736=0;
  glblInit_choiceLoopIter1__ANONYMOUS_s874(choiceLoopIter1__ANONYMOUS_s736);
  bool  choiceLoopIter0__ANONYMOUS_s735=0;
  glblInit_choiceLoopIter0__ANONYMOUS_s872(choiceLoopIter0__ANONYMOUS_s735);
  bool  choiceInit9__ANONYMOUS_s734=0;
  glblInit_choiceInit9__ANONYMOUS_s870(choiceInit9__ANONYMOUS_s734);
  bool  choiceInit8__ANONYMOUS_s733=0;
  glblInit_choiceInit8__ANONYMOUS_s868(choiceInit8__ANONYMOUS_s733);
  bool  choiceInit7__ANONYMOUS_s732=0;
  glblInit_choiceInit7__ANONYMOUS_s866(choiceInit7__ANONYMOUS_s732);
  bool  choiceInit6__ANONYMOUS_s731=0;
  glblInit_choiceInit6__ANONYMOUS_s864(choiceInit6__ANONYMOUS_s731);
  bool  choiceInit5__ANONYMOUS_s730=0;
  glblInit_choiceInit5__ANONYMOUS_s862(choiceInit5__ANONYMOUS_s730);
  bool  choiceInit4__ANONYMOUS_s729=0;
  glblInit_choiceInit4__ANONYMOUS_s860(choiceInit4__ANONYMOUS_s729);
  bool  choiceInit3__ANONYMOUS_s728=0;
  glblInit_choiceInit3__ANONYMOUS_s858(choiceInit3__ANONYMOUS_s728);
  bool  choiceInit2__ANONYMOUS_s727=0;
  glblInit_choiceInit2__ANONYMOUS_s856(choiceInit2__ANONYMOUS_s727);
  bool  choiceInit1__ANONYMOUS_s726=0;
  glblInit_choiceInit1__ANONYMOUS_s854(choiceInit1__ANONYMOUS_s726);
  bool  choiceInit14__ANONYMOUS_s725=0;
  glblInit_choiceInit14__ANONYMOUS_s852(choiceInit14__ANONYMOUS_s725);
  bool  choiceInit13__ANONYMOUS_s724=0;
  glblInit_choiceInit13__ANONYMOUS_s850(choiceInit13__ANONYMOUS_s724);
  bool  choiceInit12__ANONYMOUS_s723=0;
  glblInit_choiceInit12__ANONYMOUS_s848(choiceInit12__ANONYMOUS_s723);
  bool  choiceInit11__ANONYMOUS_s722=0;
  glblInit_choiceInit11__ANONYMOUS_s846(choiceInit11__ANONYMOUS_s722);
  bool  choiceInit10__ANONYMOUS_s721=0;
  glblInit_choiceInit10__ANONYMOUS_s844(choiceInit10__ANONYMOUS_s721);
  bool  choiceInit0__ANONYMOUS_s720=0;
  glblInit_choiceInit0__ANONYMOUS_s842(choiceInit0__ANONYMOUS_s720);
  bool  choiceCompOperator1__ANONYMOUS_s719=0;
  glblInit_choiceCompOperator1__ANONYMOUS_s840(choiceCompOperator1__ANONYMOUS_s719);
  bool  choiceCompOperator0__ANONYMOUS_s718=0;
  glblInit_choiceCompOperator0__ANONYMOUS_s838(choiceCompOperator0__ANONYMOUS_s718);
  bool  choiceBaseCase0__ANONYMOUS_s717=0;
  glblInit_choiceBaseCase0__ANONYMOUS_s836(choiceBaseCase0__ANONYMOUS_s717);
  bool  choiceAssign5__ANONYMOUS_s716=0;
  glblInit_choiceAssign5__ANONYMOUS_s834(choiceAssign5__ANONYMOUS_s716);
  bool  choiceAssign4__ANONYMOUS_s715=0;
  glblInit_choiceAssign4__ANONYMOUS_s832(choiceAssign4__ANONYMOUS_s715);
  bool  choiceAssign3__ANONYMOUS_s714=0;
  glblInit_choiceAssign3__ANONYMOUS_s830(choiceAssign3__ANONYMOUS_s714);
  bool  choiceAssign2__ANONYMOUS_s713=0;
  glblInit_choiceAssign2__ANONYMOUS_s828(choiceAssign2__ANONYMOUS_s713);
  bool  choiceAssign1__ANONYMOUS_s712=0;
  glblInit_choiceAssign1__ANONYMOUS_s826(choiceAssign1__ANONYMOUS_s712);
  bool  choiceAssign0__ANONYMOUS_s711=0;
  glblInit_choiceAssign0__ANONYMOUS_s824(choiceAssign0__ANONYMOUS_s711);
  _main(N, poly_list_int, choiceAssign0__ANONYMOUS_s711, choiceAssign1__ANONYMOUS_s712, choiceAssign2__ANONYMOUS_s713, choiceAssign3__ANONYMOUS_s714, choiceAssign4__ANONYMOUS_s715, choiceAssign5__ANONYMOUS_s716, choiceBaseCase0__ANONYMOUS_s717, choiceCompOperator0__ANONYMOUS_s718, choiceCompOperator1__ANONYMOUS_s719, choiceInit0__ANONYMOUS_s720, choiceInit10__ANONYMOUS_s721, choiceInit11__ANONYMOUS_s722, choiceInit12__ANONYMOUS_s723, choiceInit13__ANONYMOUS_s724, choiceInit14__ANONYMOUS_s725, choiceInit1__ANONYMOUS_s726, choiceInit2__ANONYMOUS_s727, choiceInit3__ANONYMOUS_s728, choiceInit4__ANONYMOUS_s729, choiceInit5__ANONYMOUS_s730, choiceInit6__ANONYMOUS_s731, choiceInit7__ANONYMOUS_s732, choiceInit8__ANONYMOUS_s733, choiceInit9__ANONYMOUS_s734, choiceLoopIter0__ANONYMOUS_s735, choiceLoopIter1__ANONYMOUS_s736, choiceOperator0__ANONYMOUS_s737, choiceOperator1__ANONYMOUS_s738, choiceOperator2__ANONYMOUS_s739, choiceOperator3__ANONYMOUS_s740, choiceOperator4__ANONYMOUS_s741, choiceOperator5__ANONYMOUS_s742, choiceOperator6__ANONYMOUS_s743, listTypeMT__ANONYMOUS_s796, nchanges__ANONYMOUS_s744);
}
void main__WrapperNospec(int N, int* poly_list_int/* len = N */) {}
void glblInit_choiceAssign0__ANONYMOUS_s824(bool& choiceAssign0__ANONYMOUS_s823) {
  choiceAssign0__ANONYMOUS_s823 = 0;
}
void glblInit_choiceAssign1__ANONYMOUS_s826(bool& choiceAssign1__ANONYMOUS_s825) {
  choiceAssign1__ANONYMOUS_s825 = 0;
}
void glblInit_choiceAssign2__ANONYMOUS_s828(bool& choiceAssign2__ANONYMOUS_s827) {
  choiceAssign2__ANONYMOUS_s827 = 0;
}
void glblInit_choiceAssign3__ANONYMOUS_s830(bool& choiceAssign3__ANONYMOUS_s829) {
  choiceAssign3__ANONYMOUS_s829 = 0;
}
void glblInit_choiceAssign4__ANONYMOUS_s832(bool& choiceAssign4__ANONYMOUS_s831) {
  choiceAssign4__ANONYMOUS_s831 = 0;
}
void glblInit_choiceAssign5__ANONYMOUS_s834(bool& choiceAssign5__ANONYMOUS_s833) {
  choiceAssign5__ANONYMOUS_s833 = 0;
}
void glblInit_choiceBaseCase0__ANONYMOUS_s836(bool& choiceBaseCase0__ANONYMOUS_s835) {
  choiceBaseCase0__ANONYMOUS_s835 = 0;
}
void glblInit_choiceCompOperator0__ANONYMOUS_s838(bool& choiceCompOperator0__ANONYMOUS_s837) {
  choiceCompOperator0__ANONYMOUS_s837 = 0;
}
void glblInit_choiceCompOperator1__ANONYMOUS_s840(bool& choiceCompOperator1__ANONYMOUS_s839) {
  choiceCompOperator1__ANONYMOUS_s839 = 0;
}
void glblInit_choiceInit0__ANONYMOUS_s842(bool& choiceInit0__ANONYMOUS_s841) {
  choiceInit0__ANONYMOUS_s841 = 0;
}
void glblInit_choiceInit10__ANONYMOUS_s844(bool& choiceInit10__ANONYMOUS_s843) {
  choiceInit10__ANONYMOUS_s843 = 0;
}
void glblInit_choiceInit11__ANONYMOUS_s846(bool& choiceInit11__ANONYMOUS_s845) {
  choiceInit11__ANONYMOUS_s845 = 0;
}
void glblInit_choiceInit12__ANONYMOUS_s848(bool& choiceInit12__ANONYMOUS_s847) {
  choiceInit12__ANONYMOUS_s847 = 0;
}
void glblInit_choiceInit13__ANONYMOUS_s850(bool& choiceInit13__ANONYMOUS_s849) {
  choiceInit13__ANONYMOUS_s849 = 0;
}
void glblInit_choiceInit14__ANONYMOUS_s852(bool& choiceInit14__ANONYMOUS_s851) {
  choiceInit14__ANONYMOUS_s851 = 0;
}
void glblInit_choiceInit1__ANONYMOUS_s854(bool& choiceInit1__ANONYMOUS_s853) {
  choiceInit1__ANONYMOUS_s853 = 0;
}
void glblInit_choiceInit2__ANONYMOUS_s856(bool& choiceInit2__ANONYMOUS_s855) {
  choiceInit2__ANONYMOUS_s855 = 0;
}
void glblInit_choiceInit3__ANONYMOUS_s858(bool& choiceInit3__ANONYMOUS_s857) {
  choiceInit3__ANONYMOUS_s857 = 0;
}
void glblInit_choiceInit4__ANONYMOUS_s860(bool& choiceInit4__ANONYMOUS_s859) {
  choiceInit4__ANONYMOUS_s859 = 0;
}
void glblInit_choiceInit5__ANONYMOUS_s862(bool& choiceInit5__ANONYMOUS_s861) {
  choiceInit5__ANONYMOUS_s861 = 0;
}
void glblInit_choiceInit6__ANONYMOUS_s864(bool& choiceInit6__ANONYMOUS_s863) {
  choiceInit6__ANONYMOUS_s863 = 0;
}
void glblInit_choiceInit7__ANONYMOUS_s866(bool& choiceInit7__ANONYMOUS_s865) {
  choiceInit7__ANONYMOUS_s865 = 0;
}
void glblInit_choiceInit8__ANONYMOUS_s868(bool& choiceInit8__ANONYMOUS_s867) {
  choiceInit8__ANONYMOUS_s867 = 0;
}
void glblInit_choiceInit9__ANONYMOUS_s870(bool& choiceInit9__ANONYMOUS_s869) {
  choiceInit9__ANONYMOUS_s869 = 0;
}
void glblInit_choiceLoopIter0__ANONYMOUS_s872(bool& choiceLoopIter0__ANONYMOUS_s871) {
  choiceLoopIter0__ANONYMOUS_s871 = 0;
}
void glblInit_choiceLoopIter1__ANONYMOUS_s874(bool& choiceLoopIter1__ANONYMOUS_s873) {
  choiceLoopIter1__ANONYMOUS_s873 = 0;
}
void glblInit_choiceOperator0__ANONYMOUS_s876(bool& choiceOperator0__ANONYMOUS_s875) {
  choiceOperator0__ANONYMOUS_s875 = 0;
}
void glblInit_choiceOperator1__ANONYMOUS_s878(bool& choiceOperator1__ANONYMOUS_s877) {
  choiceOperator1__ANONYMOUS_s877 = 0;
}
void glblInit_choiceOperator2__ANONYMOUS_s880(bool& choiceOperator2__ANONYMOUS_s879) {
  choiceOperator2__ANONYMOUS_s879 = 0;
}
void glblInit_choiceOperator3__ANONYMOUS_s882(bool& choiceOperator3__ANONYMOUS_s881) {
  choiceOperator3__ANONYMOUS_s881 = 0;
}
void glblInit_choiceOperator4__ANONYMOUS_s884(bool& choiceOperator4__ANONYMOUS_s883) {
  choiceOperator4__ANONYMOUS_s883 = 0;
}
void glblInit_choiceOperator5__ANONYMOUS_s886(bool& choiceOperator5__ANONYMOUS_s885) {
  choiceOperator5__ANONYMOUS_s885 = 0;
}
void glblInit_choiceOperator6__ANONYMOUS_s888(bool& choiceOperator6__ANONYMOUS_s887) {
  choiceOperator6__ANONYMOUS_s887 = 0;
}
void glblInit_falseMT__ANONYMOUS_s890(MultiType*& falseMT__ANONYMOUS_s889) {
  falseMT__ANONYMOUS_s889 = MultiType::create(0, 0, NULL, NULL);
}
void glblInit_intTypeMT__ANONYMOUS_s892(MultiType*& intTypeMT__ANONYMOUS_s891) {
  intTypeMT__ANONYMOUS_s891 = MultiType::create(0, 0, NULL, NULL);
}
void glblInit_listTypeMT__ANONYMOUS_s894(MultiType*& listTypeMT__ANONYMOUS_s893) {
  listTypeMT__ANONYMOUS_s893 = MultiType::create(0, 1, MTList::create(0, (MultiType** )NULL, 0), NULL);
}
void glblInit_nchanges__ANONYMOUS_s896(int& nchanges__ANONYMOUS_s895) {
  nchanges__ANONYMOUS_s895 = 0;
}
void glblInit_noneMT__ANONYMOUS_s898(MultiType*& noneMT__ANONYMOUS_s897) {
  noneMT__ANONYMOUS_s897 = MultiType::create(0, 0, NULL, NULL);
}
void glblInit_trueMT__ANONYMOUS_s900(MultiType*& trueMT__ANONYMOUS_s899) {
  trueMT__ANONYMOUS_s899 = MultiType::create(1, 0, NULL, NULL);
}
void _main(int N, int* poly_list_int/* len = N */, bool& choiceAssign0__ANONYMOUS_s745, bool& choiceAssign1__ANONYMOUS_s746, bool& choiceAssign2__ANONYMOUS_s747, bool& choiceAssign3__ANONYMOUS_s748, bool& choiceAssign4__ANONYMOUS_s749, bool& choiceAssign5__ANONYMOUS_s750, bool& choiceBaseCase0__ANONYMOUS_s751, bool& choiceCompOperator0__ANONYMOUS_s752, bool& choiceCompOperator1__ANONYMOUS_s753, bool& choiceInit0__ANONYMOUS_s754, bool& choiceInit10__ANONYMOUS_s755, bool& choiceInit11__ANONYMOUS_s756, bool& choiceInit12__ANONYMOUS_s757, bool& choiceInit13__ANONYMOUS_s758, bool& choiceInit14__ANONYMOUS_s759, bool& choiceInit1__ANONYMOUS_s760, bool& choiceInit2__ANONYMOUS_s761, bool& choiceInit3__ANONYMOUS_s762, bool& choiceInit4__ANONYMOUS_s763, bool& choiceInit5__ANONYMOUS_s764, bool& choiceInit6__ANONYMOUS_s765, bool& choiceInit7__ANONYMOUS_s766, bool& choiceInit8__ANONYMOUS_s767, bool& choiceInit9__ANONYMOUS_s768, bool& choiceLoopIter0__ANONYMOUS_s769, bool& choiceLoopIter1__ANONYMOUS_s770, bool& choiceOperator0__ANONYMOUS_s771, bool& choiceOperator1__ANONYMOUS_s772, bool& choiceOperator2__ANONYMOUS_s773, bool& choiceOperator3__ANONYMOUS_s774, bool& choiceOperator4__ANONYMOUS_s775, bool& choiceOperator5__ANONYMOUS_s776, bool& choiceOperator6__ANONYMOUS_s777, MultiType*& listTypeMT__ANONYMOUS_s808, int& nchanges__ANONYMOUS_s778) {
  int*  _out_s32= new int [N]; CopyArr<int >(_out_s32,0, N);
  compute_deriv_driver(N, poly_list_int, _out_s32, choiceAssign0__ANONYMOUS_s745, choiceAssign1__ANONYMOUS_s746, choiceAssign2__ANONYMOUS_s747, choiceAssign3__ANONYMOUS_s748, choiceAssign4__ANONYMOUS_s749, choiceAssign5__ANONYMOUS_s750, choiceBaseCase0__ANONYMOUS_s751, choiceCompOperator0__ANONYMOUS_s752, choiceCompOperator1__ANONYMOUS_s753, choiceInit0__ANONYMOUS_s754, choiceInit10__ANONYMOUS_s755, choiceInit11__ANONYMOUS_s756, choiceInit12__ANONYMOUS_s757, choiceInit13__ANONYMOUS_s758, choiceInit14__ANONYMOUS_s759, choiceInit1__ANONYMOUS_s760, choiceInit2__ANONYMOUS_s761, choiceInit3__ANONYMOUS_s762, choiceInit4__ANONYMOUS_s763, choiceInit5__ANONYMOUS_s764, choiceInit6__ANONYMOUS_s765, choiceInit7__ANONYMOUS_s766, choiceInit8__ANONYMOUS_s767, choiceInit9__ANONYMOUS_s768, choiceLoopIter0__ANONYMOUS_s769, choiceLoopIter1__ANONYMOUS_s770, choiceOperator0__ANONYMOUS_s771, choiceOperator1__ANONYMOUS_s772, choiceOperator2__ANONYMOUS_s773, choiceOperator3__ANONYMOUS_s774, choiceOperator4__ANONYMOUS_s775, choiceOperator5__ANONYMOUS_s776, choiceOperator6__ANONYMOUS_s777, listTypeMT__ANONYMOUS_s808, nchanges__ANONYMOUS_s778);
  int*  _out_s34= new int [N]; CopyArr<int >(_out_s34,0, N);
  compute_deriv_teacher_list_int_driver(N, poly_list_int, _out_s34);
  assert (arrCompare(_out_s32, N, _out_s34, N) && ((N) == (N)));;
  delete[] _out_s32;
  delete[] _out_s34;
}
void compute_deriv_driver(int N, int* poly_list_int/* len = N */, int* _out/* len = N */, bool& choiceAssign0__ANONYMOUS_s675, bool& choiceAssign1__ANONYMOUS_s676, bool& choiceAssign2__ANONYMOUS_s677, bool& choiceAssign3__ANONYMOUS_s678, bool& choiceAssign4__ANONYMOUS_s679, bool& choiceAssign5__ANONYMOUS_s680, bool& choiceBaseCase0__ANONYMOUS_s681, bool& choiceCompOperator0__ANONYMOUS_s682, bool& choiceCompOperator1__ANONYMOUS_s683, bool& choiceInit0__ANONYMOUS_s684, bool& choiceInit10__ANONYMOUS_s685, bool& choiceInit11__ANONYMOUS_s686, bool& choiceInit12__ANONYMOUS_s687, bool& choiceInit13__ANONYMOUS_s688, bool& choiceInit14__ANONYMOUS_s689, bool& choiceInit1__ANONYMOUS_s690, bool& choiceInit2__ANONYMOUS_s691, bool& choiceInit3__ANONYMOUS_s692, bool& choiceInit4__ANONYMOUS_s693, bool& choiceInit5__ANONYMOUS_s694, bool& choiceInit6__ANONYMOUS_s695, bool& choiceInit7__ANONYMOUS_s696, bool& choiceInit8__ANONYMOUS_s697, bool& choiceInit9__ANONYMOUS_s698, bool& choiceLoopIter0__ANONYMOUS_s699, bool& choiceLoopIter1__ANONYMOUS_s700, bool& choiceOperator0__ANONYMOUS_s701, bool& choiceOperator1__ANONYMOUS_s702, bool& choiceOperator2__ANONYMOUS_s703, bool& choiceOperator3__ANONYMOUS_s704, bool& choiceOperator4__ANONYMOUS_s705, bool& choiceOperator5__ANONYMOUS_s706, bool& choiceOperator6__ANONYMOUS_s707, MultiType*& listTypeMT__ANONYMOUS_s802, int& nchanges__ANONYMOUS_s708) {
  if ((N) == (0)) {
    CopyArr<int >(_out,0, N);
    return;
  }
  MultiType*  poly_list_intMT_s130=NULL;
  createMTFromArray(N, poly_list_int, poly_list_intMT_s130);
  MultiType*  result1_s132=NULL;
  compute_deriv(poly_list_intMT_s130, result1_s132, listTypeMT__ANONYMOUS_s802);
  int*  result_s134= new int [N]; CopyArr<int >(result_s134,0, N);
  computeArrayFromMT(N, result1_s132, result_s134);
  calculateChanges(choiceAssign0__ANONYMOUS_s675, choiceAssign1__ANONYMOUS_s676, choiceAssign2__ANONYMOUS_s677, choiceAssign3__ANONYMOUS_s678, choiceAssign4__ANONYMOUS_s679, choiceAssign5__ANONYMOUS_s680, choiceBaseCase0__ANONYMOUS_s681, choiceCompOperator0__ANONYMOUS_s682, choiceCompOperator1__ANONYMOUS_s683, choiceInit0__ANONYMOUS_s684, choiceInit10__ANONYMOUS_s685, choiceInit11__ANONYMOUS_s686, choiceInit12__ANONYMOUS_s687, choiceInit13__ANONYMOUS_s688, choiceInit14__ANONYMOUS_s689, choiceInit1__ANONYMOUS_s690, choiceInit2__ANONYMOUS_s691, choiceInit3__ANONYMOUS_s692, choiceInit4__ANONYMOUS_s693, choiceInit5__ANONYMOUS_s694, choiceInit6__ANONYMOUS_s695, choiceInit7__ANONYMOUS_s696, choiceInit8__ANONYMOUS_s697, choiceInit9__ANONYMOUS_s698, choiceLoopIter0__ANONYMOUS_s699, choiceLoopIter1__ANONYMOUS_s700, choiceOperator0__ANONYMOUS_s701, choiceOperator1__ANONYMOUS_s702, choiceOperator2__ANONYMOUS_s703, choiceOperator3__ANONYMOUS_s704, choiceOperator4__ANONYMOUS_s705, choiceOperator5__ANONYMOUS_s706, choiceOperator6__ANONYMOUS_s707, nchanges__ANONYMOUS_s708);
  CopyArr<int >(_out,result_s134, N, N);
  delete[] result_s134;
  return;
}
void compute_deriv_teacher_list_int_driver(int N, int* poly_list_int/* len = N */, int* _out/* len = N */) {
  if ((N) == (0)) {
    CopyArr<int >(_out,0, N);
    return;
  }
  MultiType*  poly_list_intMT_s36=NULL;
  createMTFromArray(N, poly_list_int, poly_list_intMT_s36);
  MultiType*  result1_s38=NULL;
  compute_deriv_teacher_list_int(poly_list_intMT_s36, result1_s38);
  int*  result_s40= new int [N]; CopyArr<int >(result_s40,0, N);
  computeArrayFromMT(N, result1_s38, result_s40);
  CopyArr<int >(_out,result_s40, N, N);
  delete[] result_s40;
  return;
}
void createMTFromArray(int N, int* a/* len = N */, MultiType*& _out) {
  MultiType**  lvalues= new MultiType* [N]; CopyArr<MultiType* >(lvalues,NULL, N);
  for (int  i=0;(i) < (N);i = i + 1){
    (lvalues[i]) = MultiType::create((a[i]), 0, NULL, NULL);
  }
  _out = MultiType::create(0, 1, MTList::create(N, lvalues, N), NULL);
  delete[] lvalues;
  return;
}
void compute_deriv(MultiType* poly, MultiType*& _out, MultiType*& listTypeMT__ANONYMOUS_s657) {
  MultiType*  listTypeMT1=listTypeMT__ANONYMOUS_s657;
  assignMT(listTypeMT__ANONYMOUS_s657, MultiType::create(0, 1, MTList::create(0, (MultiType** )NULL, 0), NULL));
  if ((poly->lst->len) == (1)) {
    MultiType* _tt0[1] = {MultiType::create(0, 0, NULL, NULL)};
    _out = MultiType::create(0, 1, MTList::create(1, _tt0, 1), NULL);
    return;
  } else {
    MultiType*  _out_s140=NULL;
    len(poly, _out_s140);
    MultiType*  _out_s142=NULL;
    range2(MultiType::create(1, 0, NULL, NULL), _out_s140, _out_s142);
    foreach_body12(_out_s142, poly, listTypeMT__ANONYMOUS_s657);
    char _tt1[4] = {'P', 'O', 'L', 0};
    printMT(4, _tt1, poly);
    char _tt2[4] = {'O', 'T', 'R', 0};
    printMT(4, _tt2, listTypeMT1);
    _out = listTypeMT__ANONYMOUS_s657;
    return;
  }
}
void computeArrayFromMT(int N, MultiType* a, int* _out/* len = N */) {
  CopyArr<int >(_out,1, N);
  assert ((a->flag) == (1));;
  assert ((a->lst->len) <= (N));;
  bool  __sa14=(0) < (a->lst->len);
  int  i=0;
  while (__sa14) {
    assert (((a->lst->listValues[i])->flag) == (0));;
    (_out[i]) = (a->lst->listValues[i])->val;
    i = i + 1;
    __sa14 = (i) < (a->lst->len);
  }
  return;
}
void calculateChanges(bool& choiceAssign0__ANONYMOUS_s608, bool& choiceAssign1__ANONYMOUS_s609, bool& choiceAssign2__ANONYMOUS_s610, bool& choiceAssign3__ANONYMOUS_s611, bool& choiceAssign4__ANONYMOUS_s612, bool& choiceAssign5__ANONYMOUS_s613, bool& choiceBaseCase0__ANONYMOUS_s614, bool& choiceCompOperator0__ANONYMOUS_s615, bool& choiceCompOperator1__ANONYMOUS_s616, bool& choiceInit0__ANONYMOUS_s617, bool& choiceInit10__ANONYMOUS_s618, bool& choiceInit11__ANONYMOUS_s619, bool& choiceInit12__ANONYMOUS_s620, bool& choiceInit13__ANONYMOUS_s621, bool& choiceInit14__ANONYMOUS_s622, bool& choiceInit1__ANONYMOUS_s623, bool& choiceInit2__ANONYMOUS_s624, bool& choiceInit3__ANONYMOUS_s625, bool& choiceInit4__ANONYMOUS_s626, bool& choiceInit5__ANONYMOUS_s627, bool& choiceInit6__ANONYMOUS_s628, bool& choiceInit7__ANONYMOUS_s629, bool& choiceInit8__ANONYMOUS_s630, bool& choiceInit9__ANONYMOUS_s631, bool& choiceLoopIter0__ANONYMOUS_s632, bool& choiceLoopIter1__ANONYMOUS_s633, bool& choiceOperator0__ANONYMOUS_s634, bool& choiceOperator1__ANONYMOUS_s635, bool& choiceOperator2__ANONYMOUS_s636, bool& choiceOperator3__ANONYMOUS_s637, bool& choiceOperator4__ANONYMOUS_s638, bool& choiceOperator5__ANONYMOUS_s639, bool& choiceOperator6__ANONYMOUS_s640, int& nchanges__ANONYMOUS_s641) {
  if (choiceAssign0__ANONYMOUS_s608) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceAssign1__ANONYMOUS_s609) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceAssign2__ANONYMOUS_s610) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceAssign3__ANONYMOUS_s611) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceAssign4__ANONYMOUS_s612) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceAssign5__ANONYMOUS_s613) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceOperator0__ANONYMOUS_s634) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceOperator1__ANONYMOUS_s635) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceOperator2__ANONYMOUS_s636) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceOperator3__ANONYMOUS_s637) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceOperator4__ANONYMOUS_s638) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceOperator5__ANONYMOUS_s639) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceOperator6__ANONYMOUS_s640) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceCompOperator0__ANONYMOUS_s615) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceCompOperator1__ANONYMOUS_s616) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit0__ANONYMOUS_s617) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit1__ANONYMOUS_s623) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit2__ANONYMOUS_s624) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit3__ANONYMOUS_s625) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit4__ANONYMOUS_s626) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit5__ANONYMOUS_s627) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit6__ANONYMOUS_s628) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit7__ANONYMOUS_s629) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit8__ANONYMOUS_s630) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit9__ANONYMOUS_s631) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit10__ANONYMOUS_s618) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit11__ANONYMOUS_s619) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit12__ANONYMOUS_s620) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit13__ANONYMOUS_s621) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceInit14__ANONYMOUS_s622) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceLoopIter0__ANONYMOUS_s632) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceLoopIter1__ANONYMOUS_s633) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  if (choiceBaseCase0__ANONYMOUS_s614) {
    nchanges__ANONYMOUS_s641 = nchanges__ANONYMOUS_s641 + 1;
  }
  /* minimize(nchanges__ANONYMOUS_s641) */;
}
void compute_deriv_teacher_list_int(MultiType* poly_list_int, MultiType*& _out) {
  MultiType*  _out_s48=NULL;
  len(poly_list_int, _out_s48);
  bool  _out_s50=0;
  applyCompOp(_out_s48, MultiType::create(1, 0, NULL, NULL), 3, _out_s50);
  if (_out_s50) {
    MultiType* _tt3[1] = {MultiType::create(0, 0, NULL, NULL)};
    _out = MultiType::create(0, 1, MTList::create(1, _tt3, 1), NULL);
    return;
  }
  MultiType*  result=NULL;
  assignMT(result, MultiType::create(0, 1, MTList::create(0, (MultiType** )NULL, 0), NULL));
  MultiType*  _out_s52=NULL;
  len(poly_list_int, _out_s52);
  MultiType*  _out_s54=NULL;
  range2(MultiType::create(1, 0, NULL, NULL), _out_s52, _out_s54);
  foreach_body01(_out_s54, result, poly_list_int);
  _out = result;
  return;
}
void assignMT(MultiType*& lhs, MultiType* rhs) {
  lhs = rhs;
}
void len(MultiType* x, MultiType*& _out) {
  assert ((x->flag) == (1));;
  _out = MultiType::create(x->lst->len, 0, NULL, NULL);
  return;
}
void range2(MultiType* x, MultiType* y, MultiType*& _out) {
  assert ((x->flag) == (0));;
  assert ((y->flag) == (0));;
  int  lb=x->val;
  int  ub=y->val;
  int  newLen=ub - lb;
  MultiType**  A= new MultiType* [newLen]; CopyArr<MultiType* >(A,NULL, newLen);
  for (int  i=lb;(i) < (ub);i = i + 1){
    (A[i - lb]) = MultiType::create(i, 0, NULL, NULL);
  }
  _out = MultiType::create(0, 1, MTList::create(newLen, A, newLen), NULL);
  delete[] A;
  return;
}
void foreach_body12(MultiType* lst, MultiType* poly2, MultiType*& listTypeMT__ANONYMOUS_s815) {
  assert ((lst->flag) == (1));;
  MTList*  ma=lst->lst;
  bool  __sa1=(0) < (ma->len);
  int  i101=0;
  while (__sa1) {
    body12((ma->listValues[i101]), poly2, listTypeMT__ANONYMOUS_s815);
    i101 = i101 + 1;
    __sa1 = (i101) < (ma->len);
  }
}
void printMT(int n, char* s/* len = n */, MultiType* v) {if(v->flag == 0){ printf("%s  Int=%d\n", s, v->val); }    if(v->flag == 1){ printf("%s  List len = %d\n", s, v->lst->len);} }
void applyCompOp(MultiType* left, MultiType* right, int compop, bool& _out) {
  _out = 0;
  if ((left->flag) != (right->flag)) {
    _out = 0;
    return;
  }
  if ((compop) == (0)) {
    bool  _out_s86=0;
    applyEQCompOp(left, right, _out_s86);
    _out = _out_s86;
    return;
  } else {
    if ((compop) == (1)) {
      bool  _out_s88=0;
      applyNEQCompOp(left, right, _out_s88);
      _out = _out_s88;
      return;
    } else {
      if ((compop) == (2)) {
        bool  _out_s90=0;
        applyLTCompOp(left, right, _out_s90);
        _out = _out_s90;
        return;
      } else {
        if ((compop) == (3)) {
          bool  _out_s92=0;
          applyLTECompOp(left, right, _out_s92);
          _out = _out_s92;
          return;
        } else {
          if ((compop) == (4)) {
            bool  _out_s94=0;
            applyGTCompOp(left, right, _out_s94);
            _out = _out_s94;
            return;
          } else {
            if ((compop) == (5)) {
              bool  _out_s96=0;
              applyGTECompOp(left, right, _out_s96);
              _out = _out_s96;
              return;
            }
          }
        }
      }
    }
  }
}
void foreach_body01(MultiType* lst, MultiType*& result0, MultiType* poly_list_int1) {
  assert ((lst->flag) == (1));;
  MTList*  ma=lst->lst;
  bool  __sa1=(0) < (ma->len);
  int  i101=0;
  while (__sa1) {
    body01((ma->listValues[i101]), result0, poly_list_int1);
    i101 = i101 + 1;
    __sa1 = (i101) < (ma->len);
  }
}
void body12(MultiType* i, MultiType* poly, MultiType*& listTypeMT__ANONYMOUS_s669) {
  MultiType*  _out_s136=NULL;
  subscriptMTi(poly, i, _out_s136);
  MultiType*  _out_s138=NULL;
  applyBinOp(i, _out_s136, 2, _out_s138);
  appendList(listTypeMT__ANONYMOUS_s669, _out_s138);
}
void applyEQCompOp(MultiType* left, MultiType* right, bool& _out) {
  if ((left->flag) != (right->flag)) {
    _out = 0;
    return;
  }
  if ((left->flag) == (1)) {
    bool  _out_s124=0;
    applyEQCompOpList(left, right, _out_s124);
    _out = _out_s124;
    return;
  }
  if ((left->flag) == (0)) {
    bool  _out_s126=0;
    applyEQCompOpInt(left, right, _out_s126);
    _out = _out_s126;
    return;
  }
  _out = 0;
  return;
}
void applyNEQCompOp(MultiType* left, MultiType* right, bool& _out) {
  bool  _out_s122=0;
  applyEQCompOp(left, right, _out_s122);
  _out = !(_out_s122);
  return;
}
void applyLTCompOp(MultiType* left, MultiType* right, bool& _out) {
  if ((left->flag) == (1)) {
    bool  _out_s100=0;
    applyLTCompOpList(left, right, _out_s100);
    _out = _out_s100;
    return;
  }
  if ((left->flag) == (0)) {
    bool  _out_s102=0;
    applyLTCompOpInt(left, right, _out_s102);
    _out = _out_s102;
    return;
  }
  _out = 0;
  return;
}
void applyLTECompOp(MultiType* left, MultiType* right, bool& _out) {
  if ((left->flag) == (1)) {
    bool  _out_s112=0;
    applyLTECompOpList(left, right, _out_s112);
    _out = _out_s112;
    return;
  }
  if ((left->flag) == (0)) {
    bool  _out_s114=0;
    applyLTECompOpInt(left, right, _out_s114);
    _out = _out_s114;
    return;
  }
  _out = 0;
  return;
}
void applyGTCompOp(MultiType* left, MultiType* right, bool& _out) {
  bool  _out_s110=0;
  applyLTECompOp(left, right, _out_s110);
  _out = !(_out_s110);
  return;
}
void applyGTECompOp(MultiType* left, MultiType* right, bool& _out) {
  bool  _out_s98=0;
  applyLTCompOp(left, right, _out_s98);
  _out = !(_out_s98);
  return;
}
void body01(MultiType* i, MultiType*& result, MultiType* poly_list_int) {
  MultiType*  _out_s42=NULL;
  subscriptMTi(poly_list_int, i, _out_s42);
  MultiType*  _out_s44=NULL;
  applyBinOp(i, _out_s42, 2, _out_s44);
  MultiType*  _out_s46=NULL;
  MultiType* _tt4[1] = {_out_s44};
  applyBinOp(result, MultiType::create(0, 1, MTList::create(1, _tt4, 1), NULL), 0, _out_s46);
  assignMT(result, _out_s46);
}
void subscriptMTi(MultiType* list, MultiType* index, MultiType*& _out) {
  assert ((list->flag) == (1));;
  assert ((index->flag) == (0));;
  assert ((index->val) < (list->lst->len));;
  _out = (list->lst->listValues[index->val]);
  return;
}
void applyBinOp(MultiType* left, MultiType* right, int op, MultiType*& _out) {
  _out = NULL;
  if ((op) == (0)) {
    MultiType*  _out_s56=NULL;
    applyAddBinOp(left, right, _out_s56);
    _out = _out_s56;
    return;
  } else {
    if ((op) == (1)) {
      MultiType*  _out_s58=NULL;
      applySubBinOp(left, right, _out_s58);
      _out = _out_s58;
      return;
    } else {
      if ((op) == (2)) {
        MultiType*  _out_s60=NULL;
        applyMulBinOp(left, right, _out_s60);
        _out = _out_s60;
        return;
      } else {
        if ((op) == (3)) {
          MultiType*  _out_s62=NULL;
          applyDivBinOp(left, right, _out_s62);
          _out = _out_s62;
          return;
        } else {
          if ((op) == (4)) {
            MultiType*  _out_s64=NULL;
            applyPowBinOp(left, right, _out_s64);
            _out = _out_s64;
            return;
          } else {
            if ((op) == (5)) {
              MultiType*  _out_s66=NULL;
              applyModBinOp(left, right, _out_s66);
              _out = _out_s66;
              return;
            }
          }
        }
      }
    }
  }
}
void appendList(MultiType*& left, MultiType* right) {
  assert ((left->flag) == (1));;
  int  newLen=left->lst->len + 1;
  bool  __sa9=(0) < (left->lst->len);
  MultiType**  newListValues= new MultiType* [newLen]; CopyArr<MultiType* >(newListValues,NULL, newLen);
  int  i=0;
  while (__sa9) {
    (newListValues[i]) = (left->lst->listValues[i]);
    i = i + 1;
    __sa9 = (i) < (left->lst->len);
  }
  (newListValues[left->lst->len]) = right;
  left = MultiType::create(0, 1, MTList::create(newLen, newListValues, newLen), NULL);
}
void applyEQCompOpList(MultiType* left, MultiType* right, bool& _out) {
  if ((left->lst->len) != (right->lst->len)) {
    _out = 0;
    return;
  }
  bool  __sa5=(0) < (left->lst->len);
  int  i=0;
  while (__sa5) {
    bool  _out_s128=0;
    applyEQCompOpInt((left->lst->listValues[i]), (right->lst->listValues[i]), _out_s128);
    if (!(_out_s128)) {
      _out = 0;
      return;
    }
    i = i + 1;
    __sa5 = (i) < (left->lst->len);
  }
  _out = 1;
  return;
}
void applyEQCompOpInt(MultiType* left, MultiType* right, bool& _out) {
  _out = (left->val) == (right->val);
  return;
}
void applyLTCompOpList(MultiType* left, MultiType* right, bool& _out) {
  int  __sa6_s104=0;
  min(right->lst->len, left->lst->len, __sa6_s104);
  bool  __sa6=0;
  __sa6 = (0) < (__sa6_s104);
  int  i=0;
  while (__sa6) {
    bool  _out_s106=0;
    applyLTCompOpInt((left->lst->listValues[i]), (right->lst->listValues[i]), _out_s106);
    if (!(_out_s106)) {
      _out = 0;
      return;
    }
    i = i + 1;
    int  __sa6_s108=0;
    min(right->lst->len, left->lst->len, __sa6_s108);
    __sa6 = (i) < (__sa6_s108);
  }
  _out = 1;
  return;
}
void applyLTCompOpInt(MultiType* left, MultiType* right, bool& _out) {
  _out = (left->val) < (right->val);
  return;
}
void applyLTECompOpList(MultiType* left, MultiType* right, bool& _out) {
  int  __sa7_s116=0;
  min(right->lst->len, left->lst->len, __sa7_s116);
  bool  __sa7=0;
  __sa7 = (0) < (__sa7_s116);
  int  i=0;
  while (__sa7) {
    bool  _out_s118=0;
    applyLTECompOpInt((left->lst->listValues[i]), (right->lst->listValues[i]), _out_s118);
    if (!(_out_s118)) {
      _out = 0;
      return;
    }
    i = i + 1;
    int  __sa7_s120=0;
    min(right->lst->len, left->lst->len, __sa7_s120);
    __sa7 = (i) < (__sa7_s120);
  }
  _out = 1;
  return;
}
void applyLTECompOpInt(MultiType* left, MultiType* right, bool& _out) {
  _out = (left->val) <= (right->val);
  return;
}
void applyAddBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  _out = NULL;
  assert ((left->flag) == (right->flag));;
  if ((left->flag) == (0)) {
    _out = MultiType::create(left->val + right->val, 0, NULL, NULL);
    return;
  } else {
    if ((left->flag) == (1)) {
      int  newLen=left->lst->len + right->lst->len;
      MultiType**  newListValues= new MultiType* [newLen]; CopyArr<MultiType* >(newListValues,left->lst->listValues, newLen, left->lst->len);
      bool  __sa4=(0) < (right->lst->len);
      int  i=0;
      while (__sa4) {
        (newListValues[i + left->lst->len]) = (right->lst->listValues[i]);
        i = i + 1;
        __sa4 = (i) < (right->lst->len);
      }
      _out = MultiType::create(0, 1, MTList::create(newLen, newListValues, newLen), NULL);
      delete[] newListValues;
      return;
    }
  }
}
void applySubBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  assert ((left->flag) == (0));;
  assert ((right->flag) == (0));;
  _out = MultiType::create(left->val - right->val, 0, NULL, NULL);
  return;
}
void applyMulBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  _out = NULL;
  if (((left->flag) == (0)) && ((right->flag) == (0))) {
    MultiType*  _out_s74=NULL;
    applyMulBinOpInt(left, right, _out_s74);
    _out = _out_s74;
    return;
  }
  if (((left->flag) == (1)) && ((right->flag) == (0))) {
    MultiType*  _out_s76=NULL;
    applyMulBinOpList(left, right, _out_s76);
    _out = _out_s76;
    return;
  }
  if (((left->flag) == (0)) && ((right->flag) == (1))) {
    MultiType*  _out_s78=NULL;
    applyMulBinOpList(right, left, _out_s78);
    _out = _out_s78;
    return;
  }
  assert (0);;
}
void applyDivBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  assert ((left->flag) == (0));;
  assert ((right->flag) == (0));;
  int  _out_s72=0;
  intDiv(left->val, right->val, _out_s72);
  _out = MultiType::create(_out_s72, 0, NULL, NULL);
  return;
}
void applyPowBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  assert ((left->flag) == (0));;
  assert ((right->flag) == (0));;
  int  _out_s70=0;
  intPow(left->val, right->val, _out_s70);
  _out = MultiType::create(_out_s70, 0, NULL, NULL);
  return;
}
void applyModBinOp(MultiType* left, MultiType* right, MultiType*& _out) {
  assert ((left->flag) == (0));;
  assert ((right->flag) == (0));;
  int  _out_s68=0;
  intMod(left->val, right->val, _out_s68);
  _out = MultiType::create(_out_s68, 0, NULL, NULL);
  return;
}
void min(int a, int b, int& _out) {
  if ((a) >= (b)) {
    _out = b;
    return;
  } else {
    _out = a;
    return;
  }
}
void applyMulBinOpInt(MultiType* left, MultiType* right, MultiType*& _out) {
  int  _out_s80=0;
  intMul(left->val, right->val, _out_s80);
  _out = MultiType::create(_out_s80, 0, NULL, NULL);
  return;
}
void applyMulBinOpList(MultiType* left, MultiType* right, MultiType*& _out) {
  if ((right->val) == (0)) {
    _out = MultiType::create(0, 1, MTList::create(0, (MultiType** )NULL, 0), NULL);
    return;
  }
  int  newLen=left->lst->len * right->val;
  MultiType**  newListValues= new MultiType* [newLen]; CopyArr<MultiType* >(newListValues,NULL, newLen);
  int  count=0;
  for (int  i=0;(i) < (newLen);i = i + 1){
    (newListValues[i]) = (left->lst->listValues[count]);
    count = count + 1;
    if ((count) == (left->lst->len)) {
      count = 0;
    }
  }
  _out = MultiType::create(0, 1, MTList::create(newLen, newListValues, newLen), NULL);
  delete[] newListValues;
  return;
}
void intMod(int x, int y, int& _out) {
  _out = x % y;
  return;
}
void intMul(int x, int y, int& _out) {
  if ((x) > (y)) {
    int  _out_s82=0;
    intMul1(x, y, _out_s82);
    _out = _out_s82;
    return;
  } else {
    int  _out_s84=0;
    intMul1(y, x, _out_s84);
    _out = _out_s84;
    return;
  }
}
void intPow(int x, int y, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void intDiv(int x, int y, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void intMul1(int x, int y, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
