#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb886.h"
namespace ANONYMOUS{

template<typename T>
Node<T>* Node<T>::create(T  val_, Tree<T > *  left_, Tree<T > *  right_){
  void* temp= malloc( sizeof(Node<T>)  ); 
  Node<T>* rv = new (temp)Node<T>();
  rv->val =  val_;
  rv->left =  left_;
  rv->right =  right_;
  rv->type= Tree<T>::NODE_type;
  return rv;
}
template<typename T>
Nil<T>* Nil<T>::create(){
  void* temp= malloc( sizeof(Nil<T>)  ); 
  Nil<T>* rv = new (temp)Nil<T>();
  rv->type= Tree<T>::NIL_type;
  return rv;
}
Plus* Plus::create(AST*  left_, AST*  right_, int  id_){
  void* temp= malloc( sizeof(Plus)  ); 
  Plus* rv = new (temp)Plus();
  rv->left =  left_;
  rv->right =  right_;
  rv->id =  id_;
  rv->type= AST::PLUS_type;
  return rv;
}
Minus* Minus::create(AST*  left_, AST*  right_, int  id_){
  void* temp= malloc( sizeof(Minus)  ); 
  Minus* rv = new (temp)Minus();
  rv->left =  left_;
  rv->right =  right_;
  rv->id =  id_;
  rv->type= AST::MINUS_type;
  return rv;
}
Const* Const::create(int  n_, int  id_){
  void* temp= malloc( sizeof(Const)  ); 
  Const* rv = new (temp)Const();
  rv->n =  n_;
  rv->id =  id_;
  rv->type= AST::CONST_type;
  return rv;
}
None* None::create(int  id_){
  void* temp= malloc( sizeof(None)  ); 
  None* rv = new (temp)None();
  rv->id =  id_;
  rv->type= AST::NONE_type;
  return rv;
}
void main__Wrapper() {
  int  ID__ANONYMOUS_s99=0;
  glblInit_ID__ANONYMOUS_s104(ID__ANONYMOUS_s99);
  Tree<AST* > *  set__ANONYMOUS_s100=NULL;
  _main(ID__ANONYMOUS_s99, set__ANONYMOUS_s100);
}
void main__WrapperNospec() {}
void glblInit_ID__ANONYMOUS_s104(int& ID__ANONYMOUS_s103) {
  ID__ANONYMOUS_s103 = 0;
}
void _main(int& ID__ANONYMOUS_s101, Tree<AST* > *& set__ANONYMOUS_s96) {
  int  uo_s4=ID__ANONYMOUS_s101;
  ID__ANONYMOUS_s101 = ID__ANONYMOUS_s101 + 1;
  AST*  n1_s18=Const::create(5, uo_s4);
  Tree<AST* > *  nil=Nil<AST* >::create();
  Tree<AST* > *  _out_s74=NULL;
  _out_s74 = Node<AST* >::create(n1_s18, nil, nil);
  int  uo_s4_0=ID__ANONYMOUS_s101;
  ID__ANONYMOUS_s101 = ID__ANONYMOUS_s101 + 1;
  AST*  n1_s22=Const::create(7, uo_s4_0);
  Tree<AST* > *  _out_s74_0=NULL;
  Node<AST* > *  _out_s74_1c_1c=((Node<AST* > *)(_out_s74));
  Tree<AST* > *  nil_0=Nil<AST* >::create();
  Tree<AST* > *  _out_s90=NULL;
  _out_s90 = Node<AST* >::create(n1_s22, nil_0, nil_0);
  _out_s74_0 = Node<AST* >::create(_out_s74_1c_1c->val, _out_s74_1c_1c->left, _out_s90);
  int  uo_s5=ID__ANONYMOUS_s101;
  ID__ANONYMOUS_s101 = ID__ANONYMOUS_s101 + 1;
  AST*  n1_s26=Plus::create(n1_s18, n1_s22, uo_s5);
  Tree<AST* > *  _out_s74_1=NULL;
  Node<AST* > *  _out_s74_44_44=((Node<AST* > *)(_out_s74_0));
  Tree<AST* > *  nil_1=Nil<AST* >::create();
  Tree<AST* > *  _out_s92=NULL;
  _out_s92 = Node<AST* >::create(n1_s26, nil_1, nil_1);
  _out_s74_1 = Node<AST* >::create(_out_s74_44_44->val, _out_s92, _out_s74_44_44->right);
  set__ANONYMOUS_s96 = _out_s74_1;
  int  uo_s4_1=ID__ANONYMOUS_s101;
  ID__ANONYMOUS_s101 = ID__ANONYMOUS_s101 + 1;
  AST*  n1_s30=Const::create(8, uo_s4_1);
  int  uo_s5_0=ID__ANONYMOUS_s101;
  ID__ANONYMOUS_s101 = ID__ANONYMOUS_s101 + 1;
  AST*  n1_s32=Plus::create(n1_s26, n1_s30, uo_s5_0);
  AST*  deflt=None::create(0);
  AST*  _out_s76=NULL;
  Node<AST* > *  _out_s74_7a_7a=((Node<AST* > *)(_out_s74_1));
  Tree<AST* > *  t=_out_s74_7a_7a->left;
  AST*  _out_s84=NULL;
  bool  _has_out_=0;
  Node<AST* > *  t_ab_ab=((Node<AST* > *)(t));
  AST*  a=t_ab_ab->val;
  bool  _out_s78=0;
  Plus*  a_b0_b0=((Plus*)(a));
  Plus*  n1_s32_90_90=((Plus*)(n1_s32));
  _out_s78 = ((a_b0_b0->left->id) == (n1_s32_90_90->left->id)) && ((a_b0_b0->right->id) == (n1_s32_90_90->right->id));
  if (_out_s78) {
    _out_s84 = t_ab_ab->val;
    _has_out_ = 1;
  }
  bool  _out_s80=0;
  if ((_has_out_) == (0)) {
    AST*  a_0=t_ab_ab->val;
    Plus*  a_b4_b4=((Plus*)(a_0));
    Plus*  n1_s32_90_90_0=((Plus*)(n1_s32));
    _out_s80 = ((a_b4_b4->left->id) < (n1_s32_90_90_0->left->id)) || (((a_b4_b4->left->id) == (n1_s32_90_90_0->left->id)) && ((a_b4_b4->right->id) < (n1_s32_90_90_0->right->id)));
  }
  if ((_has_out_) == (0)) {
    if (_out_s80) {
      AST*  _out_s82=NULL;
      _out_s82 = deflt;
      _out_s84 = _out_s82;
    } else {
      AST*  _out_s84__0=NULL;
      _out_s84__0 = deflt;
      _out_s84 = _out_s84__0;
    }
  }
  _out_s76 = _out_s84;
  bool  _out_s70=0;
  equals_AST_s0(_out_s76, None::create(0), 6, _out_s70);
  AST*  n1_s34=NULL;
  if (_out_s70) {
    Tree<AST* > *  _out_s74_2=NULL;
    Node<AST* > *  _out_s74_7a_7a_0=((Node<AST* > *)(_out_s74_1));
    Tree<AST* > *  t_0=_out_s74_7a_7a_0->left;
    Tree<AST* > *  _out_s92_0=NULL;
    bool  _has_out__0=0;
    Node<AST* > *  t_d4_d4=((Node<AST* > *)(t_0));
    AST*  a_1=t_d4_d4->val;
    bool  _out_s86=0;
    Plus*  a_d9_d9=((Plus*)(a_1));
    Plus*  n1_s32_90_90_1=((Plus*)(n1_s32));
    _out_s86 = ((a_d9_d9->left->id) == (n1_s32_90_90_1->left->id)) && ((a_d9_d9->right->id) == (n1_s32_90_90_1->right->id));
    if (_out_s86) {
      _out_s92_0 = t_d4_d4;
      _has_out__0 = 1;
    }
    bool  _out_s88=0;
    if ((_has_out__0) == (0)) {
      AST*  a_2=t_d4_d4->val;
      Plus*  a_dd_dd=((Plus*)(a_2));
      Plus*  n1_s32_90_90_2=((Plus*)(n1_s32));
      _out_s88 = ((a_dd_dd->left->id) < (n1_s32_90_90_2->left->id)) || (((a_dd_dd->left->id) == (n1_s32_90_90_2->left->id)) && ((a_dd_dd->right->id) < (n1_s32_90_90_2->right->id)));
    }
    if ((_has_out__0) == (0)) {
      if (_out_s88) {
        Tree<AST* > *  nil_2=Nil<AST* >::create();
        Tree<AST* > *  _out_s90_0=NULL;
        _out_s90_0 = Node<AST* >::create(n1_s32, nil_2, nil_2);
        _out_s92_0 = Node<AST* >::create(t_d4_d4->val, t_d4_d4->left, _out_s90_0);
      } else {
        Tree<AST* > *  nil_3=Nil<AST* >::create();
        Tree<AST* > *  _out_s92__0=NULL;
        _out_s92__0 = Node<AST* >::create(n1_s32, nil_3, nil_3);
        _out_s92_0 = Node<AST* >::create(t_d4_d4->val, _out_s92__0, t_d4_d4->right);
      }
    }
    _out_s74_2 = Node<AST* >::create(_out_s74_7a_7a_0->val, _out_s92_0, _out_s74_7a_7a_0->right);
    set__ANONYMOUS_s96 = _out_s74_2;
    n1_s34 = n1_s32;
  } else {
    n1_s34 = _out_s76;
  }
  ID__ANONYMOUS_s101 = ID__ANONYMOUS_s101 + 1;
  AST*  _out_s76_0=NULL;
  Node<AST* > *  set__ANONYMOUS_s96_4_4=((Node<AST* > *)(set__ANONYMOUS_s96));
  _out_s76_0 = set__ANONYMOUS_s96_4_4->val;
  ID__ANONYMOUS_s101 = ID__ANONYMOUS_s101 + 1;
  AST*  _out_s76_1=NULL;
  Node<AST* > *  set__ANONYMOUS_s96_4_4_0=((Node<AST* > *)(set__ANONYMOUS_s96));
  Tree<AST* > *  t_1=set__ANONYMOUS_s96_4_4_0->right;
  AST*  _out_s82_0=NULL;
  Node<AST* > *  t_11c_11c=((Node<AST* > *)(t_1));
  _out_s82_0 = t_11c_11c->val;
  _out_s76_1 = _out_s82_0;
  int  uo_s5_1=ID__ANONYMOUS_s101;
  ID__ANONYMOUS_s101 = ID__ANONYMOUS_s101 + 1;
  AST*  n2_s44=Plus::create(_out_s76_0, _out_s76_1, uo_s5_1);
  AST*  deflt_0=None::create(0);
  AST*  _out_s76_2=NULL;
  Node<AST* > *  set__ANONYMOUS_s96_4_4_1=((Node<AST* > *)(set__ANONYMOUS_s96));
  Tree<AST* > *  t_2=set__ANONYMOUS_s96_4_4_1->left;
  AST*  _out_s84_0=NULL;
  bool  _has_out__1=0;
  switch(t_2->type){
  case Nil<AST* >::NIL_type:
    {
    Nil<AST* > *  _t_2 = (Nil<AST* > * )  t_2;

    _out_s84_0 = deflt_0;
  
    break;
  }
  case Node<AST* >::NODE_type:
    {
    Node<AST* > *  _t_2 = (Node<AST* > * )  t_2;

    AST*  a_3=_t_2->val;
    bool  _out_s78_0=0;
    switch(a_3->type){
    case Plus::PLUS_type:
        {
        Plus*  _a_3 = (Plus* )  a_3;

      Plus*  n2_s44_126_126=((Plus*)(n2_s44));
      _out_s78_0 = ((_a_3->left->id) == (n2_s44_126_126->left->id)) && ((_a_3->right->id) == (n2_s44_126_126->right->id));
    
        break;
    }
    case Minus::MINUS_type:
        {
        Minus*  _a_3 = (Minus* )  a_3;

      _out_s78_0 = 0;
    
        break;
    }
    case Const::CONST_type:
        {
        Const*  _a_3 = (Const* )  a_3;

      _out_s78_0 = 0;
    
        break;
    }
    case None::NONE_type:
        {
        None*  _a_3 = (None* )  a_3;

      _out_s78_0 = 0;
    
        break;
    }

 }
    if (_out_s78_0) {
      _out_s84_0 = _t_2->val;
      _has_out__1 = 1;
    }
    bool  _out_s80_0=0;
    if ((_has_out__1) == (0)) {
      AST*  a_4=_t_2->val;
      switch(a_4->type){
      case Plus::PLUS_type:
            {
            Plus*  _a_4 = (Plus* )  a_4;

        Plus*  n2_s44_126_126_0=((Plus*)(n2_s44));
        _out_s80_0 = ((_a_4->left->id) < (n2_s44_126_126_0->left->id)) || (((_a_4->left->id) == (n2_s44_126_126_0->left->id)) && ((_a_4->right->id) < (n2_s44_126_126_0->right->id)));
      
            break;
      }
      case Minus::MINUS_type:
            {
            Minus*  _a_4 = (Minus* )  a_4;

        _out_s80_0 = 0;
      
            break;
      }
      case Const::CONST_type:
            {
            Const*  _a_4 = (Const* )  a_4;

        _out_s80_0 = 0;
      
            break;
      }
      case None::NONE_type:
            {
            None*  _a_4 = (None* )  a_4;

        _out_s80_0 = 0;
      
            break;
      }

 }
    }
    if ((_has_out__1) == (0)) {
      if (_out_s80_0) {
        Tree<AST* > *  t_3=_t_2->right;
        AST*  _out_s82_1=NULL;
        bool  _has_out__2=0;
        switch(t_3->type){
        case Nil<AST* >::NIL_type:
                {
                Nil<AST* > *  _t_3 = (Nil<AST* > * )  t_3;

          _out_s82_1 = deflt_0;
        
                break;
        }
        case Node<AST* >::NODE_type:
                {
                Node<AST* > *  _t_3 = (Node<AST* > * )  t_3;

          AST*  a_5=_t_3->val;
          bool  _out_s78_1=0;
          switch(a_5->type){
          case Plus::PLUS_type:
                    {
                    Plus*  _a_5 = (Plus* )  a_5;

            Plus*  n2_s44_126_126_1=((Plus*)(n2_s44));
            _out_s78_1 = ((_a_5->left->id) == (n2_s44_126_126_1->left->id)) && ((_a_5->right->id) == (n2_s44_126_126_1->right->id));
          
                    break;
          }
          case Minus::MINUS_type:
                    {
                    Minus*  _a_5 = (Minus* )  a_5;

            _out_s78_1 = 0;
          
                    break;
          }
          case Const::CONST_type:
                    {
                    Const*  _a_5 = (Const* )  a_5;

            _out_s78_1 = 0;
          
                    break;
          }
          case None::NONE_type:
                    {
                    None*  _a_5 = (None* )  a_5;

            _out_s78_1 = 0;
          
                    break;
          }

 }
          if (_out_s78_1) {
            _out_s82_1 = _t_3->val;
            _has_out__2 = 1;
          }
          bool  _out_s80_1=0;
          if ((_has_out__2) == (0)) {
            AST*  a_6=_t_3->val;
            switch(a_6->type){
            case Plus::PLUS_type:
                        {
                        Plus*  _a_6 = (Plus* )  a_6;

              Plus*  n2_s44_126_126_2=((Plus*)(n2_s44));
              _out_s80_1 = ((_a_6->left->id) < (n2_s44_126_126_2->left->id)) || (((_a_6->left->id) == (n2_s44_126_126_2->left->id)) && ((_a_6->right->id) < (n2_s44_126_126_2->right->id)));
            
                        break;
            }
            case Minus::MINUS_type:
                        {
                        Minus*  _a_6 = (Minus* )  a_6;

              _out_s80_1 = 0;
            
                        break;
            }
            case Const::CONST_type:
                        {
                        Const*  _a_6 = (Const* )  a_6;

              _out_s80_1 = 0;
            
                        break;
            }
            case None::NONE_type:
                        {
                        None*  _a_6 = (None* )  a_6;

              _out_s80_1 = 0;
            
                        break;
            }

 }
          }
          if ((_has_out__2) == (0)) {
            if (_out_s80_1) {
              Tree<AST* > *  t_4=_t_3->right;
              AST*  _out_s82__0=NULL;
              bool  _has_out__3=0;
              switch(t_4->type){
              case Nil<AST* >::NIL_type:
                            {
                            Nil<AST* > *  _t_4 = (Nil<AST* > * )  t_4;

                _out_s82__0 = deflt_0;
              
                            break;
              }
              case Node<AST* >::NODE_type:
                            {
                            Node<AST* > *  _t_4 = (Node<AST* > * )  t_4;

                AST*  a_7=_t_4->val;
                bool  _out_s78_2=0;
                switch(a_7->type){
                case Plus::PLUS_type:
                                {
                                Plus*  _a_7 = (Plus* )  a_7;

                  Plus*  n2_s44_126_126_3=((Plus*)(n2_s44));
                  _out_s78_2 = ((_a_7->left->id) == (n2_s44_126_126_3->left->id)) && ((_a_7->right->id) == (n2_s44_126_126_3->right->id));
                
                                break;
                }
                case Minus::MINUS_type:
                                {
                                Minus*  _a_7 = (Minus* )  a_7;

                  _out_s78_2 = 0;
                
                                break;
                }
                case Const::CONST_type:
                                {
                                Const*  _a_7 = (Const* )  a_7;

                  _out_s78_2 = 0;
                
                                break;
                }
                case None::NONE_type:
                                {
                                None*  _a_7 = (None* )  a_7;

                  _out_s78_2 = 0;
                
                                break;
                }

 }
                if (_out_s78_2) {
                  _out_s82__0 = _t_4->val;
                  _has_out__3 = 1;
                }
                bool  _out_s80_2=0;
                if ((_has_out__3) == (0)) {
                  AST*  a_8=_t_4->val;
                  switch(a_8->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_8 = (Plus* )  a_8;

                    Plus*  n2_s44_126_126_4=((Plus*)(n2_s44));
                    _out_s80_2 = ((_a_8->left->id) < (n2_s44_126_126_4->left->id)) || (((_a_8->left->id) == (n2_s44_126_126_4->left->id)) && ((_a_8->right->id) < (n2_s44_126_126_4->right->id)));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_8 = (Minus* )  a_8;

                    _out_s80_2 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_8 = (Const* )  a_8;

                    _out_s80_2 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_8 = (None* )  a_8;

                    _out_s80_2 = 0;
                  
                                    break;
                  }

 }
                }
                if ((_has_out__3) == (0)) {
                  if (_out_s80_2) {
                    Tree<AST* > *  t_5=_t_4->right;
                    AST*  _out_s82_2=NULL;
                    bool  _has_out__4=0;
                    switch(t_5->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_5 = (Nil<AST* > * )  t_5;

                      _out_s82_2 = deflt_0;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_5 = (Node<AST* > * )  t_5;

                      AST*  a_9=_t_5->val;
                      bool  _out_s78_3=0;
                      switch(a_9->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_9 = (Plus* )  a_9;

                        Plus*  n2_s44_126_126_5=((Plus*)(n2_s44));
                        _out_s78_3 = ((_a_9->left->id) == (n2_s44_126_126_5->left->id)) && ((_a_9->right->id) == (n2_s44_126_126_5->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_9 = (Minus* )  a_9;

                        _out_s78_3 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_9 = (Const* )  a_9;

                        _out_s78_3 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_9 = (None* )  a_9;

                        _out_s78_3 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_3) {
                        _out_s82_2 = _t_5->val;
                        _has_out__4 = 1;
                      }
                      assert (!((_has_out__4) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s82__0 = _out_s82_2;
                  } else {
                    Tree<AST* > *  t_6=_t_4->left;
                    AST*  _out_s84_1=NULL;
                    bool  _has_out__5=0;
                    switch(t_6->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_6 = (Nil<AST* > * )  t_6;

                      _out_s84_1 = deflt_0;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_6 = (Node<AST* > * )  t_6;

                      AST*  a_10=_t_6->val;
                      bool  _out_s78_4=0;
                      switch(a_10->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_10 = (Plus* )  a_10;

                        Plus*  n2_s44_126_126_6=((Plus*)(n2_s44));
                        _out_s78_4 = ((_a_10->left->id) == (n2_s44_126_126_6->left->id)) && ((_a_10->right->id) == (n2_s44_126_126_6->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_10 = (Minus* )  a_10;

                        _out_s78_4 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_10 = (Const* )  a_10;

                        _out_s78_4 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_10 = (None* )  a_10;

                        _out_s78_4 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_4) {
                        _out_s84_1 = _t_6->val;
                        _has_out__5 = 1;
                      }
                      assert (!((_has_out__5) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s82__0 = _out_s84_1;
                  }
                }
              
                            break;
              }

 }
              _out_s82_1 = _out_s82__0;
            } else {
              Tree<AST* > *  t_7=_t_3->left;
              AST*  _out_s84_2=NULL;
              bool  _has_out__6=0;
              switch(t_7->type){
              case Nil<AST* >::NIL_type:
                            {
                            Nil<AST* > *  _t_7 = (Nil<AST* > * )  t_7;

                _out_s84_2 = deflt_0;
              
                            break;
              }
              case Node<AST* >::NODE_type:
                            {
                            Node<AST* > *  _t_7 = (Node<AST* > * )  t_7;

                AST*  a_11=_t_7->val;
                bool  _out_s78_5=0;
                switch(a_11->type){
                case Plus::PLUS_type:
                                {
                                Plus*  _a_11 = (Plus* )  a_11;

                  Plus*  n2_s44_126_126_7=((Plus*)(n2_s44));
                  _out_s78_5 = ((_a_11->left->id) == (n2_s44_126_126_7->left->id)) && ((_a_11->right->id) == (n2_s44_126_126_7->right->id));
                
                                break;
                }
                case Minus::MINUS_type:
                                {
                                Minus*  _a_11 = (Minus* )  a_11;

                  _out_s78_5 = 0;
                
                                break;
                }
                case Const::CONST_type:
                                {
                                Const*  _a_11 = (Const* )  a_11;

                  _out_s78_5 = 0;
                
                                break;
                }
                case None::NONE_type:
                                {
                                None*  _a_11 = (None* )  a_11;

                  _out_s78_5 = 0;
                
                                break;
                }

 }
                if (_out_s78_5) {
                  _out_s84_2 = _t_7->val;
                  _has_out__6 = 1;
                }
                bool  _out_s80_3=0;
                if ((_has_out__6) == (0)) {
                  AST*  a_12=_t_7->val;
                  switch(a_12->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_12 = (Plus* )  a_12;

                    Plus*  n2_s44_126_126_8=((Plus*)(n2_s44));
                    _out_s80_3 = ((_a_12->left->id) < (n2_s44_126_126_8->left->id)) || (((_a_12->left->id) == (n2_s44_126_126_8->left->id)) && ((_a_12->right->id) < (n2_s44_126_126_8->right->id)));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_12 = (Minus* )  a_12;

                    _out_s80_3 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_12 = (Const* )  a_12;

                    _out_s80_3 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_12 = (None* )  a_12;

                    _out_s80_3 = 0;
                  
                                    break;
                  }

 }
                }
                if ((_has_out__6) == (0)) {
                  if (_out_s80_3) {
                    Tree<AST* > *  t_8=_t_7->right;
                    AST*  _out_s82_3=NULL;
                    bool  _has_out__7=0;
                    switch(t_8->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_8 = (Nil<AST* > * )  t_8;

                      _out_s82_3 = deflt_0;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_8 = (Node<AST* > * )  t_8;

                      AST*  a_13=_t_8->val;
                      bool  _out_s78_6=0;
                      switch(a_13->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_13 = (Plus* )  a_13;

                        Plus*  n2_s44_126_126_9=((Plus*)(n2_s44));
                        _out_s78_6 = ((_a_13->left->id) == (n2_s44_126_126_9->left->id)) && ((_a_13->right->id) == (n2_s44_126_126_9->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_13 = (Minus* )  a_13;

                        _out_s78_6 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_13 = (Const* )  a_13;

                        _out_s78_6 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_13 = (None* )  a_13;

                        _out_s78_6 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_6) {
                        _out_s82_3 = _t_8->val;
                        _has_out__7 = 1;
                      }
                      assert (!((_has_out__7) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s84_2 = _out_s82_3;
                  } else {
                    Tree<AST* > *  t_9=_t_7->left;
                    AST*  _out_s84__0_0=NULL;
                    bool  _has_out__8=0;
                    switch(t_9->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_9 = (Nil<AST* > * )  t_9;

                      _out_s84__0_0 = deflt_0;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_9 = (Node<AST* > * )  t_9;

                      AST*  a_14=_t_9->val;
                      bool  _out_s78_7=0;
                      switch(a_14->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_14 = (Plus* )  a_14;

                        Plus*  n2_s44_126_126_10=((Plus*)(n2_s44));
                        _out_s78_7 = ((_a_14->left->id) == (n2_s44_126_126_10->left->id)) && ((_a_14->right->id) == (n2_s44_126_126_10->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_14 = (Minus* )  a_14;

                        _out_s78_7 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_14 = (Const* )  a_14;

                        _out_s78_7 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_14 = (None* )  a_14;

                        _out_s78_7 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_7) {
                        _out_s84__0_0 = _t_9->val;
                        _has_out__8 = 1;
                      }
                      assert (!((_has_out__8) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s84_2 = _out_s84__0_0;
                  }
                }
              
                            break;
              }

 }
              _out_s82_1 = _out_s84_2;
            }
          }
        
                break;
        }

 }
        _out_s84_0 = _out_s82_1;
      } else {
        Tree<AST* > *  t_10=_t_2->left;
        AST*  _out_s84__0_1=NULL;
        bool  _has_out__9=0;
        switch(t_10->type){
        case Nil<AST* >::NIL_type:
                {
                Nil<AST* > *  _t_10 = (Nil<AST* > * )  t_10;

          _out_s84__0_1 = deflt_0;
        
                break;
        }
        case Node<AST* >::NODE_type:
                {
                Node<AST* > *  _t_10 = (Node<AST* > * )  t_10;

          AST*  a_15=_t_10->val;
          bool  _out_s78_8=0;
          switch(a_15->type){
          case Plus::PLUS_type:
                    {
                    Plus*  _a_15 = (Plus* )  a_15;

            Plus*  n2_s44_126_126_11=((Plus*)(n2_s44));
            _out_s78_8 = ((_a_15->left->id) == (n2_s44_126_126_11->left->id)) && ((_a_15->right->id) == (n2_s44_126_126_11->right->id));
          
                    break;
          }
          case Minus::MINUS_type:
                    {
                    Minus*  _a_15 = (Minus* )  a_15;

            _out_s78_8 = 0;
          
                    break;
          }
          case Const::CONST_type:
                    {
                    Const*  _a_15 = (Const* )  a_15;

            _out_s78_8 = 0;
          
                    break;
          }
          case None::NONE_type:
                    {
                    None*  _a_15 = (None* )  a_15;

            _out_s78_8 = 0;
          
                    break;
          }

 }
          if (_out_s78_8) {
            _out_s84__0_1 = _t_10->val;
            _has_out__9 = 1;
          }
          bool  _out_s80_4=0;
          if ((_has_out__9) == (0)) {
            AST*  a_16=_t_10->val;
            switch(a_16->type){
            case Plus::PLUS_type:
                        {
                        Plus*  _a_16 = (Plus* )  a_16;

              Plus*  n2_s44_126_126_12=((Plus*)(n2_s44));
              _out_s80_4 = ((_a_16->left->id) < (n2_s44_126_126_12->left->id)) || (((_a_16->left->id) == (n2_s44_126_126_12->left->id)) && ((_a_16->right->id) < (n2_s44_126_126_12->right->id)));
            
                        break;
            }
            case Minus::MINUS_type:
                        {
                        Minus*  _a_16 = (Minus* )  a_16;

              _out_s80_4 = 0;
            
                        break;
            }
            case Const::CONST_type:
                        {
                        Const*  _a_16 = (Const* )  a_16;

              _out_s80_4 = 0;
            
                        break;
            }
            case None::NONE_type:
                        {
                        None*  _a_16 = (None* )  a_16;

              _out_s80_4 = 0;
            
                        break;
            }

 }
          }
          if ((_has_out__9) == (0)) {
            if (_out_s80_4) {
              Tree<AST* > *  t_11=_t_10->right;
              AST*  _out_s82_4=NULL;
              bool  _has_out__10=0;
              switch(t_11->type){
              case Nil<AST* >::NIL_type:
                            {
                            Nil<AST* > *  _t_11 = (Nil<AST* > * )  t_11;

                _out_s82_4 = deflt_0;
              
                            break;
              }
              case Node<AST* >::NODE_type:
                            {
                            Node<AST* > *  _t_11 = (Node<AST* > * )  t_11;

                AST*  a_17=_t_11->val;
                bool  _out_s78_9=0;
                switch(a_17->type){
                case Plus::PLUS_type:
                                {
                                Plus*  _a_17 = (Plus* )  a_17;

                  Plus*  n2_s44_126_126_13=((Plus*)(n2_s44));
                  _out_s78_9 = ((_a_17->left->id) == (n2_s44_126_126_13->left->id)) && ((_a_17->right->id) == (n2_s44_126_126_13->right->id));
                
                                break;
                }
                case Minus::MINUS_type:
                                {
                                Minus*  _a_17 = (Minus* )  a_17;

                  _out_s78_9 = 0;
                
                                break;
                }
                case Const::CONST_type:
                                {
                                Const*  _a_17 = (Const* )  a_17;

                  _out_s78_9 = 0;
                
                                break;
                }
                case None::NONE_type:
                                {
                                None*  _a_17 = (None* )  a_17;

                  _out_s78_9 = 0;
                
                                break;
                }

 }
                if (_out_s78_9) {
                  _out_s82_4 = _t_11->val;
                  _has_out__10 = 1;
                }
                bool  _out_s80_5=0;
                if ((_has_out__10) == (0)) {
                  AST*  a_18=_t_11->val;
                  switch(a_18->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_18 = (Plus* )  a_18;

                    Plus*  n2_s44_126_126_14=((Plus*)(n2_s44));
                    _out_s80_5 = ((_a_18->left->id) < (n2_s44_126_126_14->left->id)) || (((_a_18->left->id) == (n2_s44_126_126_14->left->id)) && ((_a_18->right->id) < (n2_s44_126_126_14->right->id)));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_18 = (Minus* )  a_18;

                    _out_s80_5 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_18 = (Const* )  a_18;

                    _out_s80_5 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_18 = (None* )  a_18;

                    _out_s80_5 = 0;
                  
                                    break;
                  }

 }
                }
                if ((_has_out__10) == (0)) {
                  if (_out_s80_5) {
                    Tree<AST* > *  t_12=_t_11->right;
                    AST*  _out_s82__0_0=NULL;
                    bool  _has_out__11=0;
                    switch(t_12->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_12 = (Nil<AST* > * )  t_12;

                      _out_s82__0_0 = deflt_0;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_12 = (Node<AST* > * )  t_12;

                      AST*  a_19=_t_12->val;
                      bool  _out_s78_10=0;
                      switch(a_19->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_19 = (Plus* )  a_19;

                        Plus*  n2_s44_126_126_15=((Plus*)(n2_s44));
                        _out_s78_10 = ((_a_19->left->id) == (n2_s44_126_126_15->left->id)) && ((_a_19->right->id) == (n2_s44_126_126_15->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_19 = (Minus* )  a_19;

                        _out_s78_10 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_19 = (Const* )  a_19;

                        _out_s78_10 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_19 = (None* )  a_19;

                        _out_s78_10 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_10) {
                        _out_s82__0_0 = _t_12->val;
                        _has_out__11 = 1;
                      }
                      assert (!((_has_out__11) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s82_4 = _out_s82__0_0;
                  } else {
                    Tree<AST* > *  t_13=_t_11->left;
                    AST*  _out_s84_3=NULL;
                    bool  _has_out__12=0;
                    switch(t_13->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_13 = (Nil<AST* > * )  t_13;

                      _out_s84_3 = deflt_0;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_13 = (Node<AST* > * )  t_13;

                      AST*  a_20=_t_13->val;
                      bool  _out_s78_11=0;
                      switch(a_20->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_20 = (Plus* )  a_20;

                        Plus*  n2_s44_126_126_16=((Plus*)(n2_s44));
                        _out_s78_11 = ((_a_20->left->id) == (n2_s44_126_126_16->left->id)) && ((_a_20->right->id) == (n2_s44_126_126_16->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_20 = (Minus* )  a_20;

                        _out_s78_11 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_20 = (Const* )  a_20;

                        _out_s78_11 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_20 = (None* )  a_20;

                        _out_s78_11 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_11) {
                        _out_s84_3 = _t_13->val;
                        _has_out__12 = 1;
                      }
                      assert (!((_has_out__12) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s82_4 = _out_s84_3;
                  }
                }
              
                            break;
              }

 }
              _out_s84__0_1 = _out_s82_4;
            } else {
              Tree<AST* > *  t_14=_t_10->left;
              AST*  _out_s84_4=NULL;
              bool  _has_out__13=0;
              switch(t_14->type){
              case Nil<AST* >::NIL_type:
                            {
                            Nil<AST* > *  _t_14 = (Nil<AST* > * )  t_14;

                _out_s84_4 = deflt_0;
              
                            break;
              }
              case Node<AST* >::NODE_type:
                            {
                            Node<AST* > *  _t_14 = (Node<AST* > * )  t_14;

                AST*  a_21=_t_14->val;
                bool  _out_s78_12=0;
                switch(a_21->type){
                case Plus::PLUS_type:
                                {
                                Plus*  _a_21 = (Plus* )  a_21;

                  Plus*  n2_s44_126_126_17=((Plus*)(n2_s44));
                  _out_s78_12 = ((_a_21->left->id) == (n2_s44_126_126_17->left->id)) && ((_a_21->right->id) == (n2_s44_126_126_17->right->id));
                
                                break;
                }
                case Minus::MINUS_type:
                                {
                                Minus*  _a_21 = (Minus* )  a_21;

                  _out_s78_12 = 0;
                
                                break;
                }
                case Const::CONST_type:
                                {
                                Const*  _a_21 = (Const* )  a_21;

                  _out_s78_12 = 0;
                
                                break;
                }
                case None::NONE_type:
                                {
                                None*  _a_21 = (None* )  a_21;

                  _out_s78_12 = 0;
                
                                break;
                }

 }
                if (_out_s78_12) {
                  _out_s84_4 = _t_14->val;
                  _has_out__13 = 1;
                }
                bool  _out_s80_6=0;
                if ((_has_out__13) == (0)) {
                  AST*  a_22=_t_14->val;
                  switch(a_22->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_22 = (Plus* )  a_22;

                    Plus*  n2_s44_126_126_18=((Plus*)(n2_s44));
                    _out_s80_6 = ((_a_22->left->id) < (n2_s44_126_126_18->left->id)) || (((_a_22->left->id) == (n2_s44_126_126_18->left->id)) && ((_a_22->right->id) < (n2_s44_126_126_18->right->id)));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_22 = (Minus* )  a_22;

                    _out_s80_6 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_22 = (Const* )  a_22;

                    _out_s80_6 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_22 = (None* )  a_22;

                    _out_s80_6 = 0;
                  
                                    break;
                  }

 }
                }
                if ((_has_out__13) == (0)) {
                  if (_out_s80_6) {
                    Tree<AST* > *  t_15=_t_14->right;
                    AST*  _out_s82_5=NULL;
                    bool  _has_out__14=0;
                    switch(t_15->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_15 = (Nil<AST* > * )  t_15;

                      _out_s82_5 = deflt_0;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_15 = (Node<AST* > * )  t_15;

                      AST*  a_23=_t_15->val;
                      bool  _out_s78_13=0;
                      switch(a_23->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_23 = (Plus* )  a_23;

                        Plus*  n2_s44_126_126_19=((Plus*)(n2_s44));
                        _out_s78_13 = ((_a_23->left->id) == (n2_s44_126_126_19->left->id)) && ((_a_23->right->id) == (n2_s44_126_126_19->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_23 = (Minus* )  a_23;

                        _out_s78_13 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_23 = (Const* )  a_23;

                        _out_s78_13 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_23 = (None* )  a_23;

                        _out_s78_13 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_13) {
                        _out_s82_5 = _t_15->val;
                        _has_out__14 = 1;
                      }
                      assert (!((_has_out__14) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s84_4 = _out_s82_5;
                  } else {
                    Tree<AST* > *  t_16=_t_14->left;
                    AST*  _out_s84__0_2=NULL;
                    bool  _has_out__15=0;
                    switch(t_16->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_16 = (Nil<AST* > * )  t_16;

                      _out_s84__0_2 = deflt_0;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_16 = (Node<AST* > * )  t_16;

                      AST*  a_24=_t_16->val;
                      bool  _out_s78_14=0;
                      switch(a_24->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_24 = (Plus* )  a_24;

                        Plus*  n2_s44_126_126_20=((Plus*)(n2_s44));
                        _out_s78_14 = ((_a_24->left->id) == (n2_s44_126_126_20->left->id)) && ((_a_24->right->id) == (n2_s44_126_126_20->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_24 = (Minus* )  a_24;

                        _out_s78_14 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_24 = (Const* )  a_24;

                        _out_s78_14 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_24 = (None* )  a_24;

                        _out_s78_14 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_14) {
                        _out_s84__0_2 = _t_16->val;
                        _has_out__15 = 1;
                      }
                      assert (!((_has_out__15) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s84_4 = _out_s84__0_2;
                  }
                }
              
                            break;
              }

 }
              _out_s84__0_1 = _out_s84_4;
            }
          }
        
                break;
        }

 }
        _out_s84_0 = _out_s84__0_1;
      }
    }
  
    break;
  }

 }
  _out_s76_2 = _out_s84_0;
  bool  _out_s70_0=0;
  equals_AST_s0(_out_s76_2, None::create(0), 6, _out_s70_0);
  AST*  n2_s46=NULL;
  if (_out_s70_0) {
    Tree<AST* > *  _out_s74_3=NULL;
    Node<AST* > *  set__ANONYMOUS_s96_4_4_2=((Node<AST* > *)(set__ANONYMOUS_s96));
    Tree<AST* > *  t_17=set__ANONYMOUS_s96_4_4_2->left;
    Tree<AST* > *  _out_s92_1=NULL;
    Tree<AST* > *  nil_4=Nil<AST* >::create();
    bool  _has_out__16=0;
    switch(t_17->type){
    case Nil<AST* >::NIL_type:
        {
        Nil<AST* > *  _t_17 = (Nil<AST* > * )  t_17;

      _out_s92_1 = Node<AST* >::create(n2_s44, nil_4, nil_4);
    
        break;
    }
    case Node<AST* >::NODE_type:
        {
        Node<AST* > *  _t_17 = (Node<AST* > * )  t_17;

      AST*  a_25=_t_17->val;
      bool  _out_s86_0=0;
      switch(a_25->type){
      case Plus::PLUS_type:
            {
            Plus*  _a_25 = (Plus* )  a_25;

        Plus*  n2_s44_126_126_21=((Plus*)(n2_s44));
        _out_s86_0 = ((_a_25->left->id) == (n2_s44_126_126_21->left->id)) && ((_a_25->right->id) == (n2_s44_126_126_21->right->id));
      
            break;
      }
      case Minus::MINUS_type:
            {
            Minus*  _a_25 = (Minus* )  a_25;

        _out_s86_0 = 0;
      
            break;
      }
      case Const::CONST_type:
            {
            Const*  _a_25 = (Const* )  a_25;

        _out_s86_0 = 0;
      
            break;
      }
      case None::NONE_type:
            {
            None*  _a_25 = (None* )  a_25;

        _out_s86_0 = 0;
      
            break;
      }

 }
      if (_out_s86_0) {
        _out_s92_1 = _t_17;
        _has_out__16 = 1;
      }
      bool  _out_s88_0=0;
      if ((_has_out__16) == (0)) {
        AST*  a_26=_t_17->val;
        switch(a_26->type){
        case Plus::PLUS_type:
                {
                Plus*  _a_26 = (Plus* )  a_26;

          Plus*  n2_s44_126_126_22=((Plus*)(n2_s44));
          _out_s88_0 = ((_a_26->left->id) < (n2_s44_126_126_22->left->id)) || (((_a_26->left->id) == (n2_s44_126_126_22->left->id)) && ((_a_26->right->id) < (n2_s44_126_126_22->right->id)));
        
                break;
        }
        case Minus::MINUS_type:
                {
                Minus*  _a_26 = (Minus* )  a_26;

          _out_s88_0 = 0;
        
                break;
        }
        case Const::CONST_type:
                {
                Const*  _a_26 = (Const* )  a_26;

          _out_s88_0 = 0;
        
                break;
        }
        case None::NONE_type:
                {
                None*  _a_26 = (None* )  a_26;

          _out_s88_0 = 0;
        
                break;
        }

 }
      }
      if ((_has_out__16) == (0)) {
        if (_out_s88_0) {
          Tree<AST* > *  t_18=_t_17->right;
          Tree<AST* > *  _out_s90_1=NULL;
          Tree<AST* > *  nil_5=Nil<AST* >::create();
          bool  _has_out__17=0;
          switch(t_18->type){
          case Nil<AST* >::NIL_type:
                    {
                    Nil<AST* > *  _t_18 = (Nil<AST* > * )  t_18;

            _out_s90_1 = Node<AST* >::create(n2_s44, nil_5, nil_5);
          
                    break;
          }
          case Node<AST* >::NODE_type:
                    {
                    Node<AST* > *  _t_18 = (Node<AST* > * )  t_18;

            AST*  a_27=_t_18->val;
            bool  _out_s86_1=0;
            switch(a_27->type){
            case Plus::PLUS_type:
                        {
                        Plus*  _a_27 = (Plus* )  a_27;

              Plus*  n2_s44_126_126_23=((Plus*)(n2_s44));
              _out_s86_1 = ((_a_27->left->id) == (n2_s44_126_126_23->left->id)) && ((_a_27->right->id) == (n2_s44_126_126_23->right->id));
            
                        break;
            }
            case Minus::MINUS_type:
                        {
                        Minus*  _a_27 = (Minus* )  a_27;

              _out_s86_1 = 0;
            
                        break;
            }
            case Const::CONST_type:
                        {
                        Const*  _a_27 = (Const* )  a_27;

              _out_s86_1 = 0;
            
                        break;
            }
            case None::NONE_type:
                        {
                        None*  _a_27 = (None* )  a_27;

              _out_s86_1 = 0;
            
                        break;
            }

 }
            if (_out_s86_1) {
              _out_s90_1 = _t_18;
              _has_out__17 = 1;
            }
            bool  _out_s88_1=0;
            if ((_has_out__17) == (0)) {
              AST*  a_28=_t_18->val;
              switch(a_28->type){
              case Plus::PLUS_type:
                            {
                            Plus*  _a_28 = (Plus* )  a_28;

                Plus*  n2_s44_126_126_24=((Plus*)(n2_s44));
                _out_s88_1 = ((_a_28->left->id) < (n2_s44_126_126_24->left->id)) || (((_a_28->left->id) == (n2_s44_126_126_24->left->id)) && ((_a_28->right->id) < (n2_s44_126_126_24->right->id)));
              
                            break;
              }
              case Minus::MINUS_type:
                            {
                            Minus*  _a_28 = (Minus* )  a_28;

                _out_s88_1 = 0;
              
                            break;
              }
              case Const::CONST_type:
                            {
                            Const*  _a_28 = (Const* )  a_28;

                _out_s88_1 = 0;
              
                            break;
              }
              case None::NONE_type:
                            {
                            None*  _a_28 = (None* )  a_28;

                _out_s88_1 = 0;
              
                            break;
              }

 }
            }
            if ((_has_out__17) == (0)) {
              if (_out_s88_1) {
                Tree<AST* > *  t_19=_t_18->right;
                Tree<AST* > *  _out_s90__0=NULL;
                Tree<AST* > *  nil_6=Nil<AST* >::create();
                bool  _has_out__18=0;
                switch(t_19->type){
                case Nil<AST* >::NIL_type:
                                {
                                Nil<AST* > *  _t_19 = (Nil<AST* > * )  t_19;

                  _out_s90__0 = Node<AST* >::create(n2_s44, nil_6, nil_6);
                
                                break;
                }
                case Node<AST* >::NODE_type:
                                {
                                Node<AST* > *  _t_19 = (Node<AST* > * )  t_19;

                  AST*  a_29=_t_19->val;
                  bool  _out_s86_2=0;
                  switch(a_29->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_29 = (Plus* )  a_29;

                    Plus*  n2_s44_126_126_25=((Plus*)(n2_s44));
                    _out_s86_2 = ((_a_29->left->id) == (n2_s44_126_126_25->left->id)) && ((_a_29->right->id) == (n2_s44_126_126_25->right->id));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_29 = (Minus* )  a_29;

                    _out_s86_2 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_29 = (Const* )  a_29;

                    _out_s86_2 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_29 = (None* )  a_29;

                    _out_s86_2 = 0;
                  
                                    break;
                  }

 }
                  if (_out_s86_2) {
                    _out_s90__0 = _t_19;
                    _has_out__18 = 1;
                  }
                  bool  _out_s88_2=0;
                  if ((_has_out__18) == (0)) {
                    AST*  a_30=_t_19->val;
                    switch(a_30->type){
                    case Plus::PLUS_type:
                                        {
                                        Plus*  _a_30 = (Plus* )  a_30;

                      Plus*  n2_s44_126_126_26=((Plus*)(n2_s44));
                      _out_s88_2 = ((_a_30->left->id) < (n2_s44_126_126_26->left->id)) || (((_a_30->left->id) == (n2_s44_126_126_26->left->id)) && ((_a_30->right->id) < (n2_s44_126_126_26->right->id)));
                    
                                        break;
                    }
                    case Minus::MINUS_type:
                                        {
                                        Minus*  _a_30 = (Minus* )  a_30;

                      _out_s88_2 = 0;
                    
                                        break;
                    }
                    case Const::CONST_type:
                                        {
                                        Const*  _a_30 = (Const* )  a_30;

                      _out_s88_2 = 0;
                    
                                        break;
                    }
                    case None::NONE_type:
                                        {
                                        None*  _a_30 = (None* )  a_30;

                      _out_s88_2 = 0;
                    
                                        break;
                    }

 }
                  }
                  if ((_has_out__18) == (0)) {
                    if (_out_s88_2) {
                      Tree<AST* > *  t_20=_t_19->right;
                      Tree<AST* > *  _out_s90_2=NULL;
                      Tree<AST* > *  nil_7=Nil<AST* >::create();
                      bool  _has_out__19=0;
                      switch(t_20->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_20 = (Nil<AST* > * )  t_20;

                        _out_s90_2 = Node<AST* >::create(n2_s44, nil_7, nil_7);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_20 = (Node<AST* > * )  t_20;

                        AST*  a_31=_t_20->val;
                        bool  _out_s86_3=0;
                        switch(a_31->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_31 = (Plus* )  a_31;

                          Plus*  n2_s44_126_126_27=((Plus*)(n2_s44));
                          _out_s86_3 = ((_a_31->left->id) == (n2_s44_126_126_27->left->id)) && ((_a_31->right->id) == (n2_s44_126_126_27->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_31 = (Minus* )  a_31;

                          _out_s86_3 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_31 = (Const* )  a_31;

                          _out_s86_3 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_31 = (None* )  a_31;

                          _out_s86_3 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_3) {
                          _out_s90_2 = _t_20;
                          _has_out__19 = 1;
                        }
                        assert (!((_has_out__19) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s90__0 = Node<AST* >::create(_t_19->val, _t_19->left, _out_s90_2);
                    } else {
                      Tree<AST* > *  t_21=_t_19->left;
                      Tree<AST* > *  _out_s92_2=NULL;
                      Tree<AST* > *  nil_8=Nil<AST* >::create();
                      bool  _has_out__20=0;
                      switch(t_21->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_21 = (Nil<AST* > * )  t_21;

                        _out_s92_2 = Node<AST* >::create(n2_s44, nil_8, nil_8);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_21 = (Node<AST* > * )  t_21;

                        AST*  a_32=_t_21->val;
                        bool  _out_s86_4=0;
                        switch(a_32->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_32 = (Plus* )  a_32;

                          Plus*  n2_s44_126_126_28=((Plus*)(n2_s44));
                          _out_s86_4 = ((_a_32->left->id) == (n2_s44_126_126_28->left->id)) && ((_a_32->right->id) == (n2_s44_126_126_28->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_32 = (Minus* )  a_32;

                          _out_s86_4 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_32 = (Const* )  a_32;

                          _out_s86_4 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_32 = (None* )  a_32;

                          _out_s86_4 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_4) {
                          _out_s92_2 = _t_21;
                          _has_out__20 = 1;
                        }
                        assert (!((_has_out__20) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s90__0 = Node<AST* >::create(_t_19->val, _out_s92_2, _t_19->right);
                    }
                  }
                
                                break;
                }

 }
                _out_s90_1 = Node<AST* >::create(_t_18->val, _t_18->left, _out_s90__0);
              } else {
                Tree<AST* > *  t_22=_t_18->left;
                Tree<AST* > *  _out_s92_3=NULL;
                Tree<AST* > *  nil_9=Nil<AST* >::create();
                bool  _has_out__21=0;
                switch(t_22->type){
                case Nil<AST* >::NIL_type:
                                {
                                Nil<AST* > *  _t_22 = (Nil<AST* > * )  t_22;

                  _out_s92_3 = Node<AST* >::create(n2_s44, nil_9, nil_9);
                
                                break;
                }
                case Node<AST* >::NODE_type:
                                {
                                Node<AST* > *  _t_22 = (Node<AST* > * )  t_22;

                  AST*  a_33=_t_22->val;
                  bool  _out_s86_5=0;
                  switch(a_33->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_33 = (Plus* )  a_33;

                    Plus*  n2_s44_126_126_29=((Plus*)(n2_s44));
                    _out_s86_5 = ((_a_33->left->id) == (n2_s44_126_126_29->left->id)) && ((_a_33->right->id) == (n2_s44_126_126_29->right->id));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_33 = (Minus* )  a_33;

                    _out_s86_5 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_33 = (Const* )  a_33;

                    _out_s86_5 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_33 = (None* )  a_33;

                    _out_s86_5 = 0;
                  
                                    break;
                  }

 }
                  if (_out_s86_5) {
                    _out_s92_3 = _t_22;
                    _has_out__21 = 1;
                  }
                  bool  _out_s88_3=0;
                  if ((_has_out__21) == (0)) {
                    AST*  a_34=_t_22->val;
                    switch(a_34->type){
                    case Plus::PLUS_type:
                                        {
                                        Plus*  _a_34 = (Plus* )  a_34;

                      Plus*  n2_s44_126_126_30=((Plus*)(n2_s44));
                      _out_s88_3 = ((_a_34->left->id) < (n2_s44_126_126_30->left->id)) || (((_a_34->left->id) == (n2_s44_126_126_30->left->id)) && ((_a_34->right->id) < (n2_s44_126_126_30->right->id)));
                    
                                        break;
                    }
                    case Minus::MINUS_type:
                                        {
                                        Minus*  _a_34 = (Minus* )  a_34;

                      _out_s88_3 = 0;
                    
                                        break;
                    }
                    case Const::CONST_type:
                                        {
                                        Const*  _a_34 = (Const* )  a_34;

                      _out_s88_3 = 0;
                    
                                        break;
                    }
                    case None::NONE_type:
                                        {
                                        None*  _a_34 = (None* )  a_34;

                      _out_s88_3 = 0;
                    
                                        break;
                    }

 }
                  }
                  if ((_has_out__21) == (0)) {
                    if (_out_s88_3) {
                      Tree<AST* > *  t_23=_t_22->right;
                      Tree<AST* > *  _out_s90_3=NULL;
                      Tree<AST* > *  nil_10=Nil<AST* >::create();
                      bool  _has_out__22=0;
                      switch(t_23->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_23 = (Nil<AST* > * )  t_23;

                        _out_s90_3 = Node<AST* >::create(n2_s44, nil_10, nil_10);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_23 = (Node<AST* > * )  t_23;

                        AST*  a_35=_t_23->val;
                        bool  _out_s86_6=0;
                        switch(a_35->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_35 = (Plus* )  a_35;

                          Plus*  n2_s44_126_126_31=((Plus*)(n2_s44));
                          _out_s86_6 = ((_a_35->left->id) == (n2_s44_126_126_31->left->id)) && ((_a_35->right->id) == (n2_s44_126_126_31->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_35 = (Minus* )  a_35;

                          _out_s86_6 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_35 = (Const* )  a_35;

                          _out_s86_6 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_35 = (None* )  a_35;

                          _out_s86_6 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_6) {
                          _out_s90_3 = _t_23;
                          _has_out__22 = 1;
                        }
                        assert (!((_has_out__22) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s92_3 = Node<AST* >::create(_t_22->val, _t_22->left, _out_s90_3);
                    } else {
                      Tree<AST* > *  t_24=_t_22->left;
                      Tree<AST* > *  _out_s92__0_0=NULL;
                      Tree<AST* > *  nil_11=Nil<AST* >::create();
                      bool  _has_out__23=0;
                      switch(t_24->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_24 = (Nil<AST* > * )  t_24;

                        _out_s92__0_0 = Node<AST* >::create(n2_s44, nil_11, nil_11);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_24 = (Node<AST* > * )  t_24;

                        AST*  a_36=_t_24->val;
                        bool  _out_s86_7=0;
                        switch(a_36->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_36 = (Plus* )  a_36;

                          Plus*  n2_s44_126_126_32=((Plus*)(n2_s44));
                          _out_s86_7 = ((_a_36->left->id) == (n2_s44_126_126_32->left->id)) && ((_a_36->right->id) == (n2_s44_126_126_32->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_36 = (Minus* )  a_36;

                          _out_s86_7 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_36 = (Const* )  a_36;

                          _out_s86_7 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_36 = (None* )  a_36;

                          _out_s86_7 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_7) {
                          _out_s92__0_0 = _t_24;
                          _has_out__23 = 1;
                        }
                        assert (!((_has_out__23) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s92_3 = Node<AST* >::create(_t_22->val, _out_s92__0_0, _t_22->right);
                    }
                  }
                
                                break;
                }

 }
                _out_s90_1 = Node<AST* >::create(_t_18->val, _out_s92_3, _t_18->right);
              }
            }
          
                    break;
          }

 }
          _out_s92_1 = Node<AST* >::create(_t_17->val, _t_17->left, _out_s90_1);
        } else {
          Tree<AST* > *  t_25=_t_17->left;
          Tree<AST* > *  _out_s92__0_1=NULL;
          Tree<AST* > *  nil_12=Nil<AST* >::create();
          bool  _has_out__24=0;
          switch(t_25->type){
          case Nil<AST* >::NIL_type:
                    {
                    Nil<AST* > *  _t_25 = (Nil<AST* > * )  t_25;

            _out_s92__0_1 = Node<AST* >::create(n2_s44, nil_12, nil_12);
          
                    break;
          }
          case Node<AST* >::NODE_type:
                    {
                    Node<AST* > *  _t_25 = (Node<AST* > * )  t_25;

            AST*  a_37=_t_25->val;
            bool  _out_s86_8=0;
            switch(a_37->type){
            case Plus::PLUS_type:
                        {
                        Plus*  _a_37 = (Plus* )  a_37;

              Plus*  n2_s44_126_126_33=((Plus*)(n2_s44));
              _out_s86_8 = ((_a_37->left->id) == (n2_s44_126_126_33->left->id)) && ((_a_37->right->id) == (n2_s44_126_126_33->right->id));
            
                        break;
            }
            case Minus::MINUS_type:
                        {
                        Minus*  _a_37 = (Minus* )  a_37;

              _out_s86_8 = 0;
            
                        break;
            }
            case Const::CONST_type:
                        {
                        Const*  _a_37 = (Const* )  a_37;

              _out_s86_8 = 0;
            
                        break;
            }
            case None::NONE_type:
                        {
                        None*  _a_37 = (None* )  a_37;

              _out_s86_8 = 0;
            
                        break;
            }

 }
            if (_out_s86_8) {
              _out_s92__0_1 = _t_25;
              _has_out__24 = 1;
            }
            bool  _out_s88_4=0;
            if ((_has_out__24) == (0)) {
              AST*  a_38=_t_25->val;
              switch(a_38->type){
              case Plus::PLUS_type:
                            {
                            Plus*  _a_38 = (Plus* )  a_38;

                Plus*  n2_s44_126_126_34=((Plus*)(n2_s44));
                _out_s88_4 = ((_a_38->left->id) < (n2_s44_126_126_34->left->id)) || (((_a_38->left->id) == (n2_s44_126_126_34->left->id)) && ((_a_38->right->id) < (n2_s44_126_126_34->right->id)));
              
                            break;
              }
              case Minus::MINUS_type:
                            {
                            Minus*  _a_38 = (Minus* )  a_38;

                _out_s88_4 = 0;
              
                            break;
              }
              case Const::CONST_type:
                            {
                            Const*  _a_38 = (Const* )  a_38;

                _out_s88_4 = 0;
              
                            break;
              }
              case None::NONE_type:
                            {
                            None*  _a_38 = (None* )  a_38;

                _out_s88_4 = 0;
              
                            break;
              }

 }
            }
            if ((_has_out__24) == (0)) {
              if (_out_s88_4) {
                Tree<AST* > *  t_26=_t_25->right;
                Tree<AST* > *  _out_s90_4=NULL;
                Tree<AST* > *  nil_13=Nil<AST* >::create();
                bool  _has_out__25=0;
                switch(t_26->type){
                case Nil<AST* >::NIL_type:
                                {
                                Nil<AST* > *  _t_26 = (Nil<AST* > * )  t_26;

                  _out_s90_4 = Node<AST* >::create(n2_s44, nil_13, nil_13);
                
                                break;
                }
                case Node<AST* >::NODE_type:
                                {
                                Node<AST* > *  _t_26 = (Node<AST* > * )  t_26;

                  AST*  a_39=_t_26->val;
                  bool  _out_s86_9=0;
                  switch(a_39->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_39 = (Plus* )  a_39;

                    Plus*  n2_s44_126_126_35=((Plus*)(n2_s44));
                    _out_s86_9 = ((_a_39->left->id) == (n2_s44_126_126_35->left->id)) && ((_a_39->right->id) == (n2_s44_126_126_35->right->id));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_39 = (Minus* )  a_39;

                    _out_s86_9 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_39 = (Const* )  a_39;

                    _out_s86_9 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_39 = (None* )  a_39;

                    _out_s86_9 = 0;
                  
                                    break;
                  }

 }
                  if (_out_s86_9) {
                    _out_s90_4 = _t_26;
                    _has_out__25 = 1;
                  }
                  bool  _out_s88_5=0;
                  if ((_has_out__25) == (0)) {
                    AST*  a_40=_t_26->val;
                    switch(a_40->type){
                    case Plus::PLUS_type:
                                        {
                                        Plus*  _a_40 = (Plus* )  a_40;

                      Plus*  n2_s44_126_126_36=((Plus*)(n2_s44));
                      _out_s88_5 = ((_a_40->left->id) < (n2_s44_126_126_36->left->id)) || (((_a_40->left->id) == (n2_s44_126_126_36->left->id)) && ((_a_40->right->id) < (n2_s44_126_126_36->right->id)));
                    
                                        break;
                    }
                    case Minus::MINUS_type:
                                        {
                                        Minus*  _a_40 = (Minus* )  a_40;

                      _out_s88_5 = 0;
                    
                                        break;
                    }
                    case Const::CONST_type:
                                        {
                                        Const*  _a_40 = (Const* )  a_40;

                      _out_s88_5 = 0;
                    
                                        break;
                    }
                    case None::NONE_type:
                                        {
                                        None*  _a_40 = (None* )  a_40;

                      _out_s88_5 = 0;
                    
                                        break;
                    }

 }
                  }
                  if ((_has_out__25) == (0)) {
                    if (_out_s88_5) {
                      Tree<AST* > *  t_27=_t_26->right;
                      Tree<AST* > *  _out_s90__0_0=NULL;
                      Tree<AST* > *  nil_14=Nil<AST* >::create();
                      bool  _has_out__26=0;
                      switch(t_27->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_27 = (Nil<AST* > * )  t_27;

                        _out_s90__0_0 = Node<AST* >::create(n2_s44, nil_14, nil_14);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_27 = (Node<AST* > * )  t_27;

                        AST*  a_41=_t_27->val;
                        bool  _out_s86_10=0;
                        switch(a_41->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_41 = (Plus* )  a_41;

                          Plus*  n2_s44_126_126_37=((Plus*)(n2_s44));
                          _out_s86_10 = ((_a_41->left->id) == (n2_s44_126_126_37->left->id)) && ((_a_41->right->id) == (n2_s44_126_126_37->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_41 = (Minus* )  a_41;

                          _out_s86_10 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_41 = (Const* )  a_41;

                          _out_s86_10 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_41 = (None* )  a_41;

                          _out_s86_10 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_10) {
                          _out_s90__0_0 = _t_27;
                          _has_out__26 = 1;
                        }
                        assert (!((_has_out__26) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s90_4 = Node<AST* >::create(_t_26->val, _t_26->left, _out_s90__0_0);
                    } else {
                      Tree<AST* > *  t_28=_t_26->left;
                      Tree<AST* > *  _out_s92_4=NULL;
                      Tree<AST* > *  nil_15=Nil<AST* >::create();
                      bool  _has_out__27=0;
                      switch(t_28->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_28 = (Nil<AST* > * )  t_28;

                        _out_s92_4 = Node<AST* >::create(n2_s44, nil_15, nil_15);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_28 = (Node<AST* > * )  t_28;

                        AST*  a_42=_t_28->val;
                        bool  _out_s86_11=0;
                        switch(a_42->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_42 = (Plus* )  a_42;

                          Plus*  n2_s44_126_126_38=((Plus*)(n2_s44));
                          _out_s86_11 = ((_a_42->left->id) == (n2_s44_126_126_38->left->id)) && ((_a_42->right->id) == (n2_s44_126_126_38->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_42 = (Minus* )  a_42;

                          _out_s86_11 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_42 = (Const* )  a_42;

                          _out_s86_11 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_42 = (None* )  a_42;

                          _out_s86_11 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_11) {
                          _out_s92_4 = _t_28;
                          _has_out__27 = 1;
                        }
                        assert (!((_has_out__27) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s90_4 = Node<AST* >::create(_t_26->val, _out_s92_4, _t_26->right);
                    }
                  }
                
                                break;
                }

 }
                _out_s92__0_1 = Node<AST* >::create(_t_25->val, _t_25->left, _out_s90_4);
              } else {
                Tree<AST* > *  t_29=_t_25->left;
                Tree<AST* > *  _out_s92_5=NULL;
                Tree<AST* > *  nil_16=Nil<AST* >::create();
                bool  _has_out__28=0;
                switch(t_29->type){
                case Nil<AST* >::NIL_type:
                                {
                                Nil<AST* > *  _t_29 = (Nil<AST* > * )  t_29;

                  _out_s92_5 = Node<AST* >::create(n2_s44, nil_16, nil_16);
                
                                break;
                }
                case Node<AST* >::NODE_type:
                                {
                                Node<AST* > *  _t_29 = (Node<AST* > * )  t_29;

                  AST*  a_43=_t_29->val;
                  bool  _out_s86_12=0;
                  switch(a_43->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_43 = (Plus* )  a_43;

                    Plus*  n2_s44_126_126_39=((Plus*)(n2_s44));
                    _out_s86_12 = ((_a_43->left->id) == (n2_s44_126_126_39->left->id)) && ((_a_43->right->id) == (n2_s44_126_126_39->right->id));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_43 = (Minus* )  a_43;

                    _out_s86_12 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_43 = (Const* )  a_43;

                    _out_s86_12 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_43 = (None* )  a_43;

                    _out_s86_12 = 0;
                  
                                    break;
                  }

 }
                  if (_out_s86_12) {
                    _out_s92_5 = _t_29;
                    _has_out__28 = 1;
                  }
                  bool  _out_s88_6=0;
                  if ((_has_out__28) == (0)) {
                    AST*  a_44=_t_29->val;
                    switch(a_44->type){
                    case Plus::PLUS_type:
                                        {
                                        Plus*  _a_44 = (Plus* )  a_44;

                      Plus*  n2_s44_126_126_40=((Plus*)(n2_s44));
                      _out_s88_6 = ((_a_44->left->id) < (n2_s44_126_126_40->left->id)) || (((_a_44->left->id) == (n2_s44_126_126_40->left->id)) && ((_a_44->right->id) < (n2_s44_126_126_40->right->id)));
                    
                                        break;
                    }
                    case Minus::MINUS_type:
                                        {
                                        Minus*  _a_44 = (Minus* )  a_44;

                      _out_s88_6 = 0;
                    
                                        break;
                    }
                    case Const::CONST_type:
                                        {
                                        Const*  _a_44 = (Const* )  a_44;

                      _out_s88_6 = 0;
                    
                                        break;
                    }
                    case None::NONE_type:
                                        {
                                        None*  _a_44 = (None* )  a_44;

                      _out_s88_6 = 0;
                    
                                        break;
                    }

 }
                  }
                  if ((_has_out__28) == (0)) {
                    if (_out_s88_6) {
                      Tree<AST* > *  t_30=_t_29->right;
                      Tree<AST* > *  _out_s90_5=NULL;
                      Tree<AST* > *  nil_17=Nil<AST* >::create();
                      bool  _has_out__29=0;
                      switch(t_30->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_30 = (Nil<AST* > * )  t_30;

                        _out_s90_5 = Node<AST* >::create(n2_s44, nil_17, nil_17);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_30 = (Node<AST* > * )  t_30;

                        AST*  a_45=_t_30->val;
                        bool  _out_s86_13=0;
                        switch(a_45->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_45 = (Plus* )  a_45;

                          Plus*  n2_s44_126_126_41=((Plus*)(n2_s44));
                          _out_s86_13 = ((_a_45->left->id) == (n2_s44_126_126_41->left->id)) && ((_a_45->right->id) == (n2_s44_126_126_41->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_45 = (Minus* )  a_45;

                          _out_s86_13 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_45 = (Const* )  a_45;

                          _out_s86_13 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_45 = (None* )  a_45;

                          _out_s86_13 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_13) {
                          _out_s90_5 = _t_30;
                          _has_out__29 = 1;
                        }
                        assert (!((_has_out__29) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s92_5 = Node<AST* >::create(_t_29->val, _t_29->left, _out_s90_5);
                    } else {
                      Tree<AST* > *  t_31=_t_29->left;
                      Tree<AST* > *  _out_s92__0_2=NULL;
                      Tree<AST* > *  nil_18=Nil<AST* >::create();
                      bool  _has_out__30=0;
                      switch(t_31->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_31 = (Nil<AST* > * )  t_31;

                        _out_s92__0_2 = Node<AST* >::create(n2_s44, nil_18, nil_18);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_31 = (Node<AST* > * )  t_31;

                        AST*  a_46=_t_31->val;
                        bool  _out_s86_14=0;
                        switch(a_46->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_46 = (Plus* )  a_46;

                          Plus*  n2_s44_126_126_42=((Plus*)(n2_s44));
                          _out_s86_14 = ((_a_46->left->id) == (n2_s44_126_126_42->left->id)) && ((_a_46->right->id) == (n2_s44_126_126_42->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_46 = (Minus* )  a_46;

                          _out_s86_14 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_46 = (Const* )  a_46;

                          _out_s86_14 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_46 = (None* )  a_46;

                          _out_s86_14 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_14) {
                          _out_s92__0_2 = _t_31;
                          _has_out__30 = 1;
                        }
                        assert (!((_has_out__30) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s92_5 = Node<AST* >::create(_t_29->val, _out_s92__0_2, _t_29->right);
                    }
                  }
                
                                break;
                }

 }
                _out_s92__0_1 = Node<AST* >::create(_t_25->val, _out_s92_5, _t_25->right);
              }
            }
          
                    break;
          }

 }
          _out_s92_1 = Node<AST* >::create(_t_17->val, _out_s92__0_1, _t_17->right);
        }
      }
    
        break;
    }

 }
    _out_s74_3 = Node<AST* >::create(set__ANONYMOUS_s96_4_4_2->val, _out_s92_1, set__ANONYMOUS_s96_4_4_2->right);
    set__ANONYMOUS_s96 = _out_s74_3;
    n2_s46 = n2_s44;
  } else {
    n2_s46 = _out_s76_2;
  }
  int  uo_s4_2=ID__ANONYMOUS_s101;
  ID__ANONYMOUS_s101 = ID__ANONYMOUS_s101 + 1;
  AST*  n2_s48=Const::create(2, uo_s4_2);
  int  uo_s5_2=ID__ANONYMOUS_s101;
  ID__ANONYMOUS_s101 = ID__ANONYMOUS_s101 + 1;
  AST*  n2_s50=Plus::create(n2_s46, n2_s48, uo_s5_2);
  AST*  deflt_1=None::create(0);
  AST*  _out_s76_3=NULL;
  Node<AST* > *  set__ANONYMOUS_s96_4_4_3=((Node<AST* > *)(set__ANONYMOUS_s96));
  Tree<AST* > *  t_32=set__ANONYMOUS_s96_4_4_3->left;
  AST*  _out_s84_5=NULL;
  bool  _has_out__31=0;
  switch(t_32->type){
  case Nil<AST* >::NIL_type:
    {
    Nil<AST* > *  _t_32 = (Nil<AST* > * )  t_32;

    _out_s84_5 = deflt_1;
  
    break;
  }
  case Node<AST* >::NODE_type:
    {
    Node<AST* > *  _t_32 = (Node<AST* > * )  t_32;

    AST*  a_47=_t_32->val;
    bool  _out_s78_15=0;
    switch(a_47->type){
    case Plus::PLUS_type:
        {
        Plus*  _a_47 = (Plus* )  a_47;

      Plus*  n2_s50_2fc_2dc=((Plus*)(n2_s50));
      _out_s78_15 = ((_a_47->left->id) == (n2_s50_2fc_2dc->left->id)) && ((_a_47->right->id) == (n2_s50_2fc_2dc->right->id));
    
        break;
    }
    case Minus::MINUS_type:
        {
        Minus*  _a_47 = (Minus* )  a_47;

      _out_s78_15 = 0;
    
        break;
    }
    case Const::CONST_type:
        {
        Const*  _a_47 = (Const* )  a_47;

      _out_s78_15 = 0;
    
        break;
    }
    case None::NONE_type:
        {
        None*  _a_47 = (None* )  a_47;

      _out_s78_15 = 0;
    
        break;
    }

 }
    if (_out_s78_15) {
      _out_s84_5 = _t_32->val;
      _has_out__31 = 1;
    }
    bool  _out_s80_7=0;
    if ((_has_out__31) == (0)) {
      AST*  a_48=_t_32->val;
      switch(a_48->type){
      case Plus::PLUS_type:
            {
            Plus*  _a_48 = (Plus* )  a_48;

        Plus*  n2_s50_2fc_2dc_0=((Plus*)(n2_s50));
        _out_s80_7 = ((_a_48->left->id) < (n2_s50_2fc_2dc_0->left->id)) || (((_a_48->left->id) == (n2_s50_2fc_2dc_0->left->id)) && ((_a_48->right->id) < (n2_s50_2fc_2dc_0->right->id)));
      
            break;
      }
      case Minus::MINUS_type:
            {
            Minus*  _a_48 = (Minus* )  a_48;

        _out_s80_7 = 0;
      
            break;
      }
      case Const::CONST_type:
            {
            Const*  _a_48 = (Const* )  a_48;

        _out_s80_7 = 0;
      
            break;
      }
      case None::NONE_type:
            {
            None*  _a_48 = (None* )  a_48;

        _out_s80_7 = 0;
      
            break;
      }

 }
    }
    if ((_has_out__31) == (0)) {
      if (_out_s80_7) {
        Tree<AST* > *  t_33=_t_32->right;
        AST*  _out_s82_6=NULL;
        bool  _has_out__32=0;
        switch(t_33->type){
        case Nil<AST* >::NIL_type:
                {
                Nil<AST* > *  _t_33 = (Nil<AST* > * )  t_33;

          _out_s82_6 = deflt_1;
        
                break;
        }
        case Node<AST* >::NODE_type:
                {
                Node<AST* > *  _t_33 = (Node<AST* > * )  t_33;

          AST*  a_49=_t_33->val;
          bool  _out_s78_16=0;
          switch(a_49->type){
          case Plus::PLUS_type:
                    {
                    Plus*  _a_49 = (Plus* )  a_49;

            Plus*  n2_s50_2fc_2dc_1=((Plus*)(n2_s50));
            _out_s78_16 = ((_a_49->left->id) == (n2_s50_2fc_2dc_1->left->id)) && ((_a_49->right->id) == (n2_s50_2fc_2dc_1->right->id));
          
                    break;
          }
          case Minus::MINUS_type:
                    {
                    Minus*  _a_49 = (Minus* )  a_49;

            _out_s78_16 = 0;
          
                    break;
          }
          case Const::CONST_type:
                    {
                    Const*  _a_49 = (Const* )  a_49;

            _out_s78_16 = 0;
          
                    break;
          }
          case None::NONE_type:
                    {
                    None*  _a_49 = (None* )  a_49;

            _out_s78_16 = 0;
          
                    break;
          }

 }
          if (_out_s78_16) {
            _out_s82_6 = _t_33->val;
            _has_out__32 = 1;
          }
          bool  _out_s80_8=0;
          if ((_has_out__32) == (0)) {
            AST*  a_50=_t_33->val;
            switch(a_50->type){
            case Plus::PLUS_type:
                        {
                        Plus*  _a_50 = (Plus* )  a_50;

              Plus*  n2_s50_2fc_2dc_2=((Plus*)(n2_s50));
              _out_s80_8 = ((_a_50->left->id) < (n2_s50_2fc_2dc_2->left->id)) || (((_a_50->left->id) == (n2_s50_2fc_2dc_2->left->id)) && ((_a_50->right->id) < (n2_s50_2fc_2dc_2->right->id)));
            
                        break;
            }
            case Minus::MINUS_type:
                        {
                        Minus*  _a_50 = (Minus* )  a_50;

              _out_s80_8 = 0;
            
                        break;
            }
            case Const::CONST_type:
                        {
                        Const*  _a_50 = (Const* )  a_50;

              _out_s80_8 = 0;
            
                        break;
            }
            case None::NONE_type:
                        {
                        None*  _a_50 = (None* )  a_50;

              _out_s80_8 = 0;
            
                        break;
            }

 }
          }
          if ((_has_out__32) == (0)) {
            if (_out_s80_8) {
              Tree<AST* > *  t_34=_t_33->right;
              AST*  _out_s82__0_1=NULL;
              bool  _has_out__33=0;
              switch(t_34->type){
              case Nil<AST* >::NIL_type:
                            {
                            Nil<AST* > *  _t_34 = (Nil<AST* > * )  t_34;

                _out_s82__0_1 = deflt_1;
              
                            break;
              }
              case Node<AST* >::NODE_type:
                            {
                            Node<AST* > *  _t_34 = (Node<AST* > * )  t_34;

                AST*  a_51=_t_34->val;
                bool  _out_s78_17=0;
                switch(a_51->type){
                case Plus::PLUS_type:
                                {
                                Plus*  _a_51 = (Plus* )  a_51;

                  Plus*  n2_s50_2fc_2dc_3=((Plus*)(n2_s50));
                  _out_s78_17 = ((_a_51->left->id) == (n2_s50_2fc_2dc_3->left->id)) && ((_a_51->right->id) == (n2_s50_2fc_2dc_3->right->id));
                
                                break;
                }
                case Minus::MINUS_type:
                                {
                                Minus*  _a_51 = (Minus* )  a_51;

                  _out_s78_17 = 0;
                
                                break;
                }
                case Const::CONST_type:
                                {
                                Const*  _a_51 = (Const* )  a_51;

                  _out_s78_17 = 0;
                
                                break;
                }
                case None::NONE_type:
                                {
                                None*  _a_51 = (None* )  a_51;

                  _out_s78_17 = 0;
                
                                break;
                }

 }
                if (_out_s78_17) {
                  _out_s82__0_1 = _t_34->val;
                  _has_out__33 = 1;
                }
                bool  _out_s80_9=0;
                if ((_has_out__33) == (0)) {
                  AST*  a_52=_t_34->val;
                  switch(a_52->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_52 = (Plus* )  a_52;

                    Plus*  n2_s50_2fc_2dc_4=((Plus*)(n2_s50));
                    _out_s80_9 = ((_a_52->left->id) < (n2_s50_2fc_2dc_4->left->id)) || (((_a_52->left->id) == (n2_s50_2fc_2dc_4->left->id)) && ((_a_52->right->id) < (n2_s50_2fc_2dc_4->right->id)));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_52 = (Minus* )  a_52;

                    _out_s80_9 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_52 = (Const* )  a_52;

                    _out_s80_9 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_52 = (None* )  a_52;

                    _out_s80_9 = 0;
                  
                                    break;
                  }

 }
                }
                if ((_has_out__33) == (0)) {
                  if (_out_s80_9) {
                    Tree<AST* > *  t_35=_t_34->right;
                    AST*  _out_s82_7=NULL;
                    bool  _has_out__34=0;
                    switch(t_35->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_35 = (Nil<AST* > * )  t_35;

                      _out_s82_7 = deflt_1;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_35 = (Node<AST* > * )  t_35;

                      AST*  a_53=_t_35->val;
                      bool  _out_s78_18=0;
                      switch(a_53->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_53 = (Plus* )  a_53;

                        Plus*  n2_s50_2fc_2dc_5=((Plus*)(n2_s50));
                        _out_s78_18 = ((_a_53->left->id) == (n2_s50_2fc_2dc_5->left->id)) && ((_a_53->right->id) == (n2_s50_2fc_2dc_5->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_53 = (Minus* )  a_53;

                        _out_s78_18 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_53 = (Const* )  a_53;

                        _out_s78_18 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_53 = (None* )  a_53;

                        _out_s78_18 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_18) {
                        _out_s82_7 = _t_35->val;
                        _has_out__34 = 1;
                      }
                      assert (!((_has_out__34) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s82__0_1 = _out_s82_7;
                  } else {
                    Tree<AST* > *  t_36=_t_34->left;
                    AST*  _out_s84_6=NULL;
                    bool  _has_out__35=0;
                    switch(t_36->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_36 = (Nil<AST* > * )  t_36;

                      _out_s84_6 = deflt_1;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_36 = (Node<AST* > * )  t_36;

                      AST*  a_54=_t_36->val;
                      bool  _out_s78_19=0;
                      switch(a_54->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_54 = (Plus* )  a_54;

                        Plus*  n2_s50_2fc_2dc_6=((Plus*)(n2_s50));
                        _out_s78_19 = ((_a_54->left->id) == (n2_s50_2fc_2dc_6->left->id)) && ((_a_54->right->id) == (n2_s50_2fc_2dc_6->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_54 = (Minus* )  a_54;

                        _out_s78_19 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_54 = (Const* )  a_54;

                        _out_s78_19 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_54 = (None* )  a_54;

                        _out_s78_19 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_19) {
                        _out_s84_6 = _t_36->val;
                        _has_out__35 = 1;
                      }
                      assert (!((_has_out__35) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s82__0_1 = _out_s84_6;
                  }
                }
              
                            break;
              }

 }
              _out_s82_6 = _out_s82__0_1;
            } else {
              Tree<AST* > *  t_37=_t_33->left;
              AST*  _out_s84_7=NULL;
              bool  _has_out__36=0;
              switch(t_37->type){
              case Nil<AST* >::NIL_type:
                            {
                            Nil<AST* > *  _t_37 = (Nil<AST* > * )  t_37;

                _out_s84_7 = deflt_1;
              
                            break;
              }
              case Node<AST* >::NODE_type:
                            {
                            Node<AST* > *  _t_37 = (Node<AST* > * )  t_37;

                AST*  a_55=_t_37->val;
                bool  _out_s78_20=0;
                switch(a_55->type){
                case Plus::PLUS_type:
                                {
                                Plus*  _a_55 = (Plus* )  a_55;

                  Plus*  n2_s50_2fc_2dc_7=((Plus*)(n2_s50));
                  _out_s78_20 = ((_a_55->left->id) == (n2_s50_2fc_2dc_7->left->id)) && ((_a_55->right->id) == (n2_s50_2fc_2dc_7->right->id));
                
                                break;
                }
                case Minus::MINUS_type:
                                {
                                Minus*  _a_55 = (Minus* )  a_55;

                  _out_s78_20 = 0;
                
                                break;
                }
                case Const::CONST_type:
                                {
                                Const*  _a_55 = (Const* )  a_55;

                  _out_s78_20 = 0;
                
                                break;
                }
                case None::NONE_type:
                                {
                                None*  _a_55 = (None* )  a_55;

                  _out_s78_20 = 0;
                
                                break;
                }

 }
                if (_out_s78_20) {
                  _out_s84_7 = _t_37->val;
                  _has_out__36 = 1;
                }
                bool  _out_s80_10=0;
                if ((_has_out__36) == (0)) {
                  AST*  a_56=_t_37->val;
                  switch(a_56->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_56 = (Plus* )  a_56;

                    Plus*  n2_s50_2fc_2dc_8=((Plus*)(n2_s50));
                    _out_s80_10 = ((_a_56->left->id) < (n2_s50_2fc_2dc_8->left->id)) || (((_a_56->left->id) == (n2_s50_2fc_2dc_8->left->id)) && ((_a_56->right->id) < (n2_s50_2fc_2dc_8->right->id)));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_56 = (Minus* )  a_56;

                    _out_s80_10 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_56 = (Const* )  a_56;

                    _out_s80_10 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_56 = (None* )  a_56;

                    _out_s80_10 = 0;
                  
                                    break;
                  }

 }
                }
                if ((_has_out__36) == (0)) {
                  if (_out_s80_10) {
                    Tree<AST* > *  t_38=_t_37->right;
                    AST*  _out_s82_8=NULL;
                    bool  _has_out__37=0;
                    switch(t_38->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_38 = (Nil<AST* > * )  t_38;

                      _out_s82_8 = deflt_1;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_38 = (Node<AST* > * )  t_38;

                      AST*  a_57=_t_38->val;
                      bool  _out_s78_21=0;
                      switch(a_57->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_57 = (Plus* )  a_57;

                        Plus*  n2_s50_2fc_2dc_9=((Plus*)(n2_s50));
                        _out_s78_21 = ((_a_57->left->id) == (n2_s50_2fc_2dc_9->left->id)) && ((_a_57->right->id) == (n2_s50_2fc_2dc_9->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_57 = (Minus* )  a_57;

                        _out_s78_21 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_57 = (Const* )  a_57;

                        _out_s78_21 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_57 = (None* )  a_57;

                        _out_s78_21 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_21) {
                        _out_s82_8 = _t_38->val;
                        _has_out__37 = 1;
                      }
                      assert (!((_has_out__37) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s84_7 = _out_s82_8;
                  } else {
                    Tree<AST* > *  t_39=_t_37->left;
                    AST*  _out_s84__0_3=NULL;
                    bool  _has_out__38=0;
                    switch(t_39->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_39 = (Nil<AST* > * )  t_39;

                      _out_s84__0_3 = deflt_1;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_39 = (Node<AST* > * )  t_39;

                      AST*  a_58=_t_39->val;
                      bool  _out_s78_22=0;
                      switch(a_58->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_58 = (Plus* )  a_58;

                        Plus*  n2_s50_2fc_2dc_10=((Plus*)(n2_s50));
                        _out_s78_22 = ((_a_58->left->id) == (n2_s50_2fc_2dc_10->left->id)) && ((_a_58->right->id) == (n2_s50_2fc_2dc_10->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_58 = (Minus* )  a_58;

                        _out_s78_22 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_58 = (Const* )  a_58;

                        _out_s78_22 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_58 = (None* )  a_58;

                        _out_s78_22 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_22) {
                        _out_s84__0_3 = _t_39->val;
                        _has_out__38 = 1;
                      }
                      assert (!((_has_out__38) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s84_7 = _out_s84__0_3;
                  }
                }
              
                            break;
              }

 }
              _out_s82_6 = _out_s84_7;
            }
          }
        
                break;
        }

 }
        _out_s84_5 = _out_s82_6;
      } else {
        Tree<AST* > *  t_40=_t_32->left;
        AST*  _out_s84__0_4=NULL;
        bool  _has_out__39=0;
        switch(t_40->type){
        case Nil<AST* >::NIL_type:
                {
                Nil<AST* > *  _t_40 = (Nil<AST* > * )  t_40;

          _out_s84__0_4 = deflt_1;
        
                break;
        }
        case Node<AST* >::NODE_type:
                {
                Node<AST* > *  _t_40 = (Node<AST* > * )  t_40;

          AST*  a_59=_t_40->val;
          bool  _out_s78_23=0;
          switch(a_59->type){
          case Plus::PLUS_type:
                    {
                    Plus*  _a_59 = (Plus* )  a_59;

            Plus*  n2_s50_2fc_2dc_11=((Plus*)(n2_s50));
            _out_s78_23 = ((_a_59->left->id) == (n2_s50_2fc_2dc_11->left->id)) && ((_a_59->right->id) == (n2_s50_2fc_2dc_11->right->id));
          
                    break;
          }
          case Minus::MINUS_type:
                    {
                    Minus*  _a_59 = (Minus* )  a_59;

            _out_s78_23 = 0;
          
                    break;
          }
          case Const::CONST_type:
                    {
                    Const*  _a_59 = (Const* )  a_59;

            _out_s78_23 = 0;
          
                    break;
          }
          case None::NONE_type:
                    {
                    None*  _a_59 = (None* )  a_59;

            _out_s78_23 = 0;
          
                    break;
          }

 }
          if (_out_s78_23) {
            _out_s84__0_4 = _t_40->val;
            _has_out__39 = 1;
          }
          bool  _out_s80_11=0;
          if ((_has_out__39) == (0)) {
            AST*  a_60=_t_40->val;
            switch(a_60->type){
            case Plus::PLUS_type:
                        {
                        Plus*  _a_60 = (Plus* )  a_60;

              Plus*  n2_s50_2fc_2dc_12=((Plus*)(n2_s50));
              _out_s80_11 = ((_a_60->left->id) < (n2_s50_2fc_2dc_12->left->id)) || (((_a_60->left->id) == (n2_s50_2fc_2dc_12->left->id)) && ((_a_60->right->id) < (n2_s50_2fc_2dc_12->right->id)));
            
                        break;
            }
            case Minus::MINUS_type:
                        {
                        Minus*  _a_60 = (Minus* )  a_60;

              _out_s80_11 = 0;
            
                        break;
            }
            case Const::CONST_type:
                        {
                        Const*  _a_60 = (Const* )  a_60;

              _out_s80_11 = 0;
            
                        break;
            }
            case None::NONE_type:
                        {
                        None*  _a_60 = (None* )  a_60;

              _out_s80_11 = 0;
            
                        break;
            }

 }
          }
          if ((_has_out__39) == (0)) {
            if (_out_s80_11) {
              Tree<AST* > *  t_41=_t_40->right;
              AST*  _out_s82_9=NULL;
              bool  _has_out__40=0;
              switch(t_41->type){
              case Nil<AST* >::NIL_type:
                            {
                            Nil<AST* > *  _t_41 = (Nil<AST* > * )  t_41;

                _out_s82_9 = deflt_1;
              
                            break;
              }
              case Node<AST* >::NODE_type:
                            {
                            Node<AST* > *  _t_41 = (Node<AST* > * )  t_41;

                AST*  a_61=_t_41->val;
                bool  _out_s78_24=0;
                switch(a_61->type){
                case Plus::PLUS_type:
                                {
                                Plus*  _a_61 = (Plus* )  a_61;

                  Plus*  n2_s50_2fc_2dc_13=((Plus*)(n2_s50));
                  _out_s78_24 = ((_a_61->left->id) == (n2_s50_2fc_2dc_13->left->id)) && ((_a_61->right->id) == (n2_s50_2fc_2dc_13->right->id));
                
                                break;
                }
                case Minus::MINUS_type:
                                {
                                Minus*  _a_61 = (Minus* )  a_61;

                  _out_s78_24 = 0;
                
                                break;
                }
                case Const::CONST_type:
                                {
                                Const*  _a_61 = (Const* )  a_61;

                  _out_s78_24 = 0;
                
                                break;
                }
                case None::NONE_type:
                                {
                                None*  _a_61 = (None* )  a_61;

                  _out_s78_24 = 0;
                
                                break;
                }

 }
                if (_out_s78_24) {
                  _out_s82_9 = _t_41->val;
                  _has_out__40 = 1;
                }
                bool  _out_s80_12=0;
                if ((_has_out__40) == (0)) {
                  AST*  a_62=_t_41->val;
                  switch(a_62->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_62 = (Plus* )  a_62;

                    Plus*  n2_s50_2fc_2dc_14=((Plus*)(n2_s50));
                    _out_s80_12 = ((_a_62->left->id) < (n2_s50_2fc_2dc_14->left->id)) || (((_a_62->left->id) == (n2_s50_2fc_2dc_14->left->id)) && ((_a_62->right->id) < (n2_s50_2fc_2dc_14->right->id)));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_62 = (Minus* )  a_62;

                    _out_s80_12 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_62 = (Const* )  a_62;

                    _out_s80_12 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_62 = (None* )  a_62;

                    _out_s80_12 = 0;
                  
                                    break;
                  }

 }
                }
                if ((_has_out__40) == (0)) {
                  if (_out_s80_12) {
                    Tree<AST* > *  t_42=_t_41->right;
                    AST*  _out_s82__0_2=NULL;
                    bool  _has_out__41=0;
                    switch(t_42->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_42 = (Nil<AST* > * )  t_42;

                      _out_s82__0_2 = deflt_1;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_42 = (Node<AST* > * )  t_42;

                      AST*  a_63=_t_42->val;
                      bool  _out_s78_25=0;
                      switch(a_63->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_63 = (Plus* )  a_63;

                        Plus*  n2_s50_2fc_2dc_15=((Plus*)(n2_s50));
                        _out_s78_25 = ((_a_63->left->id) == (n2_s50_2fc_2dc_15->left->id)) && ((_a_63->right->id) == (n2_s50_2fc_2dc_15->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_63 = (Minus* )  a_63;

                        _out_s78_25 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_63 = (Const* )  a_63;

                        _out_s78_25 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_63 = (None* )  a_63;

                        _out_s78_25 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_25) {
                        _out_s82__0_2 = _t_42->val;
                        _has_out__41 = 1;
                      }
                      assert (!((_has_out__41) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s82_9 = _out_s82__0_2;
                  } else {
                    Tree<AST* > *  t_43=_t_41->left;
                    AST*  _out_s84_8=NULL;
                    bool  _has_out__42=0;
                    switch(t_43->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_43 = (Nil<AST* > * )  t_43;

                      _out_s84_8 = deflt_1;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_43 = (Node<AST* > * )  t_43;

                      AST*  a_64=_t_43->val;
                      bool  _out_s78_26=0;
                      switch(a_64->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_64 = (Plus* )  a_64;

                        Plus*  n2_s50_2fc_2dc_16=((Plus*)(n2_s50));
                        _out_s78_26 = ((_a_64->left->id) == (n2_s50_2fc_2dc_16->left->id)) && ((_a_64->right->id) == (n2_s50_2fc_2dc_16->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_64 = (Minus* )  a_64;

                        _out_s78_26 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_64 = (Const* )  a_64;

                        _out_s78_26 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_64 = (None* )  a_64;

                        _out_s78_26 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_26) {
                        _out_s84_8 = _t_43->val;
                        _has_out__42 = 1;
                      }
                      assert (!((_has_out__42) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s82_9 = _out_s84_8;
                  }
                }
              
                            break;
              }

 }
              _out_s84__0_4 = _out_s82_9;
            } else {
              Tree<AST* > *  t_44=_t_40->left;
              AST*  _out_s84_9=NULL;
              bool  _has_out__43=0;
              switch(t_44->type){
              case Nil<AST* >::NIL_type:
                            {
                            Nil<AST* > *  _t_44 = (Nil<AST* > * )  t_44;

                _out_s84_9 = deflt_1;
              
                            break;
              }
              case Node<AST* >::NODE_type:
                            {
                            Node<AST* > *  _t_44 = (Node<AST* > * )  t_44;

                AST*  a_65=_t_44->val;
                bool  _out_s78_27=0;
                switch(a_65->type){
                case Plus::PLUS_type:
                                {
                                Plus*  _a_65 = (Plus* )  a_65;

                  Plus*  n2_s50_2fc_2dc_17=((Plus*)(n2_s50));
                  _out_s78_27 = ((_a_65->left->id) == (n2_s50_2fc_2dc_17->left->id)) && ((_a_65->right->id) == (n2_s50_2fc_2dc_17->right->id));
                
                                break;
                }
                case Minus::MINUS_type:
                                {
                                Minus*  _a_65 = (Minus* )  a_65;

                  _out_s78_27 = 0;
                
                                break;
                }
                case Const::CONST_type:
                                {
                                Const*  _a_65 = (Const* )  a_65;

                  _out_s78_27 = 0;
                
                                break;
                }
                case None::NONE_type:
                                {
                                None*  _a_65 = (None* )  a_65;

                  _out_s78_27 = 0;
                
                                break;
                }

 }
                if (_out_s78_27) {
                  _out_s84_9 = _t_44->val;
                  _has_out__43 = 1;
                }
                bool  _out_s80_13=0;
                if ((_has_out__43) == (0)) {
                  AST*  a_66=_t_44->val;
                  switch(a_66->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_66 = (Plus* )  a_66;

                    Plus*  n2_s50_2fc_2dc_18=((Plus*)(n2_s50));
                    _out_s80_13 = ((_a_66->left->id) < (n2_s50_2fc_2dc_18->left->id)) || (((_a_66->left->id) == (n2_s50_2fc_2dc_18->left->id)) && ((_a_66->right->id) < (n2_s50_2fc_2dc_18->right->id)));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_66 = (Minus* )  a_66;

                    _out_s80_13 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_66 = (Const* )  a_66;

                    _out_s80_13 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_66 = (None* )  a_66;

                    _out_s80_13 = 0;
                  
                                    break;
                  }

 }
                }
                if ((_has_out__43) == (0)) {
                  if (_out_s80_13) {
                    Tree<AST* > *  t_45=_t_44->right;
                    AST*  _out_s82_10=NULL;
                    bool  _has_out__44=0;
                    switch(t_45->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_45 = (Nil<AST* > * )  t_45;

                      _out_s82_10 = deflt_1;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_45 = (Node<AST* > * )  t_45;

                      AST*  a_67=_t_45->val;
                      bool  _out_s78_28=0;
                      switch(a_67->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_67 = (Plus* )  a_67;

                        Plus*  n2_s50_2fc_2dc_19=((Plus*)(n2_s50));
                        _out_s78_28 = ((_a_67->left->id) == (n2_s50_2fc_2dc_19->left->id)) && ((_a_67->right->id) == (n2_s50_2fc_2dc_19->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_67 = (Minus* )  a_67;

                        _out_s78_28 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_67 = (Const* )  a_67;

                        _out_s78_28 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_67 = (None* )  a_67;

                        _out_s78_28 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_28) {
                        _out_s82_10 = _t_45->val;
                        _has_out__44 = 1;
                      }
                      assert (!((_has_out__44) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s84_9 = _out_s82_10;
                  } else {
                    Tree<AST* > *  t_46=_t_44->left;
                    AST*  _out_s84__0_5=NULL;
                    bool  _has_out__45=0;
                    switch(t_46->type){
                    case Nil<AST* >::NIL_type:
                                        {
                                        Nil<AST* > *  _t_46 = (Nil<AST* > * )  t_46;

                      _out_s84__0_5 = deflt_1;
                    
                                        break;
                    }
                    case Node<AST* >::NODE_type:
                                        {
                                        Node<AST* > *  _t_46 = (Node<AST* > * )  t_46;

                      AST*  a_68=_t_46->val;
                      bool  _out_s78_29=0;
                      switch(a_68->type){
                      case Plus::PLUS_type:
                                            {
                                            Plus*  _a_68 = (Plus* )  a_68;

                        Plus*  n2_s50_2fc_2dc_20=((Plus*)(n2_s50));
                        _out_s78_29 = ((_a_68->left->id) == (n2_s50_2fc_2dc_20->left->id)) && ((_a_68->right->id) == (n2_s50_2fc_2dc_20->right->id));
                      
                                            break;
                      }
                      case Minus::MINUS_type:
                                            {
                                            Minus*  _a_68 = (Minus* )  a_68;

                        _out_s78_29 = 0;
                      
                                            break;
                      }
                      case Const::CONST_type:
                                            {
                                            Const*  _a_68 = (Const* )  a_68;

                        _out_s78_29 = 0;
                      
                                            break;
                      }
                      case None::NONE_type:
                                            {
                                            None*  _a_68 = (None* )  a_68;

                        _out_s78_29 = 0;
                      
                                            break;
                      }

 }
                      if (_out_s78_29) {
                        _out_s84__0_5 = _t_46->val;
                        _has_out__45 = 1;
                      }
                      assert (!((_has_out__45) == (0)));;
                    
                                        break;
                    }

 }
                    _out_s84_9 = _out_s84__0_5;
                  }
                }
              
                            break;
              }

 }
              _out_s84__0_4 = _out_s84_9;
            }
          }
        
                break;
        }

 }
        _out_s84_5 = _out_s84__0_4;
      }
    }
  
    break;
  }

 }
  _out_s76_3 = _out_s84_5;
  bool  _out_s70_1=0;
  equals_AST_s0(_out_s76_3, None::create(0), 6, _out_s70_1);
  AST*  n2_s52=NULL;
  if (_out_s70_1) {
    Tree<AST* > *  _out_s74_4=NULL;
    Node<AST* > *  set__ANONYMOUS_s96_4_4_4=((Node<AST* > *)(set__ANONYMOUS_s96));
    Tree<AST* > *  t_47=set__ANONYMOUS_s96_4_4_4->left;
    Tree<AST* > *  _out_s92_6=NULL;
    Tree<AST* > *  nil_19=Nil<AST* >::create();
    bool  _has_out__46=0;
    switch(t_47->type){
    case Nil<AST* >::NIL_type:
        {
        Nil<AST* > *  _t_47 = (Nil<AST* > * )  t_47;

      _out_s92_6 = Node<AST* >::create(n2_s50, nil_19, nil_19);
    
        break;
    }
    case Node<AST* >::NODE_type:
        {
        Node<AST* > *  _t_47 = (Node<AST* > * )  t_47;

      AST*  a_69=_t_47->val;
      bool  _out_s86_15=0;
      switch(a_69->type){
      case Plus::PLUS_type:
            {
            Plus*  _a_69 = (Plus* )  a_69;

        Plus*  n2_s50_2fc_2dc_21=((Plus*)(n2_s50));
        _out_s86_15 = ((_a_69->left->id) == (n2_s50_2fc_2dc_21->left->id)) && ((_a_69->right->id) == (n2_s50_2fc_2dc_21->right->id));
      
            break;
      }
      case Minus::MINUS_type:
            {
            Minus*  _a_69 = (Minus* )  a_69;

        _out_s86_15 = 0;
      
            break;
      }
      case Const::CONST_type:
            {
            Const*  _a_69 = (Const* )  a_69;

        _out_s86_15 = 0;
      
            break;
      }
      case None::NONE_type:
            {
            None*  _a_69 = (None* )  a_69;

        _out_s86_15 = 0;
      
            break;
      }

 }
      if (_out_s86_15) {
        _out_s92_6 = _t_47;
        _has_out__46 = 1;
      }
      bool  _out_s88_7=0;
      if ((_has_out__46) == (0)) {
        AST*  a_70=_t_47->val;
        switch(a_70->type){
        case Plus::PLUS_type:
                {
                Plus*  _a_70 = (Plus* )  a_70;

          Plus*  n2_s50_2fc_2dc_22=((Plus*)(n2_s50));
          _out_s88_7 = ((_a_70->left->id) < (n2_s50_2fc_2dc_22->left->id)) || (((_a_70->left->id) == (n2_s50_2fc_2dc_22->left->id)) && ((_a_70->right->id) < (n2_s50_2fc_2dc_22->right->id)));
        
                break;
        }
        case Minus::MINUS_type:
                {
                Minus*  _a_70 = (Minus* )  a_70;

          _out_s88_7 = 0;
        
                break;
        }
        case Const::CONST_type:
                {
                Const*  _a_70 = (Const* )  a_70;

          _out_s88_7 = 0;
        
                break;
        }
        case None::NONE_type:
                {
                None*  _a_70 = (None* )  a_70;

          _out_s88_7 = 0;
        
                break;
        }

 }
      }
      if ((_has_out__46) == (0)) {
        if (_out_s88_7) {
          Tree<AST* > *  t_48=_t_47->right;
          Tree<AST* > *  _out_s90_6=NULL;
          Tree<AST* > *  nil_20=Nil<AST* >::create();
          bool  _has_out__47=0;
          switch(t_48->type){
          case Nil<AST* >::NIL_type:
                    {
                    Nil<AST* > *  _t_48 = (Nil<AST* > * )  t_48;

            _out_s90_6 = Node<AST* >::create(n2_s50, nil_20, nil_20);
          
                    break;
          }
          case Node<AST* >::NODE_type:
                    {
                    Node<AST* > *  _t_48 = (Node<AST* > * )  t_48;

            AST*  a_71=_t_48->val;
            bool  _out_s86_16=0;
            switch(a_71->type){
            case Plus::PLUS_type:
                        {
                        Plus*  _a_71 = (Plus* )  a_71;

              Plus*  n2_s50_2fc_2dc_23=((Plus*)(n2_s50));
              _out_s86_16 = ((_a_71->left->id) == (n2_s50_2fc_2dc_23->left->id)) && ((_a_71->right->id) == (n2_s50_2fc_2dc_23->right->id));
            
                        break;
            }
            case Minus::MINUS_type:
                        {
                        Minus*  _a_71 = (Minus* )  a_71;

              _out_s86_16 = 0;
            
                        break;
            }
            case Const::CONST_type:
                        {
                        Const*  _a_71 = (Const* )  a_71;

              _out_s86_16 = 0;
            
                        break;
            }
            case None::NONE_type:
                        {
                        None*  _a_71 = (None* )  a_71;

              _out_s86_16 = 0;
            
                        break;
            }

 }
            if (_out_s86_16) {
              _out_s90_6 = _t_48;
              _has_out__47 = 1;
            }
            bool  _out_s88_8=0;
            if ((_has_out__47) == (0)) {
              AST*  a_72=_t_48->val;
              switch(a_72->type){
              case Plus::PLUS_type:
                            {
                            Plus*  _a_72 = (Plus* )  a_72;

                Plus*  n2_s50_2fc_2dc_24=((Plus*)(n2_s50));
                _out_s88_8 = ((_a_72->left->id) < (n2_s50_2fc_2dc_24->left->id)) || (((_a_72->left->id) == (n2_s50_2fc_2dc_24->left->id)) && ((_a_72->right->id) < (n2_s50_2fc_2dc_24->right->id)));
              
                            break;
              }
              case Minus::MINUS_type:
                            {
                            Minus*  _a_72 = (Minus* )  a_72;

                _out_s88_8 = 0;
              
                            break;
              }
              case Const::CONST_type:
                            {
                            Const*  _a_72 = (Const* )  a_72;

                _out_s88_8 = 0;
              
                            break;
              }
              case None::NONE_type:
                            {
                            None*  _a_72 = (None* )  a_72;

                _out_s88_8 = 0;
              
                            break;
              }

 }
            }
            if ((_has_out__47) == (0)) {
              if (_out_s88_8) {
                Tree<AST* > *  t_49=_t_48->right;
                Tree<AST* > *  _out_s90__0_1=NULL;
                Tree<AST* > *  nil_21=Nil<AST* >::create();
                bool  _has_out__48=0;
                switch(t_49->type){
                case Nil<AST* >::NIL_type:
                                {
                                Nil<AST* > *  _t_49 = (Nil<AST* > * )  t_49;

                  _out_s90__0_1 = Node<AST* >::create(n2_s50, nil_21, nil_21);
                
                                break;
                }
                case Node<AST* >::NODE_type:
                                {
                                Node<AST* > *  _t_49 = (Node<AST* > * )  t_49;

                  AST*  a_73=_t_49->val;
                  bool  _out_s86_17=0;
                  switch(a_73->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_73 = (Plus* )  a_73;

                    Plus*  n2_s50_2fc_2dc_25=((Plus*)(n2_s50));
                    _out_s86_17 = ((_a_73->left->id) == (n2_s50_2fc_2dc_25->left->id)) && ((_a_73->right->id) == (n2_s50_2fc_2dc_25->right->id));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_73 = (Minus* )  a_73;

                    _out_s86_17 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_73 = (Const* )  a_73;

                    _out_s86_17 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_73 = (None* )  a_73;

                    _out_s86_17 = 0;
                  
                                    break;
                  }

 }
                  if (_out_s86_17) {
                    _out_s90__0_1 = _t_49;
                    _has_out__48 = 1;
                  }
                  bool  _out_s88_9=0;
                  if ((_has_out__48) == (0)) {
                    AST*  a_74=_t_49->val;
                    switch(a_74->type){
                    case Plus::PLUS_type:
                                        {
                                        Plus*  _a_74 = (Plus* )  a_74;

                      Plus*  n2_s50_2fc_2dc_26=((Plus*)(n2_s50));
                      _out_s88_9 = ((_a_74->left->id) < (n2_s50_2fc_2dc_26->left->id)) || (((_a_74->left->id) == (n2_s50_2fc_2dc_26->left->id)) && ((_a_74->right->id) < (n2_s50_2fc_2dc_26->right->id)));
                    
                                        break;
                    }
                    case Minus::MINUS_type:
                                        {
                                        Minus*  _a_74 = (Minus* )  a_74;

                      _out_s88_9 = 0;
                    
                                        break;
                    }
                    case Const::CONST_type:
                                        {
                                        Const*  _a_74 = (Const* )  a_74;

                      _out_s88_9 = 0;
                    
                                        break;
                    }
                    case None::NONE_type:
                                        {
                                        None*  _a_74 = (None* )  a_74;

                      _out_s88_9 = 0;
                    
                                        break;
                    }

 }
                  }
                  if ((_has_out__48) == (0)) {
                    if (_out_s88_9) {
                      Tree<AST* > *  t_50=_t_49->right;
                      Tree<AST* > *  _out_s90_7=NULL;
                      Tree<AST* > *  nil_22=Nil<AST* >::create();
                      bool  _has_out__49=0;
                      switch(t_50->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_50 = (Nil<AST* > * )  t_50;

                        _out_s90_7 = Node<AST* >::create(n2_s50, nil_22, nil_22);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_50 = (Node<AST* > * )  t_50;

                        AST*  a_75=_t_50->val;
                        bool  _out_s86_18=0;
                        switch(a_75->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_75 = (Plus* )  a_75;

                          Plus*  n2_s50_2fc_2dc_27=((Plus*)(n2_s50));
                          _out_s86_18 = ((_a_75->left->id) == (n2_s50_2fc_2dc_27->left->id)) && ((_a_75->right->id) == (n2_s50_2fc_2dc_27->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_75 = (Minus* )  a_75;

                          _out_s86_18 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_75 = (Const* )  a_75;

                          _out_s86_18 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_75 = (None* )  a_75;

                          _out_s86_18 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_18) {
                          _out_s90_7 = _t_50;
                          _has_out__49 = 1;
                        }
                        assert (!((_has_out__49) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s90__0_1 = Node<AST* >::create(_t_49->val, _t_49->left, _out_s90_7);
                    } else {
                      Tree<AST* > *  t_51=_t_49->left;
                      Tree<AST* > *  _out_s92_7=NULL;
                      Tree<AST* > *  nil_23=Nil<AST* >::create();
                      bool  _has_out__50=0;
                      switch(t_51->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_51 = (Nil<AST* > * )  t_51;

                        _out_s92_7 = Node<AST* >::create(n2_s50, nil_23, nil_23);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_51 = (Node<AST* > * )  t_51;

                        AST*  a_76=_t_51->val;
                        bool  _out_s86_19=0;
                        switch(a_76->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_76 = (Plus* )  a_76;

                          Plus*  n2_s50_2fc_2dc_28=((Plus*)(n2_s50));
                          _out_s86_19 = ((_a_76->left->id) == (n2_s50_2fc_2dc_28->left->id)) && ((_a_76->right->id) == (n2_s50_2fc_2dc_28->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_76 = (Minus* )  a_76;

                          _out_s86_19 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_76 = (Const* )  a_76;

                          _out_s86_19 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_76 = (None* )  a_76;

                          _out_s86_19 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_19) {
                          _out_s92_7 = _t_51;
                          _has_out__50 = 1;
                        }
                        assert (!((_has_out__50) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s90__0_1 = Node<AST* >::create(_t_49->val, _out_s92_7, _t_49->right);
                    }
                  }
                
                                break;
                }

 }
                _out_s90_6 = Node<AST* >::create(_t_48->val, _t_48->left, _out_s90__0_1);
              } else {
                Tree<AST* > *  t_52=_t_48->left;
                Tree<AST* > *  _out_s92_8=NULL;
                Tree<AST* > *  nil_24=Nil<AST* >::create();
                bool  _has_out__51=0;
                switch(t_52->type){
                case Nil<AST* >::NIL_type:
                                {
                                Nil<AST* > *  _t_52 = (Nil<AST* > * )  t_52;

                  _out_s92_8 = Node<AST* >::create(n2_s50, nil_24, nil_24);
                
                                break;
                }
                case Node<AST* >::NODE_type:
                                {
                                Node<AST* > *  _t_52 = (Node<AST* > * )  t_52;

                  AST*  a_77=_t_52->val;
                  bool  _out_s86_20=0;
                  switch(a_77->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_77 = (Plus* )  a_77;

                    Plus*  n2_s50_2fc_2dc_29=((Plus*)(n2_s50));
                    _out_s86_20 = ((_a_77->left->id) == (n2_s50_2fc_2dc_29->left->id)) && ((_a_77->right->id) == (n2_s50_2fc_2dc_29->right->id));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_77 = (Minus* )  a_77;

                    _out_s86_20 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_77 = (Const* )  a_77;

                    _out_s86_20 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_77 = (None* )  a_77;

                    _out_s86_20 = 0;
                  
                                    break;
                  }

 }
                  if (_out_s86_20) {
                    _out_s92_8 = _t_52;
                    _has_out__51 = 1;
                  }
                  bool  _out_s88_10=0;
                  if ((_has_out__51) == (0)) {
                    AST*  a_78=_t_52->val;
                    switch(a_78->type){
                    case Plus::PLUS_type:
                                        {
                                        Plus*  _a_78 = (Plus* )  a_78;

                      Plus*  n2_s50_2fc_2dc_30=((Plus*)(n2_s50));
                      _out_s88_10 = ((_a_78->left->id) < (n2_s50_2fc_2dc_30->left->id)) || (((_a_78->left->id) == (n2_s50_2fc_2dc_30->left->id)) && ((_a_78->right->id) < (n2_s50_2fc_2dc_30->right->id)));
                    
                                        break;
                    }
                    case Minus::MINUS_type:
                                        {
                                        Minus*  _a_78 = (Minus* )  a_78;

                      _out_s88_10 = 0;
                    
                                        break;
                    }
                    case Const::CONST_type:
                                        {
                                        Const*  _a_78 = (Const* )  a_78;

                      _out_s88_10 = 0;
                    
                                        break;
                    }
                    case None::NONE_type:
                                        {
                                        None*  _a_78 = (None* )  a_78;

                      _out_s88_10 = 0;
                    
                                        break;
                    }

 }
                  }
                  if ((_has_out__51) == (0)) {
                    if (_out_s88_10) {
                      Tree<AST* > *  t_53=_t_52->right;
                      Tree<AST* > *  _out_s90_8=NULL;
                      Tree<AST* > *  nil_25=Nil<AST* >::create();
                      bool  _has_out__52=0;
                      switch(t_53->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_53 = (Nil<AST* > * )  t_53;

                        _out_s90_8 = Node<AST* >::create(n2_s50, nil_25, nil_25);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_53 = (Node<AST* > * )  t_53;

                        AST*  a_79=_t_53->val;
                        bool  _out_s86_21=0;
                        switch(a_79->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_79 = (Plus* )  a_79;

                          Plus*  n2_s50_2fc_2dc_31=((Plus*)(n2_s50));
                          _out_s86_21 = ((_a_79->left->id) == (n2_s50_2fc_2dc_31->left->id)) && ((_a_79->right->id) == (n2_s50_2fc_2dc_31->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_79 = (Minus* )  a_79;

                          _out_s86_21 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_79 = (Const* )  a_79;

                          _out_s86_21 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_79 = (None* )  a_79;

                          _out_s86_21 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_21) {
                          _out_s90_8 = _t_53;
                          _has_out__52 = 1;
                        }
                        assert (!((_has_out__52) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s92_8 = Node<AST* >::create(_t_52->val, _t_52->left, _out_s90_8);
                    } else {
                      Tree<AST* > *  t_54=_t_52->left;
                      Tree<AST* > *  _out_s92__0_3=NULL;
                      Tree<AST* > *  nil_26=Nil<AST* >::create();
                      bool  _has_out__53=0;
                      switch(t_54->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_54 = (Nil<AST* > * )  t_54;

                        _out_s92__0_3 = Node<AST* >::create(n2_s50, nil_26, nil_26);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_54 = (Node<AST* > * )  t_54;

                        AST*  a_80=_t_54->val;
                        bool  _out_s86_22=0;
                        switch(a_80->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_80 = (Plus* )  a_80;

                          Plus*  n2_s50_2fc_2dc_32=((Plus*)(n2_s50));
                          _out_s86_22 = ((_a_80->left->id) == (n2_s50_2fc_2dc_32->left->id)) && ((_a_80->right->id) == (n2_s50_2fc_2dc_32->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_80 = (Minus* )  a_80;

                          _out_s86_22 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_80 = (Const* )  a_80;

                          _out_s86_22 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_80 = (None* )  a_80;

                          _out_s86_22 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_22) {
                          _out_s92__0_3 = _t_54;
                          _has_out__53 = 1;
                        }
                        assert (!((_has_out__53) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s92_8 = Node<AST* >::create(_t_52->val, _out_s92__0_3, _t_52->right);
                    }
                  }
                
                                break;
                }

 }
                _out_s90_6 = Node<AST* >::create(_t_48->val, _out_s92_8, _t_48->right);
              }
            }
          
                    break;
          }

 }
          _out_s92_6 = Node<AST* >::create(_t_47->val, _t_47->left, _out_s90_6);
        } else {
          Tree<AST* > *  t_55=_t_47->left;
          Tree<AST* > *  _out_s92__0_4=NULL;
          Tree<AST* > *  nil_27=Nil<AST* >::create();
          bool  _has_out__54=0;
          switch(t_55->type){
          case Nil<AST* >::NIL_type:
                    {
                    Nil<AST* > *  _t_55 = (Nil<AST* > * )  t_55;

            _out_s92__0_4 = Node<AST* >::create(n2_s50, nil_27, nil_27);
          
                    break;
          }
          case Node<AST* >::NODE_type:
                    {
                    Node<AST* > *  _t_55 = (Node<AST* > * )  t_55;

            AST*  a_81=_t_55->val;
            bool  _out_s86_23=0;
            switch(a_81->type){
            case Plus::PLUS_type:
                        {
                        Plus*  _a_81 = (Plus* )  a_81;

              Plus*  n2_s50_2fc_2dc_33=((Plus*)(n2_s50));
              _out_s86_23 = ((_a_81->left->id) == (n2_s50_2fc_2dc_33->left->id)) && ((_a_81->right->id) == (n2_s50_2fc_2dc_33->right->id));
            
                        break;
            }
            case Minus::MINUS_type:
                        {
                        Minus*  _a_81 = (Minus* )  a_81;

              _out_s86_23 = 0;
            
                        break;
            }
            case Const::CONST_type:
                        {
                        Const*  _a_81 = (Const* )  a_81;

              _out_s86_23 = 0;
            
                        break;
            }
            case None::NONE_type:
                        {
                        None*  _a_81 = (None* )  a_81;

              _out_s86_23 = 0;
            
                        break;
            }

 }
            if (_out_s86_23) {
              _out_s92__0_4 = _t_55;
              _has_out__54 = 1;
            }
            bool  _out_s88_11=0;
            if ((_has_out__54) == (0)) {
              AST*  a_82=_t_55->val;
              switch(a_82->type){
              case Plus::PLUS_type:
                            {
                            Plus*  _a_82 = (Plus* )  a_82;

                Plus*  n2_s50_2fc_2dc_34=((Plus*)(n2_s50));
                _out_s88_11 = ((_a_82->left->id) < (n2_s50_2fc_2dc_34->left->id)) || (((_a_82->left->id) == (n2_s50_2fc_2dc_34->left->id)) && ((_a_82->right->id) < (n2_s50_2fc_2dc_34->right->id)));
              
                            break;
              }
              case Minus::MINUS_type:
                            {
                            Minus*  _a_82 = (Minus* )  a_82;

                _out_s88_11 = 0;
              
                            break;
              }
              case Const::CONST_type:
                            {
                            Const*  _a_82 = (Const* )  a_82;

                _out_s88_11 = 0;
              
                            break;
              }
              case None::NONE_type:
                            {
                            None*  _a_82 = (None* )  a_82;

                _out_s88_11 = 0;
              
                            break;
              }

 }
            }
            if ((_has_out__54) == (0)) {
              if (_out_s88_11) {
                Tree<AST* > *  t_56=_t_55->right;
                Tree<AST* > *  _out_s90_9=NULL;
                Tree<AST* > *  nil_28=Nil<AST* >::create();
                bool  _has_out__55=0;
                switch(t_56->type){
                case Nil<AST* >::NIL_type:
                                {
                                Nil<AST* > *  _t_56 = (Nil<AST* > * )  t_56;

                  _out_s90_9 = Node<AST* >::create(n2_s50, nil_28, nil_28);
                
                                break;
                }
                case Node<AST* >::NODE_type:
                                {
                                Node<AST* > *  _t_56 = (Node<AST* > * )  t_56;

                  AST*  a_83=_t_56->val;
                  bool  _out_s86_24=0;
                  switch(a_83->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_83 = (Plus* )  a_83;

                    Plus*  n2_s50_2fc_2dc_35=((Plus*)(n2_s50));
                    _out_s86_24 = ((_a_83->left->id) == (n2_s50_2fc_2dc_35->left->id)) && ((_a_83->right->id) == (n2_s50_2fc_2dc_35->right->id));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_83 = (Minus* )  a_83;

                    _out_s86_24 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_83 = (Const* )  a_83;

                    _out_s86_24 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_83 = (None* )  a_83;

                    _out_s86_24 = 0;
                  
                                    break;
                  }

 }
                  if (_out_s86_24) {
                    _out_s90_9 = _t_56;
                    _has_out__55 = 1;
                  }
                  bool  _out_s88_12=0;
                  if ((_has_out__55) == (0)) {
                    AST*  a_84=_t_56->val;
                    switch(a_84->type){
                    case Plus::PLUS_type:
                                        {
                                        Plus*  _a_84 = (Plus* )  a_84;

                      Plus*  n2_s50_2fc_2dc_36=((Plus*)(n2_s50));
                      _out_s88_12 = ((_a_84->left->id) < (n2_s50_2fc_2dc_36->left->id)) || (((_a_84->left->id) == (n2_s50_2fc_2dc_36->left->id)) && ((_a_84->right->id) < (n2_s50_2fc_2dc_36->right->id)));
                    
                                        break;
                    }
                    case Minus::MINUS_type:
                                        {
                                        Minus*  _a_84 = (Minus* )  a_84;

                      _out_s88_12 = 0;
                    
                                        break;
                    }
                    case Const::CONST_type:
                                        {
                                        Const*  _a_84 = (Const* )  a_84;

                      _out_s88_12 = 0;
                    
                                        break;
                    }
                    case None::NONE_type:
                                        {
                                        None*  _a_84 = (None* )  a_84;

                      _out_s88_12 = 0;
                    
                                        break;
                    }

 }
                  }
                  if ((_has_out__55) == (0)) {
                    if (_out_s88_12) {
                      Tree<AST* > *  t_57=_t_56->right;
                      Tree<AST* > *  _out_s90__0_2=NULL;
                      Tree<AST* > *  nil_29=Nil<AST* >::create();
                      bool  _has_out__56=0;
                      switch(t_57->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_57 = (Nil<AST* > * )  t_57;

                        _out_s90__0_2 = Node<AST* >::create(n2_s50, nil_29, nil_29);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_57 = (Node<AST* > * )  t_57;

                        AST*  a_85=_t_57->val;
                        bool  _out_s86_25=0;
                        switch(a_85->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_85 = (Plus* )  a_85;

                          Plus*  n2_s50_2fc_2dc_37=((Plus*)(n2_s50));
                          _out_s86_25 = ((_a_85->left->id) == (n2_s50_2fc_2dc_37->left->id)) && ((_a_85->right->id) == (n2_s50_2fc_2dc_37->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_85 = (Minus* )  a_85;

                          _out_s86_25 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_85 = (Const* )  a_85;

                          _out_s86_25 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_85 = (None* )  a_85;

                          _out_s86_25 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_25) {
                          _out_s90__0_2 = _t_57;
                          _has_out__56 = 1;
                        }
                        assert (!((_has_out__56) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s90_9 = Node<AST* >::create(_t_56->val, _t_56->left, _out_s90__0_2);
                    } else {
                      Tree<AST* > *  t_58=_t_56->left;
                      Tree<AST* > *  _out_s92_9=NULL;
                      Tree<AST* > *  nil_30=Nil<AST* >::create();
                      bool  _has_out__57=0;
                      switch(t_58->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_58 = (Nil<AST* > * )  t_58;

                        _out_s92_9 = Node<AST* >::create(n2_s50, nil_30, nil_30);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_58 = (Node<AST* > * )  t_58;

                        AST*  a_86=_t_58->val;
                        bool  _out_s86_26=0;
                        switch(a_86->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_86 = (Plus* )  a_86;

                          Plus*  n2_s50_2fc_2dc_38=((Plus*)(n2_s50));
                          _out_s86_26 = ((_a_86->left->id) == (n2_s50_2fc_2dc_38->left->id)) && ((_a_86->right->id) == (n2_s50_2fc_2dc_38->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_86 = (Minus* )  a_86;

                          _out_s86_26 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_86 = (Const* )  a_86;

                          _out_s86_26 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_86 = (None* )  a_86;

                          _out_s86_26 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_26) {
                          _out_s92_9 = _t_58;
                          _has_out__57 = 1;
                        }
                        assert (!((_has_out__57) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s90_9 = Node<AST* >::create(_t_56->val, _out_s92_9, _t_56->right);
                    }
                  }
                
                                break;
                }

 }
                _out_s92__0_4 = Node<AST* >::create(_t_55->val, _t_55->left, _out_s90_9);
              } else {
                Tree<AST* > *  t_59=_t_55->left;
                Tree<AST* > *  _out_s92_10=NULL;
                Tree<AST* > *  nil_31=Nil<AST* >::create();
                bool  _has_out__58=0;
                switch(t_59->type){
                case Nil<AST* >::NIL_type:
                                {
                                Nil<AST* > *  _t_59 = (Nil<AST* > * )  t_59;

                  _out_s92_10 = Node<AST* >::create(n2_s50, nil_31, nil_31);
                
                                break;
                }
                case Node<AST* >::NODE_type:
                                {
                                Node<AST* > *  _t_59 = (Node<AST* > * )  t_59;

                  AST*  a_87=_t_59->val;
                  bool  _out_s86_27=0;
                  switch(a_87->type){
                  case Plus::PLUS_type:
                                    {
                                    Plus*  _a_87 = (Plus* )  a_87;

                    Plus*  n2_s50_2fc_2dc_39=((Plus*)(n2_s50));
                    _out_s86_27 = ((_a_87->left->id) == (n2_s50_2fc_2dc_39->left->id)) && ((_a_87->right->id) == (n2_s50_2fc_2dc_39->right->id));
                  
                                    break;
                  }
                  case Minus::MINUS_type:
                                    {
                                    Minus*  _a_87 = (Minus* )  a_87;

                    _out_s86_27 = 0;
                  
                                    break;
                  }
                  case Const::CONST_type:
                                    {
                                    Const*  _a_87 = (Const* )  a_87;

                    _out_s86_27 = 0;
                  
                                    break;
                  }
                  case None::NONE_type:
                                    {
                                    None*  _a_87 = (None* )  a_87;

                    _out_s86_27 = 0;
                  
                                    break;
                  }

 }
                  if (_out_s86_27) {
                    _out_s92_10 = _t_59;
                    _has_out__58 = 1;
                  }
                  bool  _out_s88_13=0;
                  if ((_has_out__58) == (0)) {
                    AST*  a_88=_t_59->val;
                    switch(a_88->type){
                    case Plus::PLUS_type:
                                        {
                                        Plus*  _a_88 = (Plus* )  a_88;

                      Plus*  n2_s50_2fc_2dc_40=((Plus*)(n2_s50));
                      _out_s88_13 = ((_a_88->left->id) < (n2_s50_2fc_2dc_40->left->id)) || (((_a_88->left->id) == (n2_s50_2fc_2dc_40->left->id)) && ((_a_88->right->id) < (n2_s50_2fc_2dc_40->right->id)));
                    
                                        break;
                    }
                    case Minus::MINUS_type:
                                        {
                                        Minus*  _a_88 = (Minus* )  a_88;

                      _out_s88_13 = 0;
                    
                                        break;
                    }
                    case Const::CONST_type:
                                        {
                                        Const*  _a_88 = (Const* )  a_88;

                      _out_s88_13 = 0;
                    
                                        break;
                    }
                    case None::NONE_type:
                                        {
                                        None*  _a_88 = (None* )  a_88;

                      _out_s88_13 = 0;
                    
                                        break;
                    }

 }
                  }
                  if ((_has_out__58) == (0)) {
                    if (_out_s88_13) {
                      Tree<AST* > *  t_60=_t_59->right;
                      Tree<AST* > *  _out_s90_10=NULL;
                      Tree<AST* > *  nil_32=Nil<AST* >::create();
                      bool  _has_out__59=0;
                      switch(t_60->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_60 = (Nil<AST* > * )  t_60;

                        _out_s90_10 = Node<AST* >::create(n2_s50, nil_32, nil_32);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_60 = (Node<AST* > * )  t_60;

                        AST*  a_89=_t_60->val;
                        bool  _out_s86_28=0;
                        switch(a_89->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_89 = (Plus* )  a_89;

                          Plus*  n2_s50_2fc_2dc_41=((Plus*)(n2_s50));
                          _out_s86_28 = ((_a_89->left->id) == (n2_s50_2fc_2dc_41->left->id)) && ((_a_89->right->id) == (n2_s50_2fc_2dc_41->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_89 = (Minus* )  a_89;

                          _out_s86_28 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_89 = (Const* )  a_89;

                          _out_s86_28 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_89 = (None* )  a_89;

                          _out_s86_28 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_28) {
                          _out_s90_10 = _t_60;
                          _has_out__59 = 1;
                        }
                        assert (!((_has_out__59) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s92_10 = Node<AST* >::create(_t_59->val, _t_59->left, _out_s90_10);
                    } else {
                      Tree<AST* > *  t_61=_t_59->left;
                      Tree<AST* > *  _out_s92__0_5=NULL;
                      Tree<AST* > *  nil_33=Nil<AST* >::create();
                      bool  _has_out__60=0;
                      switch(t_61->type){
                      case Nil<AST* >::NIL_type:
                                            {
                                            Nil<AST* > *  _t_61 = (Nil<AST* > * )  t_61;

                        _out_s92__0_5 = Node<AST* >::create(n2_s50, nil_33, nil_33);
                      
                                            break;
                      }
                      case Node<AST* >::NODE_type:
                                            {
                                            Node<AST* > *  _t_61 = (Node<AST* > * )  t_61;

                        AST*  a_90=_t_61->val;
                        bool  _out_s86_29=0;
                        switch(a_90->type){
                        case Plus::PLUS_type:
                                                {
                                                Plus*  _a_90 = (Plus* )  a_90;

                          Plus*  n2_s50_2fc_2dc_42=((Plus*)(n2_s50));
                          _out_s86_29 = ((_a_90->left->id) == (n2_s50_2fc_2dc_42->left->id)) && ((_a_90->right->id) == (n2_s50_2fc_2dc_42->right->id));
                        
                                                break;
                        }
                        case Minus::MINUS_type:
                                                {
                                                Minus*  _a_90 = (Minus* )  a_90;

                          _out_s86_29 = 0;
                        
                                                break;
                        }
                        case Const::CONST_type:
                                                {
                                                Const*  _a_90 = (Const* )  a_90;

                          _out_s86_29 = 0;
                        
                                                break;
                        }
                        case None::NONE_type:
                                                {
                                                None*  _a_90 = (None* )  a_90;

                          _out_s86_29 = 0;
                        
                                                break;
                        }

 }
                        if (_out_s86_29) {
                          _out_s92__0_5 = _t_61;
                          _has_out__60 = 1;
                        }
                        assert (!((_has_out__60) == (0)));;
                      
                                            break;
                      }

 }
                      _out_s92_10 = Node<AST* >::create(_t_59->val, _out_s92__0_5, _t_59->right);
                    }
                  }
                
                                break;
                }

 }
                _out_s92__0_4 = Node<AST* >::create(_t_55->val, _out_s92_10, _t_55->right);
              }
            }
          
                    break;
          }

 }
          _out_s92_6 = Node<AST* >::create(_t_47->val, _out_s92__0_4, _t_47->right);
        }
      }
    
        break;
    }

 }
    _out_s74_4 = Node<AST* >::create(set__ANONYMOUS_s96_4_4_4->val, _out_s92_6, set__ANONYMOUS_s96_4_4_4->right);
    set__ANONYMOUS_s96 = _out_s74_4;
    n2_s52 = n2_s50;
  } else {
    n2_s52 = _out_s76_3;
  }
  print(n1_s34);
  print(n2_s52);
  foo(ID__ANONYMOUS_s101, set__ANONYMOUS_s96);
}
void equals_AST_s0(AST* left_s1, AST* right_s2, int bnd_s3, bool& _out) {
  if ((bnd_s3) <= (0)) {
    _out = 0;
    return;
  }
  if (((left_s1) == (NULL)) && ((right_s2) == (NULL))) {
    _out = 1;
    return;
  }
  if ((left_s1) == (NULL)) {
    _out = 0;
    return;
  }
  if ((right_s2) == (NULL)) {
    _out = 0;
    return;
  }
  if (!((left_s1->id) == (right_s2->id))) {
    _out = 0;
    return;
  }
  switch(left_s1->type){
  case Plus::PLUS_type:
    {
    Plus*  _left_s1 = (Plus* )  left_s1;

    switch(right_s2->type){
    case Plus::PLUS_type:
        {
        Plus*  _right_s2 = (Plus* )  right_s2;

      bool  _pac_sc_s7_s9=0;
      equals_AST_s0(_left_s1->left, _right_s2->left, bnd_s3 - 1, _pac_sc_s7_s9);
      bool  _pac_sc_s7=0;
      _pac_sc_s7 = _pac_sc_s7_s9;
      if (_pac_sc_s7_s9) {
        bool  _pac_sc_s7_s11=0;
        equals_AST_s0(_left_s1->right, _right_s2->right, bnd_s3 - 1, _pac_sc_s7_s11);
        _pac_sc_s7 = _pac_sc_s7_s11;
      }
      _out = _pac_sc_s7;
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }
  case Minus::MINUS_type:
    {
    Minus*  _left_s1 = (Minus* )  left_s1;

    switch(right_s2->type){
    case Minus::MINUS_type:
        {
        Minus*  _right_s2 = (Minus* )  right_s2;

      bool  _pac_sc_s12_s14=0;
      equals_AST_s0(_left_s1->left, _right_s2->left, bnd_s3 - 1, _pac_sc_s12_s14);
      bool  _pac_sc_s12=0;
      _pac_sc_s12 = _pac_sc_s12_s14;
      if (_pac_sc_s12_s14) {
        bool  _pac_sc_s12_s16=0;
        equals_AST_s0(_left_s1->right, _right_s2->right, bnd_s3 - 1, _pac_sc_s12_s16);
        _pac_sc_s12 = _pac_sc_s12_s16;
      }
      _out = _pac_sc_s12;
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }
  case Const::CONST_type:
    {
    Const*  _left_s1 = (Const* )  left_s1;

    switch(right_s2->type){
    case Const::CONST_type:
        {
        Const*  _right_s2 = (Const* )  right_s2;

      _out = (_left_s1->n) == (_right_s2->n);
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }
  case None::NONE_type:
    {
    None*  _left_s1 = (None* )  left_s1;

    switch(right_s2->type){
    case None::NONE_type:
        {
        None*  _right_s2 = (None* )  right_s2;

      _out = 1;
      return;
    
        break;
    }
    default:
        {
        
      _out = 0;
      return;
    
        break;
    }

 }
  
    break;
  }

 }
}
void print(AST* n) {}
void foo(int& ID__ANONYMOUS_s102, Tree<AST* > *& set__ANONYMOUS_s97) {
  ID__ANONYMOUS_s102 = ID__ANONYMOUS_s102 + 1;
  ID__ANONYMOUS_s102 = ID__ANONYMOUS_s102 + 1;
  ID__ANONYMOUS_s102 = ID__ANONYMOUS_s102 + 1;
  print(NULL);
  int  uo_s4=ID__ANONYMOUS_s102;
  ID__ANONYMOUS_s102 = ID__ANONYMOUS_s102 + 1;
  AST*  t1_s60=Const::create(5, uo_s4);
  ID__ANONYMOUS_s102 = ID__ANONYMOUS_s102 + 1;
  print(t1_s60);
  set__ANONYMOUS_s97 = Nil<AST* >::create();
}

}
