#ifndef MINITESTB678_H
#define MINITESTB678_H

#include <cstring>

#include "vops.h"

namespace JPanel{
}
namespace ImageIcon{
}
namespace Frame{
}
namespace ActionEvent{
}
namespace JButton{
}
namespace type{
class Object; 
class List_Object; 
class Queue_Object; 
}
namespace EventQueue{
}
namespace KeyEvent{
}
namespace Container{
}
namespace SwingConstants{
}
namespace BorderLayout{
}
namespace JFrame{
}
namespace AWTEvent{
}
namespace Toolkit{
}
namespace InputEvent{
}
namespace Component{
}
namespace Window{
}
namespace ANONYMOUS{
}
namespace AbstractButton{
}
namespace JComponent{
}
namespace EventObject{
}
namespace alog{
}
namespace InvocationEvent{
}
namespace AuxObserver1{
}
namespace SwingUtilities{
}
namespace ComponentEvent{
}
namespace ButtonDemo{
}
namespace Main{
}
namespace JPanel{
}
namespace ImageIcon{
}
namespace Frame{
extern void Frame_Frame(type::Object*& _out_3c5, type::Object** obj_Container_s831_3c6/* len = 10 */, int& obj_Component_cnt_s839_3c7, int& obj_Frame_cnt_s837_3c8, int& obj_Container_cnt_s832_3c9, type::Object** obj_Component_s840_3ca/* len = 10 */, type::Object** obj_Window_s841_3cb/* len = 10 */, int& obj_Window_cnt_s842_3cc, type::Object** obj_Frame_s838_3cd/* len = 10 */, int& obj_cnt_s636_3ce);
}
namespace ActionEvent{
extern void ActionEvent_ActionEvent_Object_int_String(type::Object* source_1ab, int id_1ac, char* actioncommand_1ad/* len = 51 */, type::Object*& _out_1ae, int& obj_ActionEvent_cnt_s987_1af, int& obj_AWTEvent_cnt_s919_1b0, type::Object** obj_EventObject_s581_1b1/* len = 10 */, type::Object** obj_AWTEvent_s920_1b2/* len = 10 */, int& obj_EventObject_cnt_s582_1b3, int& obj_cnt_s904_1b4, type::Object** obj_ActionEvent_s988_1b5/* len = 10 */);
extern void getActionCommand_ActionEvent(type::Object* self_32b, char* _out_32c/* len = 51 */, int* ev_s939_32d/* len = 5 * 82 */, int* obj_s940_32e/* len = 10 */, int& log_cnt_s941_32f);
}
namespace JButton{
extern void JButton_JButton_String_Icon(char* text_3e3/* len = 51 */, type::Object* icon_3e4, type::Object*& _out_3e5, int& obj_AbstractButton_cnt_s955_3e6, type::Object** obj_AbstractButton_s956_3e7/* len = 10 */, type::Object** obj_Container_s825_3e8/* len = 10 */, int& obj_Component_cnt_s562_3e9, int& obj_Container_cnt_s826_3ea, type::Object** obj_JComponent_s1002_3eb/* len = 10 */, type::Object** obj_Component_s563_3ec/* len = 10 */, int& obj_cnt_s985_3ed, type::Object** obj_JButton_s1021_3ee/* len = 10 */, int& obj_JComponent_cnt_s1003_3ef, int& obj_JButton_cnt_s1022_3f0);
}
namespace type{
class Object; 
class List_Object; 
class Queue_Object; 
class Object{
  public:
  int  hash;
  bool  _enabled_Component;
  bool  _vible_Component;
  int  _defaultcloseoperation_JFrame;
  Object*  _contentpane_JFrame;
  bool  _opaque_JComponent;
  int  _verticaltextposition_AbstractButton;
  int  _horizontaltextposition_AbstractButton;
  int  _mnemonic_AbstractButton;
  bool  _selected_AbstractButton;
  Object*  _icon_JButton;
  Object*  _selectionmodel_JColorChooser;
  Object*  _color_JColorChooser;
  int  _selectedindex_JComboBox;
  Object*  _icon_JLabel;
  int  _horizontalalignment_JLabel;
  Object*  _layout_JPanel;
  Object*  b1_ButtonDemo;
  Object*  b2_ButtonDemo;
  Object*  b3_ButtonDemo;
  Object*  _view_JScrollPane;
  int  _neworientation_JSplitPane;
  bool  _continuouslayout_JSplitPane;
  bool  _onetouchexpandable_JSplitPane;
  bool  _floatable_JToolBar;
  bool  _rollover_JToolBar;
  bool  _editable_JTextComponent;
  int  _rows_JTextArea;
  int  _columns_JTextArea;
  int  _columns_JTextField;
  Object*  _nextevent_EventQueue;
  Queue_Object*  _evt_queue_EventQueue;
  Object*  _color_Graphics;
  Object*  _systemeventqueue_Toolkit;
  int  count_StringBuffer;
  int  _iconheight_ImageIcon;
  int  _iconwidth_ImageIcon;
  Object*  _selectedcolor_DefaultColorSelectionModel;
  int  kind_EventObject;
  Object*  _source_EventObject;
  Object*  _source_AWTEvent;
  int  _id_AWTEvent;
  Object*  _runnable_InvocationEvent;
  Object*  _item_ItemEvent;
  int  _statechange_ItemEvent;
  Object*  _source_ListSelectionEvent;
  int  _firstindex_ListSelectionEvent;
  int  _lastindex_ListSelectionEvent;
  bool  _adjusting_ListSelectionEvent;
  int  kind_AuxObserver1;
  int  _verticaltextposition_AuxObserver1;
  int  _horizontaltextposition_AuxObserver1;
  int  _mnemonic_AuxObserver1;
  bool  _selected_AuxObserver1;
  List_Object*  _obs_AuxObserver1;
  char*  _name_JFrame;
  char*  _tooltiptext_JComponent;
  char*  _actioncommand_AbstractButton;
  char*  _text_JButton;
  char*  _text_JToggleButton;
  char*  _text_JCheckBox;
  int*  _items_JComboBox;
  char*  _text_JLabel;
  char*  _name_JToolBar;
  char*  _text_JTextComponent;
  char*  _text_JTextField;
  char*  value_StringBuffer;
  char*  _actioncommand_ActionEvent;
  char  _actioncommand_AuxObserver1[];
  Object(){}
template<typename T_0, typename T_1, typename T_2, typename T_3, typename T_4, typename T_5, typename T_6, typename T_7, typename T_8, typename T_9, typename T_10, typename T_11, typename T_12, typename T_13>
  static Object* create(  int  hash_,   bool  _enabled_Component_,   bool  _vible_Component_,   T_0* _name_JFrame_, int _name_JFrame_len,   int  _defaultcloseoperation_JFrame_,   Object*  _contentpane_JFrame_,   bool  _opaque_JComponent_,   T_1* _tooltiptext_JComponent_, int _tooltiptext_JComponent_len,   int  _verticaltextposition_AbstractButton_,   int  _horizontaltextposition_AbstractButton_,   int  _mnemonic_AbstractButton_,   T_2* _actioncommand_AbstractButton_, int _actioncommand_AbstractButton_len,   bool  _selected_AbstractButton_,   T_3* _text_JButton_, int _text_JButton_len,   Object*  _icon_JButton_,   T_4* _text_JToggleButton_, int _text_JToggleButton_len,   T_5* _text_JCheckBox_, int _text_JCheckBox_len,   Object*  _selectionmodel_JColorChooser_,   Object*  _color_JColorChooser_,   T_6* _items_JComboBox_, int _items_JComboBox_len,   int  _selectedindex_JComboBox_,   Object*  _icon_JLabel_,   T_7* _text_JLabel_, int _text_JLabel_len,   int  _horizontalalignment_JLabel_,   Object*  _layout_JPanel_,   Object*  b1_ButtonDemo_,   Object*  b2_ButtonDemo_,   Object*  b3_ButtonDemo_,   Object*  _view_JScrollPane_,   int  _neworientation_JSplitPane_,   bool  _continuouslayout_JSplitPane_,   bool  _onetouchexpandable_JSplitPane_,   T_8* _name_JToolBar_, int _name_JToolBar_len,   bool  _floatable_JToolBar_,   bool  _rollover_JToolBar_,   T_9* _text_JTextComponent_, int _text_JTextComponent_len,   bool  _editable_JTextComponent_,   int  _rows_JTextArea_,   int  _columns_JTextArea_,   T_10* _text_JTextField_, int _text_JTextField_len,   int  _columns_JTextField_,   Object*  _nextevent_EventQueue_,   Queue_Object*  _evt_queue_EventQueue_,   Object*  _color_Graphics_,   Object*  _systemeventqueue_Toolkit_,   T_11* value_StringBuffer_, int value_StringBuffer_len,   int  count_StringBuffer_,   int  _iconheight_ImageIcon_,   int  _iconwidth_ImageIcon_,   Object*  _selectedcolor_DefaultColorSelectionModel_,   int  kind_EventObject_,   Object*  _source_EventObject_,   Object*  _source_AWTEvent_,   int  _id_AWTEvent_,   T_12* _actioncommand_ActionEvent_, int _actioncommand_ActionEvent_len,   Object*  _runnable_InvocationEvent_,   Object*  _item_ItemEvent_,   int  _statechange_ItemEvent_,   Object*  _source_ListSelectionEvent_,   int  _firstindex_ListSelectionEvent_,   int  _lastindex_ListSelectionEvent_,   bool  _adjusting_ListSelectionEvent_,   int  kind_AuxObserver1_,   int  _verticaltextposition_AuxObserver1_,   int  _horizontaltextposition_AuxObserver1_,   int  _mnemonic_AuxObserver1_,   T_13* _actioncommand_AuxObserver1_, int _actioncommand_AuxObserver1_len,   bool  _selected_AuxObserver1_,   List_Object*  _obs_AuxObserver1_);
  ~Object(){
  }
  void operator delete(void* p){ free(p); }
};
class List_Object{
  public:
  int  idx;
  Object*  elts[];
  List_Object(){}
template<typename T_0>
  static List_Object* create(  int  idx_,   T_0* elts_, int elts_len);
  ~List_Object(){
  }
  void operator delete(void* p){ free(p); }
};
class Queue_Object{
  public:
  int  idx;
  int  head;
  Object*  elts[];
  Queue_Object(){}
template<typename T_0>
  static Queue_Object* create(  int  idx_,   int  head_,   T_0* elts_, int elts_len);
  ~Queue_Object(){
  }
  void operator delete(void* p){ free(p); }
};
extern void belongsTo(int id_ed, int& _out_ee);
extern void subcls(int i_ef, int j_f0, bool& _out_f1);
extern void argNum(int id_f3, int& _out_f4);
extern void argType(int id_f5, int idx_f6, int& _out_f7);
extern void remove_Queue_Object(Queue_Object* que_1de, Object*& _out_1df);
extern void add_Queue_Object(Queue_Object* que_21e, Object* elt_21f);
extern void equals_String(char* s1_333/* len = 51 */, char* s2_334/* len = 51 */, bool& _out_335);
extern void add_List_Object(List_Object* lst_3bc, Object* elt_3bd);
extern void remove_List_Object(List_Object* lst_3be, Object* elt_3bf);
}
namespace EventQueue{
extern void getNextEvent_EventQueue(type::Object* self_182, type::Object*& _out_183);
extern void dispatchEvent_EventQueue_EventObject(type::Object* self_185, type::Object* event_186, int& obj_AbstractButton_cnt_s896_187, int& allInOne_depth_s515_188, int& update_AuxObserver1_s579_189, int& obj_JFrame_cnt_s928_18a, type::Object** obj_Window_s929_18b/* len = 10 */, type::Object** obj_Container_s835_18c/* len = 10 */, int& obj_Container_cnt_s836_18d, type::Object** obj_JComponent_s727_18e/* len = 10 */, type::Object** obj_Frame_s697_18f/* len = 10 */, int& obj_ButtonDemo_cnt_s891_190, int& obj_JComponent_cnt_s728_191, int& log_cnt_s733_192, int& reflect_depth_s580_193, int* ev_s731_194/* len = 5 * 82 */, int& handle_AuxObserver1_s516_195, int& obj_Frame_cnt_s696_196, type::Object** obj_Component_s897_197/* len = 10 */, int& obj_cnt_s664_198, type::Object** obj_JButton_s981_199/* len = 10 */, int& obj_JButton_cnt_s982_19a, type::Object** obj_JFrame_s930_19b/* len = 10 */, type::Object** obj_AbstractButton_s898_19c/* len = 10 */, int& detach_AuxObserver1_s514_19d, int& obj_Component_cnt_s899_19e, int& attach_AuxObserver1_s517_19f, int* obj_s732_1a0/* len = 10 */, int& obj_Window_cnt_s931_1a1, type::Object** obj_ButtonDemo_s892_1a2/* len = 10 */);
extern void postEvent_EventQueue_EventObject(type::Object* self_1b7, type::Object* event_1b8);
extern void EventQueue_EventQueue(type::Object*& _out_220, type::Object** obj_EventObject_s910_221/* len = 10 */, int& obj_EventObject_cnt_s911_222, int& obj_cnt_s918_223, type::Object** obj_EventQueue_s875_224/* len = 10 */, int& obj_EventQueue_cnt_s876_225);
extern void invokeLater_EventQueue_Runnable(type::Object* runnable_22c, int& obj_Toolkit_cnt_s946_22d, type::Object*& defaultToolkit_s976_22e, int& obj_AWTEvent_cnt_s817_22f, type::Object** obj_EventObject_s887_230/* len = 10 */, type::Object** obj_AWTEvent_s818_231/* len = 10 */, int& obj_EventObject_cnt_s888_232, type::Object** obj_InvocationEvent_s1006_233/* len = 10 */, type::Object** obj_Toolkit_s947_234/* len = 10 */, int& obj_cnt_s789_235, type::Object** obj_EventQueue_s673_236/* len = 10 */, int& obj_EventQueue_cnt_s674_237, int& obj_InvocationEvent_cnt_s1007_238);
}
namespace KeyEvent{
extern void VK_D_KeyEvent(int& _out_3f4);
extern void VK_M_KeyEvent(int& _out_3f6);
extern void VK_E_KeyEvent(int& _out_3f7);
}
namespace Container{
extern void Container_Container(type::Object*& _out_3d0, type::Object** obj_Container_s725_3d1/* len = 10 */, int& obj_Component_cnt_s870_3d2, int& obj_Container_cnt_s726_3d3, type::Object** obj_Component_s871_3d4/* len = 10 */, int& obj_cnt_s872_3d5);
extern void add_Container_Component(type::Object* self_400, type::Object* comp_401, type::Object*& _out_402, int* ev_s1014_403/* len = 5 * 82 */, int* obj_s1015_404/* len = 10 */, int& log_cnt_s1016_405);
}
namespace SwingConstants{
extern void CENTER_SwingConstants(int& _out_3f2);
extern void LEADING_SwingConstants(int& _out_3f3);
extern void BOTTOM_SwingConstants(int& _out_3f5);
}
namespace BorderLayout{
}
namespace JFrame{
extern void JFrame_JFrame_String(char* name_35f/* len = 51 */, type::Object*& _out_360, type::Object** obj_JFrame_s944_361/* len = 10 */, type::Object** obj_Container_s983_362/* len = 10 */, int& obj_Component_cnt_s777_363, int& obj_Container_cnt_s984_364, int& obj_Frame_cnt_s959_365, int& obj_JFrame_cnt_s945_366, type::Object** obj_Component_s778_367/* len = 10 */, type::Object** obj_Window_s900_368/* len = 10 */, type::Object** obj_Frame_s960_369/* len = 10 */, int& obj_Window_cnt_s901_36a, int& obj_cnt_s542_36b);
extern void EXIT_ON_CLOSE_JFrame(int& _out_36e);
extern void setDefaultCloseOperation_JFrame_int(type::Object* self_36f, int operation_370, int* ev_s795_371/* len = 5 * 82 */, int* obj_s796_372/* len = 10 */, int& log_cnt_s797_373);
extern void setContentPane_JFrame_Container(type::Object* self_3a5, type::Object* p_3a6, int* ev_s641_3a7/* len = 5 * 82 */, int* obj_s642_3a8/* len = 10 */, int& log_cnt_s643_3a9);
}
namespace AWTEvent{
extern void AWTEvent_AWTEvent_Object_int(type::Object* source_210, int id_211, type::Object*& _out_212, int& obj_AWTEvent_cnt_s799_213, type::Object** obj_EventObject_s665_214/* len = 10 */, type::Object** obj_AWTEvent_s800_215/* len = 10 */, int& obj_EventObject_cnt_s666_216, int& obj_cnt_s856_217);
}
namespace Toolkit{
extern void getDefaultToolkit_Toolkit(type::Object*& _out_163, int& obj_Toolkit_cnt_s964_164, type::Object*& defaultToolkit_s450_165, type::Object** obj_EventObject_s592_166/* len = 10 */, int& obj_EventObject_cnt_s593_167, type::Object** obj_Toolkit_s965_168/* len = 10 */, int& obj_cnt_s779_169, type::Object** obj_EventQueue_s902_16a/* len = 10 */, int& obj_EventQueue_cnt_s903_16b);
extern void getSystemEventQueue_Toolkit(type::Object* self_16d, type::Object*& _out_16e);
extern void Toolkit_Toolkit(type::Object*& _out_1b9, int& obj_Toolkit_cnt_s889_1ba, type::Object** obj_EventObject_s974_1bb/* len = 10 */, int& obj_EventObject_cnt_s975_1bc, int& obj_cnt_s994_1bd, type::Object** obj_Toolkit_s890_1be/* len = 10 */, type::Object** obj_EventQueue_s1012_1bf/* len = 10 */, int& obj_EventQueue_cnt_s1013_1c0);
}
namespace InputEvent{
}
namespace Component{
extern void setEnabled_Component_boolean(type::Object* self_336, bool b_337, int* ev_s564_338/* len = 5 * 82 */, int* obj_s565_339/* len = 10 */, int& log_cnt_s566_33a);
extern void setVisible_Component_boolean(type::Object* self_3b4, bool b_3b5, int* ev_s1023_3b6/* len = 5 * 82 */, int* obj_s1024_3b7/* len = 10 */, int& log_cnt_s1025_3b8);
extern void Component_Component(type::Object*& _out_41a, int& obj_Component_cnt_s729_41b, type::Object** obj_Component_s730_41c/* len = 10 */, int& obj_cnt_s518_41d);
}
namespace Window{
extern void pack_Window(type::Object* self_3ad, int* ev_s934_3ae/* len = 5 * 82 */, int* obj_s935_3af/* len = 10 */, int& log_cnt_s936_3b0);
extern void Window_Window(type::Object*& _out_40d, type::Object** obj_Container_s848_40e/* len = 10 */, int& obj_Component_cnt_s543_40f, int& obj_Container_cnt_s849_410, type::Object** obj_Component_s544_411/* len = 10 */, type::Object** obj_Window_s803_412/* len = 10 */, int& obj_Window_cnt_s804_413, int& obj_cnt_s676_414);
}
namespace ANONYMOUS{
extern void glblInit_detach_AuxObserver1_s1106(int& detach_AuxObserver1_s1105_3b);
extern void glblInit_handle_AuxObserver1_s1098(int& handle_AuxObserver1_s1097_3a);
extern void glblInit_observer_AuxObserver1_s1070(int& observer_AuxObserver1_s1069_39);
extern void glblInit_attach_AuxObserver1_s1072(int& attach_AuxObserver1_s1071_38);
extern void glblInit_subject_AuxObserver1_s1056(int& subject_AuxObserver1_s1055_37);
extern void glblInit_update_AuxObserver1_s1038(int& update_AuxObserver1_s1037_50);
extern void sample1__Wrapper();
extern void sample1__WrapperNospec();
extern void glblInit_obj_AbstractButton_cnt_s1078(int& obj_AbstractButton_cnt_s1077_71);
extern void glblInit_allInOne_depth_s1036(int& allInOne_depth_s1035_70);
extern void glblInit_obj_AWTEvent_cnt_s1040(int& obj_AWTEvent_cnt_s1039_6f);
extern void glblInit_obj_JFrame_cnt_s1042(int& obj_JFrame_cnt_s1041_6e);
extern void glblInit_obj_EventQueue_cnt_s1086(int& obj_EventQueue_cnt_s1085_6d);
extern void glblInit_obj_Container_cnt_s1050(int& obj_Container_cnt_s1049_6c);
extern void glblInit_obj_ButtonDemo_cnt_s1094(int& obj_ButtonDemo_cnt_s1093_6b);
extern void glblInit_obj_JComponent_cnt_s1052(int& obj_JComponent_cnt_s1051_6a);
extern void glblInit_log_cnt_s1096(int& log_cnt_s1095_69);
extern void glblInit_obj_InvocationEvent_cnt_s1060(int& obj_InvocationEvent_cnt_s1059_68);
extern void glblInit_reflect_depth_s1058(int& reflect_depth_s1057_67);
extern void glblInit_obj_Frame_cnt_s1062(int& obj_Frame_cnt_s1061_66);
extern void glblInit_obj_EventObject_cnt_s1100(int& obj_EventObject_cnt_s1099_65);
extern void glblInit_obj_cnt_s1102(int& obj_cnt_s1101_64);
extern void glblInit_obj_JButton_cnt_s1064(int& obj_JButton_cnt_s1063_63);
extern void glblInit_obj_ActionEvent_cnt_s1066(int& obj_ActionEvent_cnt_s1065_62);
extern void glblInit_obj_Toolkit_cnt_s1108(int& obj_Toolkit_cnt_s1107_61);
extern void glblInit_obj_Component_cnt_s1068(int& obj_Component_cnt_s1067_60);
extern void glblInit_obj_Window_cnt_s1074(int& obj_Window_cnt_s1073_5f);
extern void sample1(int& obj_AbstractButton_cnt_s759_72, int& allInOne_depth_s615_73, int& update_AuxObserver1_s760_74, int& obj_AWTEvent_cnt_s618_75, int& obj_JFrame_cnt_s793_76, type::Object** obj_AWTEvent_s619_77/* len = 10 */, type::Object** obj_Window_s862_78/* len = 10 */, type::Object** obj_ActionEvent_s1034_79/* len = 10 */, int& obj_EventQueue_cnt_s700_7a, type::Object** obj_Container_s787_7b/* len = 10 */, int& obj_Container_cnt_s788_7c, type::Object** obj_JComponent_s764_7d/* len = 10 */, type::Object** obj_Toolkit_s617_7e/* len = 10 */, int& obj_ButtonDemo_cnt_s586_7f, type::Object** obj_Frame_s507_80/* len = 10 */, int& obj_JComponent_cnt_s765_81, int& log_cnt_s629_82, int& obj_InvocationEvent_cnt_s625_83, int& reflect_depth_s658_84, type::Object*& defaultToolkit_s790_85, int& handle_AuxObserver1_s614_86, int* ev_s483_87/* len = 5 * 82 */, type::Object** obj_EventObject_s791_88/* len = 10 */, int& obj_Frame_cnt_s506_89, type::Object** obj_Component_s761_8a/* len = 10 */, int& obj_EventObject_cnt_s792_8b, int& obj_cnt_s698_8c, type::Object** obj_JButton_s780_8d/* len = 10 */, type::Object** obj_EventQueue_s699_8e/* len = 10 */, int& obj_JButton_cnt_s781_8f, type::Object** obj_JFrame_s794_90/* len = 10 */, type::Object** obj_AbstractButton_s762_91/* len = 10 */, int& obj_ActionEvent_cnt_s1033_92, int& detach_AuxObserver1_s613_93, int& obj_Toolkit_cnt_s612_94, int& obj_Component_cnt_s763_95, int& attach_AuxObserver1_s616_96, int* obj_s484_97/* len = 10 */, int& obj_Window_cnt_s863_98, type::Object** obj_InvocationEvent_s624_99/* len = 10 */, type::Object** obj_ButtonDemo_s587_9a/* len = 10 */);
}
namespace AbstractButton{
extern void dispatchEvent_AbstractButton_AWTEvent(type::Object* self_26f, type::Object* event_270, int& detach_AuxObserver1_s569_271, int& allInOne_depth_s571_272, int& handle_AuxObserver1_s570_273, int* ev_s500_274/* len = 5 * 82 */, int& update_AuxObserver1_s671_275, int& attach_AuxObserver1_s572_276, int* obj_s501_277/* len = 10 */, int& log_cnt_s502_278, int& reflect_depth_s672_279);
extern void addActionListener_AbstractButton_ActionListener(type::Object* self_27a, type::Object* l_27b, int& detach_AuxObserver1_s494_27c, int* ev_s771_27d/* len = 5 * 82 */, int& handle_AuxObserver1_s496_27e, int& allInOne_depth_s495_27f, int& update_AuxObserver1_s867_280, int* obj_s772_281/* len = 10 */, int& attach_AuxObserver1_s497_282, int& log_cnt_s773_283, int& reflect_depth_s482_284);
extern void removeActionListener_AbstractButton_ActionListener(type::Object* self_288, type::Object* l_289, int& detach_AuxObserver1_s527_28a, int* ev_s583_28b/* len = 5 * 82 */, int& allInOne_depth_s529_28c, int& handle_AuxObserver1_s528_28d, int& update_AuxObserver1_s545_28e, int* obj_s584_28f/* len = 10 */, int& attach_AuxObserver1_s530_290, int& log_cnt_s585_291, int& reflect_depth_s531_292);
extern void setVerticalTextPosition_AbstractButton_int(type::Object* self_293, int textPosition_294, int& detach_AuxObserver1_s680_295, int* ev_s690_296/* len = 5 * 82 */, int& allInOne_depth_s682_297, int& handle_AuxObserver1_s681_298, int& update_AuxObserver1_s691_299, int* obj_s692_29a/* len = 10 */, int& attach_AuxObserver1_s683_29b, int& log_cnt_s693_29c, int& reflect_depth_s591_29d);
extern void setHorizontalTextPosition_AbstractButton_int(type::Object* self_2a1, int textPosition_2a2, int& detach_AuxObserver1_s707_2a3, int& handle_AuxObserver1_s710_2a4, int& allInOne_depth_s709_2a5, int* ev_s708_2a6/* len = 5 * 82 */, int& update_AuxObserver1_s711_2a7, int& attach_AuxObserver1_s713_2a8, int* obj_s712_2a9/* len = 10 */, int& log_cnt_s714_2aa, int& reflect_depth_s715_2ab);
extern void setMnemonic_AbstractButton_int(type::Object* self_2af, int mnemonic_2b0, int& detach_AuxObserver1_s739_2b1, int& handle_AuxObserver1_s741_2b2, int& allInOne_depth_s740_2b3, int* ev_s532_2b4/* len = 5 * 82 */, int& update_AuxObserver1_s798_2b5, int& attach_AuxObserver1_s742_2b6, int* obj_s533_2b7/* len = 10 */, int& log_cnt_s534_2b8, int& reflect_depth_s743_2b9);
extern void getActionCommand_AbstractButton(type::Object* self_2bd, char* _out_2be/* len = 51 */, int& detach_AuxObserver1_s857_2bf, int& handle_AuxObserver1_s859_2c0, int& allInOne_depth_s858_2c1, int* ev_s661_2c2/* len = 5 * 82 */, int& update_AuxObserver1_s860_2c3, int& attach_AuxObserver1_s861_2c4, int* obj_s662_2c5/* len = 10 */, int& log_cnt_s663_2c6, int& reflect_depth_s623_2c7);
extern void setActionCommand_AbstractButton_String(type::Object* self_2c8, char* actionCommand_2c9/* len = 51 */, int& detach_AuxObserver1_s599_2ca, int& handle_AuxObserver1_s602_2cb, int& allInOne_depth_s601_2cc, int* ev_s600_2cd/* len = 5 * 82 */, int& update_AuxObserver1_s603_2ce, int& attach_AuxObserver1_s605_2cf, int* obj_s604_2d0/* len = 10 */, int& log_cnt_s606_2d1, int& reflect_depth_s607_2d2);
extern void setSelected_AbstractButton_boolean(type::Object* self_2d6, bool b_2d7, int& detach_AuxObserver1_s608_2d8, int* ev_s744_2d9/* len = 5 * 82 */, int& allInOne_depth_s610_2da, int& handle_AuxObserver1_s609_2db, int& update_AuxObserver1_s745_2dc, int* obj_s746_2dd/* len = 10 */, int& attach_AuxObserver1_s611_2de, int& log_cnt_s747_2df, int& reflect_depth_s748_2e0);
extern void AbstractButton_AbstractButton(type::Object*& _out_423, int& obj_AbstractButton_cnt_s1019_424, type::Object** obj_AbstractButton_s1020_425/* len = 10 */, type::Object** obj_Container_s630_426/* len = 10 */, int& obj_Component_cnt_s924_427, int& obj_Container_cnt_s631_428, type::Object** obj_JComponent_s1017_429/* len = 10 */, type::Object** obj_Component_s925_42a/* len = 10 */, int& obj_cnt_s921_42b, int& obj_JComponent_cnt_s1018_42c);
}
namespace JComponent{
extern void setOpaque_JComponent_boolean(type::Object* self_3a3, bool isOpaque_3a4);
extern void setToolTipText_JComponent_String(type::Object* self_3f8, char* text_3f9/* len = 51 */, int* ev_s1026_3fa/* len = 5 * 82 */, int* obj_s1027_3fb/* len = 10 */, int& log_cnt_s1028_3fc);
extern void JComponent_JComponent(type::Object*& _out_43b, type::Object** obj_Container_s883_43c/* len = 10 */, int& obj_Component_cnt_s884_43d, int& obj_Container_cnt_s885_43e, type::Object** obj_JComponent_s957_43f/* len = 10 */, type::Object** obj_Component_s886_440/* len = 10 */, int& obj_cnt_s675_441, int& obj_JComponent_cnt_s958_442);
}
namespace EventObject{
extern void getSource_EventObject(type::Object* self_1fe, type::Object*& _out_1ff);
extern void EventObject_EventObject_Object(type::Object* source_2e1, type::Object*& _out_2e2, type::Object** obj_EventObject_s1008_2e3/* len = 10 */, int& obj_EventObject_cnt_s1009_2e4, int& obj_cnt_s677_2e5);
}
namespace alog{
extern void clear_log(int* ev_s467_f9/* len = 5 * 82 */, int* obj_s468_fa/* len = 10 */, int& log_cnt_s963_fb);
extern void main_ButtonDemo_ent(int& _out_fd);
extern void write_log(int* params_fe/* len = 5 */, int* ev_s459_ff/* len = 5 * 82 */, int& log_cnt_s460_100);
extern void invokeLater_SwingUtilities_Runnable_ent(int& _out_102);
extern void invokeLater_SwingUtilities_Runnable_ext(int& _out_103);
extern void main_ButtonDemo_ext(int& _out_104);
extern void run_ButtonDemo_1_ent(int& _out_105);
extern void createAndShowGUI_ButtonDemo_ent(int& _out_106);
extern void setDefaultCloseOperation_JFrame_int_ent(int& _out_107);
extern void setDefaultCloseOperation_JFrame_int_ext(int& _out_108);
extern void createImageIcon_ButtonDemo_String_ent(int& _out_109);
extern void createImageIcon_ButtonDemo_String_ext(int& _out_10a);
extern void setVerticalTextPosition_AbstractButton_int_ent(int& _out_10b);
extern void setVerticalTextPosition_AbstractButton_int_ext(int& _out_10c);
extern void setHorizontalTextPosition_AbstractButton_int_ent(int& _out_10d);
extern void setHorizontalTextPosition_AbstractButton_int_ext(int& _out_10e);
extern void setMnemonic_AbstractButton_int_ent(int& _out_10f);
extern void setMnemonic_AbstractButton_int_ext(int& _out_110);
extern void setActionCommand_AbstractButton_String_ent(int& _out_111);
extern void setActionCommand_AbstractButton_String_ext(int& _out_112);
extern void setEnabled_Component_boolean_ent(int& _out_113);
extern void setEnabled_Component_boolean_ext(int& _out_114);
extern void addActionListener_AbstractButton_ActionListener_ent(int& _out_115);
extern void addActionListener_AbstractButton_ActionListener_ext(int& _out_116);
extern void setToolTipText_JComponent_String_ent(int& _out_117);
extern void setToolTipText_JComponent_String_ext(int& _out_118);
extern void add_Container_Component_ent(int& _out_119);
extern void add_Container_Component_ext(int& _out_11a);
extern void setContentPane_JFrame_Container_ent(int& _out_11b);
extern void setContentPane_JFrame_Container_ext(int& _out_11c);
extern void pack_Window_ent(int& _out_11d);
extern void pack_Window_ext(int& _out_11e);
extern void setVisible_Component_boolean_ent(int& _out_11f);
extern void setVisible_Component_boolean_ext(int& _out_120);
extern void createAndShowGUI_ButtonDemo_ext(int& _out_121);
extern void run_ButtonDemo_1_ext(int& _out_122);
extern void actionPerformed_ButtonDemo_ActionEvent_ent(int& _out_123);
extern void getActionCommand_ActionEvent_ent(int& _out_124);
extern void getActionCommand_ActionEvent_ext(int& _out_125);
extern void actionPerformed_ButtonDemo_ActionEvent_ext(int& _out_126);
extern void get_log_cnt(int& _out_127, int& log_cnt_s451_128);
extern void reset_log_cnt(int& log_cnt_s454_129);
extern void retrieve_JButton(int idx_1a8, type::Object*& _out_1a9, type::Object** obj_JButton_s431_1aa/* len = 10 */);
extern void check_log(int* params_1c3/* len = 5 */, int* ev_s421_1c4/* len = 5 * 82 */, int* obj_s422_1c5/* len = 10 */, int& log_cnt_s423_1c6);
extern void nonce(int& _out_1c9, int& obj_cnt_s465_1ca);
extern void register_ActionEvent(type::Object* actionevent_21a, int& obj_ActionEvent_cnt_s441_21b, type::Object** obj_ActionEvent_s442_21c/* len = 10 */);
extern void register_Toolkit(type::Object* toolkit_228, int& obj_Toolkit_cnt_s469_229, type::Object** obj_Toolkit_s470_22a/* len = 10 */);
extern void register_AWTEvent(type::Object* awtevent_2e8, int& obj_AWTEvent_cnt_s475_2e9, type::Object** obj_AWTEvent_s476_2ea/* len = 10 */);
extern void register_EventQueue(type::Object* eventqueue_2ec, type::Object** obj_EventQueue_s419_2ed/* len = 10 */, int& obj_EventQueue_cnt_s420_2ee);
extern void register_EventObject(type::Object* eventobject_33e, type::Object** obj_EventObject_s448_33f/* len = 10 */, int& obj_EventObject_cnt_s449_340);
extern void register_InvocationEvent(type::Object* invocationevent_342, type::Object** obj_InvocationEvent_s425_343/* len = 10 */, int& obj_InvocationEvent_cnt_s426_344);
extern void register_JFrame(type::Object* jframe_3d7, type::Object** obj_JFrame_s427_3d8/* len = 10 */, int& obj_JFrame_cnt_s428_3d9);
extern void register_ButtonDemo(type::Object* buttondemo_409, int& obj_ButtonDemo_cnt_s438_40a, type::Object** obj_ButtonDemo_s439_40b/* len = 10 */);
extern void register_Frame(type::Object* frame_416, int& obj_Frame_cnt_s463_417, type::Object** obj_Frame_s464_418/* len = 10 */);
extern void register_Container(type::Object* container_41f, type::Object** obj_Container_s471_420/* len = 10 */, int& obj_Container_cnt_s472_421);
extern void register_JButton(type::Object* jbutton_42f, type::Object** obj_JButton_s461_430/* len = 10 */, int& obj_JButton_cnt_s462_431);
extern void register_Window(type::Object* window_433, type::Object** obj_Window_s417_434/* len = 10 */, int& obj_Window_cnt_s418_435);
extern void register_Component(type::Object* component_437, int& obj_Component_cnt_s452_438, type::Object** obj_Component_s453_439/* len = 10 */);
extern void register_AbstractButton(type::Object* abstractbutton_444, int& obj_AbstractButton_cnt_s473_445, type::Object** obj_AbstractButton_s474_446/* len = 10 */);
extern void register_JComponent(type::Object* jcomponent_448, type::Object** obj_JComponent_s429_449/* len = 10 */, int& obj_JComponent_cnt_s430_44a);
}
namespace InvocationEvent{
extern void dispatch_InvocationEvent(type::Object* self_1e1, int& obj_AbstractButton_cnt_s718_1e2, int& allInOne_depth_s511_1e3, int& handle_AuxObserver1_s512_1e4, int* ev_s701_1e5/* len = 5 * 82 */, int& update_AuxObserver1_s702_1e6, int& obj_Frame_cnt_s961_1e7, int& obj_JFrame_cnt_s866_1e8, type::Object** obj_Component_s695_1e9/* len = 10 */, type::Object** obj_Window_s843_1ea/* len = 10 */, int& obj_cnt_s766_1eb, type::Object** obj_JButton_s922_1ec/* len = 10 */, int& obj_JButton_cnt_s923_1ed, type::Object** obj_JFrame_s865_1ee/* len = 10 */, type::Object** obj_AbstractButton_s719_1ef/* len = 10 */, int& detach_AuxObserver1_s510_1f0, type::Object** obj_Container_s966_1f1/* len = 10 */, int& obj_Component_cnt_s694_1f2, int& obj_Container_cnt_s967_1f3, type::Object** obj_JComponent_s968_1f4/* len = 10 */, int& attach_AuxObserver1_s513_1f5, int* obj_s703_1f6/* len = 10 */, type::Object** obj_Frame_s962_1f7/* len = 10 */, int& obj_ButtonDemo_cnt_s937_1f8, int& obj_Window_cnt_s844_1f9, int& obj_JComponent_cnt_s969_1fa, type::Object** obj_ButtonDemo_s938_1fb/* len = 10 */, int& log_cnt_s704_1fc, int& reflect_depth_s705_1fd);
extern void InvocationEvent_InvocationEvent_Runnable(type::Object* runnable_2f0, type::Object*& _out_2f1, int& obj_AWTEvent_cnt_s813_2f2, type::Object** obj_EventObject_s814_2f3/* len = 10 */, type::Object** obj_AWTEvent_s815_2f4/* len = 10 */, int& obj_EventObject_cnt_s816_2f5, int& obj_cnt_s913_2f6, type::Object** obj_InvocationEvent_s811_2f7/* len = 10 */, int& obj_InvocationEvent_cnt_s812_2f8);
}
namespace AuxObserver1{
extern void checkRule2_AuxObserver1__Wrapper();
extern void checkRule2_AuxObserver1__WrapperNospec();
extern void checkRule1_AuxObserver1__Wrapper();
extern void checkRule1_AuxObserver1__WrapperNospec();
extern void checkRange_AuxObserver1__Wrapper();
extern void checkRange_AuxObserver1__WrapperNospec();
extern void checkRule2_AuxObserver1(int& detach_AuxObserver1_s443_3c, int& handle_AuxObserver1_s444_3d, int& observer_AuxObserver1_s445_3e, int& attach_AuxObserver1_s446_3f, int& subject_AuxObserver1_s447_40);
extern void checkRule1_AuxObserver1(int& update_AuxObserver1_s477_51, int& observer_AuxObserver1_s478_52, int& subject_AuxObserver1_s479_53);
extern void checkRange_AuxObserver1(int& detach_AuxObserver1_s432_59, int& handle_AuxObserver1_s433_5a, int& update_AuxObserver1_s434_5b, int& observer_AuxObserver1_s435_5c, int& attach_AuxObserver1_s436_5d, int& subject_AuxObserver1_s437_5e);
extern void handle_AuxObserver1_AuxObserver1(int& _out_200, int& handle_AuxObserver1_s466_201);
extern void reflect_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(int mtd_id_202, type::Object* rcv_AuxObserver1_203, type::Object* arg_204, type::Object* evt_205, int& detach_AuxObserver1_s637_206, int* ev_s647_207/* len = 5 * 82 */, int& allInOne_depth_s639_208, int& handle_AuxObserver1_s638_209, int& update_AuxObserver1_s893_20a, int* obj_s648_20b/* len = 10 */, int& attach_AuxObserver1_s640_20c, int& log_cnt_s649_20d, int& reflect_depth_s424_20e);
extern void allInOne_AuxObserver1_int_AuxObserver1_AuxObserver1_ActionEvent(int mtd_id_2fa, type::Object* rcv_AuxObserver1_2fb, type::Object* arg_2fc, type::Object* evt_2fd, int& detach_AuxObserver1_s455_2fe, int* ev_s644_2ff/* len = 5 * 82 */, int& allInOne_depth_s457_300, int& handle_AuxObserver1_s456_301, int& update_AuxObserver1_s669_302, int* obj_s645_303/* len = 10 */, int& attach_AuxObserver1_s458_304, int& log_cnt_s646_305, int& reflect_depth_s670_306);
extern void attachCode_AuxObserver1_AuxObserver1_AuxObserver1_ActionEvent(type::Object* rcv_AuxObserver1_346, type::Object* arg_347, type::Object* evt_348);
extern void detachCode_AuxObserver1_AuxObserver1_AuxObserver1_ActionEvent(type::Object* rcv_AuxObserver1_349, type::Object* arg_34a, type::Object* evt_34b);
extern void handleCode_AuxObserver1_AuxObserver1_AuxObserver1_ActionEvent(type::Object* rcv_AuxObserver1_34c, type::Object* arg_34d, type::Object* evt_34e, int& detach_AuxObserver1_s546_34f, int* ev_s594_350/* len = 5 * 82 */, int& allInOne_depth_s548_351, int& handle_AuxObserver1_s547_352, int& update_AuxObserver1_s440_353, int* obj_s595_354/* len = 10 */, int& attach_AuxObserver1_s549_355, int& log_cnt_s596_356, int& reflect_depth_s541_357);
}
namespace SwingUtilities{
extern void invokeLater_SwingUtilities_Runnable(type::Object* doRun_1cb, type::Object*& defaultToolkit_s998_1cc, int* ev_s774_1cd/* len = 5 * 82 */, int& obj_AWTEvent_cnt_s535_1ce, type::Object** obj_EventObject_s667_1cf/* len = 10 */, type::Object** obj_AWTEvent_s536_1d0/* len = 10 */, int& obj_EventObject_cnt_s668_1d1, int& obj_cnt_s706_1d2, type::Object** obj_EventQueue_s846_1d3/* len = 10 */, int& obj_EventQueue_cnt_s847_1d4, int& obj_Toolkit_cnt_s749_1d5, int* obj_s775_1d6/* len = 10 */, type::Object** obj_InvocationEvent_s950_1d7/* len = 10 */, type::Object** obj_Toolkit_s750_1d8/* len = 10 */, int& log_cnt_s776_1d9, int& obj_InvocationEvent_cnt_s951_1da);
}
namespace ComponentEvent{
}
namespace ButtonDemo{
extern void main_ButtonDemo(int* ev_s995_16f/* len = 5 * 82 */, type::Object*& defaultToolkit_s877_170, int& obj_AWTEvent_cnt_s498_171, type::Object** obj_EventObject_s878_172/* len = 10 */, type::Object** obj_AWTEvent_s499_173/* len = 10 */, int& obj_EventObject_cnt_s879_174, int& obj_cnt_s654_175, type::Object** obj_EventQueue_s632_176/* len = 10 */, int& obj_EventQueue_cnt_s633_177, int& obj_Toolkit_cnt_s873_178, int* obj_s996_179/* len = 10 */, type::Object** obj_InvocationEvent_s634_17a/* len = 10 */, type::Object** obj_Toolkit_s874_17b/* len = 10 */, int& log_cnt_s997_17c, int& obj_InvocationEvent_cnt_s635_17d);
extern void run_ButtonDemo_1(type::Object* self_23f, int& obj_AbstractButton_cnt_s894_240, int& allInOne_depth_s557_241, int& update_AuxObserver1_s559_242, int& obj_JFrame_cnt_s679_243, type::Object** obj_Window_s805_244/* len = 10 */, type::Object** obj_Container_s659_245/* len = 10 */, int& obj_Container_cnt_s660_246, type::Object** obj_JComponent_s905_247/* len = 10 */, int& obj_ButtonDemo_cnt_s1004_248, type::Object** obj_Frame_s882_249/* len = 10 */, int& obj_JComponent_cnt_s906_24a, int& log_cnt_s590_24b, int& reflect_depth_s561_24c, int* ev_s588_24d/* len = 5 * 82 */, int& handle_AuxObserver1_s558_24e, int& obj_Frame_cnt_s881_24f, type::Object** obj_Component_s802_250/* len = 10 */, int& obj_cnt_s626_251, type::Object** obj_JButton_s868_252/* len = 10 */, int& obj_JButton_cnt_s869_253, type::Object** obj_JFrame_s678_254/* len = 10 */, type::Object** obj_AbstractButton_s895_255/* len = 10 */, int& detach_AuxObserver1_s556_256, int& obj_Component_cnt_s801_257, int* obj_s589_258/* len = 10 */, int& attach_AuxObserver1_s560_259, int& obj_Window_cnt_s806_25a, type::Object** obj_ButtonDemo_s1005_25b/* len = 10 */);
extern void actionPerformed_ButtonDemo_ActionEvent(type::Object* self_25f, type::Object* e_260, int& detach_AuxObserver1_s537_261, int* ev_s782_262/* len = 5 * 82 */, int& handle_AuxObserver1_s539_263, int& allInOne_depth_s538_264, int& update_AuxObserver1_s783_265, int* obj_s784_266/* len = 10 */, int& attach_AuxObserver1_s540_267, int& log_cnt_s785_268, int& reflect_depth_s786_269);
extern void createAndShowGUI_ButtonDemo(int& obj_AbstractButton_cnt_s597_307, int& allInOne_depth_s687_308, int& update_AuxObserver1_s907_309, int& obj_JFrame_cnt_s855_30a, type::Object** obj_Window_s485_30b/* len = 10 */, type::Object** obj_Container_s720_30c/* len = 10 */, int& obj_Container_cnt_s721_30d, type::Object** obj_JComponent_s908_30e/* len = 10 */, int& obj_ButtonDemo_cnt_s1031_30f, type::Object** obj_Frame_s481_310/* len = 10 */, int& obj_JComponent_cnt_s909_311, int& log_cnt_s756_312, int& reflect_depth_s489_313, int& handle_AuxObserver1_s688_314, int* ev_s754_315/* len = 5 * 82 */, int& obj_Frame_cnt_s480_316, type::Object** obj_Component_s752_317/* len = 10 */, int& obj_cnt_s753_318, type::Object** obj_JButton_s1000_319/* len = 10 */, int& obj_JButton_cnt_s1001_31a, type::Object** obj_JFrame_s854_31b/* len = 10 */, type::Object** obj_AbstractButton_s598_31c/* len = 10 */, int& detach_AuxObserver1_s686_31d, int& obj_Component_cnt_s751_31e, int& attach_AuxObserver1_s689_31f, int* obj_s755_320/* len = 10 */, int& obj_Window_cnt_s486_321, type::Object** obj_ButtonDemo_s1032_322/* len = 10 */);
extern void ButtonDemo_ButtonDemo(type::Object*& _out_377, int& obj_AbstractButton_cnt_s652_378, int& allInOne_depth_s551_379, int& handle_AuxObserver1_s552_37a, int* ev_s620_37b/* len = 5 * 82 */, int& update_AuxObserver1_s553_37c, type::Object** obj_Component_s526_37d/* len = 10 */, int& obj_cnt_s864_37e, type::Object** obj_JButton_s1010_37f/* len = 10 */, int& obj_JButton_cnt_s1011_380, type::Object** obj_AbstractButton_s653_381/* len = 10 */, int& detach_AuxObserver1_s550_382, type::Object** obj_Container_s767_383/* len = 10 */, int& obj_Component_cnt_s525_384, int& obj_Container_cnt_s768_385, type::Object** obj_JComponent_s716_386/* len = 10 */, int& attach_AuxObserver1_s554_387, int* obj_s621_388/* len = 10 */, int& obj_ButtonDemo_cnt_s1029_389, int& obj_JComponent_cnt_s717_38a, type::Object** obj_ButtonDemo_s1030_38b/* len = 10 */, int& log_cnt_s622_38c, int& reflect_depth_s555_38d);
extern void createImageIcon_ButtonDemo_String(char* path_3db/* len = 51 */, type::Object*& _out_3dc, int* ev_s503_3dd/* len = 5 * 82 */, int* obj_s504_3de/* len = 10 */, int& log_cnt_s505_3df);
}
namespace Main{
extern void sample1_Main(int& obj_AbstractButton_cnt_s948_12a, int& allInOne_depth_s491_12b, int& update_AuxObserver1_s735_12c, int& obj_AWTEvent_cnt_s807_12d, int& obj_JFrame_cnt_s770_12e, type::Object** obj_AWTEvent_s809_12f/* len = 10 */, type::Object** obj_Window_s926_130/* len = 10 */, int& obj_EventQueue_cnt_s834_131, type::Object** obj_ActionEvent_s628_132/* len = 10 */, type::Object** obj_Container_s827_133/* len = 10 */, int& obj_Container_cnt_s828_134, type::Object** obj_JComponent_s829_135/* len = 10 */, int& obj_ButtonDemo_cnt_s932_136, type::Object** obj_Frame_s824_137/* len = 10 */, type::Object** obj_Toolkit_s568_138/* len = 10 */, int& obj_JComponent_cnt_s830_139, int& log_cnt_s737_13a, int& reflect_depth_s738_13b, int& obj_InvocationEvent_cnt_s758_13c, type::Object*& defaultToolkit_s986_13d, int* ev_s734_13e/* len = 5 * 82 */, int& handle_AuxObserver1_s492_13f, type::Object** obj_EventObject_s808_140/* len = 10 */, int& obj_Frame_cnt_s823_141, type::Object** obj_Component_s723_142/* len = 10 */, int& obj_EventObject_cnt_s810_143, int& obj_cnt_s724_144, type::Object** obj_JButton_s845_145/* len = 10 */, type::Object** obj_EventQueue_s833_146/* len = 10 */, int& obj_JButton_cnt_s912_147, type::Object** obj_JFrame_s769_148/* len = 10 */, type::Object** obj_AbstractButton_s949_149/* len = 10 */, int& obj_ActionEvent_cnt_s627_14a, int& obj_Toolkit_cnt_s567_14b, int& detach_AuxObserver1_s490_14c, int& obj_Component_cnt_s722_14d, int& attach_AuxObserver1_s493_14e, int* obj_s736_14f/* len = 10 */, int& obj_Window_cnt_s927_150, type::Object** obj_InvocationEvent_s757_151/* len = 10 */, type::Object** obj_ButtonDemo_s933_152/* len = 10 */);
}

#endif
