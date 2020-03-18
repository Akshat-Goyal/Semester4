#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb678.h"
namespace JPanel{


}
namespace ImageIcon{


}
namespace Frame{

void Frame_Frame(type::Object*& _out_3c5, type::Object** obj_Container_s831_3c6/* len = 10 */, int& obj_Component_cnt_s839_3c7, int& obj_Frame_cnt_s837_3c8, int& obj_Container_cnt_s832_3c9, type::Object** obj_Component_s840_3ca/* len = 10 */, type::Object** obj_Window_s841_3cb/* len = 10 */, int& obj_Window_cnt_s842_3cc, type::Object** obj_Frame_s838_3cd/* len = 10 */, int& obj_cnt_s636_3ce) {
  type::Object*  self_s88_3cf=NULL;
  Window::Window_Window(self_s88_3cf, obj_Container_s831_3c6, obj_Component_cnt_s839_3c7, obj_Container_cnt_s832_3c9, obj_Component_s840_3ca, obj_Window_s841_3cb, obj_Window_cnt_s842_3cc, obj_cnt_s636_3ce);
  _out_3c5 = self_s88_3cf;
  alog::register_Frame(self_s88_3cf, obj_Frame_cnt_s837_3c8, obj_Frame_s838_3cd);
  return;
}

}
namespace ActionEvent{

void ActionEvent_ActionEvent_Object_int_String(type::Object* source_1ab, int id_1ac, char* actioncommand_1ad/* len = 51 */, type::Object*& _out_1ae, int& obj_ActionEvent_cnt_s987_1af, int& obj_AWTEvent_cnt_s919_1b0, type::Object** obj_EventObject_s581_1b1/* len = 10 */, type::Object** obj_AWTEvent_s920_1b2/* len = 10 */, int& obj_EventObject_cnt_s582_1b3, int& obj_cnt_s904_1b4, type::Object** obj_ActionEvent_s988_1b5/* len = 10 */) {
  type::Object*  self_s50_1b6=NULL;
  AWTEvent::AWTEvent_AWTEvent_Object_int(source_1ab, id_1ac, self_s50_1b6, obj_AWTEvent_cnt_s919_1b0, obj_EventObject_s581_1b1, obj_AWTEvent_s920_1b2, obj_EventObject_cnt_s582_1b3, obj_cnt_s904_1b4);
  _out_1ae = self_s50_1b6;
  CopyArr<char >(self_s50_1b6->_actioncommand_ActionEvent,actioncommand_1ad, 51, 51);
  alog::register_ActionEvent(self_s50_1b6, obj_ActionEvent_cnt_s987_1af, obj_ActionEvent_s988_1b5);
  return;
}
void getActionCommand_ActionEvent(type::Object* self_32b, char* _out_32c/* len = 51 */, int* ev_s939_32d/* len = 5 * 82 */, int* obj_s940_32e/* len = 10 */, int& log_cnt_s941_32f) {
  int  params_s46_331=0;
  alog::getActionCommand_ActionEvent_ent(params_s46_331);
  int _tt0[2] = {params_s46_331, self_32b->hash};
  int*  params_330= new int [5]; CopyArr<int >(params_330,_tt0, 5, 2);
  alog::check_log(params_330, ev_s939_32d, obj_s940_32e, log_cnt_s941_32f);
  int  params_s48_332=0;
  alog::getActionCommand_ActionEvent_ext(params_s48_332);
  int _tt1[1] = {params_s48_332};
  CopyArr<int >(params_330,_tt1, 5, 1);
  alog::check_log(params_330, ev_s939_32d, obj_s940_32e, log_cnt_s941_32f);
  CopyArr<char >(_out_32c,self_32b->_actioncommand_ActionEvent, 51, 51);
  delete[] params_330;
  return;
}

}
namespace JButton{

void JButton_JButton_String_Icon(char* text_3e3/* len = 51 */, type::Object* icon_3e4, type::Object*& _out_3e5, int& obj_AbstractButton_cnt_s955_3e6, type::Object** obj_AbstractButton_s956_3e7/* len = 10 */, type::Object** obj_Container_s825_3e8/* len = 10 */, int& obj_Component_cnt_s562_3e9, int& obj_Container_cnt_s826_3ea, type::Object** obj_JComponent_s1002_3eb/* len = 10 */, type::Object** obj_Component_s563_3ec/* len = 10 */, int& obj_cnt_s985_3ed, type::Object** obj_JButton_s1021_3ee/* len = 10 */, int& obj_JComponent_cnt_s1003_3ef, int& obj_JButton_cnt_s1022_3f0) {
  type::Object*  self_s100_3f1=NULL;
  AbstractButton::AbstractButton_AbstractButton(self_s100_3f1, obj_AbstractButton_cnt_s955_3e6, obj_AbstractButton_s956_3e7, obj_Container_s825_3e8, obj_Component_cnt_s562_3e9, obj_Container_cnt_s826_3ea, obj_JComponent_s1002_3eb, obj_Component_s563_3ec, obj_cnt_s985_3ed, obj_JComponent_cnt_s1003_3ef);
  _out_3e5 = self_s100_3f1;
  CopyArr<char >(self_s100_3f1->_text_JButton,text_3e3, 51, 51);
  self_s100_3f1->_icon_JButton = icon_3e4;
  CopyArr<char >(self_s100_3f1->_actioncommand_AbstractButton,text_3e3, 51, 51);
  alog::register_JButton(self_s100_3f1, obj_JButton_s1021_3ee, obj_JButton_cnt_s1022_3f0);
  return;
}

}
namespace type{

template<typename T_0, typename T_1, typename T_2, typename T_3, typename T_4, typename T_5, typename T_6, typename T_7, typename T_8, typename T_9, typename T_10, typename T_11, typename T_12, typename T_13>
Object* Object::create(int  hash_, bool  _enabled_Component_, bool  _vible_Component_, T_0* _name_JFrame_, int _name_JFrame_len, int  _defaultcloseoperation_JFrame_, Object*  _contentpane_JFrame_, bool  _opaque_JComponent_, T_1* _tooltiptext_JComponent_, int _tooltiptext_JComponent_len, int  _verticaltextposition_AbstractButton_, int  _horizontaltextposition_AbstractButton_, int  _mnemonic_AbstractButton_, T_2* _actioncommand_AbstractButton_, int _actioncommand_AbstractButton_len, bool  _selected_AbstractButton_, T_3* _text_JButton_, int _text_JButton_len, Object*  _icon_JButton_, T_4* _text_JToggleButton_, int _text_JToggleButton_len, T_5* _text_JCheckBox_, int _text_JCheckBox_len, Object*  _selectionmodel_JColorChooser_, Object*  _color_JColorChooser_, T_6* _items_JComboBox_, int _items_JComboBox_len, int  _selectedindex_JComboBox_, Object*  _icon_JLabel_, T_7* _text_JLabel_, int _text_JLabel_len, int  _horizontalalignment_JLabel_, Object*  _layout_JPanel_, Object*  b1_ButtonDemo_, Object*  b2_ButtonDemo_, Object*  b3_ButtonDemo_, Object*  _view_JScrollPane_, int  _neworientation_JSplitPane_, bool  _continuouslayout_JSplitPane_, bool  _onetouchexpandable_JSplitPane_, T_8* _name_JToolBar_, int _name_JToolBar_len, bool  _floatable_JToolBar_, bool  _rollover_JToolBar_, T_9* _text_JTextComponent_, int _text_JTextComponent_len, bool  _editable_JTextComponent_, int  _rows_JTextArea_, int  _columns_JTextArea_, T_10* _text_JTextField_, int _text_JTextField_len, int  _columns_JTextField_, Object*  _nextevent_EventQueue_, Queue_Object*  _evt_queue_EventQueue_, Object*  _color_Graphics_, Object*  _systemeventqueue_Toolkit_, T_11* value_StringBuffer_, int value_StringBuffer_len, int  count_StringBuffer_, int  _iconheight_ImageIcon_, int  _iconwidth_ImageIcon_, Object*  _selectedcolor_DefaultColorSelectionModel_, int  kind_EventObject_, Object*  _source_EventObject_, Object*  _source_AWTEvent_, int  _id_AWTEvent_, T_12* _actioncommand_ActionEvent_, int _actioncommand_ActionEvent_len, Object*  _runnable_InvocationEvent_, Object*  _item_ItemEvent_, int  _statechange_ItemEvent_, Object*  _source_ListSelectionEvent_, int  _firstindex_ListSelectionEvent_, int  _lastindex_ListSelectionEvent_, bool  _adjusting_ListSelectionEvent_, int  kind_AuxObserver1_, int  _verticaltextposition_AuxObserver1_, int  _horizontaltextposition_AuxObserver1_, int  _mnemonic_AuxObserver1_, T_13* _actioncommand_AuxObserver1_, int _actioncommand_AuxObserver1_len, bool  _selected_AuxObserver1_, List_Object*  _obs_AuxObserver1_){
  int tlen__name_JFrame = 51; 
  int tlen__tooltiptext_JComponent = 51; 
  int tlen__actioncommand_AbstractButton = 51; 
  int tlen__text_JButton = 51; 
  int tlen__text_JToggleButton = 51; 
  int tlen__text_JCheckBox = 51; 
  int tlen__items_JComboBox = 138; 
  int tlen__text_JLabel = 51; 
  int tlen__name_JToolBar = 51; 
  int tlen__text_JTextComponent = 51; 
  int tlen__text_JTextField = 51; 
  int tlen_value_StringBuffer = 51; 
  int tlen__actioncommand_ActionEvent = 51; 
  int tlen__actioncommand_AuxObserver1 = 51; 
  void* temp= malloc( sizeof(Object)   + sizeof(char )*tlen__name_JFrame + sizeof(char )*tlen__tooltiptext_JComponent + sizeof(char )*tlen__actioncommand_AbstractButton + sizeof(char )*tlen__text_JButton + sizeof(char )*tlen__text_JToggleButton + sizeof(char )*tlen__text_JCheckBox + sizeof(int )*tlen__items_JComboBox + sizeof(char )*tlen__text_JLabel + sizeof(char )*tlen__name_JToolBar + sizeof(char )*tlen__text_JTextComponent + sizeof(char )*tlen__text_JTextField + sizeof(char )*tlen_value_StringBuffer + sizeof(char )*tlen__actioncommand_ActionEvent + sizeof(char )*tlen__actioncommand_AuxObserver1); 
  Object* rv = new (temp)Object();
  rv->hash =  hash_;
  rv->_enabled_Component =  _enabled_Component_;
  rv->_vible_Component =  _vible_Component_;
  rv->_defaultcloseoperation_JFrame =  _defaultcloseoperation_JFrame_;
  rv->_contentpane_JFrame =  _contentpane_JFrame_;
  rv->_opaque_JComponent =  _opaque_JComponent_;
  rv->_verticaltextposition_AbstractButton =  _verticaltextposition_AbstractButton_;
  rv->_horizontaltextposition_AbstractButton =  _horizontaltextposition_AbstractButton_;
  rv->_mnemonic_AbstractButton =  _mnemonic_AbstractButton_;
  rv->_selected_AbstractButton =  _selected_AbstractButton_;
  rv->_icon_JButton =  _icon_JButton_;
  rv->_selectionmodel_JColorChooser =  _selectionmodel_JColorChooser_;
  rv->_color_JColorChooser =  _color_JColorChooser_;
  rv->_selectedindex_JComboBox =  _selectedindex_JComboBox_;
  rv->_icon_JLabel =  _icon_JLabel_;
  rv->_horizontalalignment_JLabel =  _horizontalalignment_JLabel_;
  rv->_layout_JPanel =  _layout_JPanel_;
  rv->b1_ButtonDemo =  b1_ButtonDemo_;
  rv->b2_ButtonDemo =  b2_ButtonDemo_;
  rv->b3_ButtonDemo =  b3_ButtonDemo_;
  rv->_view_JScrollPane =  _view_JScrollPane_;
  rv->_neworientation_JSplitPane =  _neworientation_JSplitPane_;
  rv->_continuouslayout_JSplitPane =  _continuouslayout_JSplitPane_;
  rv->_onetouchexpandable_JSplitPane =  _onetouchexpandable_JSplitPane_;
  rv->_floatable_JToolBar =  _floatable_JToolBar_;
  rv->_rollover_JToolBar =  _rollover_JToolBar_;
  rv->_editable_JTextComponent =  _editable_JTextComponent_;
  rv->_rows_JTextArea =  _rows_JTextArea_;
  rv->_columns_JTextArea =  _columns_JTextArea_;
  rv->_columns_JTextField =  _columns_JTextField_;
  rv->_nextevent_EventQueue =  _nextevent_EventQueue_;
  rv->_evt_queue_EventQueue =  _evt_queue_EventQueue_;
  rv->_color_Graphics =  _color_Graphics_;
  rv->_systemeventqueue_Toolkit =  _systemeventqueue_Toolkit_;
  rv->count_StringBuffer =  count_StringBuffer_;
  rv->_iconheight_ImageIcon =  _iconheight_ImageIcon_;
  rv->_iconwidth_ImageIcon =  _iconwidth_ImageIcon_;
  rv->_selectedcolor_DefaultColorSelectionModel =  _selectedcolor_DefaultColorSelectionModel_;
  rv->kind_EventObject =  kind_EventObject_;
  rv->_source_EventObject =  _source_EventObject_;
  rv->_source_AWTEvent =  _source_AWTEvent_;
  rv->_id_AWTEvent =  _id_AWTEvent_;
  rv->_runnable_InvocationEvent =  _runnable_InvocationEvent_;
  rv->_item_ItemEvent =  _item_ItemEvent_;
  rv->_statechange_ItemEvent =  _statechange_ItemEvent_;
  rv->_source_ListSelectionEvent =  _source_ListSelectionEvent_;
  rv->_firstindex_ListSelectionEvent =  _firstindex_ListSelectionEvent_;
  rv->_lastindex_ListSelectionEvent =  _lastindex_ListSelectionEvent_;
  rv->_adjusting_ListSelectionEvent =  _adjusting_ListSelectionEvent_;
  rv->kind_AuxObserver1 =  kind_AuxObserver1_;
  rv->_verticaltextposition_AuxObserver1 =  _verticaltextposition_AuxObserver1_;
  rv->_horizontaltextposition_AuxObserver1 =  _horizontaltextposition_AuxObserver1_;
  rv->_mnemonic_AuxObserver1 =  _mnemonic_AuxObserver1_;
  rv->_selected_AuxObserver1 =  _selected_AuxObserver1_;
  rv->_obs_AuxObserver1 =  _obs_AuxObserver1_;
  rv->_name_JFrame= (char* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1); 
  CopyArr(rv->_name_JFrame, _name_JFrame_, tlen__name_JFrame, _name_JFrame_len ); 
  rv->_tooltiptext_JComponent= (char* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1 + sizeof(char )*tlen__name_JFrame); 
  CopyArr(rv->_tooltiptext_JComponent, _tooltiptext_JComponent_, tlen__tooltiptext_JComponent, _tooltiptext_JComponent_len ); 
  rv->_actioncommand_AbstractButton= (char* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1 + sizeof(char )*tlen__name_JFrame + sizeof(char )*tlen__tooltiptext_JComponent); 
  CopyArr(rv->_actioncommand_AbstractButton, _actioncommand_AbstractButton_, tlen__actioncommand_AbstractButton, _actioncommand_AbstractButton_len ); 
  rv->_text_JButton= (char* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1 + sizeof(char )*tlen__name_JFrame + sizeof(char )*tlen__tooltiptext_JComponent + sizeof(char )*tlen__actioncommand_AbstractButton); 
  CopyArr(rv->_text_JButton, _text_JButton_, tlen__text_JButton, _text_JButton_len ); 
  rv->_text_JToggleButton= (char* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1 + sizeof(char )*tlen__name_JFrame + sizeof(char )*tlen__tooltiptext_JComponent + sizeof(char )*tlen__actioncommand_AbstractButton + sizeof(char )*tlen__text_JButton); 
  CopyArr(rv->_text_JToggleButton, _text_JToggleButton_, tlen__text_JToggleButton, _text_JToggleButton_len ); 
  rv->_text_JCheckBox= (char* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1 + sizeof(char )*tlen__name_JFrame + sizeof(char )*tlen__tooltiptext_JComponent + sizeof(char )*tlen__actioncommand_AbstractButton + sizeof(char )*tlen__text_JButton + sizeof(char )*tlen__text_JToggleButton); 
  CopyArr(rv->_text_JCheckBox, _text_JCheckBox_, tlen__text_JCheckBox, _text_JCheckBox_len ); 
  rv->_items_JComboBox= (int* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1 + sizeof(char )*tlen__name_JFrame + sizeof(char )*tlen__tooltiptext_JComponent + sizeof(char )*tlen__actioncommand_AbstractButton + sizeof(char )*tlen__text_JButton + sizeof(char )*tlen__text_JToggleButton + sizeof(char )*tlen__text_JCheckBox); 
  CopyArr(rv->_items_JComboBox, _items_JComboBox_, tlen__items_JComboBox, _items_JComboBox_len ); 
  rv->_text_JLabel= (char* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1 + sizeof(char )*tlen__name_JFrame + sizeof(char )*tlen__tooltiptext_JComponent + sizeof(char )*tlen__actioncommand_AbstractButton + sizeof(char )*tlen__text_JButton + sizeof(char )*tlen__text_JToggleButton + sizeof(char )*tlen__text_JCheckBox + sizeof(int )*tlen__items_JComboBox); 
  CopyArr(rv->_text_JLabel, _text_JLabel_, tlen__text_JLabel, _text_JLabel_len ); 
  rv->_name_JToolBar= (char* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1 + sizeof(char )*tlen__name_JFrame + sizeof(char )*tlen__tooltiptext_JComponent + sizeof(char )*tlen__actioncommand_AbstractButton + sizeof(char )*tlen__text_JButton + sizeof(char )*tlen__text_JToggleButton + sizeof(char )*tlen__text_JCheckBox + sizeof(int )*tlen__items_JComboBox + sizeof(char )*tlen__text_JLabel); 
  CopyArr(rv->_name_JToolBar, _name_JToolBar_, tlen__name_JToolBar, _name_JToolBar_len ); 
  rv->_text_JTextComponent= (char* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1 + sizeof(char )*tlen__name_JFrame + sizeof(char )*tlen__tooltiptext_JComponent + sizeof(char )*tlen__actioncommand_AbstractButton + sizeof(char )*tlen__text_JButton + sizeof(char )*tlen__text_JToggleButton + sizeof(char )*tlen__text_JCheckBox + sizeof(int )*tlen__items_JComboBox + sizeof(char )*tlen__text_JLabel + sizeof(char )*tlen__name_JToolBar); 
  CopyArr(rv->_text_JTextComponent, _text_JTextComponent_, tlen__text_JTextComponent, _text_JTextComponent_len ); 
  rv->_text_JTextField= (char* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1 + sizeof(char )*tlen__name_JFrame + sizeof(char )*tlen__tooltiptext_JComponent + sizeof(char )*tlen__actioncommand_AbstractButton + sizeof(char )*tlen__text_JButton + sizeof(char )*tlen__text_JToggleButton + sizeof(char )*tlen__text_JCheckBox + sizeof(int )*tlen__items_JComboBox + sizeof(char )*tlen__text_JLabel + sizeof(char )*tlen__name_JToolBar + sizeof(char )*tlen__text_JTextComponent); 
  CopyArr(rv->_text_JTextField, _text_JTextField_, tlen__text_JTextField, _text_JTextField_len ); 
  rv->value_StringBuffer= (char* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1 + sizeof(char )*tlen__name_JFrame + sizeof(char )*tlen__tooltiptext_JComponent + sizeof(char )*tlen__actioncommand_AbstractButton + sizeof(char )*tlen__text_JButton + sizeof(char )*tlen__text_JToggleButton + sizeof(char )*tlen__text_JCheckBox + sizeof(int )*tlen__items_JComboBox + sizeof(char )*tlen__text_JLabel + sizeof(char )*tlen__name_JToolBar + sizeof(char )*tlen__text_JTextComponent + sizeof(char )*tlen__text_JTextField); 
  CopyArr(rv->value_StringBuffer, value_StringBuffer_, tlen_value_StringBuffer, value_StringBuffer_len ); 
  rv->_actioncommand_ActionEvent= (char* ) (((char*)&(rv->_actioncommand_AuxObserver1))   + sizeof(char )*tlen__actioncommand_AuxObserver1 + sizeof(char )*tlen__name_JFrame + sizeof(char )*tlen__tooltiptext_JComponent + sizeof(char )*tlen__actioncommand_AbstractButton + sizeof(char )*tlen__text_JButton + sizeof(char )*tlen__text_JToggleButton + sizeof(char )*tlen__text_JCheckBox + sizeof(int )*tlen__items_JComboBox + sizeof(char )*tlen__text_JLabel + sizeof(char )*tlen__name_JToolBar + sizeof(char )*tlen__text_JTextComponent + sizeof(char )*tlen__text_JTextField + sizeof(char )*tlen_value_StringBuffer); 
  CopyArr(rv->_actioncommand_ActionEvent, _actioncommand_ActionEvent_, tlen__actioncommand_ActionEvent, _actioncommand_ActionEvent_len ); 
  CopyArr(rv->_actioncommand_AuxObserver1, _actioncommand_AuxObserver1_, tlen__actioncommand_AuxObserver1, _actioncommand_AuxObserver1_len ); 
  return rv;
}
template<typename T_0>
List_Object* List_Object::create(int  idx_, T_0* elts_, int elts_len){
  int tlen_elts = 5; 
  void* temp= malloc( sizeof(List_Object)   + sizeof(Object* )*tlen_elts); 
  List_Object* rv = new (temp)List_Object();
  rv->idx =  idx_;
  CopyArr(rv->elts, elts_, tlen_elts, elts_len ); 
  return rv;
}
template<typename T_0>
Queue_Object* Queue_Object::create(int  idx_, int  head_, T_0* elts_, int elts_len){
  int tlen_elts = 5; 
  void* temp= malloc( sizeof(Queue_Object)   + sizeof(Object* )*tlen_elts); 
  Queue_Object* rv = new (temp)Queue_Object();
  rv->idx =  idx_;
  rv->head =  head_;
  CopyArr(rv->elts, elts_, tlen_elts, elts_len ); 
  return rv;
}
void belongsTo(int id_ed, int& _out_ee) {
  int _tt2[138] = {1, 2, 4, 4, 4, 4, 4, 5, 6, 6, 6, 6, 8, 8, 9, 9, 10, 11, 11, 12, 13, 13, 14, 18, 18, 19, 19, 19, 20, 23, 24, 24, 24, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 26, 27, 27, 28, 28, 29, 30, 31, 31, 31, 32, 32, 32, 32, 32, 32, 33, 33, 34, 34, 34, 35, 35, 35, 36, 36, 37, 38, 38, 38, 38, 39, 39, 40, 40, 41, 42, 42, 42, 42, 44, 45, 45, 45, 45, 46, 46, 46, 46, 46, 48, 49, 50, 50, 50, 51, 51, 52, 52, 52, 52, 52, 53, 60, 3, 5, 6, 7, 8, 11, 12, 15, 16, 17, 21, 22, 25, 26, 28, 33, 35, 44, 46, 47, 50, 60, 61, 61, 61, 61, 61, 61, 61, 61};
  int _tt3[138] = {1, 2, 4, 4, 4, 4, 4, 5, 6, 6, 6, 6, 8, 8, 9, 9, 10, 11, 11, 12, 13, 13, 14, 18, 18, 19, 19, 19, 20, 23, 24, 24, 24, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 26, 27, 27, 28, 28, 29, 30, 31, 31, 31, 32, 32, 32, 32, 32, 32, 33, 33, 34, 34, 34, 35, 35, 35, 36, 36, 37, 38, 38, 38, 38, 39, 39, 40, 40, 41, 42, 42, 42, 42, 44, 45, 45, 45, 45, 46, 46, 46, 46, 46, 48, 49, 50, 50, 50, 51, 51, 52, 52, 52, 52, 52, 53, 60, 3, 5, 6, 7, 8, 11, 12, 15, 16, 17, 21, 22, 25, 26, 28, 33, 35, 44, 46, 47, 50, 60, 61, 61, 61, 61, 61, 61, 61, 61};
  _out_ee = (_tt3[id_ed]);
  return;
}
void subcls(int i_ef, int j_f0, bool& _out_f1) {
  bool _tt4[68] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  bool*  __sa1114_f2= new bool [68 * 68]; CopyArr<bool >(__sa1114_f2,_tt4, 68 * 68, 68);
  bool _tt5[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 0),_tt5, 68, 68);
  bool _tt6[68] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 68),_tt6, 68, 68);
  bool _tt7[68] = {1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 136),_tt7, 68, 68);
  bool _tt8[68] = {1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 204),_tt8, 68, 68);
  bool _tt9[68] = {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 272),_tt9, 68, 68);
  bool _tt10[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 340),_tt10, 68, 68);
  bool _tt11[68] = {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 408),_tt11, 68, 68);
  bool _tt12[68] = {1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 476),_tt12, 68, 68);
  bool _tt13[68] = {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 544),_tt13, 68, 68);
  bool _tt14[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 612),_tt14, 68, 68);
  bool _tt15[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 680),_tt15, 68, 68);
  bool _tt16[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 748),_tt16, 68, 68);
  bool _tt17[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 816),_tt17, 68, 68);
  bool _tt18[68] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 884),_tt18, 68, 68);
  bool _tt19[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 952),_tt19, 68, 68);
  bool _tt20[68] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1020),_tt20, 68, 68);
  bool _tt21[68] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1088),_tt21, 68, 68);
  bool _tt22[68] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1156),_tt22, 68, 68);
  bool _tt23[68] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1224),_tt23, 68, 68);
  bool _tt24[68] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1292),_tt24, 68, 68);
  bool _tt25[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1360),_tt25, 68, 68);
  bool _tt26[68] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1428),_tt26, 68, 68);
  bool _tt27[68] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1496),_tt27, 68, 68);
  bool _tt28[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1564),_tt28, 68, 68);
  bool _tt29[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1632),_tt29, 68, 68);
  bool _tt30[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1700),_tt30, 68, 68);
  bool _tt31[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1768),_tt31, 68, 68);
  bool _tt32[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1836),_tt32, 68, 68);
  bool _tt33[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1904),_tt33, 68, 68);
  bool _tt34[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 1972),_tt34, 68, 68);
  bool _tt35[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2040),_tt35, 68, 68);
  bool _tt36[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2108),_tt36, 68, 68);
  bool _tt37[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2176),_tt37, 68, 68);
  bool _tt38[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2244),_tt38, 68, 68);
  bool _tt39[68] = {1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2312),_tt39, 68, 68);
  bool _tt40[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2380),_tt40, 68, 68);
  bool _tt41[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2448),_tt41, 68, 68);
  bool _tt42[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2516),_tt42, 68, 68);
  bool _tt43[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2584),_tt43, 68, 68);
  bool _tt44[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2652),_tt44, 68, 68);
  bool _tt45[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2720),_tt45, 68, 68);
  bool _tt46[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2788),_tt46, 68, 68);
  bool _tt47[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2856),_tt47, 68, 68);
  bool _tt48[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2924),_tt48, 68, 68);
  bool _tt49[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 2992),_tt49, 68, 68);
  bool _tt50[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3060),_tt50, 68, 68);
  bool _tt51[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3128),_tt51, 68, 68);
  bool _tt52[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3196),_tt52, 68, 68);
  bool _tt53[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3264),_tt53, 68, 68);
  bool _tt54[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3332),_tt54, 68, 68);
  bool _tt55[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3400),_tt55, 68, 68);
  bool _tt56[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3468),_tt56, 68, 68);
  bool _tt57[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3536),_tt57, 68, 68);
  bool _tt58[68] = {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3604),_tt58, 68, 68);
  bool _tt59[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3672),_tt59, 68, 68);
  bool _tt60[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3740),_tt60, 68, 68);
  bool _tt61[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3808),_tt61, 68, 68);
  bool _tt62[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3876),_tt62, 68, 68);
  bool _tt63[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 3944),_tt63, 68, 68);
  bool _tt64[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 4012),_tt64, 68, 68);
  bool _tt65[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 4080),_tt65, 68, 68);
  bool _tt66[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 4148),_tt66, 68, 68);
  bool _tt67[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 4216),_tt67, 68, 68);
  bool _tt68[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 4284),_tt68, 68, 68);
  bool _tt69[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 4352),_tt69, 68, 68);
  bool _tt70[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 4420),_tt70, 68, 68);
  bool _tt71[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1};
  CopyArr<bool >((__sa1114_f2+ 4488),_tt71, 68, 68);
  bool _tt72[68] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  CopyArr<bool >((__sa1114_f2+ 4556),_tt72, 68, 68);
  assert (((i_ef) >= (0)) && ((i_ef) < (68)));;
  assert (((j_f0) >= (0)) && ((j_f0) < (68)));;
  _out_f1 = (__sa1114_f2[(68 * i_ef) + j_f0]);
  delete[] __sa1114_f2;
  return;
}
void argNum(int id_f3, int& _out_f4) {
  int _tt73[138] = {2, 2, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 2, 1, 1, 2, 0, 0, 0, 3, 0, 1, 1, 0, 4, 0, 0, 1, 0, 1, 2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 4, 0, 0, 0, 0, 2, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 4, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, 3, 3, 3, 4};
  int _tt74[138] = {2, 2, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 2, 1, 1, 2, 0, 0, 0, 3, 0, 1, 1, 0, 4, 0, 0, 1, 0, 1, 2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 4, 0, 0, 0, 0, 2, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 4, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, 3, 3, 3, 4};
  _out_f4 = (_tt74[id_f3]);
  return;
}
void argType(int id_f5, int idx_f6, int& _out_f7) {
  bool _tt75[138] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int*  __sa1113_f8= new int [4 * 138]; CopyArr<int >(__sa1113_f8,_tt75, 4 * 138, 138);
  int _tt76[2] = {0, 54};
  CopyArr<int >((__sa1113_f8+ 0),_tt76, 4, 2);
  int _tt77[2] = {55, 4};
  CopyArr<int >((__sa1113_f8+ 4),_tt77, 4, 2);
  CopyArr<int >((__sa1113_f8+ 8),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 12),NULL, 4, 0);
  int _tt78[1] = {56};
  CopyArr<int >((__sa1113_f8+ 16),_tt78, 4, 1);
  CopyArr<int >((__sa1113_f8+ 20),NULL, 4, 0);
  int _tt79[1] = {56};
  CopyArr<int >((__sa1113_f8+ 24),_tt79, 4, 1);
  int _tt80[1] = {4};
  CopyArr<int >((__sa1113_f8+ 28),_tt80, 4, 1);
  int _tt81[1] = {51};
  CopyArr<int >((__sa1113_f8+ 32),_tt81, 4, 1);
  CopyArr<int >((__sa1113_f8+ 36),NULL, 4, 0);
  int _tt82[1] = {51};
  CopyArr<int >((__sa1113_f8+ 40),_tt82, 4, 1);
  int _tt83[1] = {23};
  CopyArr<int >((__sa1113_f8+ 44),_tt83, 4, 1);
  int _tt84[1] = {3};
  CopyArr<int >((__sa1113_f8+ 48),_tt84, 4, 1);
  int _tt85[2] = {54, 54};
  CopyArr<int >((__sa1113_f8+ 52),_tt85, 4, 2);
  int _tt86[1] = {20};
  CopyArr<int >((__sa1113_f8+ 56),_tt86, 4, 1);
  int _tt87[1] = {20};
  CopyArr<int >((__sa1113_f8+ 60),_tt87, 4, 1);
  int _tt88[2] = {55, 4};
  CopyArr<int >((__sa1113_f8+ 64),_tt88, 4, 2);
  CopyArr<int >((__sa1113_f8+ 68),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 72),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 76),NULL, 4, 0);
  int _tt89[3] = {0, 54, 55};
  CopyArr<int >((__sa1113_f8+ 80),_tt89, 4, 3);
  CopyArr<int >((__sa1113_f8+ 84),NULL, 4, 0);
  int _tt90[1] = {13};
  CopyArr<int >((__sa1113_f8+ 88),_tt90, 4, 1);
  int _tt91[1] = {23};
  CopyArr<int >((__sa1113_f8+ 92),_tt91, 4, 1);
  CopyArr<int >((__sa1113_f8+ 96),NULL, 4, 0);
  int _tt92[4] = {9, 54, 0, 54};
  CopyArr<int >((__sa1113_f8+ 100),_tt92, 4, 4);
  CopyArr<int >((__sa1113_f8+ 104),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 108),NULL, 4, 0);
  int _tt93[1] = {19};
  CopyArr<int >((__sa1113_f8+ 112),_tt93, 4, 1);
  CopyArr<int >((__sa1113_f8+ 116),NULL, 4, 0);
  int _tt94[1] = {55};
  CopyArr<int >((__sa1113_f8+ 120),_tt94, 4, 1);
  int _tt95[2] = {54, 58};
  CopyArr<int >((__sa1113_f8+ 124),_tt95, 4, 2);
  CopyArr<int >((__sa1113_f8+ 128),NULL, 4, 0);
  bool _tt96[1] = {1};
  CopyArr<int >((__sa1113_f8+ 132),_tt96, 4, 1);
  int _tt97[1] = {14};
  CopyArr<int >((__sa1113_f8+ 136),_tt97, 4, 1);
  int _tt98[1] = {14};
  CopyArr<int >((__sa1113_f8+ 140),_tt98, 4, 1);
  int _tt99[1] = {20};
  CopyArr<int >((__sa1113_f8+ 144),_tt99, 4, 1);
  int _tt100[1] = {20};
  CopyArr<int >((__sa1113_f8+ 148),_tt100, 4, 1);
  int _tt101[1] = {54};
  CopyArr<int >((__sa1113_f8+ 152),_tt101, 4, 1);
  int _tt102[1] = {54};
  CopyArr<int >((__sa1113_f8+ 156),_tt102, 4, 1);
  int _tt103[1] = {54};
  CopyArr<int >((__sa1113_f8+ 160),_tt103, 4, 1);
  CopyArr<int >((__sa1113_f8+ 164),NULL, 4, 0);
  int _tt104[1] = {55};
  CopyArr<int >((__sa1113_f8+ 168),_tt104, 4, 1);
  int _tt105[1] = {56};
  CopyArr<int >((__sa1113_f8+ 172),_tt105, 4, 1);
  int _tt106[4] = {54, 54, 54, 54};
  CopyArr<int >((__sa1113_f8+ 176),_tt106, 4, 4);
  CopyArr<int >((__sa1113_f8+ 180),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 184),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 188),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 192),NULL, 4, 0);
  int _tt107[2] = {55, 27};
  CopyArr<int >((__sa1113_f8+ 196),_tt107, 4, 2);
  int _tt108[1] = {55};
  CopyArr<int >((__sa1113_f8+ 200),_tt108, 4, 1);
  CopyArr<int >((__sa1113_f8+ 204),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 208),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 212),NULL, 4, 0);
  int _tt109[1] = {59};
  CopyArr<int >((__sa1113_f8+ 216),_tt109, 4, 1);
  bool _tt110[1] = {1};
  CopyArr<int >((__sa1113_f8+ 220),_tt110, 4, 1);
  int _tt111[1] = {14};
  CopyArr<int >((__sa1113_f8+ 224),_tt111, 4, 1);
  int _tt112[1] = {14};
  CopyArr<int >((__sa1113_f8+ 228),_tt112, 4, 1);
  CopyArr<int >((__sa1113_f8+ 232),NULL, 4, 0);
  int _tt113[1] = {54};
  CopyArr<int >((__sa1113_f8+ 236),_tt113, 4, 1);
  int _tt114[1] = {56};
  CopyArr<int >((__sa1113_f8+ 240),_tt114, 4, 1);
  int _tt115[1] = {55};
  CopyArr<int >((__sa1113_f8+ 244),_tt115, 4, 1);
  int _tt116[1] = {55};
  CopyArr<int >((__sa1113_f8+ 248),_tt116, 4, 1);
  int _tt117[1] = {54};
  CopyArr<int >((__sa1113_f8+ 252),_tt117, 4, 1);
  int _tt118[1] = {5};
  CopyArr<int >((__sa1113_f8+ 256),_tt118, 4, 1);
  int _tt119[1] = {27};
  CopyArr<int >((__sa1113_f8+ 260),_tt119, 4, 1);
  int _tt120[1] = {55};
  CopyArr<int >((__sa1113_f8+ 264),_tt120, 4, 1);
  int _tt121[1] = {54};
  CopyArr<int >((__sa1113_f8+ 268),_tt121, 4, 1);
  CopyArr<int >((__sa1113_f8+ 272),NULL, 4, 0);
  int _tt122[1] = {10};
  CopyArr<int >((__sa1113_f8+ 276),_tt122, 4, 1);
  int _tt123[1] = {33};
  CopyArr<int >((__sa1113_f8+ 280),_tt123, 4, 1);
  int _tt124[1] = {54};
  CopyArr<int >((__sa1113_f8+ 284),_tt124, 4, 1);
  CopyArr<int >((__sa1113_f8+ 288),NULL, 4, 0);
  int _tt125[1] = {56};
  CopyArr<int >((__sa1113_f8+ 292),_tt125, 4, 1);
  int _tt126[1] = {56};
  CopyArr<int >((__sa1113_f8+ 296),_tt126, 4, 1);
  int _tt127[2] = {54, 54};
  CopyArr<int >((__sa1113_f8+ 300),_tt127, 4, 2);
  int _tt128[1] = {55};
  CopyArr<int >((__sa1113_f8+ 304),_tt128, 4, 1);
  int _tt129[1] = {55};
  CopyArr<int >((__sa1113_f8+ 308),_tt129, 4, 1);
  int _tt130[1] = {54};
  CopyArr<int >((__sa1113_f8+ 312),_tt130, 4, 1);
  int _tt131[1] = {55};
  CopyArr<int >((__sa1113_f8+ 316),_tt131, 4, 1);
  int _tt132[1] = {55};
  CopyArr<int >((__sa1113_f8+ 320),_tt132, 4, 1);
  CopyArr<int >((__sa1113_f8+ 324),NULL, 4, 0);
  int _tt133[1] = {56};
  CopyArr<int >((__sa1113_f8+ 328),_tt133, 4, 1);
  int _tt134[1] = {56};
  CopyArr<int >((__sa1113_f8+ 332),_tt134, 4, 1);
  int _tt135[1] = {23};
  CopyArr<int >((__sa1113_f8+ 336),_tt135, 4, 1);
  int _tt136[1] = {48};
  CopyArr<int >((__sa1113_f8+ 340),_tt136, 4, 1);
  int _tt137[1] = {48};
  CopyArr<int >((__sa1113_f8+ 344),_tt137, 4, 1);
  CopyArr<int >((__sa1113_f8+ 348),NULL, 4, 0);
  int _tt138[1] = {3};
  CopyArr<int >((__sa1113_f8+ 352),_tt138, 4, 1);
  int _tt139[1] = {48};
  CopyArr<int >((__sa1113_f8+ 356),_tt139, 4, 1);
  int _tt140[1] = {47};
  CopyArr<int >((__sa1113_f8+ 360),_tt140, 4, 1);
  int _tt141[1] = {48};
  CopyArr<int >((__sa1113_f8+ 364),_tt141, 4, 1);
  CopyArr<int >((__sa1113_f8+ 368),NULL, 4, 0);
  int _tt142[1] = {3};
  CopyArr<int >((__sa1113_f8+ 372),_tt142, 4, 1);
  int _tt143[1] = {47};
  CopyArr<int >((__sa1113_f8+ 376),_tt143, 4, 1);
  int _tt144[4] = {0, 54, 54, 56};
  CopyArr<int >((__sa1113_f8+ 380),_tt144, 4, 4);
  CopyArr<int >((__sa1113_f8+ 384),NULL, 4, 0);
  int _tt145[1] = {55};
  CopyArr<int >((__sa1113_f8+ 388),_tt145, 4, 1);
  int _tt146[1] = {56};
  CopyArr<int >((__sa1113_f8+ 392),_tt146, 4, 1);
  bool _tt147[1] = {0};
  CopyArr<int >((__sa1113_f8+ 396),_tt147, 4, 1);
  CopyArr<int >((__sa1113_f8+ 400),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 404),NULL, 4, 0);
  int _tt148[1] = {13};
  CopyArr<int >((__sa1113_f8+ 408),_tt148, 4, 1);
  int _tt149[1] = {55};
  CopyArr<int >((__sa1113_f8+ 412),_tt149, 4, 1);
  CopyArr<int >((__sa1113_f8+ 416),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 420),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 424),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 428),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 432),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 436),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 440),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 444),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 448),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 452),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 456),NULL, 4, 0);
  int _tt150[2] = {0, 54};
  CopyArr<int >((__sa1113_f8+ 460),_tt150, 4, 2);
  int _tt151[2] = {0, 54};
  CopyArr<int >((__sa1113_f8+ 464),_tt151, 4, 2);
  int _tt152[2] = {0, 54};
  CopyArr<int >((__sa1113_f8+ 468),_tt152, 4, 2);
  int _tt153[2] = {0, 54};
  CopyArr<int >((__sa1113_f8+ 472),_tt153, 4, 2);
  int _tt154[2] = {0, 54};
  CopyArr<int >((__sa1113_f8+ 476),_tt154, 4, 2);
  CopyArr<int >((__sa1113_f8+ 480),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 484),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 488),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 492),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 496),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 500),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 504),NULL, 4, 0);
  bool _tt155[1] = {0};
  CopyArr<int >((__sa1113_f8+ 508),_tt155, 4, 1);
  CopyArr<int >((__sa1113_f8+ 512),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 516),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 520),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 524),NULL, 4, 0);
  CopyArr<int >((__sa1113_f8+ 528),NULL, 4, 0);
  int _tt156[4] = {54, 61, 61, 13};
  CopyArr<int >((__sa1113_f8+ 532),_tt156, 4, 4);
  int _tt157[3] = {61, 61, 13};
  CopyArr<int >((__sa1113_f8+ 536),_tt157, 4, 3);
  int _tt158[3] = {61, 61, 13};
  CopyArr<int >((__sa1113_f8+ 540),_tt158, 4, 3);
  int _tt159[3] = {61, 61, 13};
  CopyArr<int >((__sa1113_f8+ 544),_tt159, 4, 3);
  int _tt160[4] = {54, 61, 61, 13};
  CopyArr<int >((__sa1113_f8+ 548),_tt160, 4, 4);
  assert (((id_f5) >= (0)) && ((id_f5) < (138)));;
  assert (((idx_f6) >= (0)) && ((idx_f6) < (4)));;
  _out_f7 = (__sa1113_f8[(4 * id_f5) + idx_f6]);
  delete[] __sa1113_f8;
  return;
}
void remove_Queue_Object(Queue_Object* que_1de, Object*& _out_1df) {
  if ((que_1de->head) == (que_1de->idx)) {
    _out_1df = NULL;
    return;
  }
  Object*  top_1e0=(que_1de->elts[que_1de->head]);
  (que_1de->elts[que_1de->head]) = NULL;
  que_1de->head = (que_1de->head + 1) % 5;
  _out_1df = top_1e0;
  return;
}
void add_Queue_Object(Queue_Object* que_21e, Object* elt_21f) {
  (que_21e->elts[que_21e->idx]) = elt_21f;
  que_21e->idx = (que_21e->idx + 1) % 5;
}
void equals_String(char* s1_333/* len = 51 */, char* s2_334/* len = 51 */, bool& _out_335) {
  _out_335 = arrCompare(s1_333, 51, s2_334, 51) && ((51) == (51));
  return;
}
void add_List_Object(List_Object* lst_3bc, Object* elt_3bd) {
  (lst_3bc->elts[lst_3bc->idx]) = elt_3bd;
  lst_3bc->idx = (lst_3bc->idx + 1) % 5;
}
void remove_List_Object(List_Object* lst_3be, Object* elt_3bf) {
  bool  __sa0_3c1=((lst_3be->elts[0])) != (NULL);
  int  i_3c0=0;
  while (__sa0_3c1) {
    if (((lst_3be->elts[i_3c0])) == (elt_3bf)) {
      (lst_3be->elts[i_3c0]) = NULL;
    }
    i_3c0 = i_3c0 + 1;
    __sa0_3c1 = (((lst_3be->elts[i_3c0])) != (NULL)) && ((i_3c0) < (5));
  }
}

}
namespace EventQueue{

void getNextEvent_EventQueue(type::Object* self_182, type::Object*& _out_183) {
  type::Object*  _out_s32_184=NULL;
  type::remove_Queue_Object(self_182->_evt_queue_EventQueue, _out_s32_184);
  _out_183 = _out_s32_184;
  return;
}
void dispatchEvent_EventQueue_EventObject(type::Object* self_185, type::Object* event_186, int& obj_AbstractButton_cnt_s896_187, int& allInOne_depth_s515_188, int& update_AuxObserver1_s579_189, int& obj_JFrame_cnt_s928_18a, type::Object** obj_Window_s929_18b/* len = 10 */, type::Object** obj_Container_s835_18c/* len = 10 */, int& obj_Container_cnt_s836_18d, type::Object** obj_JComponent_s727_18e/* len = 10 */, type::Object** obj_Frame_s697_18f/* len = 10 */, int& obj_ButtonDemo_cnt_s891_190, int& obj_JComponent_cnt_s728_191, int& log_cnt_s733_192, int& reflect_depth_s580_193, int* ev_s731_194/* len = 5 * 82 */, int& handle_AuxObserver1_s516_195, int& obj_Frame_cnt_s696_196, type::Object** obj_Component_s897_197/* len = 10 */, int& obj_cnt_s664_198, type::Object** obj_JButton_s981_199/* len = 10 */, int& obj_JButton_cnt_s982_19a, type::Object** obj_JFrame_s930_19b/* len = 10 */, type::Object** obj_AbstractButton_s898_19c/* len = 10 */, int& detach_AuxObserver1_s514_19d, int& obj_Component_cnt_s899_19e, int& attach_AuxObserver1_s517_19f, int* obj_s732_1a0/* len = 10 */, int& obj_Window_cnt_s931_1a1, type::Object** obj_ButtonDemo_s892_1a2/* len = 10 */) {
  int  event_k_1a3=event_186->kind_EventObject;
  if ((event_k_1a3) == (-1)) {
    InvocationEvent::dispatch_InvocationEvent(event_186, obj_AbstractButton_cnt_s896_187, allInOne_depth_s515_188, handle_AuxObserver1_s516_195, ev_s731_194, update_AuxObserver1_s579_189, obj_Frame_cnt_s696_196, obj_JFrame_cnt_s928_18a, obj_Component_s897_197, obj_Window_s929_18b, obj_cnt_s664_198, obj_JButton_s981_199, obj_JButton_cnt_s982_19a, obj_JFrame_s930_19b, obj_AbstractButton_s898_19c, detach_AuxObserver1_s514_19d, obj_Container_s835_18c, obj_Component_cnt_s899_19e, obj_Container_cnt_s836_18d, obj_JComponent_s727_18e, attach_AuxObserver1_s517_19f, obj_s732_1a0, obj_Frame_s697_18f, obj_ButtonDemo_cnt_s891_190, obj_Window_cnt_s931_1a1, obj_JComponent_cnt_s728_191, obj_ButtonDemo_s892_1a2, log_cnt_s733_192, reflect_depth_s580_193);
  } else {
    if ((event_k_1a3) == (0)) {
      type::Object*  rcv_s28_1a6=NULL;
      EventObject::getSource_EventObject(event_186, rcv_s28_1a6);
      int  _out_s30_1a7=0;
      AuxObserver1::handle_AuxObserver1_AuxObserver1(_out_s30_1a7, handle_AuxObserver1_s516_195);
      AuxObserver1::reflect_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(_out_s30_1a7, rcv_s28_1a6, NULL, event_186, detach_AuxObserver1_s514_19d, ev_s731_194, allInOne_depth_s515_188, handle_AuxObserver1_s516_195, update_AuxObserver1_s579_189, obj_s732_1a0, attach_AuxObserver1_s517_19f, log_cnt_s733_192, reflect_depth_s580_193);
    }
  }
}
void postEvent_EventQueue_EventObject(type::Object* self_1b7, type::Object* event_1b8) {
  type::add_Queue_Object(self_1b7->_evt_queue_EventQueue, event_1b8);
}
void EventQueue_EventQueue(type::Object*& _out_220, type::Object** obj_EventObject_s910_221/* len = 10 */, int& obj_EventObject_cnt_s911_222, int& obj_cnt_s918_223, type::Object** obj_EventQueue_s875_224/* len = 10 */, int& obj_EventQueue_cnt_s876_225) {
  int  self_s40_226=0;
  alog::nonce(self_s40_226, obj_cnt_s918_223);
  _out_220 = type::Object::create(self_s40_226, 0, 0, (char*)NULL, 0, 0, NULL, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, (char*)NULL, 0, NULL, (char*)NULL, 0, (char*)NULL, 0, NULL, NULL, (int*)NULL, 0, 0, NULL, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, (char*)NULL, 0, 0, 0, 0, NULL, 0, NULL, NULL, 0, (char*)NULL, 0, NULL, NULL, 0, NULL, 0, 0, 0, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL);
  type::Object*  _out_s42_227=NULL;
  EventObject::EventObject_EventObject_Object(NULL, _out_s42_227, obj_EventObject_s910_221, obj_EventObject_cnt_s911_222, obj_cnt_s918_223);
  _out_220->_nextevent_EventQueue = _out_s42_227;
  _out_220->_evt_queue_EventQueue = type::Queue_Object::create(0, 0, (type::Object**)NULL, 0);
  alog::register_EventQueue(_out_220, obj_EventQueue_s875_224, obj_EventQueue_cnt_s876_225);
  return;
}
void invokeLater_EventQueue_Runnable(type::Object* runnable_22c, int& obj_Toolkit_cnt_s946_22d, type::Object*& defaultToolkit_s976_22e, int& obj_AWTEvent_cnt_s817_22f, type::Object** obj_EventObject_s887_230/* len = 10 */, type::Object** obj_AWTEvent_s818_231/* len = 10 */, int& obj_EventObject_cnt_s888_232, type::Object** obj_InvocationEvent_s1006_233/* len = 10 */, type::Object** obj_Toolkit_s947_234/* len = 10 */, int& obj_cnt_s789_235, type::Object** obj_EventQueue_s673_236/* len = 10 */, int& obj_EventQueue_cnt_s674_237, int& obj_InvocationEvent_cnt_s1007_238) {
  type::Object*  t_s34_23a=NULL;
  Toolkit::getDefaultToolkit_Toolkit(t_s34_23a, obj_Toolkit_cnt_s946_22d, defaultToolkit_s976_22e, obj_EventObject_s887_230, obj_EventObject_cnt_s888_232, obj_Toolkit_s947_234, obj_cnt_s789_235, obj_EventQueue_s673_236, obj_EventQueue_cnt_s674_237);
  type::Object*  evt_s36_23c=NULL;
  InvocationEvent::InvocationEvent_InvocationEvent_Runnable(runnable_22c, evt_s36_23c, obj_AWTEvent_cnt_s817_22f, obj_EventObject_s887_230, obj_AWTEvent_s818_231, obj_EventObject_cnt_s888_232, obj_cnt_s789_235, obj_InvocationEvent_s1006_233, obj_InvocationEvent_cnt_s1007_238);
  evt_s36_23c->kind_EventObject = -1;
  type::Object*  q_s38_23e=NULL;
  Toolkit::getSystemEventQueue_Toolkit(t_s34_23a, q_s38_23e);
  postEvent_EventQueue_EventObject(q_s38_23e, evt_s36_23c);
}

}
namespace KeyEvent{

void VK_D_KeyEvent(int& _out_3f4) {
  _out_3f4 = 68;
  return;
}
void VK_M_KeyEvent(int& _out_3f6) {
  _out_3f6 = 77;
  return;
}
void VK_E_KeyEvent(int& _out_3f7) {
  _out_3f7 = 69;
  return;
}

}
namespace Container{

void Container_Container(type::Object*& _out_3d0, type::Object** obj_Container_s725_3d1/* len = 10 */, int& obj_Component_cnt_s870_3d2, int& obj_Container_cnt_s726_3d3, type::Object** obj_Component_s871_3d4/* len = 10 */, int& obj_cnt_s872_3d5) {
  type::Object*  self_s112_3d6=NULL;
  Component::Component_Component(self_s112_3d6, obj_Component_cnt_s870_3d2, obj_Component_s871_3d4, obj_cnt_s872_3d5);
  _out_3d0 = self_s112_3d6;
  alog::register_Container(self_s112_3d6, obj_Container_s725_3d1, obj_Container_cnt_s726_3d3);
  return;
}
void add_Container_Component(type::Object* self_400, type::Object* comp_401, type::Object*& _out_402, int* ev_s1014_403/* len = 5 * 82 */, int* obj_s1015_404/* len = 10 */, int& log_cnt_s1016_405) {
  int  params_s108_407=0;
  alog::add_Container_Component_ent(params_s108_407);
  int _tt161[3] = {params_s108_407, self_400->hash, comp_401->hash};
  int*  params_406= new int [5]; CopyArr<int >(params_406,_tt161, 5, 3);
  alog::check_log(params_406, ev_s1014_403, obj_s1015_404, log_cnt_s1016_405);
  int  params_s110_408=0;
  alog::add_Container_Component_ext(params_s110_408);
  int _tt162[2] = {params_s110_408, comp_401->hash};
  CopyArr<int >(params_406,_tt162, 5, 2);
  alog::check_log(params_406, ev_s1014_403, obj_s1015_404, log_cnt_s1016_405);
  _out_402 = comp_401;
  delete[] params_406;
  return;
}

}
namespace SwingConstants{

void CENTER_SwingConstants(int& _out_3f2) {
  _out_3f2 = 0;
  return;
}
void LEADING_SwingConstants(int& _out_3f3) {
  _out_3f3 = 10;
  return;
}
void BOTTOM_SwingConstants(int& _out_3f5) {
  _out_3f5 = 3;
  return;
}

}
namespace BorderLayout{


}
namespace JFrame{

void JFrame_JFrame_String(char* name_35f/* len = 51 */, type::Object*& _out_360, type::Object** obj_JFrame_s944_361/* len = 10 */, type::Object** obj_Container_s983_362/* len = 10 */, int& obj_Component_cnt_s777_363, int& obj_Container_cnt_s984_364, int& obj_Frame_cnt_s959_365, int& obj_JFrame_cnt_s945_366, type::Object** obj_Component_s778_367/* len = 10 */, type::Object** obj_Window_s900_368/* len = 10 */, type::Object** obj_Frame_s960_369/* len = 10 */, int& obj_Window_cnt_s901_36a, int& obj_cnt_s542_36b) {
  type::Object*  self_s78_36c=NULL;
  Frame::Frame_Frame(self_s78_36c, obj_Container_s983_362, obj_Component_cnt_s777_363, obj_Frame_cnt_s959_365, obj_Container_cnt_s984_364, obj_Component_s778_367, obj_Window_s900_368, obj_Window_cnt_s901_36a, obj_Frame_s960_369, obj_cnt_s542_36b);
  _out_360 = self_s78_36c;
  CopyArr<char >(self_s78_36c->_name_JFrame,name_35f, 51, 51);
  type::Object*  _out_s80_36d=NULL;
  Container::Container_Container(_out_s80_36d, obj_Container_s983_362, obj_Component_cnt_s777_363, obj_Container_cnt_s984_364, obj_Component_s778_367, obj_cnt_s542_36b);
  self_s78_36c->_contentpane_JFrame = _out_s80_36d;
  alog::register_JFrame(self_s78_36c, obj_JFrame_s944_361, obj_JFrame_cnt_s945_366);
  return;
}
void EXIT_ON_CLOSE_JFrame(int& _out_36e) {
  _out_36e = 3;
  return;
}
void setDefaultCloseOperation_JFrame_int(type::Object* self_36f, int operation_370, int* ev_s795_371/* len = 5 * 82 */, int* obj_s796_372/* len = 10 */, int& log_cnt_s797_373) {
  int  params_s74_375=0;
  alog::setDefaultCloseOperation_JFrame_int_ent(params_s74_375);
  int _tt163[2] = {params_s74_375, self_36f->hash};
  int*  params_374= new int [5]; CopyArr<int >(params_374,_tt163, 5, 2);
  alog::check_log(params_374, ev_s795_371, obj_s796_372, log_cnt_s797_373);
  self_36f->_defaultcloseoperation_JFrame = operation_370;
  int  params_s76_376=0;
  alog::setDefaultCloseOperation_JFrame_int_ext(params_s76_376);
  int _tt164[1] = {params_s76_376};
  CopyArr<int >(params_374,_tt164, 5, 1);
  alog::check_log(params_374, ev_s795_371, obj_s796_372, log_cnt_s797_373);
}
void setContentPane_JFrame_Container(type::Object* self_3a5, type::Object* p_3a6, int* ev_s641_3a7/* len = 5 * 82 */, int* obj_s642_3a8/* len = 10 */, int& log_cnt_s643_3a9) {
  int  params_s70_3ab=0;
  alog::setContentPane_JFrame_Container_ent(params_s70_3ab);
  int _tt165[3] = {params_s70_3ab, self_3a5->hash, p_3a6->hash};
  int*  params_3aa= new int [5]; CopyArr<int >(params_3aa,_tt165, 5, 3);
  alog::check_log(params_3aa, ev_s641_3a7, obj_s642_3a8, log_cnt_s643_3a9);
  self_3a5->_contentpane_JFrame = p_3a6;
  int  params_s72_3ac=0;
  alog::setContentPane_JFrame_Container_ext(params_s72_3ac);
  int _tt166[1] = {params_s72_3ac};
  CopyArr<int >(params_3aa,_tt166, 5, 1);
  alog::check_log(params_3aa, ev_s641_3a7, obj_s642_3a8, log_cnt_s643_3a9);
}

}
namespace AWTEvent{

void AWTEvent_AWTEvent_Object_int(type::Object* source_210, int id_211, type::Object*& _out_212, int& obj_AWTEvent_cnt_s799_213, type::Object** obj_EventObject_s665_214/* len = 10 */, type::Object** obj_AWTEvent_s800_215/* len = 10 */, int& obj_EventObject_cnt_s666_216, int& obj_cnt_s856_217) {
  type::Object*  self_s24_218=NULL;
  EventObject::EventObject_EventObject_Object(source_210, self_s24_218, obj_EventObject_s665_214, obj_EventObject_cnt_s666_216, obj_cnt_s856_217);
  _out_212 = self_s24_218;
  int  _out_s26_219=0;
  alog::nonce(_out_s26_219, obj_cnt_s856_217);
  self_s24_218->_source_EventObject = type::Object::create(_out_s26_219, 0, 0, (char*)NULL, 0, 0, NULL, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, (char*)NULL, 0, NULL, (char*)NULL, 0, (char*)NULL, 0, NULL, NULL, (int*)NULL, 0, 0, NULL, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, (char*)NULL, 0, 0, 0, 0, NULL, 0, NULL, NULL, 0, (char*)NULL, 0, NULL, NULL, 0, NULL, 0, 0, 0, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL);
  self_s24_218->_source_EventObject = source_210;
  self_s24_218->_id_AWTEvent = id_211;
  alog::register_AWTEvent(self_s24_218, obj_AWTEvent_cnt_s799_213, obj_AWTEvent_s800_215);
  return;
}

}
namespace Toolkit{

void getDefaultToolkit_Toolkit(type::Object*& _out_163, int& obj_Toolkit_cnt_s964_164, type::Object*& defaultToolkit_s450_165, type::Object** obj_EventObject_s592_166/* len = 10 */, int& obj_EventObject_cnt_s593_167, type::Object** obj_Toolkit_s965_168/* len = 10 */, int& obj_cnt_s779_169, type::Object** obj_EventQueue_s902_16a/* len = 10 */, int& obj_EventQueue_cnt_s903_16b) {
  if ((defaultToolkit_s450_165) == (NULL)) {
    type::Object*  defaultToolkit_s252_16c=NULL;
    Toolkit_Toolkit(defaultToolkit_s252_16c, obj_Toolkit_cnt_s964_164, obj_EventObject_s592_166, obj_EventObject_cnt_s593_167, obj_cnt_s779_169, obj_Toolkit_s965_168, obj_EventQueue_s902_16a, obj_EventQueue_cnt_s903_16b);
    defaultToolkit_s450_165 = defaultToolkit_s252_16c;
  }
  _out_163 = defaultToolkit_s450_165;
  return;
}
void getSystemEventQueue_Toolkit(type::Object* self_16d, type::Object*& _out_16e) {
  _out_16e = self_16d->_systemeventqueue_Toolkit;
  return;
}
void Toolkit_Toolkit(type::Object*& _out_1b9, int& obj_Toolkit_cnt_s889_1ba, type::Object** obj_EventObject_s974_1bb/* len = 10 */, int& obj_EventObject_cnt_s975_1bc, int& obj_cnt_s994_1bd, type::Object** obj_Toolkit_s890_1be/* len = 10 */, type::Object** obj_EventQueue_s1012_1bf/* len = 10 */, int& obj_EventQueue_cnt_s1013_1c0) {
  int  self_s254_1c1=0;
  alog::nonce(self_s254_1c1, obj_cnt_s994_1bd);
  _out_1b9 = type::Object::create(self_s254_1c1, 0, 0, (char*)NULL, 0, 0, NULL, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, (char*)NULL, 0, NULL, (char*)NULL, 0, (char*)NULL, 0, NULL, NULL, (int*)NULL, 0, 0, NULL, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, (char*)NULL, 0, 0, 0, 0, NULL, 0, NULL, NULL, 0, (char*)NULL, 0, NULL, NULL, 0, NULL, 0, 0, 0, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL);
  type::Object*  _out_s256_1c2=NULL;
  EventQueue::EventQueue_EventQueue(_out_s256_1c2, obj_EventObject_s974_1bb, obj_EventObject_cnt_s975_1bc, obj_cnt_s994_1bd, obj_EventQueue_s1012_1bf, obj_EventQueue_cnt_s1013_1c0);
  _out_1b9->_systemeventqueue_Toolkit = _out_s256_1c2;
  alog::register_Toolkit(_out_1b9, obj_Toolkit_cnt_s889_1ba, obj_Toolkit_s890_1be);
  return;
}

}
namespace InputEvent{


}
namespace Component{

void setEnabled_Component_boolean(type::Object* self_336, bool b_337, int* ev_s564_338/* len = 5 * 82 */, int* obj_s565_339/* len = 10 */, int& log_cnt_s566_33a) {
  int  params_s90_33c=0;
  alog::setEnabled_Component_boolean_ent(params_s90_33c);
  int _tt167[2] = {params_s90_33c, self_336->hash};
  int*  params_33b= new int [5]; CopyArr<int >(params_33b,_tt167, 5, 2);
  alog::check_log(params_33b, ev_s564_338, obj_s565_339, log_cnt_s566_33a);
  self_336->_enabled_Component = b_337;
  int  params_s92_33d=0;
  alog::setEnabled_Component_boolean_ext(params_s92_33d);
  int _tt168[1] = {params_s92_33d};
  CopyArr<int >(params_33b,_tt168, 5, 1);
  alog::check_log(params_33b, ev_s564_338, obj_s565_339, log_cnt_s566_33a);
}
void setVisible_Component_boolean(type::Object* self_3b4, bool b_3b5, int* ev_s1023_3b6/* len = 5 * 82 */, int* obj_s1024_3b7/* len = 10 */, int& log_cnt_s1025_3b8) {
  int  params_s94_3ba=0;
  alog::setVisible_Component_boolean_ent(params_s94_3ba);
  int _tt169[2] = {params_s94_3ba, self_3b4->hash};
  int*  params_3b9= new int [5]; CopyArr<int >(params_3b9,_tt169, 5, 2);
  alog::check_log(params_3b9, ev_s1023_3b6, obj_s1024_3b7, log_cnt_s1025_3b8);
  self_3b4->_vible_Component = b_3b5;
  int  params_s96_3bb=0;
  alog::setVisible_Component_boolean_ext(params_s96_3bb);
  int _tt170[1] = {params_s96_3bb};
  CopyArr<int >(params_3b9,_tt170, 5, 1);
  alog::check_log(params_3b9, ev_s1023_3b6, obj_s1024_3b7, log_cnt_s1025_3b8);
}
void Component_Component(type::Object*& _out_41a, int& obj_Component_cnt_s729_41b, type::Object** obj_Component_s730_41c/* len = 10 */, int& obj_cnt_s518_41d) {
  int  self_s98_41e=0;
  alog::nonce(self_s98_41e, obj_cnt_s518_41d);
  _out_41a = type::Object::create(self_s98_41e, 0, 0, (char*)NULL, 0, 0, NULL, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, (char*)NULL, 0, NULL, (char*)NULL, 0, (char*)NULL, 0, NULL, NULL, (int*)NULL, 0, 0, NULL, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, (char*)NULL, 0, 0, 0, 0, NULL, 0, NULL, NULL, 0, (char*)NULL, 0, NULL, NULL, 0, NULL, 0, 0, 0, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL);
  alog::register_Component(_out_41a, obj_Component_cnt_s729_41b, obj_Component_s730_41c);
  return;
}

}
namespace Window{

void pack_Window(type::Object* self_3ad, int* ev_s934_3ae/* len = 5 * 82 */, int* obj_s935_3af/* len = 10 */, int& log_cnt_s936_3b0) {
  int  params_s102_3b2=0;
  alog::pack_Window_ent(params_s102_3b2);
  int _tt171[2] = {params_s102_3b2, self_3ad->hash};
  int*  params_3b1= new int [5]; CopyArr<int >(params_3b1,_tt171, 5, 2);
  alog::check_log(params_3b1, ev_s934_3ae, obj_s935_3af, log_cnt_s936_3b0);
  int  params_s104_3b3=0;
  alog::pack_Window_ext(params_s104_3b3);
  int _tt172[1] = {params_s104_3b3};
  CopyArr<int >(params_3b1,_tt172, 5, 1);
  alog::check_log(params_3b1, ev_s934_3ae, obj_s935_3af, log_cnt_s936_3b0);
}
void Window_Window(type::Object*& _out_40d, type::Object** obj_Container_s848_40e/* len = 10 */, int& obj_Component_cnt_s543_40f, int& obj_Container_cnt_s849_410, type::Object** obj_Component_s544_411/* len = 10 */, type::Object** obj_Window_s803_412/* len = 10 */, int& obj_Window_cnt_s804_413, int& obj_cnt_s676_414) {
  type::Object*  self_s106_415=NULL;
  Container::Container_Container(self_s106_415, obj_Container_s848_40e, obj_Component_cnt_s543_40f, obj_Container_cnt_s849_410, obj_Component_s544_411, obj_cnt_s676_414);
  _out_40d = self_s106_415;
  alog::register_Window(self_s106_415, obj_Window_s803_412, obj_Window_cnt_s804_413);
  return;
}

}
namespace ANONYMOUS{

void glblInit_detach_AuxObserver1_s1106(int& detach_AuxObserver1_s1105_3b) {
  detach_AuxObserver1_s1105_3b = 35;
}
void glblInit_handle_AuxObserver1_s1098(int& handle_AuxObserver1_s1097_3a) {
  handle_AuxObserver1_s1097_3a = 33;
}
void glblInit_observer_AuxObserver1_s1070(int& observer_AuxObserver1_s1069_39) {
  observer_AuxObserver1_s1069_39 = 14;
}
void glblInit_attach_AuxObserver1_s1072(int& attach_AuxObserver1_s1071_38) {
  attach_AuxObserver1_s1071_38 = 34;
}
void glblInit_subject_AuxObserver1_s1056(int& subject_AuxObserver1_s1055_37) {
  subject_AuxObserver1_s1055_37 = 25;
}
void glblInit_update_AuxObserver1_s1038(int& update_AuxObserver1_s1037_50) {
  update_AuxObserver1_s1037_50 = 102;
}
void sample1__Wrapper() {
  int  obj_Window_cnt_s853_f=0;
  glblInit_obj_Window_cnt_s1074(obj_Window_cnt_s853_f);
  int  attach_AuxObserver1_s576_12=0;
  glblInit_attach_AuxObserver1_s1072(attach_AuxObserver1_s576_12);
  int  obj_Component_cnt_s508_13=0;
  glblInit_obj_Component_cnt_s1068(obj_Component_cnt_s508_13);
  int  obj_Toolkit_cnt_s487_14=0;
  glblInit_obj_Toolkit_cnt_s1108(obj_Toolkit_cnt_s487_14);
  int  detach_AuxObserver1_s573_15=0;
  glblInit_detach_AuxObserver1_s1106(detach_AuxObserver1_s573_15);
  int  obj_ActionEvent_cnt_s970_16=0;
  glblInit_obj_ActionEvent_cnt_s1066(obj_ActionEvent_cnt_s970_16);
  int  obj_JButton_cnt_s978_19=0;
  glblInit_obj_JButton_cnt_s1064(obj_JButton_cnt_s978_19);
  int  obj_cnt_s578_1c=0;
  glblInit_obj_cnt_s1102(obj_cnt_s578_1c);
  int  obj_EventObject_cnt_s822_1d=0;
  glblInit_obj_EventObject_cnt_s1100(obj_EventObject_cnt_s822_1d);
  int  obj_Frame_cnt_s650_1f=0;
  glblInit_obj_Frame_cnt_s1062(obj_Frame_cnt_s650_1f);
  int  handle_AuxObserver1_s574_22=0;
  glblInit_handle_AuxObserver1_s1098(handle_AuxObserver1_s574_22);
  int  reflect_depth_s577_24=0;
  glblInit_reflect_depth_s1058(reflect_depth_s577_24);
  int  obj_InvocationEvent_cnt_s973_25=0;
  glblInit_obj_InvocationEvent_cnt_s1060(obj_InvocationEvent_cnt_s973_25);
  int  log_cnt_s657_26=0;
  glblInit_log_cnt_s1096(log_cnt_s657_26);
  int  obj_JComponent_cnt_s915_27=0;
  glblInit_obj_JComponent_cnt_s1052(obj_JComponent_cnt_s915_27);
  int  obj_ButtonDemo_cnt_s979_2a=0;
  glblInit_obj_ButtonDemo_cnt_s1094(obj_ButtonDemo_cnt_s979_2a);
  int  obj_Container_cnt_s851_2c=0;
  glblInit_obj_Container_cnt_s1050(obj_Container_cnt_s851_2c);
  int  obj_EventQueue_cnt_s943_2e=0;
  glblInit_obj_EventQueue_cnt_s1086(obj_EventQueue_cnt_s943_2e);
  int  obj_JFrame_cnt_s917_32=0;
  glblInit_obj_JFrame_cnt_s1042(obj_JFrame_cnt_s917_32);
  int  obj_AWTEvent_cnt_s819_33=0;
  glblInit_obj_AWTEvent_cnt_s1040(obj_AWTEvent_cnt_s819_33);
  int  update_AuxObserver1_s880_34=0;
  glblInit_update_AuxObserver1_s1038(update_AuxObserver1_s880_34);
  int  allInOne_depth_s575_35=0;
  glblInit_allInOne_depth_s1036(allInOne_depth_s575_35);
  int  obj_AbstractButton_cnt_s684_36=0;
  glblInit_obj_AbstractButton_cnt_s1078(obj_AbstractButton_cnt_s684_36);
  void * _tt173[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_ButtonDemo_s980_e= new type::Object* [10]; CopyArr<type::Object* >(obj_ButtonDemo_s980_e,_tt173, 10, 10);
  void * _tt174[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_InvocationEvent_s972_10= new type::Object* [10]; CopyArr<type::Object* >(obj_InvocationEvent_s972_10,_tt174, 10, 10);
  bool _tt175[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int*  obj_s656_11= new int [10]; CopyArr<int >(obj_s656_11,_tt175, 10, 10);
  void * _tt176[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_AbstractButton_s685_17= new type::Object* [10]; CopyArr<type::Object* >(obj_AbstractButton_s685_17,_tt176, 10, 10);
  void * _tt177[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_JFrame_s916_18= new type::Object* [10]; CopyArr<type::Object* >(obj_JFrame_s916_18,_tt177, 10, 10);
  void * _tt178[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_EventQueue_s942_1a= new type::Object* [10]; CopyArr<type::Object* >(obj_EventQueue_s942_1a,_tt178, 10, 10);
  void * _tt179[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_JButton_s977_1b= new type::Object* [10]; CopyArr<type::Object* >(obj_JButton_s977_1b,_tt179, 10, 10);
  void * _tt180[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_Component_s509_1e= new type::Object* [10]; CopyArr<type::Object* >(obj_Component_s509_1e,_tt180, 10, 10);
  void * _tt181[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_EventObject_s820_20= new type::Object* [10]; CopyArr<type::Object* >(obj_EventObject_s820_20,_tt181, 10, 10);
  bool _tt182[82] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int*  ev_s655_21= new int [5 * 82]; CopyArr<int >(ev_s655_21,_tt182, 5 * 82, 82);
  type::Object*  defaultToolkit_s999_23=NULL;
  void * _tt183[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_Toolkit_s488_28= new type::Object* [10]; CopyArr<type::Object* >(obj_Toolkit_s488_28,_tt183, 10, 10);
  void * _tt184[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_Frame_s651_29= new type::Object* [10]; CopyArr<type::Object* >(obj_Frame_s651_29,_tt184, 10, 10);
  void * _tt185[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_JComponent_s914_2b= new type::Object* [10]; CopyArr<type::Object* >(obj_JComponent_s914_2b,_tt185, 10, 10);
  void * _tt186[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_Container_s850_2d= new type::Object* [10]; CopyArr<type::Object* >(obj_Container_s850_2d,_tt186, 10, 10);
  void * _tt187[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_ActionEvent_s971_2f= new type::Object* [10]; CopyArr<type::Object* >(obj_ActionEvent_s971_2f,_tt187, 10, 10);
  void * _tt188[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_Window_s852_30= new type::Object* [10]; CopyArr<type::Object* >(obj_Window_s852_30,_tt188, 10, 10);
  void * _tt189[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  type::Object**  obj_AWTEvent_s821_31= new type::Object* [10]; CopyArr<type::Object* >(obj_AWTEvent_s821_31,_tt189, 10, 10);
  sample1(obj_AbstractButton_cnt_s684_36, allInOne_depth_s575_35, update_AuxObserver1_s880_34, obj_AWTEvent_cnt_s819_33, obj_JFrame_cnt_s917_32, obj_AWTEvent_s821_31, obj_Window_s852_30, obj_ActionEvent_s971_2f, obj_EventQueue_cnt_s943_2e, obj_Container_s850_2d, obj_Container_cnt_s851_2c, obj_JComponent_s914_2b, obj_Toolkit_s488_28, obj_ButtonDemo_cnt_s979_2a, obj_Frame_s651_29, obj_JComponent_cnt_s915_27, log_cnt_s657_26, obj_InvocationEvent_cnt_s973_25, reflect_depth_s577_24, defaultToolkit_s999_23, handle_AuxObserver1_s574_22, ev_s655_21, obj_EventObject_s820_20, obj_Frame_cnt_s650_1f, obj_Component_s509_1e, obj_EventObject_cnt_s822_1d, obj_cnt_s578_1c, obj_JButton_s977_1b, obj_EventQueue_s942_1a, obj_JButton_cnt_s978_19, obj_JFrame_s916_18, obj_AbstractButton_s685_17, obj_ActionEvent_cnt_s970_16, detach_AuxObserver1_s573_15, obj_Toolkit_cnt_s487_14, obj_Component_cnt_s508_13, attach_AuxObserver1_s576_12, obj_s656_11, obj_Window_cnt_s853_f, obj_InvocationEvent_s972_10, obj_ButtonDemo_s980_e);
}
void sample1__WrapperNospec() {}
void glblInit_obj_AbstractButton_cnt_s1078(int& obj_AbstractButton_cnt_s1077_71) {
  obj_AbstractButton_cnt_s1077_71 = 0;
}
void glblInit_allInOne_depth_s1036(int& allInOne_depth_s1035_70) {
  allInOne_depth_s1035_70 = 0;
}
void glblInit_obj_AWTEvent_cnt_s1040(int& obj_AWTEvent_cnt_s1039_6f) {
  obj_AWTEvent_cnt_s1039_6f = 0;
}
void glblInit_obj_JFrame_cnt_s1042(int& obj_JFrame_cnt_s1041_6e) {
  obj_JFrame_cnt_s1041_6e = 0;
}
void glblInit_obj_EventQueue_cnt_s1086(int& obj_EventQueue_cnt_s1085_6d) {
  obj_EventQueue_cnt_s1085_6d = 0;
}
void glblInit_obj_Container_cnt_s1050(int& obj_Container_cnt_s1049_6c) {
  obj_Container_cnt_s1049_6c = 0;
}
void glblInit_obj_ButtonDemo_cnt_s1094(int& obj_ButtonDemo_cnt_s1093_6b) {
  obj_ButtonDemo_cnt_s1093_6b = 0;
}
void glblInit_obj_JComponent_cnt_s1052(int& obj_JComponent_cnt_s1051_6a) {
  obj_JComponent_cnt_s1051_6a = 0;
}
void glblInit_log_cnt_s1096(int& log_cnt_s1095_69) {
  log_cnt_s1095_69 = 0;
}
void glblInit_obj_InvocationEvent_cnt_s1060(int& obj_InvocationEvent_cnt_s1059_68) {
  obj_InvocationEvent_cnt_s1059_68 = 0;
}
void glblInit_reflect_depth_s1058(int& reflect_depth_s1057_67) {
  reflect_depth_s1057_67 = 0;
}
void glblInit_obj_Frame_cnt_s1062(int& obj_Frame_cnt_s1061_66) {
  obj_Frame_cnt_s1061_66 = 0;
}
void glblInit_obj_EventObject_cnt_s1100(int& obj_EventObject_cnt_s1099_65) {
  obj_EventObject_cnt_s1099_65 = 0;
}
void glblInit_obj_cnt_s1102(int& obj_cnt_s1101_64) {
  obj_cnt_s1101_64 = 0;
}
void glblInit_obj_JButton_cnt_s1064(int& obj_JButton_cnt_s1063_63) {
  obj_JButton_cnt_s1063_63 = 0;
}
void glblInit_obj_ActionEvent_cnt_s1066(int& obj_ActionEvent_cnt_s1065_62) {
  obj_ActionEvent_cnt_s1065_62 = 0;
}
void glblInit_obj_Toolkit_cnt_s1108(int& obj_Toolkit_cnt_s1107_61) {
  obj_Toolkit_cnt_s1107_61 = 0;
}
void glblInit_obj_Component_cnt_s1068(int& obj_Component_cnt_s1067_60) {
  obj_Component_cnt_s1067_60 = 0;
}
void glblInit_obj_Window_cnt_s1074(int& obj_Window_cnt_s1073_5f) {
  obj_Window_cnt_s1073_5f = 0;
}
void sample1(int& obj_AbstractButton_cnt_s759_72, int& allInOne_depth_s615_73, int& update_AuxObserver1_s760_74, int& obj_AWTEvent_cnt_s618_75, int& obj_JFrame_cnt_s793_76, type::Object** obj_AWTEvent_s619_77/* len = 10 */, type::Object** obj_Window_s862_78/* len = 10 */, type::Object** obj_ActionEvent_s1034_79/* len = 10 */, int& obj_EventQueue_cnt_s700_7a, type::Object** obj_Container_s787_7b/* len = 10 */, int& obj_Container_cnt_s788_7c, type::Object** obj_JComponent_s764_7d/* len = 10 */, type::Object** obj_Toolkit_s617_7e/* len = 10 */, int& obj_ButtonDemo_cnt_s586_7f, type::Object** obj_Frame_s507_80/* len = 10 */, int& obj_JComponent_cnt_s765_81, int& log_cnt_s629_82, int& obj_InvocationEvent_cnt_s625_83, int& reflect_depth_s658_84, type::Object*& defaultToolkit_s790_85, int& handle_AuxObserver1_s614_86, int* ev_s483_87/* len = 5 * 82 */, type::Object** obj_EventObject_s791_88/* len = 10 */, int& obj_Frame_cnt_s506_89, type::Object** obj_Component_s761_8a/* len = 10 */, int& obj_EventObject_cnt_s792_8b, int& obj_cnt_s698_8c, type::Object** obj_JButton_s780_8d/* len = 10 */, type::Object** obj_EventQueue_s699_8e/* len = 10 */, int& obj_JButton_cnt_s781_8f, type::Object** obj_JFrame_s794_90/* len = 10 */, type::Object** obj_AbstractButton_s762_91/* len = 10 */, int& obj_ActionEvent_cnt_s1033_92, int& detach_AuxObserver1_s613_93, int& obj_Toolkit_cnt_s612_94, int& obj_Component_cnt_s763_95, int& attach_AuxObserver1_s616_96, int* obj_s484_97/* len = 10 */, int& obj_Window_cnt_s863_98, type::Object** obj_InvocationEvent_s624_99/* len = 10 */, type::Object** obj_ButtonDemo_s587_9a/* len = 10 */) {
  alog::clear_log(ev_s483_87, obj_s484_97, log_cnt_s629_82);
  int  log_s258_9c=0;
  alog::main_ButtonDemo_ent(log_s258_9c);
  int _tt190[1] = {log_s258_9c};
  int*  log_9b= new int [5]; CopyArr<int >(log_9b,_tt190, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s260_9d=0;
  alog::invokeLater_SwingUtilities_Runnable_ent(log_s260_9d);
  int _tt191[2] = {log_s260_9d, 1};
  CopyArr<int >(log_9b,_tt191, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s262_9e=0;
  alog::invokeLater_SwingUtilities_Runnable_ext(log_s262_9e);
  int _tt192[1] = {log_s262_9e};
  CopyArr<int >(log_9b,_tt192, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s264_9f=0;
  alog::main_ButtonDemo_ext(log_s264_9f);
  int _tt193[1] = {log_s264_9f};
  CopyArr<int >(log_9b,_tt193, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s266_a0=0;
  alog::run_ButtonDemo_1_ent(log_s266_a0);
  int _tt194[2] = {log_s266_a0, 1};
  CopyArr<int >(log_9b,_tt194, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s268_a1=0;
  alog::createAndShowGUI_ButtonDemo_ent(log_s268_a1);
  int _tt195[1] = {log_s268_a1};
  CopyArr<int >(log_9b,_tt195, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s270_a2=0;
  alog::setDefaultCloseOperation_JFrame_int_ent(log_s270_a2);
  int _tt196[2] = {log_s270_a2, 2};
  CopyArr<int >(log_9b,_tt196, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s272_a3=0;
  alog::setDefaultCloseOperation_JFrame_int_ext(log_s272_a3);
  int _tt197[1] = {log_s272_a3};
  CopyArr<int >(log_9b,_tt197, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s274_a4=0;
  alog::createImageIcon_ButtonDemo_String_ent(log_s274_a4);
  int _tt198[1] = {log_s274_a4};
  CopyArr<int >(log_9b,_tt198, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s276_a5=0;
  alog::createImageIcon_ButtonDemo_String_ext(log_s276_a5);
  int _tt199[2] = {log_s276_a5, 3};
  CopyArr<int >(log_9b,_tt199, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s278_a6=0;
  alog::createImageIcon_ButtonDemo_String_ent(log_s278_a6);
  int _tt200[1] = {log_s278_a6};
  CopyArr<int >(log_9b,_tt200, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s280_a7=0;
  alog::createImageIcon_ButtonDemo_String_ext(log_s280_a7);
  int _tt201[2] = {log_s280_a7, 3};
  CopyArr<int >(log_9b,_tt201, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s282_a8=0;
  alog::createImageIcon_ButtonDemo_String_ent(log_s282_a8);
  int _tt202[1] = {log_s282_a8};
  CopyArr<int >(log_9b,_tt202, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s284_a9=0;
  alog::createImageIcon_ButtonDemo_String_ext(log_s284_a9);
  int _tt203[2] = {log_s284_a9, 3};
  CopyArr<int >(log_9b,_tt203, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s286_aa=0;
  alog::setVerticalTextPosition_AbstractButton_int_ent(log_s286_aa);
  int _tt204[2] = {log_s286_aa, 4};
  CopyArr<int >(log_9b,_tt204, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s288_ab=0;
  alog::setVerticalTextPosition_AbstractButton_int_ext(log_s288_ab);
  int _tt205[1] = {log_s288_ab};
  CopyArr<int >(log_9b,_tt205, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s290_ac=0;
  alog::setHorizontalTextPosition_AbstractButton_int_ent(log_s290_ac);
  int _tt206[2] = {log_s290_ac, 4};
  CopyArr<int >(log_9b,_tt206, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s292_ad=0;
  alog::setHorizontalTextPosition_AbstractButton_int_ext(log_s292_ad);
  int _tt207[1] = {log_s292_ad};
  CopyArr<int >(log_9b,_tt207, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s294_ae=0;
  alog::setMnemonic_AbstractButton_int_ent(log_s294_ae);
  int _tt208[2] = {log_s294_ae, 4};
  CopyArr<int >(log_9b,_tt208, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s296_af=0;
  alog::setMnemonic_AbstractButton_int_ext(log_s296_af);
  int _tt209[1] = {log_s296_af};
  CopyArr<int >(log_9b,_tt209, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s298_b0=0;
  alog::setActionCommand_AbstractButton_String_ent(log_s298_b0);
  int _tt210[2] = {log_s298_b0, 4};
  CopyArr<int >(log_9b,_tt210, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s300_b1=0;
  alog::setActionCommand_AbstractButton_String_ext(log_s300_b1);
  int _tt211[1] = {log_s300_b1};
  CopyArr<int >(log_9b,_tt211, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s302_b2=0;
  alog::setVerticalTextPosition_AbstractButton_int_ent(log_s302_b2);
  int _tt212[2] = {log_s302_b2, 5};
  CopyArr<int >(log_9b,_tt212, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s304_b3=0;
  alog::setVerticalTextPosition_AbstractButton_int_ext(log_s304_b3);
  int _tt213[1] = {log_s304_b3};
  CopyArr<int >(log_9b,_tt213, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s306_b4=0;
  alog::setHorizontalTextPosition_AbstractButton_int_ent(log_s306_b4);
  int _tt214[2] = {log_s306_b4, 5};
  CopyArr<int >(log_9b,_tt214, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s308_b5=0;
  alog::setHorizontalTextPosition_AbstractButton_int_ext(log_s308_b5);
  int _tt215[1] = {log_s308_b5};
  CopyArr<int >(log_9b,_tt215, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s310_b6=0;
  alog::setMnemonic_AbstractButton_int_ent(log_s310_b6);
  int _tt216[2] = {log_s310_b6, 5};
  CopyArr<int >(log_9b,_tt216, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s312_b7=0;
  alog::setMnemonic_AbstractButton_int_ext(log_s312_b7);
  int _tt217[1] = {log_s312_b7};
  CopyArr<int >(log_9b,_tt217, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s314_b8=0;
  alog::setMnemonic_AbstractButton_int_ent(log_s314_b8);
  int _tt218[2] = {log_s314_b8, 6};
  CopyArr<int >(log_9b,_tt218, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s316_b9=0;
  alog::setMnemonic_AbstractButton_int_ext(log_s316_b9);
  int _tt219[1] = {log_s316_b9};
  CopyArr<int >(log_9b,_tt219, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s318_ba=0;
  alog::setActionCommand_AbstractButton_String_ent(log_s318_ba);
  int _tt220[2] = {log_s318_ba, 6};
  CopyArr<int >(log_9b,_tt220, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s320_bb=0;
  alog::setActionCommand_AbstractButton_String_ext(log_s320_bb);
  int _tt221[1] = {log_s320_bb};
  CopyArr<int >(log_9b,_tt221, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s322_bc=0;
  alog::setEnabled_Component_boolean_ent(log_s322_bc);
  int _tt222[2] = {log_s322_bc, 6};
  CopyArr<int >(log_9b,_tt222, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s324_bd=0;
  alog::setEnabled_Component_boolean_ext(log_s324_bd);
  int _tt223[1] = {log_s324_bd};
  CopyArr<int >(log_9b,_tt223, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s326_be=0;
  alog::addActionListener_AbstractButton_ActionListener_ent(log_s326_be);
  int _tt224[3] = {log_s326_be, 4, 7};
  CopyArr<int >(log_9b,_tt224, 5, 3);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s328_bf=0;
  alog::addActionListener_AbstractButton_ActionListener_ext(log_s328_bf);
  int _tt225[1] = {log_s328_bf};
  CopyArr<int >(log_9b,_tt225, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s330_c0=0;
  alog::addActionListener_AbstractButton_ActionListener_ent(log_s330_c0);
  int _tt226[3] = {log_s330_c0, 6, 7};
  CopyArr<int >(log_9b,_tt226, 5, 3);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s332_c1=0;
  alog::addActionListener_AbstractButton_ActionListener_ext(log_s332_c1);
  int _tt227[1] = {log_s332_c1};
  CopyArr<int >(log_9b,_tt227, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s334_c2=0;
  alog::setToolTipText_JComponent_String_ent(log_s334_c2);
  int _tt228[2] = {log_s334_c2, 4};
  CopyArr<int >(log_9b,_tt228, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s336_c3=0;
  alog::setToolTipText_JComponent_String_ext(log_s336_c3);
  int _tt229[1] = {log_s336_c3};
  CopyArr<int >(log_9b,_tt229, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s338_c4=0;
  alog::setToolTipText_JComponent_String_ent(log_s338_c4);
  int _tt230[2] = {log_s338_c4, 5};
  CopyArr<int >(log_9b,_tt230, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s340_c5=0;
  alog::setToolTipText_JComponent_String_ext(log_s340_c5);
  int _tt231[1] = {log_s340_c5};
  CopyArr<int >(log_9b,_tt231, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s342_c6=0;
  alog::setToolTipText_JComponent_String_ent(log_s342_c6);
  int _tt232[2] = {log_s342_c6, 6};
  CopyArr<int >(log_9b,_tt232, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s344_c7=0;
  alog::setToolTipText_JComponent_String_ext(log_s344_c7);
  int _tt233[1] = {log_s344_c7};
  CopyArr<int >(log_9b,_tt233, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s346_c8=0;
  alog::add_Container_Component_ent(log_s346_c8);
  int _tt234[3] = {log_s346_c8, 7, 4};
  CopyArr<int >(log_9b,_tt234, 5, 3);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s348_c9=0;
  alog::add_Container_Component_ext(log_s348_c9);
  int _tt235[2] = {log_s348_c9, 4};
  CopyArr<int >(log_9b,_tt235, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s350_ca=0;
  alog::add_Container_Component_ent(log_s350_ca);
  int _tt236[3] = {log_s350_ca, 7, 5};
  CopyArr<int >(log_9b,_tt236, 5, 3);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s352_cb=0;
  alog::add_Container_Component_ext(log_s352_cb);
  int _tt237[2] = {log_s352_cb, 5};
  CopyArr<int >(log_9b,_tt237, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s354_cc=0;
  alog::add_Container_Component_ent(log_s354_cc);
  int _tt238[3] = {log_s354_cc, 7, 6};
  CopyArr<int >(log_9b,_tt238, 5, 3);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s356_cd=0;
  alog::add_Container_Component_ext(log_s356_cd);
  int _tt239[2] = {log_s356_cd, 6};
  CopyArr<int >(log_9b,_tt239, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s358_ce=0;
  alog::setContentPane_JFrame_Container_ent(log_s358_ce);
  int _tt240[3] = {log_s358_ce, 2, 7};
  CopyArr<int >(log_9b,_tt240, 5, 3);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s360_cf=0;
  alog::setContentPane_JFrame_Container_ext(log_s360_cf);
  int _tt241[1] = {log_s360_cf};
  CopyArr<int >(log_9b,_tt241, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s362_d0=0;
  alog::pack_Window_ent(log_s362_d0);
  int _tt242[2] = {log_s362_d0, 2};
  CopyArr<int >(log_9b,_tt242, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s364_d1=0;
  alog::pack_Window_ext(log_s364_d1);
  int _tt243[1] = {log_s364_d1};
  CopyArr<int >(log_9b,_tt243, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s366_d2=0;
  alog::setVisible_Component_boolean_ent(log_s366_d2);
  int _tt244[2] = {log_s366_d2, 2};
  CopyArr<int >(log_9b,_tt244, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s368_d3=0;
  alog::setVisible_Component_boolean_ext(log_s368_d3);
  int _tt245[1] = {log_s368_d3};
  CopyArr<int >(log_9b,_tt245, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s370_d4=0;
  alog::createAndShowGUI_ButtonDemo_ext(log_s370_d4);
  int _tt246[1] = {log_s370_d4};
  CopyArr<int >(log_9b,_tt246, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s372_d5=0;
  alog::run_ButtonDemo_1_ext(log_s372_d5);
  int _tt247[1] = {log_s372_d5};
  CopyArr<int >(log_9b,_tt247, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s374_d6=0;
  alog::actionPerformed_ButtonDemo_ActionEvent_ent(log_s374_d6);
  int _tt248[3] = {log_s374_d6, 7, 8};
  CopyArr<int >(log_9b,_tt248, 5, 3);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s376_d7=0;
  alog::getActionCommand_ActionEvent_ent(log_s376_d7);
  int _tt249[2] = {log_s376_d7, 8};
  CopyArr<int >(log_9b,_tt249, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s378_d8=0;
  alog::getActionCommand_ActionEvent_ext(log_s378_d8);
  int _tt250[1] = {log_s378_d8};
  CopyArr<int >(log_9b,_tt250, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s380_d9=0;
  alog::setEnabled_Component_boolean_ent(log_s380_d9);
  int _tt251[2] = {log_s380_d9, 5};
  CopyArr<int >(log_9b,_tt251, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s382_da=0;
  alog::setEnabled_Component_boolean_ext(log_s382_da);
  int _tt252[1] = {log_s382_da};
  CopyArr<int >(log_9b,_tt252, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s384_db=0;
  alog::setEnabled_Component_boolean_ent(log_s384_db);
  int _tt253[2] = {log_s384_db, 4};
  CopyArr<int >(log_9b,_tt253, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s386_dc=0;
  alog::setEnabled_Component_boolean_ext(log_s386_dc);
  int _tt254[1] = {log_s386_dc};
  CopyArr<int >(log_9b,_tt254, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s388_dd=0;
  alog::setEnabled_Component_boolean_ent(log_s388_dd);
  int _tt255[2] = {log_s388_dd, 6};
  CopyArr<int >(log_9b,_tt255, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s390_de=0;
  alog::setEnabled_Component_boolean_ext(log_s390_de);
  int _tt256[1] = {log_s390_de};
  CopyArr<int >(log_9b,_tt256, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s392_df=0;
  alog::actionPerformed_ButtonDemo_ActionEvent_ext(log_s392_df);
  int _tt257[1] = {log_s392_df};
  CopyArr<int >(log_9b,_tt257, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s394_e0=0;
  alog::actionPerformed_ButtonDemo_ActionEvent_ent(log_s394_e0);
  int _tt258[3] = {log_s394_e0, 7, 9};
  CopyArr<int >(log_9b,_tt258, 5, 3);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s396_e1=0;
  alog::getActionCommand_ActionEvent_ent(log_s396_e1);
  int _tt259[2] = {log_s396_e1, 9};
  CopyArr<int >(log_9b,_tt259, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s398_e2=0;
  alog::getActionCommand_ActionEvent_ext(log_s398_e2);
  int _tt260[1] = {log_s398_e2};
  CopyArr<int >(log_9b,_tt260, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s400_e3=0;
  alog::setEnabled_Component_boolean_ent(log_s400_e3);
  int _tt261[2] = {log_s400_e3, 5};
  CopyArr<int >(log_9b,_tt261, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s402_e4=0;
  alog::setEnabled_Component_boolean_ext(log_s402_e4);
  int _tt262[1] = {log_s402_e4};
  CopyArr<int >(log_9b,_tt262, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s404_e5=0;
  alog::setEnabled_Component_boolean_ent(log_s404_e5);
  int _tt263[2] = {log_s404_e5, 4};
  CopyArr<int >(log_9b,_tt263, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s406_e6=0;
  alog::setEnabled_Component_boolean_ext(log_s406_e6);
  int _tt264[1] = {log_s406_e6};
  CopyArr<int >(log_9b,_tt264, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s408_e7=0;
  alog::setEnabled_Component_boolean_ent(log_s408_e7);
  int _tt265[2] = {log_s408_e7, 6};
  CopyArr<int >(log_9b,_tt265, 5, 2);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s410_e8=0;
  alog::setEnabled_Component_boolean_ext(log_s410_e8);
  int _tt266[1] = {log_s410_e8};
  CopyArr<int >(log_9b,_tt266, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  log_s412_e9=0;
  alog::actionPerformed_ButtonDemo_ActionEvent_ext(log_s412_e9);
  int _tt267[1] = {log_s412_e9};
  CopyArr<int >(log_9b,_tt267, 5, 1);
  alog::write_log(log_9b, ev_s483_87, log_cnt_s629_82);
  int  len_log_s414_eb=0;
  alog::get_log_cnt(len_log_s414_eb, log_cnt_s629_82);
  alog::reset_log_cnt(log_cnt_s629_82);
  Main::sample1_Main(obj_AbstractButton_cnt_s759_72, allInOne_depth_s615_73, update_AuxObserver1_s760_74, obj_AWTEvent_cnt_s618_75, obj_JFrame_cnt_s793_76, obj_AWTEvent_s619_77, obj_Window_s862_78, obj_EventQueue_cnt_s700_7a, obj_ActionEvent_s1034_79, obj_Container_s787_7b, obj_Container_cnt_s788_7c, obj_JComponent_s764_7d, obj_ButtonDemo_cnt_s586_7f, obj_Frame_s507_80, obj_Toolkit_s617_7e, obj_JComponent_cnt_s765_81, log_cnt_s629_82, reflect_depth_s658_84, obj_InvocationEvent_cnt_s625_83, defaultToolkit_s790_85, ev_s483_87, handle_AuxObserver1_s614_86, obj_EventObject_s791_88, obj_Frame_cnt_s506_89, obj_Component_s761_8a, obj_EventObject_cnt_s792_8b, obj_cnt_s698_8c, obj_JButton_s780_8d, obj_EventQueue_s699_8e, obj_JButton_cnt_s781_8f, obj_JFrame_s794_90, obj_AbstractButton_s762_91, obj_ActionEvent_cnt_s1033_92, obj_Toolkit_cnt_s612_94, detach_AuxObserver1_s613_93, obj_Component_cnt_s763_95, attach_AuxObserver1_s616_96, obj_s484_97, obj_Window_cnt_s863_98, obj_InvocationEvent_s624_99, obj_ButtonDemo_s587_9a);
  int  _out_s416_ec=0;
  alog::get_log_cnt(_out_s416_ec, log_cnt_s629_82);
  assert ((len_log_s414_eb) == (_out_s416_ec));;
}

}
namespace AbstractButton{

void dispatchEvent_AbstractButton_AWTEvent(type::Object* self_26f, type::Object* event_270, int& detach_AuxObserver1_s569_271, int& allInOne_depth_s571_272, int& handle_AuxObserver1_s570_273, int* ev_s500_274/* len = 5 * 82 */, int& update_AuxObserver1_s671_275, int& attach_AuxObserver1_s572_276, int* obj_s501_277/* len = 10 */, int& log_cnt_s502_278, int& reflect_depth_s672_279) {
  AuxObserver1::allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(33, self_26f, NULL, event_270, detach_AuxObserver1_s569_271, ev_s500_274, allInOne_depth_s571_272, handle_AuxObserver1_s570_273, update_AuxObserver1_s671_275, obj_s501_277, attach_AuxObserver1_s572_276, log_cnt_s502_278, reflect_depth_s672_279);
}
void addActionListener_AbstractButton_ActionListener(type::Object* self_27a, type::Object* l_27b, int& detach_AuxObserver1_s494_27c, int* ev_s771_27d/* len = 5 * 82 */, int& handle_AuxObserver1_s496_27e, int& allInOne_depth_s495_27f, int& update_AuxObserver1_s867_280, int* obj_s772_281/* len = 10 */, int& attach_AuxObserver1_s497_282, int& log_cnt_s773_283, int& reflect_depth_s482_284) {
  int  params_s196_286=0;
  alog::addActionListener_AbstractButton_ActionListener_ent(params_s196_286);
  int _tt268[3] = {params_s196_286, self_27a->hash, l_27b->hash};
  int*  params_285= new int [5]; CopyArr<int >(params_285,_tt268, 5, 3);
  alog::check_log(params_285, ev_s771_27d, obj_s772_281, log_cnt_s773_283);
  AuxObserver1::allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(34, self_27a, l_27b, NULL, detach_AuxObserver1_s494_27c, ev_s771_27d, allInOne_depth_s495_27f, handle_AuxObserver1_s496_27e, update_AuxObserver1_s867_280, obj_s772_281, attach_AuxObserver1_s497_282, log_cnt_s773_283, reflect_depth_s482_284);
  int  params_s198_287=0;
  alog::addActionListener_AbstractButton_ActionListener_ext(params_s198_287);
  int _tt269[1] = {params_s198_287};
  CopyArr<int >(params_285,_tt269, 5, 1);
  alog::check_log(params_285, ev_s771_27d, obj_s772_281, log_cnt_s773_283);
}
void removeActionListener_AbstractButton_ActionListener(type::Object* self_288, type::Object* l_289, int& detach_AuxObserver1_s527_28a, int* ev_s583_28b/* len = 5 * 82 */, int& allInOne_depth_s529_28c, int& handle_AuxObserver1_s528_28d, int& update_AuxObserver1_s545_28e, int* obj_s584_28f/* len = 10 */, int& attach_AuxObserver1_s530_290, int& log_cnt_s585_291, int& reflect_depth_s531_292) {
  AuxObserver1::allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(35, self_288, l_289, NULL, detach_AuxObserver1_s527_28a, ev_s583_28b, allInOne_depth_s529_28c, handle_AuxObserver1_s528_28d, update_AuxObserver1_s545_28e, obj_s584_28f, attach_AuxObserver1_s530_290, log_cnt_s585_291, reflect_depth_s531_292);
}
void setVerticalTextPosition_AbstractButton_int(type::Object* self_293, int textPosition_294, int& detach_AuxObserver1_s680_295, int* ev_s690_296/* len = 5 * 82 */, int& allInOne_depth_s682_297, int& handle_AuxObserver1_s681_298, int& update_AuxObserver1_s691_299, int* obj_s692_29a/* len = 10 */, int& attach_AuxObserver1_s683_29b, int& log_cnt_s693_29c, int& reflect_depth_s591_29d) {
  int  params_s192_29f=0;
  alog::setVerticalTextPosition_AbstractButton_int_ent(params_s192_29f);
  int _tt270[2] = {params_s192_29f, self_293->hash};
  int*  params_29e= new int [5]; CopyArr<int >(params_29e,_tt270, 5, 2);
  alog::check_log(params_29e, ev_s690_296, obj_s692_29a, log_cnt_s693_29c);
  AuxObserver1::allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(38, self_293, NULL, NULL, detach_AuxObserver1_s680_295, ev_s690_296, allInOne_depth_s682_297, handle_AuxObserver1_s681_298, update_AuxObserver1_s691_299, obj_s692_29a, attach_AuxObserver1_s683_29b, log_cnt_s693_29c, reflect_depth_s591_29d);
  self_293->_verticaltextposition_AbstractButton = textPosition_294;
  int  params_s194_2a0=0;
  alog::setVerticalTextPosition_AbstractButton_int_ext(params_s194_2a0);
  int _tt271[1] = {params_s194_2a0};
  CopyArr<int >(params_29e,_tt271, 5, 1);
  alog::check_log(params_29e, ev_s690_296, obj_s692_29a, log_cnt_s693_29c);
}
void setHorizontalTextPosition_AbstractButton_int(type::Object* self_2a1, int textPosition_2a2, int& detach_AuxObserver1_s707_2a3, int& handle_AuxObserver1_s710_2a4, int& allInOne_depth_s709_2a5, int* ev_s708_2a6/* len = 5 * 82 */, int& update_AuxObserver1_s711_2a7, int& attach_AuxObserver1_s713_2a8, int* obj_s712_2a9/* len = 10 */, int& log_cnt_s714_2aa, int& reflect_depth_s715_2ab) {
  int  params_s188_2ad=0;
  alog::setHorizontalTextPosition_AbstractButton_int_ent(params_s188_2ad);
  int _tt272[2] = {params_s188_2ad, self_2a1->hash};
  int*  params_2ac= new int [5]; CopyArr<int >(params_2ac,_tt272, 5, 2);
  alog::check_log(params_2ac, ev_s708_2a6, obj_s712_2a9, log_cnt_s714_2aa);
  AuxObserver1::allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(39, self_2a1, NULL, NULL, detach_AuxObserver1_s707_2a3, ev_s708_2a6, allInOne_depth_s709_2a5, handle_AuxObserver1_s710_2a4, update_AuxObserver1_s711_2a7, obj_s712_2a9, attach_AuxObserver1_s713_2a8, log_cnt_s714_2aa, reflect_depth_s715_2ab);
  self_2a1->_horizontaltextposition_AbstractButton = textPosition_2a2;
  int  params_s190_2ae=0;
  alog::setHorizontalTextPosition_AbstractButton_int_ext(params_s190_2ae);
  int _tt273[1] = {params_s190_2ae};
  CopyArr<int >(params_2ac,_tt273, 5, 1);
  alog::check_log(params_2ac, ev_s708_2a6, obj_s712_2a9, log_cnt_s714_2aa);
}
void setMnemonic_AbstractButton_int(type::Object* self_2af, int mnemonic_2b0, int& detach_AuxObserver1_s739_2b1, int& handle_AuxObserver1_s741_2b2, int& allInOne_depth_s740_2b3, int* ev_s532_2b4/* len = 5 * 82 */, int& update_AuxObserver1_s798_2b5, int& attach_AuxObserver1_s742_2b6, int* obj_s533_2b7/* len = 10 */, int& log_cnt_s534_2b8, int& reflect_depth_s743_2b9) {
  int  params_s184_2bb=0;
  alog::setMnemonic_AbstractButton_int_ent(params_s184_2bb);
  int _tt274[2] = {params_s184_2bb, self_2af->hash};
  int*  params_2ba= new int [5]; CopyArr<int >(params_2ba,_tt274, 5, 2);
  alog::check_log(params_2ba, ev_s532_2b4, obj_s533_2b7, log_cnt_s534_2b8);
  AuxObserver1::allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(40, self_2af, NULL, NULL, detach_AuxObserver1_s739_2b1, ev_s532_2b4, allInOne_depth_s740_2b3, handle_AuxObserver1_s741_2b2, update_AuxObserver1_s798_2b5, obj_s533_2b7, attach_AuxObserver1_s742_2b6, log_cnt_s534_2b8, reflect_depth_s743_2b9);
  self_2af->_mnemonic_AbstractButton = mnemonic_2b0;
  int  params_s186_2bc=0;
  alog::setMnemonic_AbstractButton_int_ext(params_s186_2bc);
  int _tt275[1] = {params_s186_2bc};
  CopyArr<int >(params_2ba,_tt275, 5, 1);
  alog::check_log(params_2ba, ev_s532_2b4, obj_s533_2b7, log_cnt_s534_2b8);
}
void getActionCommand_AbstractButton(type::Object* self_2bd, char* _out_2be/* len = 51 */, int& detach_AuxObserver1_s857_2bf, int& handle_AuxObserver1_s859_2c0, int& allInOne_depth_s858_2c1, int* ev_s661_2c2/* len = 5 * 82 */, int& update_AuxObserver1_s860_2c3, int& attach_AuxObserver1_s861_2c4, int* obj_s662_2c5/* len = 10 */, int& log_cnt_s663_2c6, int& reflect_depth_s623_2c7) {
  AuxObserver1::allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(41, self_2bd, NULL, NULL, detach_AuxObserver1_s857_2bf, ev_s661_2c2, allInOne_depth_s858_2c1, handle_AuxObserver1_s859_2c0, update_AuxObserver1_s860_2c3, obj_s662_2c5, attach_AuxObserver1_s861_2c4, log_cnt_s663_2c6, reflect_depth_s623_2c7);
  CopyArr<char >(_out_2be,self_2bd->_actioncommand_AbstractButton, 51, 51);
  return;
}
void setActionCommand_AbstractButton_String(type::Object* self_2c8, char* actionCommand_2c9/* len = 51 */, int& detach_AuxObserver1_s599_2ca, int& handle_AuxObserver1_s602_2cb, int& allInOne_depth_s601_2cc, int* ev_s600_2cd/* len = 5 * 82 */, int& update_AuxObserver1_s603_2ce, int& attach_AuxObserver1_s605_2cf, int* obj_s604_2d0/* len = 10 */, int& log_cnt_s606_2d1, int& reflect_depth_s607_2d2) {
  int  params_s180_2d4=0;
  alog::setActionCommand_AbstractButton_String_ent(params_s180_2d4);
  int _tt276[2] = {params_s180_2d4, self_2c8->hash};
  int*  params_2d3= new int [5]; CopyArr<int >(params_2d3,_tt276, 5, 2);
  alog::check_log(params_2d3, ev_s600_2cd, obj_s604_2d0, log_cnt_s606_2d1);
  AuxObserver1::allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(42, self_2c8, NULL, NULL, detach_AuxObserver1_s599_2ca, ev_s600_2cd, allInOne_depth_s601_2cc, handle_AuxObserver1_s602_2cb, update_AuxObserver1_s603_2ce, obj_s604_2d0, attach_AuxObserver1_s605_2cf, log_cnt_s606_2d1, reflect_depth_s607_2d2);
  CopyArr<char >(self_2c8->_actioncommand_AbstractButton,actionCommand_2c9, 51, 51);
  int  params_s182_2d5=0;
  alog::setActionCommand_AbstractButton_String_ext(params_s182_2d5);
  int _tt277[1] = {params_s182_2d5};
  CopyArr<int >(params_2d3,_tt277, 5, 1);
  alog::check_log(params_2d3, ev_s600_2cd, obj_s604_2d0, log_cnt_s606_2d1);
}
void setSelected_AbstractButton_boolean(type::Object* self_2d6, bool b_2d7, int& detach_AuxObserver1_s608_2d8, int* ev_s744_2d9/* len = 5 * 82 */, int& allInOne_depth_s610_2da, int& handle_AuxObserver1_s609_2db, int& update_AuxObserver1_s745_2dc, int* obj_s746_2dd/* len = 10 */, int& attach_AuxObserver1_s611_2de, int& log_cnt_s747_2df, int& reflect_depth_s748_2e0) {
  AuxObserver1::allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(43, self_2d6, NULL, NULL, detach_AuxObserver1_s608_2d8, ev_s744_2d9, allInOne_depth_s610_2da, handle_AuxObserver1_s609_2db, update_AuxObserver1_s745_2dc, obj_s746_2dd, attach_AuxObserver1_s611_2de, log_cnt_s747_2df, reflect_depth_s748_2e0);
  self_2d6->_selected_AbstractButton = b_2d7;
}
void AbstractButton_AbstractButton(type::Object*& _out_423, int& obj_AbstractButton_cnt_s1019_424, type::Object** obj_AbstractButton_s1020_425/* len = 10 */, type::Object** obj_Container_s630_426/* len = 10 */, int& obj_Component_cnt_s924_427, int& obj_Container_cnt_s631_428, type::Object** obj_JComponent_s1017_429/* len = 10 */, type::Object** obj_Component_s925_42a/* len = 10 */, int& obj_cnt_s921_42b, int& obj_JComponent_cnt_s1018_42c) {
  type::Object*  self_s200_42d=NULL;
  JComponent::JComponent_JComponent(self_s200_42d, obj_Container_s630_426, obj_Component_cnt_s924_427, obj_Container_cnt_s631_428, obj_JComponent_s1017_429, obj_Component_s925_42a, obj_cnt_s921_42b, obj_JComponent_cnt_s1018_42c);
  _out_423 = self_s200_42d;
  self_s200_42d->_obs_AuxObserver1 = type::List_Object::create(0, (type::Object**)NULL, 0);
  alog::register_AbstractButton(self_s200_42d, obj_AbstractButton_cnt_s1019_424, obj_AbstractButton_s1020_425);
  return;
}

}
namespace JComponent{

void setOpaque_JComponent_boolean(type::Object* self_3a3, bool isOpaque_3a4) {
  self_3a3->_opaque_JComponent = isOpaque_3a4;
}
void setToolTipText_JComponent_String(type::Object* self_3f8, char* text_3f9/* len = 51 */, int* ev_s1026_3fa/* len = 5 * 82 */, int* obj_s1027_3fb/* len = 10 */, int& log_cnt_s1028_3fc) {
  int  params_s82_3fe=0;
  alog::setToolTipText_JComponent_String_ent(params_s82_3fe);
  int _tt278[2] = {params_s82_3fe, self_3f8->hash};
  int*  params_3fd= new int [5]; CopyArr<int >(params_3fd,_tt278, 5, 2);
  alog::check_log(params_3fd, ev_s1026_3fa, obj_s1027_3fb, log_cnt_s1028_3fc);
  CopyArr<char >(self_3f8->_tooltiptext_JComponent,text_3f9, 51, 51);
  int  params_s84_3ff=0;
  alog::setToolTipText_JComponent_String_ext(params_s84_3ff);
  int _tt279[1] = {params_s84_3ff};
  CopyArr<int >(params_3fd,_tt279, 5, 1);
  alog::check_log(params_3fd, ev_s1026_3fa, obj_s1027_3fb, log_cnt_s1028_3fc);
}
void JComponent_JComponent(type::Object*& _out_43b, type::Object** obj_Container_s883_43c/* len = 10 */, int& obj_Component_cnt_s884_43d, int& obj_Container_cnt_s885_43e, type::Object** obj_JComponent_s957_43f/* len = 10 */, type::Object** obj_Component_s886_440/* len = 10 */, int& obj_cnt_s675_441, int& obj_JComponent_cnt_s958_442) {
  type::Object*  self_s86_443=NULL;
  Container::Container_Container(self_s86_443, obj_Container_s883_43c, obj_Component_cnt_s884_43d, obj_Container_cnt_s885_43e, obj_Component_s886_440, obj_cnt_s675_441);
  _out_43b = self_s86_443;
  alog::register_JComponent(self_s86_443, obj_JComponent_s957_43f, obj_JComponent_cnt_s958_442);
  return;
}

}
namespace EventObject{

void getSource_EventObject(type::Object* self_1fe, type::Object*& _out_1ff) {
  _out_1ff = self_1fe->_source_EventObject;
  return;
}
void EventObject_EventObject_Object(type::Object* source_2e1, type::Object*& _out_2e2, type::Object** obj_EventObject_s1008_2e3/* len = 10 */, int& obj_EventObject_cnt_s1009_2e4, int& obj_cnt_s677_2e5) {
  int  self_s202_2e6=0;
  alog::nonce(self_s202_2e6, obj_cnt_s677_2e5);
  _out_2e2 = type::Object::create(self_s202_2e6, 0, 0, (char*)NULL, 0, 0, NULL, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, (char*)NULL, 0, NULL, (char*)NULL, 0, (char*)NULL, 0, NULL, NULL, (int*)NULL, 0, 0, NULL, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, (char*)NULL, 0, 0, 0, 0, NULL, 0, NULL, NULL, 0, (char*)NULL, 0, NULL, NULL, 0, NULL, 0, 0, 0, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL);
  int  _out_s204_2e7=0;
  alog::nonce(_out_s204_2e7, obj_cnt_s677_2e5);
  _out_2e2->_source_EventObject = type::Object::create(_out_s204_2e7, 0, 0, (char*)NULL, 0, 0, NULL, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, (char*)NULL, 0, NULL, (char*)NULL, 0, (char*)NULL, 0, NULL, NULL, (int*)NULL, 0, 0, NULL, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, (char*)NULL, 0, 0, 0, 0, NULL, 0, NULL, NULL, 0, (char*)NULL, 0, NULL, NULL, 0, NULL, 0, 0, 0, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL);
  _out_2e2->_source_EventObject = source_2e1;
  alog::register_EventObject(_out_2e2, obj_EventObject_s1008_2e3, obj_EventObject_cnt_s1009_2e4);
  return;
}

}
namespace alog{

void clear_log(int* ev_s467_f9/* len = 5 * 82 */, int* obj_s468_fa/* len = 10 */, int& log_cnt_s963_fb) {
  reset_log_cnt(log_cnt_s963_fb);
  for (int  __sa1115_fc=0;(__sa1115_fc) < (82);__sa1115_fc = __sa1115_fc + 1){
    if ((__sa1115_fc) < (0)) {
      assert (((__sa1115_fc) >= (0)) && ((__sa1115_fc) < (82)));;
      CopyArr<int >((ev_s467_f9+ 5 * __sa1115_fc),NULL, 5);
    } else {
      assert (((__sa1115_fc) >= (0)) && ((__sa1115_fc) < (82)));;
      CopyArr<int >((ev_s467_f9+ 5 * __sa1115_fc),0, 5);
    }
  }
  CopyArr<int >(obj_s468_fa,NULL, 10, 0);
}
void main_ButtonDemo_ent(int& _out_fd) {
  _out_fd = 105;
  return;
}
void write_log(int* params_fe/* len = 5 */, int* ev_s459_ff/* len = 5 * 82 */, int& log_cnt_s460_100) {
  int  uo_s22_101=log_cnt_s460_100;
  log_cnt_s460_100 = log_cnt_s460_100 + 1;
  assert (((uo_s22_101) >= (0)) && ((uo_s22_101) < (82)));;
  CopyArr<int >((ev_s459_ff+ 5 * uo_s22_101),params_fe, 5, 5);
}
void invokeLater_SwingUtilities_Runnable_ent(int& _out_102) {
  _out_102 = 84;
  return;
}
void invokeLater_SwingUtilities_Runnable_ext(int& _out_103) {
  _out_103 = -84;
  return;
}
void main_ButtonDemo_ext(int& _out_104) {
  _out_104 = -105;
  return;
}
void run_ButtonDemo_1_ent(int& _out_105) {
  _out_105 = 106;
  return;
}
void createAndShowGUI_ButtonDemo_ent(int& _out_106) {
  _out_106 = 104;
  return;
}
void setDefaultCloseOperation_JFrame_int_ent(int& _out_107) {
  _out_107 = 63;
  return;
}
void setDefaultCloseOperation_JFrame_int_ext(int& _out_108) {
  _out_108 = -63;
  return;
}
void createImageIcon_ButtonDemo_String_ent(int& _out_109) {
  _out_109 = 103;
  return;
}
void createImageIcon_ButtonDemo_String_ext(int& _out_10a) {
  _out_10a = -103;
  return;
}
void setVerticalTextPosition_AbstractButton_int_ent(int& _out_10b) {
  _out_10b = 38;
  return;
}
void setVerticalTextPosition_AbstractButton_int_ext(int& _out_10c) {
  _out_10c = -38;
  return;
}
void setHorizontalTextPosition_AbstractButton_int_ent(int& _out_10d) {
  _out_10d = 39;
  return;
}
void setHorizontalTextPosition_AbstractButton_int_ext(int& _out_10e) {
  _out_10e = -39;
  return;
}
void setMnemonic_AbstractButton_int_ent(int& _out_10f) {
  _out_10f = 40;
  return;
}
void setMnemonic_AbstractButton_int_ext(int& _out_110) {
  _out_110 = -40;
  return;
}
void setActionCommand_AbstractButton_String_ent(int& _out_111) {
  _out_111 = 42;
  return;
}
void setActionCommand_AbstractButton_String_ext(int& _out_112) {
  _out_112 = -42;
  return;
}
void setEnabled_Component_boolean_ent(int& _out_113) {
  _out_113 = 4;
  return;
}
void setEnabled_Component_boolean_ext(int& _out_114) {
  _out_114 = -4;
  return;
}
void addActionListener_AbstractButton_ActionListener_ent(int& _out_115) {
  _out_115 = 34;
  return;
}
void addActionListener_AbstractButton_ActionListener_ext(int& _out_116) {
  _out_116 = -34;
  return;
}
void setToolTipText_JComponent_String_ent(int& _out_117) {
  _out_117 = 61;
  return;
}
void setToolTipText_JComponent_String_ext(int& _out_118) {
  _out_118 = -61;
  return;
}
void add_Container_Component_ent(int& _out_119) {
  _out_119 = 7;
  return;
}
void add_Container_Component_ext(int& _out_11a) {
  _out_11a = -7;
  return;
}
void setContentPane_JFrame_Container_ent(int& _out_11b) {
  _out_11b = 64;
  return;
}
void setContentPane_JFrame_Container_ext(int& _out_11c) {
  _out_11c = -64;
  return;
}
void pack_Window_ent(int& _out_11d) {
  _out_11d = 19;
  return;
}
void pack_Window_ext(int& _out_11e) {
  _out_11e = -19;
  return;
}
void setVisible_Component_boolean_ent(int& _out_11f) {
  _out_11f = 6;
  return;
}
void setVisible_Component_boolean_ext(int& _out_120) {
  _out_120 = -6;
  return;
}
void createAndShowGUI_ButtonDemo_ext(int& _out_121) {
  _out_121 = -104;
  return;
}
void run_ButtonDemo_1_ext(int& _out_122) {
  _out_122 = -106;
  return;
}
void actionPerformed_ButtonDemo_ActionEvent_ent(int& _out_123) {
  _out_123 = 102;
  return;
}
void getActionCommand_ActionEvent_ent(int& _out_124) {
  _out_124 = 21;
  return;
}
void getActionCommand_ActionEvent_ext(int& _out_125) {
  _out_125 = -21;
  return;
}
void actionPerformed_ButtonDemo_ActionEvent_ext(int& _out_126) {
  _out_126 = -102;
  return;
}
void get_log_cnt(int& _out_127, int& log_cnt_s451_128) {
  _out_127 = log_cnt_s451_128;
  return;
}
void reset_log_cnt(int& log_cnt_s454_129) {
  log_cnt_s454_129 = 0;
}
void retrieve_JButton(int idx_1a8, type::Object*& _out_1a9, type::Object** obj_JButton_s431_1aa/* len = 10 */) {
  _out_1a9 = (obj_JButton_s431_1aa[idx_1a8]);
  return;
}
void check_log(int* params_1c3/* len = 5 */, int* ev_s421_1c4/* len = 5 * 82 */, int* obj_s422_1c5/* len = 10 */, int& log_cnt_s423_1c6) {
  assert (((log_cnt_s423_1c6) >= (0)) && ((log_cnt_s423_1c6) < (82)));;
  assert (((params_1c3[0])) == ((ev_s421_1c4[(5 * log_cnt_s423_1c6)])));;
  for (int  i_1c7=1;(i_1c7) < (5);i_1c7 = i_1c7 + 1){
    assert (((log_cnt_s423_1c6) >= (0)) && ((log_cnt_s423_1c6) < (82)));;
    assert (((i_1c7) >= (0)) && ((i_1c7) < (5)));;
    if (((ev_s421_1c4[((5 * log_cnt_s423_1c6) + i_1c7)])) != (0)) {
      assert (((log_cnt_s423_1c6) >= (0)) && ((log_cnt_s423_1c6) < (82)));;
      assert (((i_1c7) >= (0)) && ((i_1c7) < (5)));;
      if (((obj_s422_1c5[(ev_s421_1c4[((5 * log_cnt_s423_1c6) + i_1c7)])])) == (0)) {
        assert (((log_cnt_s423_1c6) >= (0)) && ((log_cnt_s423_1c6) < (82)));;
        assert (((i_1c7) >= (0)) && ((i_1c7) < (5)));;
        (obj_s422_1c5[(ev_s421_1c4[(5 * log_cnt_s423_1c6) + i_1c7])]) = (params_1c3[i_1c7]);
      } else {
        assert (((log_cnt_s423_1c6) >= (0)) && ((log_cnt_s423_1c6) < (82)));;
        assert (((i_1c7) >= (0)) && ((i_1c7) < (5)));;
        assert (((obj_s422_1c5[(ev_s421_1c4[((5 * log_cnt_s423_1c6) + i_1c7)])])) == ((params_1c3[i_1c7])));;
      }
    }
  }
  log_cnt_s423_1c6 = log_cnt_s423_1c6 + 1;
}
void nonce(int& _out_1c9, int& obj_cnt_s465_1ca) {
  _out_1c9 = obj_cnt_s465_1ca;
  obj_cnt_s465_1ca = obj_cnt_s465_1ca + 1;
  return;
}
void register_ActionEvent(type::Object* actionevent_21a, int& obj_ActionEvent_cnt_s441_21b, type::Object** obj_ActionEvent_s442_21c/* len = 10 */) {
  int  uo_s16_21d=obj_ActionEvent_cnt_s441_21b;
  obj_ActionEvent_cnt_s441_21b = obj_ActionEvent_cnt_s441_21b + 1;
  (obj_ActionEvent_s442_21c[uo_s16_21d]) = actionevent_21a;
}
void register_Toolkit(type::Object* toolkit_228, int& obj_Toolkit_cnt_s469_229, type::Object** obj_Toolkit_s470_22a/* len = 10 */) {
  int  uo_s20_22b=obj_Toolkit_cnt_s469_229;
  obj_Toolkit_cnt_s469_229 = obj_Toolkit_cnt_s469_229 + 1;
  (obj_Toolkit_s470_22a[uo_s20_22b]) = toolkit_228;
}
void register_AWTEvent(type::Object* awtevent_2e8, int& obj_AWTEvent_cnt_s475_2e9, type::Object** obj_AWTEvent_s476_2ea/* len = 10 */) {
  int  uo_s17_2eb=obj_AWTEvent_cnt_s475_2e9;
  obj_AWTEvent_cnt_s475_2e9 = obj_AWTEvent_cnt_s475_2e9 + 1;
  (obj_AWTEvent_s476_2ea[uo_s17_2eb]) = awtevent_2e8;
}
void register_EventQueue(type::Object* eventqueue_2ec, type::Object** obj_EventQueue_s419_2ed/* len = 10 */, int& obj_EventQueue_cnt_s420_2ee) {
  int  uo_s21_2ef=obj_EventQueue_cnt_s420_2ee;
  obj_EventQueue_cnt_s420_2ee = obj_EventQueue_cnt_s420_2ee + 1;
  (obj_EventQueue_s419_2ed[uo_s21_2ef]) = eventqueue_2ec;
}
void register_EventObject(type::Object* eventobject_33e, type::Object** obj_EventObject_s448_33f/* len = 10 */, int& obj_EventObject_cnt_s449_340) {
  int  uo_s18_341=obj_EventObject_cnt_s449_340;
  obj_EventObject_cnt_s449_340 = obj_EventObject_cnt_s449_340 + 1;
  (obj_EventObject_s448_33f[uo_s18_341]) = eventobject_33e;
}
void register_InvocationEvent(type::Object* invocationevent_342, type::Object** obj_InvocationEvent_s425_343/* len = 10 */, int& obj_InvocationEvent_cnt_s426_344) {
  int  uo_s19_345=obj_InvocationEvent_cnt_s426_344;
  obj_InvocationEvent_cnt_s426_344 = obj_InvocationEvent_cnt_s426_344 + 1;
  (obj_InvocationEvent_s425_343[uo_s19_345]) = invocationevent_342;
}
void register_JFrame(type::Object* jframe_3d7, type::Object** obj_JFrame_s427_3d8/* len = 10 */, int& obj_JFrame_cnt_s428_3d9) {
  int  uo_s13_3da=obj_JFrame_cnt_s428_3d9;
  obj_JFrame_cnt_s428_3d9 = obj_JFrame_cnt_s428_3d9 + 1;
  (obj_JFrame_s427_3d8[uo_s13_3da]) = jframe_3d7;
}
void register_ButtonDemo(type::Object* buttondemo_409, int& obj_ButtonDemo_cnt_s438_40a, type::Object** obj_ButtonDemo_s439_40b/* len = 10 */) {
  int  uo_s6_40c=obj_ButtonDemo_cnt_s438_40a;
  obj_ButtonDemo_cnt_s438_40a = obj_ButtonDemo_cnt_s438_40a + 1;
  (obj_ButtonDemo_s439_40b[uo_s6_40c]) = buttondemo_409;
}
void register_Frame(type::Object* frame_416, int& obj_Frame_cnt_s463_417, type::Object** obj_Frame_s464_418/* len = 10 */) {
  int  uo_s14_419=obj_Frame_cnt_s463_417;
  obj_Frame_cnt_s463_417 = obj_Frame_cnt_s463_417 + 1;
  (obj_Frame_s464_418[uo_s14_419]) = frame_416;
}
void register_Container(type::Object* container_41f, type::Object** obj_Container_s471_420/* len = 10 */, int& obj_Container_cnt_s472_421) {
  int  uo_s10_422=obj_Container_cnt_s472_421;
  obj_Container_cnt_s472_421 = obj_Container_cnt_s472_421 + 1;
  (obj_Container_s471_420[uo_s10_422]) = container_41f;
}
void register_JButton(type::Object* jbutton_42f, type::Object** obj_JButton_s461_430/* len = 10 */, int& obj_JButton_cnt_s462_431) {
  int  uo_s7_432=obj_JButton_cnt_s462_431;
  obj_JButton_cnt_s462_431 = obj_JButton_cnt_s462_431 + 1;
  (obj_JButton_s461_430[uo_s7_432]) = jbutton_42f;
}
void register_Window(type::Object* window_433, type::Object** obj_Window_s417_434/* len = 10 */, int& obj_Window_cnt_s418_435) {
  int  uo_s15_436=obj_Window_cnt_s418_435;
  obj_Window_cnt_s418_435 = obj_Window_cnt_s418_435 + 1;
  (obj_Window_s417_434[uo_s15_436]) = window_433;
}
void register_Component(type::Object* component_437, int& obj_Component_cnt_s452_438, type::Object** obj_Component_s453_439/* len = 10 */) {
  int  uo_s11_43a=obj_Component_cnt_s452_438;
  obj_Component_cnt_s452_438 = obj_Component_cnt_s452_438 + 1;
  (obj_Component_s453_439[uo_s11_43a]) = component_437;
}
void register_AbstractButton(type::Object* abstractbutton_444, int& obj_AbstractButton_cnt_s473_445, type::Object** obj_AbstractButton_s474_446/* len = 10 */) {
  int  uo_s8_447=obj_AbstractButton_cnt_s473_445;
  obj_AbstractButton_cnt_s473_445 = obj_AbstractButton_cnt_s473_445 + 1;
  (obj_AbstractButton_s474_446[uo_s8_447]) = abstractbutton_444;
}
void register_JComponent(type::Object* jcomponent_448, type::Object** obj_JComponent_s429_449/* len = 10 */, int& obj_JComponent_cnt_s430_44a) {
  int  uo_s9_44b=obj_JComponent_cnt_s430_44a;
  obj_JComponent_cnt_s430_44a = obj_JComponent_cnt_s430_44a + 1;
  (obj_JComponent_s429_449[uo_s9_44b]) = jcomponent_448;
}

}
namespace InvocationEvent{

void dispatch_InvocationEvent(type::Object* self_1e1, int& obj_AbstractButton_cnt_s718_1e2, int& allInOne_depth_s511_1e3, int& handle_AuxObserver1_s512_1e4, int* ev_s701_1e5/* len = 5 * 82 */, int& update_AuxObserver1_s702_1e6, int& obj_Frame_cnt_s961_1e7, int& obj_JFrame_cnt_s866_1e8, type::Object** obj_Component_s695_1e9/* len = 10 */, type::Object** obj_Window_s843_1ea/* len = 10 */, int& obj_cnt_s766_1eb, type::Object** obj_JButton_s922_1ec/* len = 10 */, int& obj_JButton_cnt_s923_1ed, type::Object** obj_JFrame_s865_1ee/* len = 10 */, type::Object** obj_AbstractButton_s719_1ef/* len = 10 */, int& detach_AuxObserver1_s510_1f0, type::Object** obj_Container_s966_1f1/* len = 10 */, int& obj_Component_cnt_s694_1f2, int& obj_Container_cnt_s967_1f3, type::Object** obj_JComponent_s968_1f4/* len = 10 */, int& attach_AuxObserver1_s513_1f5, int* obj_s703_1f6/* len = 10 */, type::Object** obj_Frame_s962_1f7/* len = 10 */, int& obj_ButtonDemo_cnt_s937_1f8, int& obj_Window_cnt_s844_1f9, int& obj_JComponent_cnt_s969_1fa, type::Object** obj_ButtonDemo_s938_1fb/* len = 10 */, int& log_cnt_s704_1fc, int& reflect_depth_s705_1fd) {
  ButtonDemo::run_ButtonDemo_1(self_1e1->_runnable_InvocationEvent, obj_AbstractButton_cnt_s718_1e2, allInOne_depth_s511_1e3, update_AuxObserver1_s702_1e6, obj_JFrame_cnt_s866_1e8, obj_Window_s843_1ea, obj_Container_s966_1f1, obj_Container_cnt_s967_1f3, obj_JComponent_s968_1f4, obj_ButtonDemo_cnt_s937_1f8, obj_Frame_s962_1f7, obj_JComponent_cnt_s969_1fa, log_cnt_s704_1fc, reflect_depth_s705_1fd, ev_s701_1e5, handle_AuxObserver1_s512_1e4, obj_Frame_cnt_s961_1e7, obj_Component_s695_1e9, obj_cnt_s766_1eb, obj_JButton_s922_1ec, obj_JButton_cnt_s923_1ed, obj_JFrame_s865_1ee, obj_AbstractButton_s719_1ef, detach_AuxObserver1_s510_1f0, obj_Component_cnt_s694_1f2, obj_s703_1f6, attach_AuxObserver1_s513_1f5, obj_Window_cnt_s844_1f9, obj_ButtonDemo_s938_1fb);
}
void InvocationEvent_InvocationEvent_Runnable(type::Object* runnable_2f0, type::Object*& _out_2f1, int& obj_AWTEvent_cnt_s813_2f2, type::Object** obj_EventObject_s814_2f3/* len = 10 */, type::Object** obj_AWTEvent_s815_2f4/* len = 10 */, int& obj_EventObject_cnt_s816_2f5, int& obj_cnt_s913_2f6, type::Object** obj_InvocationEvent_s811_2f7/* len = 10 */, int& obj_InvocationEvent_cnt_s812_2f8) {
  type::Object*  self_s44_2f9=NULL;
  AWTEvent::AWTEvent_AWTEvent_Object_int(runnable_2f0, 0, self_s44_2f9, obj_AWTEvent_cnt_s813_2f2, obj_EventObject_s814_2f3, obj_AWTEvent_s815_2f4, obj_EventObject_cnt_s816_2f5, obj_cnt_s913_2f6);
  _out_2f1 = self_s44_2f9;
  self_s44_2f9->_runnable_InvocationEvent = runnable_2f0;
  alog::register_InvocationEvent(self_s44_2f9, obj_InvocationEvent_s811_2f7, obj_InvocationEvent_cnt_s812_2f8);
  return;
}

}
namespace AuxObserver1{

void checkRule2_AuxObserver1__Wrapper() {
  int  subject_AuxObserver1_s993_0=0;
  ANONYMOUS::glblInit_subject_AuxObserver1_s1056(subject_AuxObserver1_s993_0);
  int  attach_AuxObserver1_s992_1=0;
  ANONYMOUS::glblInit_attach_AuxObserver1_s1072(attach_AuxObserver1_s992_1);
  int  observer_AuxObserver1_s991_2=0;
  ANONYMOUS::glblInit_observer_AuxObserver1_s1070(observer_AuxObserver1_s991_2);
  int  handle_AuxObserver1_s990_3=0;
  ANONYMOUS::glblInit_handle_AuxObserver1_s1098(handle_AuxObserver1_s990_3);
  int  detach_AuxObserver1_s989_4=0;
  ANONYMOUS::glblInit_detach_AuxObserver1_s1106(detach_AuxObserver1_s989_4);
  checkRule2_AuxObserver1(detach_AuxObserver1_s989_4, handle_AuxObserver1_s990_3, observer_AuxObserver1_s991_2, attach_AuxObserver1_s992_1, subject_AuxObserver1_s993_0);
}
void checkRule2_AuxObserver1__WrapperNospec() {}
void checkRule1_AuxObserver1__Wrapper() {
  int  subject_AuxObserver1_s954_5=0;
  ANONYMOUS::glblInit_subject_AuxObserver1_s1056(subject_AuxObserver1_s954_5);
  int  observer_AuxObserver1_s953_6=0;
  ANONYMOUS::glblInit_observer_AuxObserver1_s1070(observer_AuxObserver1_s953_6);
  int  update_AuxObserver1_s952_7=0;
  ANONYMOUS::glblInit_update_AuxObserver1_s1038(update_AuxObserver1_s952_7);
  checkRule1_AuxObserver1(update_AuxObserver1_s952_7, observer_AuxObserver1_s953_6, subject_AuxObserver1_s954_5);
}
void checkRule1_AuxObserver1__WrapperNospec() {}
void checkRange_AuxObserver1__Wrapper() {
  int  subject_AuxObserver1_s524_8=0;
  ANONYMOUS::glblInit_subject_AuxObserver1_s1056(subject_AuxObserver1_s524_8);
  int  attach_AuxObserver1_s523_9=0;
  ANONYMOUS::glblInit_attach_AuxObserver1_s1072(attach_AuxObserver1_s523_9);
  int  observer_AuxObserver1_s522_a=0;
  ANONYMOUS::glblInit_observer_AuxObserver1_s1070(observer_AuxObserver1_s522_a);
  int  update_AuxObserver1_s521_b=0;
  ANONYMOUS::glblInit_update_AuxObserver1_s1038(update_AuxObserver1_s521_b);
  int  handle_AuxObserver1_s520_c=0;
  ANONYMOUS::glblInit_handle_AuxObserver1_s1098(handle_AuxObserver1_s520_c);
  int  detach_AuxObserver1_s519_d=0;
  ANONYMOUS::glblInit_detach_AuxObserver1_s1106(detach_AuxObserver1_s519_d);
  checkRange_AuxObserver1(detach_AuxObserver1_s519_d, handle_AuxObserver1_s520_c, update_AuxObserver1_s521_b, observer_AuxObserver1_s522_a, attach_AuxObserver1_s523_9, subject_AuxObserver1_s524_8);
}
void checkRange_AuxObserver1__WrapperNospec() {}
void checkRule2_AuxObserver1(int& detach_AuxObserver1_s443_3c, int& handle_AuxObserver1_s444_3d, int& observer_AuxObserver1_s445_3e, int& attach_AuxObserver1_s446_3f, int& subject_AuxObserver1_s447_40) {
  int  _out_s212_41=0;
  type::belongsTo(attach_AuxObserver1_s446_3f, _out_s212_41);
  bool  _out_s214_42=0;
  type::subcls(_out_s212_41, subject_AuxObserver1_s447_40, _out_s214_42);
  assert (_out_s214_42);;
  int  _out_s216_43=0;
  type::belongsTo(detach_AuxObserver1_s443_3c, _out_s216_43);
  bool  _out_s218_44=0;
  type::subcls(_out_s216_43, subject_AuxObserver1_s447_40, _out_s218_44);
  assert (_out_s218_44);;
  int  _out_s220_45=0;
  type::belongsTo(handle_AuxObserver1_s444_3d, _out_s220_45);
  bool  _out_s222_46=0;
  type::subcls(_out_s220_45, subject_AuxObserver1_s447_40, _out_s222_46);
  assert (_out_s222_46);;
  int  _out_s224_47=0;
  type::argNum(attach_AuxObserver1_s446_3f, _out_s224_47);
  assert ((1) == (_out_s224_47));;
  int  _out_s226_48=0;
  type::argNum(detach_AuxObserver1_s443_3c, _out_s226_48);
  assert ((1) == (_out_s226_48));;
  int  _out_s228_49=0;
  type::argNum(handle_AuxObserver1_s444_3d, _out_s228_49);
  assert ((1) == (_out_s228_49));;
  assert ((attach_AuxObserver1_s446_3f) != (detach_AuxObserver1_s443_3c));;
  assert ((detach_AuxObserver1_s443_3c) != (handle_AuxObserver1_s444_3d));;
  assert ((handle_AuxObserver1_s444_3d) != (attach_AuxObserver1_s446_3f));;
  int  _out_s230_4a=0;
  type::argType(attach_AuxObserver1_s446_3f, 0, _out_s230_4a);
  bool  _out_s232_4b=0;
  type::subcls(observer_AuxObserver1_s445_3e, _out_s230_4a, _out_s232_4b);
  assert (_out_s232_4b);;
  int  _out_s234_4c=0;
  type::argType(detach_AuxObserver1_s443_3c, 0, _out_s234_4c);
  bool  _out_s236_4d=0;
  type::subcls(observer_AuxObserver1_s445_3e, _out_s234_4c, _out_s236_4d);
  assert (_out_s236_4d);;
  int  _out_s238_4e=0;
  type::argType(handle_AuxObserver1_s444_3d, 0, _out_s238_4e);
  bool  _out_s240_4f=0;
  type::subcls(13, _out_s238_4e, _out_s240_4f);
  assert (_out_s240_4f);;
}
void checkRule1_AuxObserver1(int& update_AuxObserver1_s477_51, int& observer_AuxObserver1_s478_52, int& subject_AuxObserver1_s479_53) {
  int  _out_s242_54=0;
  type::belongsTo(update_AuxObserver1_s477_51, _out_s242_54);
  bool  _out_s244_55=0;
  type::subcls(_out_s242_54, observer_AuxObserver1_s478_52, _out_s244_55);
  assert (_out_s244_55);;
  int  _out_s246_56=0;
  type::argNum(update_AuxObserver1_s477_51, _out_s246_56);
  assert ((1) == (_out_s246_56));;
  int  _out_s248_57=0;
  type::argType(update_AuxObserver1_s477_51, 0, _out_s248_57);
  bool  _out_s250_58=0;
  type::subcls(13, _out_s248_57, _out_s250_58);
  assert (_out_s250_58);;
  assert ((subject_AuxObserver1_s479_53) != (observer_AuxObserver1_s478_52));;
}
void checkRange_AuxObserver1(int& detach_AuxObserver1_s432_59, int& handle_AuxObserver1_s433_5a, int& update_AuxObserver1_s434_5b, int& observer_AuxObserver1_s435_5c, int& attach_AuxObserver1_s436_5d, int& subject_AuxObserver1_s437_5e) {
  assert (((observer_AuxObserver1_s435_5c) == (14)) || ((observer_AuxObserver1_s435_5c) == (25)));;
  assert (((subject_AuxObserver1_s437_5e) == (14)) || ((subject_AuxObserver1_s437_5e) == (25)));;
  assert (((((((((((attach_AuxObserver1_s436_5d) == (102)) || ((attach_AuxObserver1_s436_5d) == (33))) || ((attach_AuxObserver1_s436_5d) == (34))) || ((attach_AuxObserver1_s436_5d) == (35))) || ((attach_AuxObserver1_s436_5d) == (38))) || ((attach_AuxObserver1_s436_5d) == (39))) || ((attach_AuxObserver1_s436_5d) == (40))) || ((attach_AuxObserver1_s436_5d) == (41))) || ((attach_AuxObserver1_s436_5d) == (42))) || ((attach_AuxObserver1_s436_5d) == (43)));;
  assert (((((((((((detach_AuxObserver1_s432_59) == (102)) || ((detach_AuxObserver1_s432_59) == (33))) || ((detach_AuxObserver1_s432_59) == (34))) || ((detach_AuxObserver1_s432_59) == (35))) || ((detach_AuxObserver1_s432_59) == (38))) || ((detach_AuxObserver1_s432_59) == (39))) || ((detach_AuxObserver1_s432_59) == (40))) || ((detach_AuxObserver1_s432_59) == (41))) || ((detach_AuxObserver1_s432_59) == (42))) || ((detach_AuxObserver1_s432_59) == (43)));;
  assert (((((((((((handle_AuxObserver1_s433_5a) == (102)) || ((handle_AuxObserver1_s433_5a) == (33))) || ((handle_AuxObserver1_s433_5a) == (34))) || ((handle_AuxObserver1_s433_5a) == (35))) || ((handle_AuxObserver1_s433_5a) == (38))) || ((handle_AuxObserver1_s433_5a) == (39))) || ((handle_AuxObserver1_s433_5a) == (40))) || ((handle_AuxObserver1_s433_5a) == (41))) || ((handle_AuxObserver1_s433_5a) == (42))) || ((handle_AuxObserver1_s433_5a) == (43)));;
  assert (((((((((((update_AuxObserver1_s434_5b) == (102)) || ((update_AuxObserver1_s434_5b) == (33))) || ((update_AuxObserver1_s434_5b) == (34))) || ((update_AuxObserver1_s434_5b) == (35))) || ((update_AuxObserver1_s434_5b) == (38))) || ((update_AuxObserver1_s434_5b) == (39))) || ((update_AuxObserver1_s434_5b) == (40))) || ((update_AuxObserver1_s434_5b) == (41))) || ((update_AuxObserver1_s434_5b) == (42))) || ((update_AuxObserver1_s434_5b) == (43)));;
}
void handle_AuxObserver1_AuxObserver1(int& _out_200, int& handle_AuxObserver1_s466_201) {
  _out_200 = handle_AuxObserver1_s466_201;
  return;
}
void reflect_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(int mtd_id_202, type::Object* rcv_AuxObserver1_203, type::Object* arg_204, type::Object* evt_205, int& detach_AuxObserver1_s637_206, int* ev_s647_207/* len = 5 * 82 */, int& allInOne_depth_s639_208, int& handle_AuxObserver1_s638_209, int& update_AuxObserver1_s893_20a, int* obj_s648_20b/* len = 10 */, int& attach_AuxObserver1_s640_20c, int& log_cnt_s649_20d, int& reflect_depth_s424_20e) {
  if ((reflect_depth_s424_20e) > (2)) {
    return;
  }
  reflect_depth_s424_20e = reflect_depth_s424_20e + 1;
  if ((mtd_id_202) == (102)) {
    ButtonDemo::actionPerformed_ButtonDemo_ActionEvent(rcv_AuxObserver1_203, evt_205, detach_AuxObserver1_s637_206, ev_s647_207, handle_AuxObserver1_s638_209, allInOne_depth_s639_208, update_AuxObserver1_s893_20a, obj_s648_20b, attach_AuxObserver1_s640_20c, log_cnt_s649_20d, reflect_depth_s424_20e);
  } else {
    if ((mtd_id_202) == (33)) {
      AbstractButton::dispatchEvent_AbstractButton_AWTEvent(rcv_AuxObserver1_203, evt_205, detach_AuxObserver1_s637_206, allInOne_depth_s639_208, handle_AuxObserver1_s638_209, ev_s647_207, update_AuxObserver1_s893_20a, attach_AuxObserver1_s640_20c, obj_s648_20b, log_cnt_s649_20d, reflect_depth_s424_20e);
    } else {
      if ((mtd_id_202) == (34)) {
        AbstractButton::addActionListener_AbstractButton_ActionListener(rcv_AuxObserver1_203, arg_204, detach_AuxObserver1_s637_206, ev_s647_207, handle_AuxObserver1_s638_209, allInOne_depth_s639_208, update_AuxObserver1_s893_20a, obj_s648_20b, attach_AuxObserver1_s640_20c, log_cnt_s649_20d, reflect_depth_s424_20e);
      } else {
        if ((mtd_id_202) == (35)) {
          AbstractButton::removeActionListener_AbstractButton_ActionListener(rcv_AuxObserver1_203, arg_204, detach_AuxObserver1_s637_206, ev_s647_207, allInOne_depth_s639_208, handle_AuxObserver1_s638_209, update_AuxObserver1_s893_20a, obj_s648_20b, attach_AuxObserver1_s640_20c, log_cnt_s649_20d, reflect_depth_s424_20e);
        } else {
          if ((mtd_id_202) == (38)) {
            AbstractButton::setVerticalTextPosition_AbstractButton_int(rcv_AuxObserver1_203, 0, detach_AuxObserver1_s637_206, ev_s647_207, allInOne_depth_s639_208, handle_AuxObserver1_s638_209, update_AuxObserver1_s893_20a, obj_s648_20b, attach_AuxObserver1_s640_20c, log_cnt_s649_20d, reflect_depth_s424_20e);
          } else {
            if ((mtd_id_202) == (39)) {
              AbstractButton::setHorizontalTextPosition_AbstractButton_int(rcv_AuxObserver1_203, 0, detach_AuxObserver1_s637_206, handle_AuxObserver1_s638_209, allInOne_depth_s639_208, ev_s647_207, update_AuxObserver1_s893_20a, attach_AuxObserver1_s640_20c, obj_s648_20b, log_cnt_s649_20d, reflect_depth_s424_20e);
            } else {
              if ((mtd_id_202) == (40)) {
                AbstractButton::setMnemonic_AbstractButton_int(rcv_AuxObserver1_203, 0, detach_AuxObserver1_s637_206, handle_AuxObserver1_s638_209, allInOne_depth_s639_208, ev_s647_207, update_AuxObserver1_s893_20a, attach_AuxObserver1_s640_20c, obj_s648_20b, log_cnt_s649_20d, reflect_depth_s424_20e);
              } else {
                if ((mtd_id_202) == (41)) {
                  char _tt280[51] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
                  char*  _out_s210_20f= new char [51]; CopyArr<char >(_out_s210_20f,_tt280, 51, 51);
                  AbstractButton::getActionCommand_AbstractButton(rcv_AuxObserver1_203, _out_s210_20f, detach_AuxObserver1_s637_206, handle_AuxObserver1_s638_209, allInOne_depth_s639_208, ev_s647_207, update_AuxObserver1_s893_20a, attach_AuxObserver1_s640_20c, obj_s648_20b, log_cnt_s649_20d, reflect_depth_s424_20e);
                } else {
                  if ((mtd_id_202) == (42)) {
                    char _tt281[1] = {'\0'};
                    char * _tt282= new char [51]; 
                    CopyArr<char>(_tt282,_tt281, 51, 1);
                    AbstractButton::setActionCommand_AbstractButton_String(rcv_AuxObserver1_203, _tt282, detach_AuxObserver1_s637_206, handle_AuxObserver1_s638_209, allInOne_depth_s639_208, ev_s647_207, update_AuxObserver1_s893_20a, attach_AuxObserver1_s640_20c, obj_s648_20b, log_cnt_s649_20d, reflect_depth_s424_20e);
                  } else {
                    if ((mtd_id_202) == (43)) {
                      AbstractButton::setSelected_AbstractButton_boolean(rcv_AuxObserver1_203, 0, detach_AuxObserver1_s637_206, ev_s647_207, allInOne_depth_s639_208, handle_AuxObserver1_s638_209, update_AuxObserver1_s893_20a, obj_s648_20b, attach_AuxObserver1_s640_20c, log_cnt_s649_20d, reflect_depth_s424_20e);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  reflect_depth_s424_20e = reflect_depth_s424_20e - 1;
}
void allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(int mtd_id_2fa, type::Object* rcv_AuxObserver1_2fb, type::Object* arg_2fc, type::Object* evt_2fd, int& detach_AuxObserver1_s455_2fe, int* ev_s644_2ff/* len = 5 * 82 */, int& allInOne_depth_s457_300, int& handle_AuxObserver1_s456_301, int& update_AuxObserver1_s669_302, int* obj_s645_303/* len = 10 */, int& attach_AuxObserver1_s458_304, int& log_cnt_s646_305, int& reflect_depth_s670_306) {
  if ((allInOne_depth_s457_300) > (2)) {
    return;
  }
  allInOne_depth_s457_300 = allInOne_depth_s457_300 + 1;
  if ((mtd_id_2fa) == (attach_AuxObserver1_s458_304)) {
    attachCode_AuxObserver1_AuxObserver1_AuxObserver1_ActionEvent(rcv_AuxObserver1_2fb, arg_2fc, evt_2fd);
  } else {
    if ((mtd_id_2fa) == (detach_AuxObserver1_s455_2fe)) {
      detachCode_AuxObserver1_AuxObserver1_AuxObserver1_ActionEvent(rcv_AuxObserver1_2fb, arg_2fc, evt_2fd);
    } else {
      if ((mtd_id_2fa) == (handle_AuxObserver1_s456_301)) {
        handleCode_AuxObserver1_AuxObserver1_AuxObserver1_ActionEvent(rcv_AuxObserver1_2fb, arg_2fc, evt_2fd, detach_AuxObserver1_s455_2fe, ev_s644_2ff, allInOne_depth_s457_300, handle_AuxObserver1_s456_301, update_AuxObserver1_s669_302, obj_s645_303, attach_AuxObserver1_s458_304, log_cnt_s646_305, reflect_depth_s670_306);
      }
    }
  }
  allInOne_depth_s457_300 = allInOne_depth_s457_300 - 1;
}
void attachCode_AuxObserver1_AuxObserver1_AuxObserver1_ActionEvent(type::Object* rcv_AuxObserver1_346, type::Object* arg_347, type::Object* evt_348) {
  type::add_List_Object(rcv_AuxObserver1_346->_obs_AuxObserver1, arg_347);
}
void detachCode_AuxObserver1_AuxObserver1_AuxObserver1_ActionEvent(type::Object* rcv_AuxObserver1_349, type::Object* arg_34a, type::Object* evt_34b) {
  type::remove_List_Object(rcv_AuxObserver1_349->_obs_AuxObserver1, arg_34a);
}
void handleCode_AuxObserver1_AuxObserver1_AuxObserver1_ActionEvent(type::Object* rcv_AuxObserver1_34c, type::Object* arg_34d, type::Object* evt_34e, int& detach_AuxObserver1_s546_34f, int* ev_s594_350/* len = 5 * 82 */, int& allInOne_depth_s548_351, int& handle_AuxObserver1_s547_352, int& update_AuxObserver1_s440_353, int* obj_s595_354/* len = 10 */, int& attach_AuxObserver1_s549_355, int& log_cnt_s596_356, int& reflect_depth_s541_357) {
  type::List_Object*  obs1_35a=rcv_AuxObserver1_34c->_obs_AuxObserver1;
  int  idx_35b=obs1_35a->idx - 1;
  bool  __sa1_35c=(((0) <= (idx_35b)) && ((idx_35b) < (5))) && (((obs1_35a->elts[idx_35b])) != (NULL));
  while (__sa1_35c) {
    type::Object*  o_35e=(obs1_35a->elts[idx_35b]);
    int  update_AuxObserver1_s893_20a_s6390=update_AuxObserver1_s440_353;
    reflect_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(update_AuxObserver1_s440_353, o_35e, rcv_AuxObserver1_34c, evt_34e, detach_AuxObserver1_s546_34f, ev_s594_350, allInOne_depth_s548_351, handle_AuxObserver1_s547_352, update_AuxObserver1_s893_20a_s6390, obj_s595_354, attach_AuxObserver1_s549_355, log_cnt_s596_356, reflect_depth_s541_357);
    update_AuxObserver1_s440_353 = update_AuxObserver1_s893_20a_s6390;
    idx_35b = idx_35b - 1;
    __sa1_35c = (((0) <= (idx_35b)) && ((idx_35b) < (5))) && (((obs1_35a->elts[idx_35b])) != (NULL));
  }
}

}
namespace SwingUtilities{

void invokeLater_SwingUtilities_Runnable(type::Object* doRun_1cb, type::Object*& defaultToolkit_s998_1cc, int* ev_s774_1cd/* len = 5 * 82 */, int& obj_AWTEvent_cnt_s535_1ce, type::Object** obj_EventObject_s667_1cf/* len = 10 */, type::Object** obj_AWTEvent_s536_1d0/* len = 10 */, int& obj_EventObject_cnt_s668_1d1, int& obj_cnt_s706_1d2, type::Object** obj_EventQueue_s846_1d3/* len = 10 */, int& obj_EventQueue_cnt_s847_1d4, int& obj_Toolkit_cnt_s749_1d5, int* obj_s775_1d6/* len = 10 */, type::Object** obj_InvocationEvent_s950_1d7/* len = 10 */, type::Object** obj_Toolkit_s750_1d8/* len = 10 */, int& log_cnt_s776_1d9, int& obj_InvocationEvent_cnt_s951_1da) {
  int  params_s206_1dc=0;
  alog::invokeLater_SwingUtilities_Runnable_ent(params_s206_1dc);
  int _tt283[2] = {params_s206_1dc, doRun_1cb->hash};
  int*  params_1db= new int [5]; CopyArr<int >(params_1db,_tt283, 5, 2);
  alog::check_log(params_1db, ev_s774_1cd, obj_s775_1d6, log_cnt_s776_1d9);
  EventQueue::invokeLater_EventQueue_Runnable(doRun_1cb, obj_Toolkit_cnt_s749_1d5, defaultToolkit_s998_1cc, obj_AWTEvent_cnt_s535_1ce, obj_EventObject_s667_1cf, obj_AWTEvent_s536_1d0, obj_EventObject_cnt_s668_1d1, obj_InvocationEvent_s950_1d7, obj_Toolkit_s750_1d8, obj_cnt_s706_1d2, obj_EventQueue_s846_1d3, obj_EventQueue_cnt_s847_1d4, obj_InvocationEvent_cnt_s951_1da);
  int  params_s208_1dd=0;
  alog::invokeLater_SwingUtilities_Runnable_ext(params_s208_1dd);
  int _tt284[1] = {params_s208_1dd};
  CopyArr<int >(params_1db,_tt284, 5, 1);
  alog::check_log(params_1db, ev_s774_1cd, obj_s775_1d6, log_cnt_s776_1d9);
}

}
namespace ComponentEvent{


}
namespace ButtonDemo{

void main_ButtonDemo(int* ev_s995_16f/* len = 5 * 82 */, type::Object*& defaultToolkit_s877_170, int& obj_AWTEvent_cnt_s498_171, type::Object** obj_EventObject_s878_172/* len = 10 */, type::Object** obj_AWTEvent_s499_173/* len = 10 */, int& obj_EventObject_cnt_s879_174, int& obj_cnt_s654_175, type::Object** obj_EventQueue_s632_176/* len = 10 */, int& obj_EventQueue_cnt_s633_177, int& obj_Toolkit_cnt_s873_178, int* obj_s996_179/* len = 10 */, type::Object** obj_InvocationEvent_s634_17a/* len = 10 */, type::Object** obj_Toolkit_s874_17b/* len = 10 */, int& log_cnt_s997_17c, int& obj_InvocationEvent_cnt_s635_17d) {
  int  params_s174_17f=0;
  alog::main_ButtonDemo_ent(params_s174_17f);
  int _tt285[1] = {params_s174_17f};
  int*  params_17e= new int [5]; CopyArr<int >(params_17e,_tt285, 5, 1);
  alog::check_log(params_17e, ev_s995_16f, obj_s996_179, log_cnt_s997_17c);
  int  _out_s176_180=0;
  alog::nonce(_out_s176_180, obj_cnt_s654_175);
  SwingUtilities::invokeLater_SwingUtilities_Runnable(type::Object::create(_out_s176_180, 0, 0, (char*)NULL, 0, 0, NULL, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, (char*)NULL, 0, NULL, (char*)NULL, 0, (char*)NULL, 0, NULL, NULL, (int*)NULL, 0, 0, NULL, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, (char*)NULL, 0, 0, 0, 0, NULL, 0, NULL, NULL, 0, (char*)NULL, 0, NULL, NULL, 0, NULL, 0, 0, 0, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL), defaultToolkit_s877_170, ev_s995_16f, obj_AWTEvent_cnt_s498_171, obj_EventObject_s878_172, obj_AWTEvent_s499_173, obj_EventObject_cnt_s879_174, obj_cnt_s654_175, obj_EventQueue_s632_176, obj_EventQueue_cnt_s633_177, obj_Toolkit_cnt_s873_178, obj_s996_179, obj_InvocationEvent_s634_17a, obj_Toolkit_s874_17b, log_cnt_s997_17c, obj_InvocationEvent_cnt_s635_17d);
  int  params_s178_181=0;
  alog::main_ButtonDemo_ext(params_s178_181);
  int _tt286[1] = {params_s178_181};
  CopyArr<int >(params_17e,_tt286, 5, 1);
  alog::check_log(params_17e, ev_s995_16f, obj_s996_179, log_cnt_s997_17c);
}
void run_ButtonDemo_1(type::Object* self_23f, int& obj_AbstractButton_cnt_s894_240, int& allInOne_depth_s557_241, int& update_AuxObserver1_s559_242, int& obj_JFrame_cnt_s679_243, type::Object** obj_Window_s805_244/* len = 10 */, type::Object** obj_Container_s659_245/* len = 10 */, int& obj_Container_cnt_s660_246, type::Object** obj_JComponent_s905_247/* len = 10 */, int& obj_ButtonDemo_cnt_s1004_248, type::Object** obj_Frame_s882_249/* len = 10 */, int& obj_JComponent_cnt_s906_24a, int& log_cnt_s590_24b, int& reflect_depth_s561_24c, int* ev_s588_24d/* len = 5 * 82 */, int& handle_AuxObserver1_s558_24e, int& obj_Frame_cnt_s881_24f, type::Object** obj_Component_s802_250/* len = 10 */, int& obj_cnt_s626_251, type::Object** obj_JButton_s868_252/* len = 10 */, int& obj_JButton_cnt_s869_253, type::Object** obj_JFrame_s678_254/* len = 10 */, type::Object** obj_AbstractButton_s895_255/* len = 10 */, int& detach_AuxObserver1_s556_256, int& obj_Component_cnt_s801_257, int* obj_s589_258/* len = 10 */, int& attach_AuxObserver1_s560_259, int& obj_Window_cnt_s806_25a, type::Object** obj_ButtonDemo_s1005_25b/* len = 10 */) {
  int  params_s122_25d=0;
  alog::run_ButtonDemo_1_ent(params_s122_25d);
  int _tt287[2] = {params_s122_25d, self_23f->hash};
  int*  params_25c= new int [5]; CopyArr<int >(params_25c,_tt287, 5, 2);
  alog::check_log(params_25c, ev_s588_24d, obj_s589_258, log_cnt_s590_24b);
  AuxObserver1::allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(106, self_23f, NULL, NULL, detach_AuxObserver1_s556_256, ev_s588_24d, allInOne_depth_s557_241, handle_AuxObserver1_s558_24e, update_AuxObserver1_s559_242, obj_s589_258, attach_AuxObserver1_s560_259, log_cnt_s590_24b, reflect_depth_s561_24c);
  createAndShowGUI_ButtonDemo(obj_AbstractButton_cnt_s894_240, allInOne_depth_s557_241, update_AuxObserver1_s559_242, obj_JFrame_cnt_s679_243, obj_Window_s805_244, obj_Container_s659_245, obj_Container_cnt_s660_246, obj_JComponent_s905_247, obj_ButtonDemo_cnt_s1004_248, obj_Frame_s882_249, obj_JComponent_cnt_s906_24a, log_cnt_s590_24b, reflect_depth_s561_24c, handle_AuxObserver1_s558_24e, ev_s588_24d, obj_Frame_cnt_s881_24f, obj_Component_s802_250, obj_cnt_s626_251, obj_JButton_s868_252, obj_JButton_cnt_s869_253, obj_JFrame_s678_254, obj_AbstractButton_s895_255, detach_AuxObserver1_s556_256, obj_Component_cnt_s801_257, attach_AuxObserver1_s560_259, obj_s589_258, obj_Window_cnt_s806_25a, obj_ButtonDemo_s1005_25b);
  int  params_s124_25e=0;
  alog::run_ButtonDemo_1_ext(params_s124_25e);
  int _tt288[1] = {params_s124_25e};
  CopyArr<int >(params_25c,_tt288, 5, 1);
  alog::check_log(params_25c, ev_s588_24d, obj_s589_258, log_cnt_s590_24b);
}
void actionPerformed_ButtonDemo_ActionEvent(type::Object* self_25f, type::Object* e_260, int& detach_AuxObserver1_s537_261, int* ev_s782_262/* len = 5 * 82 */, int& handle_AuxObserver1_s539_263, int& allInOne_depth_s538_264, int& update_AuxObserver1_s783_265, int* obj_s784_266/* len = 10 */, int& attach_AuxObserver1_s540_267, int& log_cnt_s785_268, int& reflect_depth_s786_269) {
  int  params_s114_26b=0;
  alog::actionPerformed_ButtonDemo_ActionEvent_ent(params_s114_26b);
  int _tt289[3] = {params_s114_26b, self_25f->hash, e_260->hash};
  int*  params_26a= new int [5]; CopyArr<int >(params_26a,_tt289, 5, 3);
  alog::check_log(params_26a, ev_s782_262, obj_s784_266, log_cnt_s785_268);
  AuxObserver1::allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(102, self_25f, NULL, e_260, detach_AuxObserver1_s537_261, ev_s782_262, allInOne_depth_s538_264, handle_AuxObserver1_s539_263, update_AuxObserver1_s783_265, obj_s784_266, attach_AuxObserver1_s540_267, log_cnt_s785_268, reflect_depth_s786_269);
  char _tt290[51] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
  char*  _out_s116_26c= new char [51]; CopyArr<char >(_out_s116_26c,_tt290, 51, 51);
  ActionEvent::getActionCommand_ActionEvent(e_260, _out_s116_26c, ev_s782_262, obj_s784_266, log_cnt_s785_268);
  bool  _out_s118_26d=0;
  char _tt291[8] = {'d', 'i', 's', 'a', 'b', 'l', 'e', '\0'};
  char * _tt292= new char [51]; 
  CopyArr<char>(_tt292,_tt291, 51, 8);
  type::equals_String(_tt292, _out_s116_26c, _out_s118_26d);
  if (_out_s118_26d) {
    Component::setEnabled_Component_boolean(self_25f->b2_ButtonDemo, 0, ev_s782_262, obj_s784_266, log_cnt_s785_268);
    Component::setEnabled_Component_boolean(self_25f->b1_ButtonDemo, 0, ev_s782_262, obj_s784_266, log_cnt_s785_268);
    Component::setEnabled_Component_boolean(self_25f->b3_ButtonDemo, 1, ev_s782_262, obj_s784_266, log_cnt_s785_268);
  } else {
    Component::setEnabled_Component_boolean(self_25f->b2_ButtonDemo, 1, ev_s782_262, obj_s784_266, log_cnt_s785_268);
    Component::setEnabled_Component_boolean(self_25f->b1_ButtonDemo, 1, ev_s782_262, obj_s784_266, log_cnt_s785_268);
    Component::setEnabled_Component_boolean(self_25f->b3_ButtonDemo, 0, ev_s782_262, obj_s784_266, log_cnt_s785_268);
  }
  int  params_s120_26e=0;
  alog::actionPerformed_ButtonDemo_ActionEvent_ext(params_s120_26e);
  int _tt293[1] = {params_s120_26e};
  CopyArr<int >(params_26a,_tt293, 5, 1);
  alog::check_log(params_26a, ev_s782_262, obj_s784_266, log_cnt_s785_268);
}
void createAndShowGUI_ButtonDemo(int& obj_AbstractButton_cnt_s597_307, int& allInOne_depth_s687_308, int& update_AuxObserver1_s907_309, int& obj_JFrame_cnt_s855_30a, type::Object** obj_Window_s485_30b/* len = 10 */, type::Object** obj_Container_s720_30c/* len = 10 */, int& obj_Container_cnt_s721_30d, type::Object** obj_JComponent_s908_30e/* len = 10 */, int& obj_ButtonDemo_cnt_s1031_30f, type::Object** obj_Frame_s481_310/* len = 10 */, int& obj_JComponent_cnt_s909_311, int& log_cnt_s756_312, int& reflect_depth_s489_313, int& handle_AuxObserver1_s688_314, int* ev_s754_315/* len = 5 * 82 */, int& obj_Frame_cnt_s480_316, type::Object** obj_Component_s752_317/* len = 10 */, int& obj_cnt_s753_318, type::Object** obj_JButton_s1000_319/* len = 10 */, int& obj_JButton_cnt_s1001_31a, type::Object** obj_JFrame_s854_31b/* len = 10 */, type::Object** obj_AbstractButton_s598_31c/* len = 10 */, int& detach_AuxObserver1_s686_31d, int& obj_Component_cnt_s751_31e, int& attach_AuxObserver1_s689_31f, int* obj_s755_320/* len = 10 */, int& obj_Window_cnt_s486_321, type::Object** obj_ButtonDemo_s1032_322/* len = 10 */) {
  int  params_s126_324=0;
  alog::createAndShowGUI_ButtonDemo_ent(params_s126_324);
  int _tt294[1] = {params_s126_324};
  int*  params_323= new int [5]; CopyArr<int >(params_323,_tt294, 5, 1);
  alog::check_log(params_323, ev_s754_315, obj_s755_320, log_cnt_s756_312);
  type::Object*  frame_s128_326=NULL;
  char _tt295[11] = {'B', 'u', 't', 't', 'o', 'n', 'D', 'e', 'm', 'o', '\0'};
  char * _tt296= new char [51]; 
  CopyArr<char>(_tt296,_tt295, 51, 11);
  JFrame::JFrame_JFrame_String(_tt296, frame_s128_326, obj_JFrame_s854_31b, obj_Container_s720_30c, obj_Component_cnt_s751_31e, obj_Container_cnt_s721_30d, obj_Frame_cnt_s480_316, obj_JFrame_cnt_s855_30a, obj_Component_s752_317, obj_Window_s485_30b, obj_Frame_s481_310, obj_Window_cnt_s486_321, obj_cnt_s753_318);
  int  _out_s130_327=0;
  JFrame::EXIT_ON_CLOSE_JFrame(_out_s130_327);
  JFrame::setDefaultCloseOperation_JFrame_int(frame_s128_326, _out_s130_327, ev_s754_315, obj_s755_320, log_cnt_s756_312);
  type::Object*  newContentPane_s132_329=NULL;
  ButtonDemo_ButtonDemo(newContentPane_s132_329, obj_AbstractButton_cnt_s597_307, allInOne_depth_s687_308, handle_AuxObserver1_s688_314, ev_s754_315, update_AuxObserver1_s907_309, obj_Component_s752_317, obj_cnt_s753_318, obj_JButton_s1000_319, obj_JButton_cnt_s1001_31a, obj_AbstractButton_s598_31c, detach_AuxObserver1_s686_31d, obj_Container_s720_30c, obj_Component_cnt_s751_31e, obj_Container_cnt_s721_30d, obj_JComponent_s908_30e, attach_AuxObserver1_s689_31f, obj_s755_320, obj_ButtonDemo_cnt_s1031_30f, obj_JComponent_cnt_s909_311, obj_ButtonDemo_s1032_322, log_cnt_s756_312, reflect_depth_s489_313);
  JComponent::setOpaque_JComponent_boolean(newContentPane_s132_329, 1);
  JFrame::setContentPane_JFrame_Container(frame_s128_326, newContentPane_s132_329, ev_s754_315, obj_s755_320, log_cnt_s756_312);
  Window::pack_Window(frame_s128_326, ev_s754_315, obj_s755_320, log_cnt_s756_312);
  Component::setVisible_Component_boolean(frame_s128_326, 1, ev_s754_315, obj_s755_320, log_cnt_s756_312);
  int  params_s134_32a=0;
  alog::createAndShowGUI_ButtonDemo_ext(params_s134_32a);
  int _tt297[1] = {params_s134_32a};
  CopyArr<int >(params_323,_tt297, 5, 1);
  alog::check_log(params_323, ev_s754_315, obj_s755_320, log_cnt_s756_312);
}
void ButtonDemo_ButtonDemo(type::Object*& _out_377, int& obj_AbstractButton_cnt_s652_378, int& allInOne_depth_s551_379, int& handle_AuxObserver1_s552_37a, int* ev_s620_37b/* len = 5 * 82 */, int& update_AuxObserver1_s553_37c, type::Object** obj_Component_s526_37d/* len = 10 */, int& obj_cnt_s864_37e, type::Object** obj_JButton_s1010_37f/* len = 10 */, int& obj_JButton_cnt_s1011_380, type::Object** obj_AbstractButton_s653_381/* len = 10 */, int& detach_AuxObserver1_s550_382, type::Object** obj_Container_s767_383/* len = 10 */, int& obj_Component_cnt_s525_384, int& obj_Container_cnt_s768_385, type::Object** obj_JComponent_s716_386/* len = 10 */, int& attach_AuxObserver1_s554_387, int* obj_s621_388/* len = 10 */, int& obj_ButtonDemo_cnt_s1029_389, int& obj_JComponent_cnt_s717_38a, type::Object** obj_ButtonDemo_s1030_38b/* len = 10 */, int& log_cnt_s622_38c, int& reflect_depth_s555_38d) {
  int  self_s136_38e=0;
  alog::nonce(self_s136_38e, obj_cnt_s864_37e);
  _out_377 = type::Object::create(self_s136_38e, 0, 0, (char*)NULL, 0, 0, NULL, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, (char*)NULL, 0, NULL, (char*)NULL, 0, (char*)NULL, 0, NULL, NULL, (int*)NULL, 0, 0, NULL, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, (char*)NULL, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL, NULL, NULL, NULL, (char*)NULL, 0, 0, 0, 0, NULL, 0, NULL, NULL, 0, (char*)NULL, 0, NULL, NULL, 0, NULL, 0, 0, 0, 0, 0, 0, 0, (char*)NULL, 0, 0, NULL);
  type::Object*  leftButtonIcon_s138_390=NULL;
  char _tt298[17] = {'i', 'm', 'a', 'g', 'e', 's', '/', 'r', 'i', 'g', 'h', 't', '.', 'g', 'i', 'f', '\0'};
  char * _tt299= new char [51]; 
  CopyArr<char>(_tt299,_tt298, 51, 17);
  createImageIcon_ButtonDemo_String(_tt299, leftButtonIcon_s138_390, ev_s620_37b, obj_s621_388, log_cnt_s622_38c);
  type::Object*  middleButtonIcon_s140_392=NULL;
  char _tt300[18] = {'i', 'm', 'a', 'g', 'e', 's', '/', 'm', 'i', 'd', 'd', 'l', 'e', '.', 'g', 'i', 'f', '\0'};
  char * _tt301= new char [51]; 
  CopyArr<char>(_tt301,_tt300, 51, 18);
  createImageIcon_ButtonDemo_String(_tt301, middleButtonIcon_s140_392, ev_s620_37b, obj_s621_388, log_cnt_s622_38c);
  type::Object*  rightButtonIcon_s142_394=NULL;
  char _tt302[16] = {'i', 'm', 'a', 'g', 'e', 's', '/', 'l', 'e', 'f', 't', '.', 'g', 'i', 'f', '\0'};
  char * _tt303= new char [51]; 
  CopyArr<char>(_tt303,_tt302, 51, 16);
  createImageIcon_ButtonDemo_String(_tt303, rightButtonIcon_s142_394, ev_s620_37b, obj_s621_388, log_cnt_s622_38c);
  type::Object*  _out_s144_395=NULL;
  char _tt304[22] = {'D', 'i', 's', 'a', 'b', 'l', 'e', ' ', 'm', 'i', 'd', 'd', 'l', 'e', ' ', 'b', 'u', 't', 't', 'o', 'n', '\0'};
  char * _tt305= new char [51]; 
  CopyArr<char>(_tt305,_tt304, 51, 22);
  JButton::JButton_JButton_String_Icon(_tt305, leftButtonIcon_s138_390, _out_s144_395, obj_AbstractButton_cnt_s652_378, obj_AbstractButton_s653_381, obj_Container_s767_383, obj_Component_cnt_s525_384, obj_Container_cnt_s768_385, obj_JComponent_s716_386, obj_Component_s526_37d, obj_cnt_s864_37e, obj_JButton_s1010_37f, obj_JComponent_cnt_s717_38a, obj_JButton_cnt_s1011_380);
  _out_377->b1_ButtonDemo = _out_s144_395;
  int  _out_s146_396=0;
  SwingConstants::CENTER_SwingConstants(_out_s146_396);
  AbstractButton::setVerticalTextPosition_AbstractButton_int(_out_377->b1_ButtonDemo, _out_s146_396, detach_AuxObserver1_s550_382, ev_s620_37b, allInOne_depth_s551_379, handle_AuxObserver1_s552_37a, update_AuxObserver1_s553_37c, obj_s621_388, attach_AuxObserver1_s554_387, log_cnt_s622_38c, reflect_depth_s555_38d);
  int  _out_s148_397=0;
  SwingConstants::LEADING_SwingConstants(_out_s148_397);
  AbstractButton::setHorizontalTextPosition_AbstractButton_int(_out_377->b1_ButtonDemo, _out_s148_397, detach_AuxObserver1_s550_382, handle_AuxObserver1_s552_37a, allInOne_depth_s551_379, ev_s620_37b, update_AuxObserver1_s553_37c, attach_AuxObserver1_s554_387, obj_s621_388, log_cnt_s622_38c, reflect_depth_s555_38d);
  int  _out_s150_398=0;
  KeyEvent::VK_D_KeyEvent(_out_s150_398);
  AbstractButton::setMnemonic_AbstractButton_int(_out_377->b1_ButtonDemo, _out_s150_398, detach_AuxObserver1_s550_382, handle_AuxObserver1_s552_37a, allInOne_depth_s551_379, ev_s620_37b, update_AuxObserver1_s553_37c, attach_AuxObserver1_s554_387, obj_s621_388, log_cnt_s622_38c, reflect_depth_s555_38d);
  char _tt306[8] = {'d', 'i', 's', 'a', 'b', 'l', 'e', '\0'};
  char * _tt307= new char [51]; 
  CopyArr<char>(_tt307,_tt306, 51, 8);
  AbstractButton::setActionCommand_AbstractButton_String(_out_377->b1_ButtonDemo, _tt307, detach_AuxObserver1_s550_382, handle_AuxObserver1_s552_37a, allInOne_depth_s551_379, ev_s620_37b, update_AuxObserver1_s553_37c, attach_AuxObserver1_s554_387, obj_s621_388, log_cnt_s622_38c, reflect_depth_s555_38d);
  type::Object*  _out_s152_399=NULL;
  char _tt308[14] = {'M', 'i', 'd', 'd', 'l', 'e', ' ', 'b', 'u', 't', 't', 'o', 'n', '\0'};
  char * _tt309= new char [51]; 
  CopyArr<char>(_tt309,_tt308, 51, 14);
  JButton::JButton_JButton_String_Icon(_tt309, middleButtonIcon_s140_392, _out_s152_399, obj_AbstractButton_cnt_s652_378, obj_AbstractButton_s653_381, obj_Container_s767_383, obj_Component_cnt_s525_384, obj_Container_cnt_s768_385, obj_JComponent_s716_386, obj_Component_s526_37d, obj_cnt_s864_37e, obj_JButton_s1010_37f, obj_JComponent_cnt_s717_38a, obj_JButton_cnt_s1011_380);
  _out_377->b2_ButtonDemo = _out_s152_399;
  int  _out_s154_39a=0;
  SwingConstants::BOTTOM_SwingConstants(_out_s154_39a);
  AbstractButton::setVerticalTextPosition_AbstractButton_int(_out_377->b2_ButtonDemo, _out_s154_39a, detach_AuxObserver1_s550_382, ev_s620_37b, allInOne_depth_s551_379, handle_AuxObserver1_s552_37a, update_AuxObserver1_s553_37c, obj_s621_388, attach_AuxObserver1_s554_387, log_cnt_s622_38c, reflect_depth_s555_38d);
  int  _out_s156_39b=0;
  SwingConstants::CENTER_SwingConstants(_out_s156_39b);
  AbstractButton::setHorizontalTextPosition_AbstractButton_int(_out_377->b2_ButtonDemo, _out_s156_39b, detach_AuxObserver1_s550_382, handle_AuxObserver1_s552_37a, allInOne_depth_s551_379, ev_s620_37b, update_AuxObserver1_s553_37c, attach_AuxObserver1_s554_387, obj_s621_388, log_cnt_s622_38c, reflect_depth_s555_38d);
  int  _out_s158_39c=0;
  KeyEvent::VK_M_KeyEvent(_out_s158_39c);
  AbstractButton::setMnemonic_AbstractButton_int(_out_377->b2_ButtonDemo, _out_s158_39c, detach_AuxObserver1_s550_382, handle_AuxObserver1_s552_37a, allInOne_depth_s551_379, ev_s620_37b, update_AuxObserver1_s553_37c, attach_AuxObserver1_s554_387, obj_s621_388, log_cnt_s622_38c, reflect_depth_s555_38d);
  type::Object*  _out_s160_39d=NULL;
  char _tt310[21] = {'E', 'n', 'a', 'b', 'l', 'e', ' ', 'm', 'i', 'd', 'd', 'l', 'e', ' ', 'b', 'u', 't', 't', 'o', 'n', '\0'};
  char * _tt311= new char [51]; 
  CopyArr<char>(_tt311,_tt310, 51, 21);
  JButton::JButton_JButton_String_Icon(_tt311, rightButtonIcon_s142_394, _out_s160_39d, obj_AbstractButton_cnt_s652_378, obj_AbstractButton_s653_381, obj_Container_s767_383, obj_Component_cnt_s525_384, obj_Container_cnt_s768_385, obj_JComponent_s716_386, obj_Component_s526_37d, obj_cnt_s864_37e, obj_JButton_s1010_37f, obj_JComponent_cnt_s717_38a, obj_JButton_cnt_s1011_380);
  _out_377->b3_ButtonDemo = _out_s160_39d;
  int  _out_s162_39e=0;
  KeyEvent::VK_E_KeyEvent(_out_s162_39e);
  AbstractButton::setMnemonic_AbstractButton_int(_out_377->b3_ButtonDemo, _out_s162_39e, detach_AuxObserver1_s550_382, handle_AuxObserver1_s552_37a, allInOne_depth_s551_379, ev_s620_37b, update_AuxObserver1_s553_37c, attach_AuxObserver1_s554_387, obj_s621_388, log_cnt_s622_38c, reflect_depth_s555_38d);
  char _tt312[7] = {'e', 'n', 'a', 'b', 'l', 'e', '\0'};
  char * _tt313= new char [51]; 
  CopyArr<char>(_tt313,_tt312, 51, 7);
  AbstractButton::setActionCommand_AbstractButton_String(_out_377->b3_ButtonDemo, _tt313, detach_AuxObserver1_s550_382, handle_AuxObserver1_s552_37a, allInOne_depth_s551_379, ev_s620_37b, update_AuxObserver1_s553_37c, attach_AuxObserver1_s554_387, obj_s621_388, log_cnt_s622_38c, reflect_depth_s555_38d);
  Component::setEnabled_Component_boolean(_out_377->b3_ButtonDemo, 0, ev_s620_37b, obj_s621_388, log_cnt_s622_38c);
  AbstractButton::addActionListener_AbstractButton_ActionListener(_out_377->b1_ButtonDemo, _out_377, detach_AuxObserver1_s550_382, ev_s620_37b, handle_AuxObserver1_s552_37a, allInOne_depth_s551_379, update_AuxObserver1_s553_37c, obj_s621_388, attach_AuxObserver1_s554_387, log_cnt_s622_38c, reflect_depth_s555_38d);
  AbstractButton::addActionListener_AbstractButton_ActionListener(_out_377->b3_ButtonDemo, _out_377, detach_AuxObserver1_s550_382, ev_s620_37b, handle_AuxObserver1_s552_37a, allInOne_depth_s551_379, update_AuxObserver1_s553_37c, obj_s621_388, attach_AuxObserver1_s554_387, log_cnt_s622_38c, reflect_depth_s555_38d);
  char _tt314[48] = {'C', 'l', 'i', 'c', 'k', ' ', 't', 'h', 'i', 's', ' ', 'b', 'u', 't', 't', 'o', 'n', ' ', 't', 'o', ' ', 'd', 'i', 's', 'a', 'b', 'l', 'e', ' ', 't', 'h', 'e', ' ', 'm', 'i', 'd', 'd', 'l', 'e', ' ', 'b', 'u', 't', 't', 'o', 'n', '.', '\0'};
  char * _tt315= new char [51]; 
  CopyArr<char>(_tt315,_tt314, 51, 48);
  JComponent::setToolTipText_JComponent_String(_out_377->b1_ButtonDemo, _tt315, ev_s620_37b, obj_s621_388, log_cnt_s622_38c);
  char _tt316[51] = {'T', 'h', 'i', 's', ' ', 'm', 'i', 'd', 'd', 'l', 'e', ' ', 'b', 'u', 't', 't', 'o', 'n', ' ', 'd', 'o', 'e', 's', ' ', 'n', 'o', 't', 'h', 'i', 'n', 'g', ' ', 'w', 'h', 'e', 'n', ' ', 'y', 'o', 'u', ' ', 'c', 'l', 'i', 'c', 'k', ' ', 'i', 't', '.', '\0'};
  JComponent::setToolTipText_JComponent_String(_out_377->b2_ButtonDemo, _tt316, ev_s620_37b, obj_s621_388, log_cnt_s622_38c);
  char _tt317[47] = {'C', 'l', 'i', 'c', 'k', ' ', 't', 'h', 'i', 's', ' ', 'b', 'u', 't', 't', 'o', 'n', ' ', 't', 'o', ' ', 'e', 'n', 'a', 'b', 'l', 'e', ' ', 't', 'h', 'e', ' ', 'm', 'i', 'd', 'd', 'l', 'e', ' ', 'b', 'u', 't', 't', 'o', 'n', '.', '\0'};
  char * _tt318= new char [51]; 
  CopyArr<char>(_tt318,_tt317, 51, 47);
  JComponent::setToolTipText_JComponent_String(_out_377->b3_ButtonDemo, _tt318, ev_s620_37b, obj_s621_388, log_cnt_s622_38c);
  type::Object*  _out_s164_39f=NULL;
  Container::add_Container_Component(_out_377, _out_377->b1_ButtonDemo, _out_s164_39f, ev_s620_37b, obj_s621_388, log_cnt_s622_38c);
  type::Object*  _out_s166_3a0=NULL;
  Container::add_Container_Component(_out_377, _out_377->b2_ButtonDemo, _out_s166_3a0, ev_s620_37b, obj_s621_388, log_cnt_s622_38c);
  type::Object*  _out_s168_3a1=NULL;
  Container::add_Container_Component(_out_377, _out_377->b3_ButtonDemo, _out_s168_3a1, ev_s620_37b, obj_s621_388, log_cnt_s622_38c);
  _out_377->_obs_AuxObserver1 = type::List_Object::create(0, (type::Object**)NULL, 0);
  alog::register_ButtonDemo(_out_377, obj_ButtonDemo_cnt_s1029_389, obj_ButtonDemo_s1030_38b);
  delete[] _tt299;
  delete[] _tt301;
  delete[] _tt303;
  delete[] _tt305;
  delete[] _tt307;
  delete[] _tt309;
  delete[] _tt311;
  delete[] _tt313;
  delete[] _tt315;
  delete[] _tt318;
  return;
}
void createImageIcon_ButtonDemo_String(char* path_3db/* len = 51 */, type::Object*& _out_3dc, int* ev_s503_3dd/* len = 5 * 82 */, int* obj_s504_3de/* len = 10 */, int& log_cnt_s505_3df) {
  int  params_s170_3e1=0;
  alog::createImageIcon_ButtonDemo_String_ent(params_s170_3e1);
  int _tt319[1] = {params_s170_3e1};
  int*  params_3e0= new int [5]; CopyArr<int >(params_3e0,_tt319, 5, 1);
  alog::check_log(params_3e0, ev_s503_3dd, obj_s504_3de, log_cnt_s505_3df);
  int  params_s172_3e2=0;
  alog::createImageIcon_ButtonDemo_String_ext(params_s172_3e2);
  int _tt320[1] = {params_s172_3e2};
  CopyArr<int >(params_3e0,_tt320, 5, 1);
  alog::check_log(params_3e0, ev_s503_3dd, obj_s504_3de, log_cnt_s505_3df);
  _out_3dc = NULL;
  delete[] params_3e0;
  return;
}

}
namespace Main{

void sample1_Main(int& obj_AbstractButton_cnt_s948_12a, int& allInOne_depth_s491_12b, int& update_AuxObserver1_s735_12c, int& obj_AWTEvent_cnt_s807_12d, int& obj_JFrame_cnt_s770_12e, type::Object** obj_AWTEvent_s809_12f/* len = 10 */, type::Object** obj_Window_s926_130/* len = 10 */, int& obj_EventQueue_cnt_s834_131, type::Object** obj_ActionEvent_s628_132/* len = 10 */, type::Object** obj_Container_s827_133/* len = 10 */, int& obj_Container_cnt_s828_134, type::Object** obj_JComponent_s829_135/* len = 10 */, int& obj_ButtonDemo_cnt_s932_136, type::Object** obj_Frame_s824_137/* len = 10 */, type::Object** obj_Toolkit_s568_138/* len = 10 */, int& obj_JComponent_cnt_s830_139, int& log_cnt_s737_13a, int& reflect_depth_s738_13b, int& obj_InvocationEvent_cnt_s758_13c, type::Object*& defaultToolkit_s986_13d, int* ev_s734_13e/* len = 5 * 82 */, int& handle_AuxObserver1_s492_13f, type::Object** obj_EventObject_s808_140/* len = 10 */, int& obj_Frame_cnt_s823_141, type::Object** obj_Component_s723_142/* len = 10 */, int& obj_EventObject_cnt_s810_143, int& obj_cnt_s724_144, type::Object** obj_JButton_s845_145/* len = 10 */, type::Object** obj_EventQueue_s833_146/* len = 10 */, int& obj_JButton_cnt_s912_147, type::Object** obj_JFrame_s769_148/* len = 10 */, type::Object** obj_AbstractButton_s949_149/* len = 10 */, int& obj_ActionEvent_cnt_s627_14a, int& obj_Toolkit_cnt_s567_14b, int& detach_AuxObserver1_s490_14c, int& obj_Component_cnt_s722_14d, int& attach_AuxObserver1_s493_14e, int* obj_s736_14f/* len = 10 */, int& obj_Window_cnt_s927_150, type::Object** obj_InvocationEvent_s757_151/* len = 10 */, type::Object** obj_ButtonDemo_s933_152/* len = 10 */) {
  type::Object*  t_s52_154=NULL;
  Toolkit::getDefaultToolkit_Toolkit(t_s52_154, obj_Toolkit_cnt_s567_14b, defaultToolkit_s986_13d, obj_EventObject_s808_140, obj_EventObject_cnt_s810_143, obj_Toolkit_s568_138, obj_cnt_s724_144, obj_EventQueue_s833_146, obj_EventQueue_cnt_s834_131);
  type::Object*  q_s54_156=NULL;
  Toolkit::getSystemEventQueue_Toolkit(t_s52_154, q_s54_156);
  ButtonDemo::main_ButtonDemo(ev_s734_13e, defaultToolkit_s986_13d, obj_AWTEvent_cnt_s807_12d, obj_EventObject_s808_140, obj_AWTEvent_s809_12f, obj_EventObject_cnt_s810_143, obj_cnt_s724_144, obj_EventQueue_s833_146, obj_EventQueue_cnt_s834_131, obj_Toolkit_cnt_s567_14b, obj_s736_14f, obj_InvocationEvent_s757_151, obj_Toolkit_s568_138, log_cnt_s737_13a, obj_InvocationEvent_cnt_s758_13c);
  type::Object*  evt1_s56_158=NULL;
  EventQueue::getNextEvent_EventQueue(q_s54_156, evt1_s56_158);
  EventQueue::dispatchEvent_EventQueue_EventObject(q_s54_156, evt1_s56_158, obj_AbstractButton_cnt_s948_12a, allInOne_depth_s491_12b, update_AuxObserver1_s735_12c, obj_JFrame_cnt_s770_12e, obj_Window_s926_130, obj_Container_s827_133, obj_Container_cnt_s828_134, obj_JComponent_s829_135, obj_Frame_s824_137, obj_ButtonDemo_cnt_s932_136, obj_JComponent_cnt_s830_139, log_cnt_s737_13a, reflect_depth_s738_13b, ev_s734_13e, handle_AuxObserver1_s492_13f, obj_Frame_cnt_s823_141, obj_Component_s723_142, obj_cnt_s724_144, obj_JButton_s845_145, obj_JButton_cnt_s912_147, obj_JFrame_s769_148, obj_AbstractButton_s949_149, detach_AuxObserver1_s490_14c, obj_Component_cnt_s722_14d, attach_AuxObserver1_s493_14e, obj_s736_14f, obj_Window_cnt_s927_150, obj_ButtonDemo_s933_152);
  type::Object*  e0_s58_15a=NULL;
  alog::retrieve_JButton(0, e0_s58_15a, obj_JButton_s845_145);
  type::Object*  e0_s60_15b=NULL;
  char _tt321[8] = {'d', 'i', 's', 'a', 'b', 'l', 'e', '\0'};
  char * _tt322= new char [51]; 
  CopyArr<char>(_tt322,_tt321, 51, 8);
  ActionEvent::ActionEvent_ActionEvent_Object_int_String(e0_s58_15a, 0, _tt322, e0_s60_15b, obj_ActionEvent_cnt_s627_14a, obj_AWTEvent_cnt_s807_12d, obj_EventObject_s808_140, obj_AWTEvent_s809_12f, obj_EventObject_cnt_s810_143, obj_cnt_s724_144, obj_ActionEvent_s628_132);
  e0_s60_15b->kind_EventObject = 0;
  EventQueue::postEvent_EventQueue_EventObject(q_s54_156, e0_s60_15b);
  type::Object*  evt2_s62_15d=NULL;
  EventQueue::getNextEvent_EventQueue(q_s54_156, evt2_s62_15d);
  EventQueue::dispatchEvent_EventQueue_EventObject(q_s54_156, evt2_s62_15d, obj_AbstractButton_cnt_s948_12a, allInOne_depth_s491_12b, update_AuxObserver1_s735_12c, obj_JFrame_cnt_s770_12e, obj_Window_s926_130, obj_Container_s827_133, obj_Container_cnt_s828_134, obj_JComponent_s829_135, obj_Frame_s824_137, obj_ButtonDemo_cnt_s932_136, obj_JComponent_cnt_s830_139, log_cnt_s737_13a, reflect_depth_s738_13b, ev_s734_13e, handle_AuxObserver1_s492_13f, obj_Frame_cnt_s823_141, obj_Component_s723_142, obj_cnt_s724_144, obj_JButton_s845_145, obj_JButton_cnt_s912_147, obj_JFrame_s769_148, obj_AbstractButton_s949_149, detach_AuxObserver1_s490_14c, obj_Component_cnt_s722_14d, attach_AuxObserver1_s493_14e, obj_s736_14f, obj_Window_cnt_s927_150, obj_ButtonDemo_s933_152);
  type::Object*  e1_s64_15f=NULL;
  alog::retrieve_JButton(2, e1_s64_15f, obj_JButton_s845_145);
  type::Object*  e1_s66_160=NULL;
  char _tt323[7] = {'e', 'n', 'a', 'b', 'l', 'e', '\0'};
  char * _tt324= new char [51]; 
  CopyArr<char>(_tt324,_tt323, 51, 7);
  ActionEvent::ActionEvent_ActionEvent_Object_int_String(e1_s64_15f, 0, _tt324, e1_s66_160, obj_ActionEvent_cnt_s627_14a, obj_AWTEvent_cnt_s807_12d, obj_EventObject_s808_140, obj_AWTEvent_s809_12f, obj_EventObject_cnt_s810_143, obj_cnt_s724_144, obj_ActionEvent_s628_132);
  e1_s66_160->kind_EventObject = 0;
  EventQueue::postEvent_EventQueue_EventObject(q_s54_156, e1_s66_160);
  type::Object*  evt3_s68_162=NULL;
  EventQueue::getNextEvent_EventQueue(q_s54_156, evt3_s68_162);
  EventQueue::dispatchEvent_EventQueue_EventObject(q_s54_156, evt3_s68_162, obj_AbstractButton_cnt_s948_12a, allInOne_depth_s491_12b, update_AuxObserver1_s735_12c, obj_JFrame_cnt_s770_12e, obj_Window_s926_130, obj_Container_s827_133, obj_Container_cnt_s828_134, obj_JComponent_s829_135, obj_Frame_s824_137, obj_ButtonDemo_cnt_s932_136, obj_JComponent_cnt_s830_139, log_cnt_s737_13a, reflect_depth_s738_13b, ev_s734_13e, handle_AuxObserver1_s492_13f, obj_Frame_cnt_s823_141, obj_Component_s723_142, obj_cnt_s724_144, obj_JButton_s845_145, obj_JButton_cnt_s912_147, obj_JFrame_s769_148, obj_AbstractButton_s949_149, detach_AuxObserver1_s490_14c, obj_Component_cnt_s722_14d, attach_AuxObserver1_s493_14e, obj_s736_14f, obj_Window_cnt_s927_150, obj_ButtonDemo_s933_152);
}

}
