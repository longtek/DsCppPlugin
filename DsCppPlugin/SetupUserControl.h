#pragma once
#include "stdafx.h"
#include "VCppPluginImpl.h"
#include<math.h>
#include <string>
#include <atlstr.h>
#include<stdlib.h>


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace DsCppPlugin {

	/// <summary>
	/// SetupUserControl 摘要
	/// </summary>
	public ref class SetupUserControl : public System::Windows::Forms::UserControl
	{
	private:
		bool selfChange;		
	private: System::Windows::Forms::Button^  ADD1;
	private: System::Windows::Forms::Button^  DELE1;
	private: System::Windows::Forms::Button^  DELE2;
	private: System::Windows::Forms::Button^  ADD2;
	private: System::Windows::Forms::Button^  DELE3;
	private: System::Windows::Forms::Button^  ADD3;
	private: System::Windows::Forms::Button^  DELE4;
	private: System::Windows::Forms::Button^  ADD4;
	private: System::Windows::Forms::Button^  DELE5;
	private: System::Windows::Forms::Button^  ADD5;
	private: System::Windows::Forms::Button^  DELE6;
	private: System::Windows::Forms::Button^  ADD6;
	private: System::Windows::Forms::Button^  DELE7;
	private: System::Windows::Forms::Button^  ADD7;
	private: System::Windows::Forms::Button^  DELE8;
	private: System::Windows::Forms::Button^  ADD8;
	private: System::Windows::Forms::Button^  DELE9;
	private: System::Windows::Forms::Button^  ADD9;
	private: System::Windows::Forms::Button^  DELE10;
	private: System::Windows::Forms::Button^  ADD10;
	private: System::Windows::Forms::Button^  DELE11;
	private: System::Windows::Forms::Button^  ADD11;
	private: System::Windows::Forms::Button^  DELE12;
	private: System::Windows::Forms::Button^  ADD12;
	private: System::Windows::Forms::Button^  DELE13;
	private: System::Windows::Forms::Button^  ADD13;
	private: System::Windows::Forms::Button^  DELE14;
	private: System::Windows::Forms::Button^  ADD14;
	private: System::Windows::Forms::Button^  DELE15;
	private: System::Windows::Forms::Button^  ADD15;
	private: System::Windows::Forms::Button^  DELE16;
	private: System::Windows::Forms::Button^  ADD16;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::ComboBox^  frechCombox1;
	private: System::Windows::Forms::ComboBox^  frechCombox2;
	private: System::Windows::Forms::ComboBox^  frechCombox3;
	private: System::Windows::Forms::ComboBox^  frechCombox4;
	private: System::Windows::Forms::ComboBox^  frechCombox5;
	private: System::Windows::Forms::ComboBox^  frechCombox6;
	private: System::Windows::Forms::ComboBox^  frechCombox7;
	private: System::Windows::Forms::ComboBox^  frechCombox8;
	private: System::Windows::Forms::ComboBox^  frechCombox9;
	private: System::Windows::Forms::ComboBox^  frechCombox10;
	private: System::Windows::Forms::ComboBox^  frechCombox11;
	private: System::Windows::Forms::ComboBox^  frechCombox12;
	private: System::Windows::Forms::ComboBox^  frechCombox13;
	private: System::Windows::Forms::ComboBox^  frechCombox14;
	private: System::Windows::Forms::ComboBox^  frechCombox15;
	private: System::Windows::Forms::ComboBox^  frechCombox16;
	/*   倍频数值 输入;*/
	private: System::Windows::Forms::TextBox^  InputNumTextBox1;
	private: System::Windows::Forms::TextBox^  InputNumTextBox2;
	private: System::Windows::Forms::TextBox^  InputNumTextBox3;
	private: System::Windows::Forms::TextBox^  InputNumTextBox4;
	private: System::Windows::Forms::TextBox^  InputNumTextBox5;
	private: System::Windows::Forms::TextBox^  InputNumTextBox6;
	private: System::Windows::Forms::TextBox^  InputNumTextBox7;
	private: System::Windows::Forms::TextBox^  InputNumTextBox8;
	private: System::Windows::Forms::TextBox^  InputNumTextBox9;
	private: System::Windows::Forms::TextBox^  InputNumTextBox10;
	private: System::Windows::Forms::TextBox^  InputNumTextBox11;
	private: System::Windows::Forms::TextBox^  InputNumTextBox12;
	private: System::Windows::Forms::TextBox^  InputNumTextBox13;
	private: System::Windows::Forms::TextBox^  InputNumTextBox14;
	private: System::Windows::Forms::TextBox^  InputNumTextBox15;
	private: System::Windows::Forms::TextBox^  InputNumTextBox16;
	private: System::Windows::Forms::Label^    label18;
	//需要增加的通道组数量;
	private: System::Windows::Forms::TextBox^  NmtextBox16;
	private: System::Windows::Forms::TextBox^  NmtextBox15;
	private: System::Windows::Forms::TextBox^  NmtextBox14;
	private: System::Windows::Forms::TextBox^  NmtextBox13;
	private: System::Windows::Forms::TextBox^  NmtextBox12;
	private: System::Windows::Forms::TextBox^  NmtextBox11;
	private: System::Windows::Forms::TextBox^  NmtextBox10;
	private: System::Windows::Forms::TextBox^  NmtextBox9;
	private: System::Windows::Forms::TextBox^  NmtextBox8;
	private: System::Windows::Forms::TextBox^  NmtextBox7;
	private: System::Windows::Forms::TextBox^  NmtextBox6;
	private: System::Windows::Forms::TextBox^  NmtextBox5;
	private: System::Windows::Forms::TextBox^  NmtextBox4;
	private: System::Windows::Forms::TextBox^  NmtextBox3;
	private: System::Windows::Forms::TextBox^  NmtextBox2;
	private: System::Windows::Forms::TextBox^  NmtextBox1;
	//增加通道组的标号;
	private: System::Windows::Forms::TextBox^  ChTextbox16;
	private: System::Windows::Forms::TextBox^  ChTextbox15;
	private: System::Windows::Forms::TextBox^  ChTextbox14;
	private: System::Windows::Forms::TextBox^  ChTextbox13;
	private: System::Windows::Forms::TextBox^  ChTextbox12;
	private: System::Windows::Forms::TextBox^  ChTextbox11;
	private: System::Windows::Forms::TextBox^  ChTextbox10;
	private: System::Windows::Forms::TextBox^  ChTextbox9;
	private: System::Windows::Forms::TextBox^  ChTextbox8;
	private: System::Windows::Forms::TextBox^  ChTextbox7;
	private: System::Windows::Forms::TextBox^  ChTextbox6;
	private: System::Windows::Forms::TextBox^  ChTextbox5;
	private: System::Windows::Forms::TextBox^  ChTextbox4;
	private: System::Windows::Forms::TextBox^  ChTextbox3;
	private: System::Windows::Forms::TextBox^  ChTextbox2;
	private: System::Windows::Forms::TextBox^  ChTextbox1;
	private: System::Windows::Forms::Button^   初始化设置;
    //倍频的误差范围;
	private: System::Windows::Forms::TextBox^  ExinputText16;
	private: System::Windows::Forms::TextBox^  ExinputText15;
	private: System::Windows::Forms::TextBox^  ExinputText14;
	private: System::Windows::Forms::TextBox^  ExinputText13;
	private: System::Windows::Forms::TextBox^  ExinputText12;
	private: System::Windows::Forms::TextBox^  ExinputText11;
	private: System::Windows::Forms::TextBox^  ExinputText10;
	private: System::Windows::Forms::TextBox^  ExinputText9;
	private: System::Windows::Forms::TextBox^  ExinputText8;
	private: System::Windows::Forms::TextBox^  ExinputText7;
	private: System::Windows::Forms::TextBox^  ExinputText6;
	private: System::Windows::Forms::TextBox^  ExinputText5;
	private: System::Windows::Forms::TextBox^  ExinputText4;
	private: System::Windows::Forms::TextBox^  ExinputText3;
	private: System::Windows::Forms::TextBox^  ExinputText2;
	private: System::Windows::Forms::TextBox^  ExinputText1;
    //通道组选择按钮;
	private: System::Windows::Forms::Button^  Chnum16;
	private: System::Windows::Forms::Button^  Chnum15;
	private: System::Windows::Forms::Button^  Chnum14;
	private: System::Windows::Forms::Button^  Chnum13;
	private: System::Windows::Forms::Button^  Chnum12;
	private: System::Windows::Forms::Button^  Chnum11;
	private: System::Windows::Forms::Button^  Chnum10;
	private: System::Windows::Forms::Button^  Chnum9;
	private: System::Windows::Forms::Button^  Chnum8;
	private: System::Windows::Forms::Button^  Chnum7;
	private: System::Windows::Forms::Button^  Chnum6;
	private: System::Windows::Forms::Button^  Chnum5;
	private: System::Windows::Forms::Button^  Chnum4;
	private: System::Windows::Forms::Button^  Chnum3;
	private: System::Windows::Forms::Button^  Chnum2;
	private: System::Windows::Forms::Button^  Chnum1;
	//通道组名字;
	private: System::Windows::Forms::TextBox^  NameBox16;
	private: System::Windows::Forms::TextBox^  NameBox15;
	private: System::Windows::Forms::TextBox^  NameBox14;
	private: System::Windows::Forms::TextBox^  NameBox13;
	private: System::Windows::Forms::TextBox^  NameBox12;
	private: System::Windows::Forms::TextBox^  NameBox11;
	private: System::Windows::Forms::TextBox^  NameBox10;
	private: System::Windows::Forms::TextBox^  NameBox9;
	private: System::Windows::Forms::TextBox^  NameBox8;
	private: System::Windows::Forms::TextBox^  NameBox7;
	private: System::Windows::Forms::TextBox^  NameBox6;
	private: System::Windows::Forms::TextBox^  NameBox5;
	private: System::Windows::Forms::TextBox^  NameBox4;
	private: System::Windows::Forms::TextBox^  NameBox3;
	private: System::Windows::Forms::TextBox^  NameBox2;
	private: System::Windows::Forms::TextBox^  NameBox1;
    private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^    label19;
	private: System::Windows::Forms::TextBox^   textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
    private: System::Windows::Forms::TextBox^  SignelBox;
    private: System::Windows::Forms::Label^  label22;
    private: System::Windows::Forms::Label^  label21;
    private: System::Windows::Forms::Label^  label20;
    private: System::Windows::Forms::ListView^  listViewInfo;
    


private: System::Windows::Forms::Button^  Print;
private: System::Windows::Forms::Button^  Print2;
private: System::Windows::Forms::Button^  Print3;
private: System::Windows::Forms::Button^  Print4;
private: System::Windows::Forms::Button^  Print5;
private: System::Windows::Forms::Button^  Print6;
private: System::Windows::Forms::Button^  Print7;
private: System::Windows::Forms::Button^  Print8;
private: System::Windows::Forms::Button^  Print9;
private: System::Windows::Forms::Button^  Print10;
private: System::Windows::Forms::Button^  Print11;
private: System::Windows::Forms::Button^  Print12;
private: System::Windows::Forms::Button^  Print13;
private: System::Windows::Forms::Button^  Print14;
private: System::Windows::Forms::Button^  Print15;
private: System::Windows::Forms::Button^  Print16;


private: System::Windows::Forms::ColumnHeader^  columnHeader2;
private: System::Windows::Forms::ColumnHeader^  columnHeader3;
private: System::Windows::Forms::ColumnHeader^  columnHeader4;
private: System::Windows::Forms::TextBox^  ChNameBox;
private: System::Windows::Forms::Label^  ChName;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  SUM;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::TextBox^  ChFre;



	public:
		CVCppPluginImpl* plugin;
		void Initiate()
		{
			selfChange = true;
			
			if((plugin != nullptr))
			{
				FindAllCounter();
				for(int i=0;i<CHANNELNUM ;++i)
				{
					CString stri;
					String^ cstrp;
					stri.Format(_T("%d"),plugin->ChAllNum[i]);
					String^ cstr=gcnew String(stri);					
					stri.Format(_T("%d"),0);
					String^ cstr1=gcnew String(stri);
					String^ cstr2= gcnew String(plugin->cstring[i][0]);
					stri.Format(_T("%.3f"),plugin->m_Exfremult[i][0]);
					String^ cstr3=gcnew String(stri);
					String^ cstr4=gcnew String(plugin->m_bstr[i][0]);
					switch(plugin->m_CountType)
					{
					  case 间隔计算:comboBox1->SelectedIndex=0;textBox1->Enabled=FALSE;break;
					  case 连续计算:comboBox1->SelectedIndex=1;textBox1->Enabled=TRUE;
						            stri.Format(_T("%.3f"),plugin->m_fPointTime);
						            cstrp=gcnew String(stri);
						            textBox1->Text=cstrp;
						           break;
					  default:comboBox1->SelectedIndex=0;textBox1->Enabled=FALSE;break;
					}
					
					stri.Format(_T("%d"),plugin->m_iSignalOutPoint);
					cstrp=gcnew String(stri);
					SignelBox->Text=cstrp;
					switch(i)
					{
					case 0:NmtextBox1->Text = cstr;    //通道组数量
						ChTextbox1->Text = cstr1;       //通道组						
						InputNumTextBox1->Text=cstr2;  //倍频;
						if(plugin->m_CounterNum)
						frechCombox1->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText1->Text=cstr3;      //波动范围
						NameBox1->Text=cstr4;          //通道组名字;
						break;
					case 1:NmtextBox2->Text = cstr;
						ChTextbox2->Text = cstr1;						
						InputNumTextBox2->Text=cstr2;
						if(plugin->m_CounterNum)
				        frechCombox2->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText2->Text=cstr3;
						NameBox2->Text=cstr4;
						break;
					case 2:NmtextBox3->Text = cstr;
						ChTextbox3->Text = cstr1;
						InputNumTextBox3->Text=cstr2;
					    if(plugin->m_CounterNum)
					    frechCombox3->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText3->Text=cstr3;
						NameBox3->Text=cstr4;
						break;
					case 3:NmtextBox4->Text = cstr;
						ChTextbox4->Text = cstr1;
						InputNumTextBox4->Text=cstr2;
						if(plugin->m_CounterNum)
						   frechCombox4->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText4->Text=cstr3;
						NameBox4->Text=cstr4;
						break;
					case 4:NmtextBox5->Text = cstr;
						ChTextbox5->Text = cstr1;
						InputNumTextBox5->Text=cstr2;
						if(plugin->m_CounterNum)
					       frechCombox5->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText5->Text=cstr3;
						NameBox5->Text=cstr4;
						break;
					case 5:NmtextBox6->Text = cstr;
						ChTextbox6->Text = cstr1;
						InputNumTextBox6->Text=cstr2;
						if(plugin->m_CounterNum)
						   frechCombox6->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText6->Text=cstr3;
						NameBox6->Text=cstr4;
						break;
					case 6:NmtextBox7->Text = cstr;
						ChTextbox7->Text = cstr1;
						InputNumTextBox7->Text=cstr2;
						if(plugin->m_CounterNum)
							frechCombox7->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText7->Text=cstr3;
						NameBox7->Text=cstr4;
						break;
					case 7:NmtextBox8->Text = cstr;
						ChTextbox8->Text = cstr1;
						InputNumTextBox8->Text=cstr2;
						if(plugin->m_CounterNum)
						   frechCombox8->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText8->Text=cstr3;
						NameBox8->Text=cstr4;
						break;
					case 8:NmtextBox9->Text = cstr;
						ChTextbox9->Text = cstr1;
						InputNumTextBox9->Text=cstr2;
						if(plugin->m_CounterNum)
							frechCombox9->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText9->Text=cstr3;
						NameBox9->Text=cstr4;
						break;
					case 9:NmtextBox10->Text = cstr;
						ChTextbox10->Text = cstr1;
						InputNumTextBox10->Text=cstr2;
						if(plugin->m_CounterNum)
							frechCombox10->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText10->Text=cstr3;
						NameBox10->Text=cstr4;
						break;
					case 10:NmtextBox11->Text = cstr;
						ChTextbox11->Text = cstr1;
						InputNumTextBox11->Text=cstr2;
						if(plugin->m_CounterNum)
							frechCombox11->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText11->Text=cstr3;
						NameBox11->Text=cstr4;
						break;
					case 11:NmtextBox12->Text = cstr;
						ChTextbox12->Text = cstr1;
						InputNumTextBox12->Text=cstr2;
						if(plugin->m_CounterNum)
							frechCombox12->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText12->Text=cstr3;
						NameBox12->Text=cstr4;
						break;
					case 12:NmtextBox13->Text = cstr;
						ChTextbox13->Text = cstr1;
						InputNumTextBox13->Text=cstr2;
						if(plugin->m_CounterNum)
							frechCombox13->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText13->Text=cstr3;
						NameBox13->Text=cstr4;
						break;
					case 13:NmtextBox14->Text = cstr;
						ChTextbox14->Text = cstr1;
						InputNumTextBox14->Text=cstr2;
						if(plugin->m_CounterNum)
							frechCombox14->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText14->Text=cstr3;
						NameBox14->Text=cstr4;
						break;
					case 14:NmtextBox15->Text = cstr;
						ChTextbox15->Text = cstr1;
						InputNumTextBox15->Text=cstr2;
						if(plugin->m_CounterNum)
							frechCombox15->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText15->Text=cstr3;
						NameBox15->Text=cstr4;
						break;
					case 15:NmtextBox16->Text = cstr;
						ChTextbox16->Text = cstr1;
						InputNumTextBox16->Text=cstr2;
						if(plugin->m_CounterNum)
							frechCombox16->SelectedIndex=plugin->m_CounterIndex[i];
						ExinputText16->Text=cstr3;
						NameBox16->Text=cstr4;
						break;
					}
				}
			}
			selfChange = false;
		}
		SetupUserControl(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/* <summary>
		清理所有正在使用的资源。
		</summary>*/
		~SetupUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	protected: 
   
	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->ADD1 = (gcnew System::Windows::Forms::Button());
			this->DELE1 = (gcnew System::Windows::Forms::Button());
			this->DELE2 = (gcnew System::Windows::Forms::Button());
			this->ADD2 = (gcnew System::Windows::Forms::Button());
			this->DELE3 = (gcnew System::Windows::Forms::Button());
			this->ADD3 = (gcnew System::Windows::Forms::Button());
			this->DELE4 = (gcnew System::Windows::Forms::Button());
			this->ADD4 = (gcnew System::Windows::Forms::Button());
			this->DELE5 = (gcnew System::Windows::Forms::Button());
			this->ADD5 = (gcnew System::Windows::Forms::Button());
			this->DELE6 = (gcnew System::Windows::Forms::Button());
			this->ADD6 = (gcnew System::Windows::Forms::Button());
			this->DELE7 = (gcnew System::Windows::Forms::Button());
			this->ADD7 = (gcnew System::Windows::Forms::Button());
			this->DELE8 = (gcnew System::Windows::Forms::Button());
			this->ADD8 = (gcnew System::Windows::Forms::Button());
			this->DELE9 = (gcnew System::Windows::Forms::Button());
			this->ADD9 = (gcnew System::Windows::Forms::Button());
			this->DELE10 = (gcnew System::Windows::Forms::Button());
			this->ADD10 = (gcnew System::Windows::Forms::Button());
			this->DELE11 = (gcnew System::Windows::Forms::Button());
			this->ADD11 = (gcnew System::Windows::Forms::Button());
			this->DELE12 = (gcnew System::Windows::Forms::Button());
			this->ADD12 = (gcnew System::Windows::Forms::Button());
			this->DELE13 = (gcnew System::Windows::Forms::Button());
			this->ADD13 = (gcnew System::Windows::Forms::Button());
			this->DELE14 = (gcnew System::Windows::Forms::Button());
			this->ADD14 = (gcnew System::Windows::Forms::Button());
			this->DELE15 = (gcnew System::Windows::Forms::Button());
			this->ADD15 = (gcnew System::Windows::Forms::Button());
			this->DELE16 = (gcnew System::Windows::Forms::Button());
			this->ADD16 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->frechCombox1 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox2 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox3 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox4 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox5 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox6 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox7 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox8 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox9 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox10 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox11 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox12 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox13 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox14 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox15 = (gcnew System::Windows::Forms::ComboBox());
			this->frechCombox16 = (gcnew System::Windows::Forms::ComboBox());
			this->InputNumTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox4 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox5 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox6 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox7 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox8 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox9 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox10 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox11 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox12 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox13 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox14 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox15 = (gcnew System::Windows::Forms::TextBox());
			this->InputNumTextBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->NmtextBox16 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox15 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox14 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox13 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox12 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox11 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox10 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox9 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox8 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox7 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox6 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox5 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox4 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->NmtextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox16 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox15 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox14 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox13 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox12 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox11 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox10 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox9 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox8 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox7 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox6 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox5 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox4 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox3 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox2 = (gcnew System::Windows::Forms::TextBox());
			this->ChTextbox1 = (gcnew System::Windows::Forms::TextBox());
			this->初始化设置 = (gcnew System::Windows::Forms::Button());
			this->ExinputText16 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText15 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText14 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText13 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText12 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText11 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText10 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText9 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText8 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText7 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText6 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText5 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText4 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText3 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText2 = (gcnew System::Windows::Forms::TextBox());
			this->ExinputText1 = (gcnew System::Windows::Forms::TextBox());
			this->Chnum16 = (gcnew System::Windows::Forms::Button());
			this->Chnum15 = (gcnew System::Windows::Forms::Button());
			this->Chnum14 = (gcnew System::Windows::Forms::Button());
			this->Chnum13 = (gcnew System::Windows::Forms::Button());
			this->Chnum12 = (gcnew System::Windows::Forms::Button());
			this->Chnum11 = (gcnew System::Windows::Forms::Button());
			this->Chnum10 = (gcnew System::Windows::Forms::Button());
			this->Chnum9 = (gcnew System::Windows::Forms::Button());
			this->Chnum8 = (gcnew System::Windows::Forms::Button());
			this->Chnum7 = (gcnew System::Windows::Forms::Button());
			this->Chnum6 = (gcnew System::Windows::Forms::Button());
			this->Chnum5 = (gcnew System::Windows::Forms::Button());
			this->Chnum4 = (gcnew System::Windows::Forms::Button());
			this->Chnum3 = (gcnew System::Windows::Forms::Button());
			this->Chnum2 = (gcnew System::Windows::Forms::Button());
			this->Chnum1 = (gcnew System::Windows::Forms::Button());
			this->NameBox16 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox15 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox14 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox13 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox12 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox11 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox10 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox9 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox8 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox7 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox6 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox5 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox4 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox3 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox2 = (gcnew System::Windows::Forms::TextBox());
			this->NameBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->SignelBox = (gcnew System::Windows::Forms::TextBox());
			this->listViewInfo = (gcnew System::Windows::Forms::ListView());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Print = (gcnew System::Windows::Forms::Button());
			this->Print2 = (gcnew System::Windows::Forms::Button());
			this->Print3 = (gcnew System::Windows::Forms::Button());
			this->Print4 = (gcnew System::Windows::Forms::Button());
			this->Print5 = (gcnew System::Windows::Forms::Button());
			this->Print6 = (gcnew System::Windows::Forms::Button());
			this->Print7 = (gcnew System::Windows::Forms::Button());
			this->Print8 = (gcnew System::Windows::Forms::Button());
			this->Print9 = (gcnew System::Windows::Forms::Button());
			this->Print10 = (gcnew System::Windows::Forms::Button());
			this->Print11 = (gcnew System::Windows::Forms::Button());
			this->Print12 = (gcnew System::Windows::Forms::Button());
			this->Print13 = (gcnew System::Windows::Forms::Button());
			this->Print14 = (gcnew System::Windows::Forms::Button());
			this->Print15 = (gcnew System::Windows::Forms::Button());
			this->Print16 = (gcnew System::Windows::Forms::Button());
			this->ChNameBox = (gcnew System::Windows::Forms::TextBox());
			this->ChName = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->SUM = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->ChFre = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ADD1
			// 
			this->ADD1->Location = System::Drawing::Point(576, 91);
			this->ADD1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD1->Name = L"ADD1";
			this->ADD1->Size = System::Drawing::Size(56, 35);
			this->ADD1->TabIndex = 1;
			this->ADD1->Text = L"ADD";
			this->ADD1->UseVisualStyleBackColor = true;
			this->ADD1->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD1_Click);
			// 
			// DELE1
			// 
			this->DELE1->Location = System::Drawing::Point(738, 91);
			this->DELE1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE1->Name = L"DELE1";
			this->DELE1->Size = System::Drawing::Size(56, 35);
			this->DELE1->TabIndex = 2;
			this->DELE1->Text = L"DELE";
			this->DELE1->UseVisualStyleBackColor = true;
			this->DELE1->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE1_Click);
			// 
			// DELE2
			// 
			this->DELE2->Location = System::Drawing::Point(738, 138);
			this->DELE2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE2->Name = L"DELE2";
			this->DELE2->Size = System::Drawing::Size(56, 35);
			this->DELE2->TabIndex = 4;
			this->DELE2->Text = L"DELE";
			this->DELE2->UseVisualStyleBackColor = true;
			this->DELE2->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE2_Click);
			// 
			// ADD2
			// 
			this->ADD2->Location = System::Drawing::Point(576, 138);
			this->ADD2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD2->Name = L"ADD2";
			this->ADD2->Size = System::Drawing::Size(56, 35);
			this->ADD2->TabIndex = 3;
			this->ADD2->Text = L"ADD";
			this->ADD2->UseVisualStyleBackColor = true;
			this->ADD2->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD2_Click);
			// 
			// DELE3
			// 
			this->DELE3->Location = System::Drawing::Point(738, 183);
			this->DELE3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE3->Name = L"DELE3";
			this->DELE3->Size = System::Drawing::Size(56, 35);
			this->DELE3->TabIndex = 6;
			this->DELE3->Text = L"DELE";
			this->DELE3->UseVisualStyleBackColor = true;
			this->DELE3->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE3_Click);
			// 
			// ADD3
			// 
			this->ADD3->Location = System::Drawing::Point(576, 183);
			this->ADD3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD3->Name = L"ADD3";
			this->ADD3->Size = System::Drawing::Size(56, 35);
			this->ADD3->TabIndex = 5;
			this->ADD3->Text = L"ADD";
			this->ADD3->UseVisualStyleBackColor = true;
			this->ADD3->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD3_Click);
			// 
			// DELE4
			// 
			this->DELE4->Location = System::Drawing::Point(738, 229);
			this->DELE4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE4->Name = L"DELE4";
			this->DELE4->Size = System::Drawing::Size(56, 35);
			this->DELE4->TabIndex = 8;
			this->DELE4->Text = L"DELE";
			this->DELE4->UseVisualStyleBackColor = true;
			this->DELE4->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE4_Click);
			// 
			// ADD4
			// 
			this->ADD4->Location = System::Drawing::Point(576, 229);
			this->ADD4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD4->Name = L"ADD4";
			this->ADD4->Size = System::Drawing::Size(56, 35);
			this->ADD4->TabIndex = 7;
			this->ADD4->Text = L"ADD";
			this->ADD4->UseVisualStyleBackColor = true;
			this->ADD4->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD4_Click);
			// 
			// DELE5
			// 
			this->DELE5->Location = System::Drawing::Point(738, 275);
			this->DELE5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE5->Name = L"DELE5";
			this->DELE5->Size = System::Drawing::Size(56, 35);
			this->DELE5->TabIndex = 10;
			this->DELE5->Text = L"DELE";
			this->DELE5->UseVisualStyleBackColor = true;
			this->DELE5->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE5_Click);
			// 
			// ADD5
			// 
			this->ADD5->Location = System::Drawing::Point(576, 275);
			this->ADD5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD5->Name = L"ADD5";
			this->ADD5->Size = System::Drawing::Size(56, 35);
			this->ADD5->TabIndex = 9;
			this->ADD5->Text = L"ADD";
			this->ADD5->UseVisualStyleBackColor = true;
			this->ADD5->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD5_Click);
			// 
			// DELE6
			// 
			this->DELE6->Location = System::Drawing::Point(738, 320);
			this->DELE6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE6->Name = L"DELE6";
			this->DELE6->Size = System::Drawing::Size(56, 35);
			this->DELE6->TabIndex = 12;
			this->DELE6->Text = L"DELE";
			this->DELE6->UseVisualStyleBackColor = true;
			this->DELE6->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE6_Click);
			// 
			// ADD6
			// 
			this->ADD6->Location = System::Drawing::Point(576, 320);
			this->ADD6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD6->Name = L"ADD6";
			this->ADD6->Size = System::Drawing::Size(56, 35);
			this->ADD6->TabIndex = 11;
			this->ADD6->Text = L"ADD";
			this->ADD6->UseVisualStyleBackColor = true;
			this->ADD6->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD6_Click);
			// 
			// DELE7
			// 
			this->DELE7->Location = System::Drawing::Point(738, 366);
			this->DELE7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE7->Name = L"DELE7";
			this->DELE7->Size = System::Drawing::Size(56, 35);
			this->DELE7->TabIndex = 14;
			this->DELE7->Text = L"DELE";
			this->DELE7->UseVisualStyleBackColor = true;
			this->DELE7->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE7_Click);
			// 
			// ADD7
			// 
			this->ADD7->Location = System::Drawing::Point(576, 366);
			this->ADD7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD7->Name = L"ADD7";
			this->ADD7->Size = System::Drawing::Size(56, 35);
			this->ADD7->TabIndex = 13;
			this->ADD7->Text = L"ADD";
			this->ADD7->UseVisualStyleBackColor = true;
			this->ADD7->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD7_Click);
			// 
			// DELE8
			// 
			this->DELE8->Location = System::Drawing::Point(738, 411);
			this->DELE8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE8->Name = L"DELE8";
			this->DELE8->Size = System::Drawing::Size(56, 35);
			this->DELE8->TabIndex = 16;
			this->DELE8->Text = L"DELE";
			this->DELE8->UseVisualStyleBackColor = true;
			this->DELE8->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE8_Click);
			// 
			// ADD8
			// 
			this->ADD8->Location = System::Drawing::Point(576, 411);
			this->ADD8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD8->Name = L"ADD8";
			this->ADD8->Size = System::Drawing::Size(56, 35);
			this->ADD8->TabIndex = 15;
			this->ADD8->Text = L"ADD";
			this->ADD8->UseVisualStyleBackColor = true;
			this->ADD8->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD8_Click);
			// 
			// DELE9
			// 
			this->DELE9->Location = System::Drawing::Point(738, 457);
			this->DELE9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE9->Name = L"DELE9";
			this->DELE9->Size = System::Drawing::Size(56, 35);
			this->DELE9->TabIndex = 18;
			this->DELE9->Text = L"DELE";
			this->DELE9->UseVisualStyleBackColor = true;
			this->DELE9->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE9_Click);
			// 
			// ADD9
			// 
			this->ADD9->Location = System::Drawing::Point(576, 457);
			this->ADD9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD9->Name = L"ADD9";
			this->ADD9->Size = System::Drawing::Size(56, 35);
			this->ADD9->TabIndex = 17;
			this->ADD9->Text = L"ADD";
			this->ADD9->UseVisualStyleBackColor = true;
			this->ADD9->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD9_Click);
			// 
			// DELE10
			// 
			this->DELE10->Location = System::Drawing::Point(738, 503);
			this->DELE10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE10->Name = L"DELE10";
			this->DELE10->Size = System::Drawing::Size(56, 35);
			this->DELE10->TabIndex = 20;
			this->DELE10->Text = L"DELE";
			this->DELE10->UseVisualStyleBackColor = true;
			this->DELE10->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE10_Click);
			// 
			// ADD10
			// 
			this->ADD10->Location = System::Drawing::Point(576, 503);
			this->ADD10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD10->Name = L"ADD10";
			this->ADD10->Size = System::Drawing::Size(56, 35);
			this->ADD10->TabIndex = 19;
			this->ADD10->Text = L"ADD";
			this->ADD10->UseVisualStyleBackColor = true;
			this->ADD10->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD10_Click);
			// 
			// DELE11
			// 
			this->DELE11->Location = System::Drawing::Point(738, 548);
			this->DELE11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE11->Name = L"DELE11";
			this->DELE11->Size = System::Drawing::Size(56, 35);
			this->DELE11->TabIndex = 22;
			this->DELE11->Text = L"DELE";
			this->DELE11->UseVisualStyleBackColor = true;
			this->DELE11->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE11_Click);
			// 
			// ADD11
			// 
			this->ADD11->Location = System::Drawing::Point(576, 548);
			this->ADD11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD11->Name = L"ADD11";
			this->ADD11->Size = System::Drawing::Size(56, 35);
			this->ADD11->TabIndex = 21;
			this->ADD11->Text = L"ADD";
			this->ADD11->UseVisualStyleBackColor = true;
			this->ADD11->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD11_Click);
			// 
			// DELE12
			// 
			this->DELE12->Location = System::Drawing::Point(738, 594);
			this->DELE12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE12->Name = L"DELE12";
			this->DELE12->Size = System::Drawing::Size(56, 35);
			this->DELE12->TabIndex = 24;
			this->DELE12->Text = L"DELE";
			this->DELE12->UseVisualStyleBackColor = true;
			this->DELE12->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE12_Click);
			// 
			// ADD12
			// 
			this->ADD12->Location = System::Drawing::Point(576, 594);
			this->ADD12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD12->Name = L"ADD12";
			this->ADD12->Size = System::Drawing::Size(56, 35);
			this->ADD12->TabIndex = 23;
			this->ADD12->Text = L"ADD";
			this->ADD12->UseVisualStyleBackColor = true;
			this->ADD12->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD12_Click);
			// 
			// DELE13
			// 
			this->DELE13->Location = System::Drawing::Point(738, 639);
			this->DELE13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE13->Name = L"DELE13";
			this->DELE13->Size = System::Drawing::Size(56, 35);
			this->DELE13->TabIndex = 26;
			this->DELE13->Text = L"DELE";
			this->DELE13->UseVisualStyleBackColor = true;
			this->DELE13->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE13_Click);
			// 
			// ADD13
			// 
			this->ADD13->Location = System::Drawing::Point(576, 639);
			this->ADD13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD13->Name = L"ADD13";
			this->ADD13->Size = System::Drawing::Size(56, 35);
			this->ADD13->TabIndex = 25;
			this->ADD13->Text = L"ADD";
			this->ADD13->UseVisualStyleBackColor = true;
			this->ADD13->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD13_Click);
			// 
			// DELE14
			// 
			this->DELE14->Location = System::Drawing::Point(738, 685);
			this->DELE14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE14->Name = L"DELE14";
			this->DELE14->Size = System::Drawing::Size(56, 35);
			this->DELE14->TabIndex = 28;
			this->DELE14->Text = L"DELE";
			this->DELE14->UseVisualStyleBackColor = true;
			this->DELE14->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE14_Click);
			// 
			// ADD14
			// 
			this->ADD14->Location = System::Drawing::Point(576, 685);
			this->ADD14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD14->Name = L"ADD14";
			this->ADD14->Size = System::Drawing::Size(56, 35);
			this->ADD14->TabIndex = 27;
			this->ADD14->Text = L"ADD";
			this->ADD14->UseVisualStyleBackColor = true;
			this->ADD14->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD14_Click);
			// 
			// DELE15
			// 
			this->DELE15->Location = System::Drawing::Point(738, 731);
			this->DELE15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE15->Name = L"DELE15";
			this->DELE15->Size = System::Drawing::Size(56, 35);
			this->DELE15->TabIndex = 30;
			this->DELE15->Text = L"DELE";
			this->DELE15->UseVisualStyleBackColor = true;
			this->DELE15->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE15_Click);
			// 
			// ADD15
			// 
			this->ADD15->Location = System::Drawing::Point(576, 731);
			this->ADD15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD15->Name = L"ADD15";
			this->ADD15->Size = System::Drawing::Size(56, 35);
			this->ADD15->TabIndex = 29;
			this->ADD15->Text = L"ADD";
			this->ADD15->UseVisualStyleBackColor = true;
			this->ADD15->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD15_Click);
			// 
			// DELE16
			// 
			this->DELE16->Location = System::Drawing::Point(738, 776);
			this->DELE16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DELE16->Name = L"DELE16";
			this->DELE16->Size = System::Drawing::Size(56, 35);
			this->DELE16->TabIndex = 32;
			this->DELE16->Text = L"DELE";
			this->DELE16->UseVisualStyleBackColor = true;
			this->DELE16->Click += gcnew System::EventHandler(this, &SetupUserControl::DELE16_Click);
			// 
			// ADD16
			// 
			this->ADD16->Location = System::Drawing::Point(576, 776);
			this->ADD16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ADD16->Name = L"ADD16";
			this->ADD16->Size = System::Drawing::Size(56, 35);
			this->ADD16->TabIndex = 31;
			this->ADD16->Text = L"ADD";
			this->ADD16->UseVisualStyleBackColor = true;
			this->ADD16->Click += gcnew System::EventHandler(this, &SetupUserControl::ADD16_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(296, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 18);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Ch.Name AI_1";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(296, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 18);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Ch.Name AI_2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(296, 191);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 18);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Ch.Name AI_3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(296, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 18);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Ch.Name AI_4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(296, 279);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 18);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Ch.Name AI_5";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(296, 324);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 18);
			this->label7->TabIndex = 37;
			this->label7->Text = L"Ch.Name AI_6";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(296, 370);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 18);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Ch.Name AI_7";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(296, 415);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 18);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Ch.Name AI_8";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(296, 461);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(116, 18);
			this->label10->TabIndex = 40;
			this->label10->Text = L"Ch.Name BI_1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(292, 507);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 18);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Ch.Name BI_2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(292, 552);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(116, 18);
			this->label12->TabIndex = 42;
			this->label12->Text = L"Ch.Name BI_3";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(292, 598);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(116, 18);
			this->label13->TabIndex = 43;
			this->label13->Text = L"Ch.Name BI_4";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(292, 643);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(116, 18);
			this->label14->TabIndex = 44;
			this->label14->Text = L"Ch.Name BI_5";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(292, 689);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(116, 18);
			this->label15->TabIndex = 45;
			this->label15->Text = L"Ch.Name BI_6";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(287, 735);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(116, 18);
			this->label16->TabIndex = 46;
			this->label16->Text = L"Ch.Name BI_7";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(287, 781);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(116, 18);
			this->label17->TabIndex = 47;
			this->label17->Text = L"Ch.Name BI_8";
			// 
			// frechCombox1
			// 
			this->frechCombox1->FormattingEnabled = true;
			this->frechCombox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox1->Location = System::Drawing::Point(428, 96);
			this->frechCombox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox1->Name = L"frechCombox1";
			this->frechCombox1->Size = System::Drawing::Size(98, 26);
			this->frechCombox1->TabIndex = 64;
			this->frechCombox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox1_SelectedIndexChanged);
			// 
			// frechCombox2
			// 
			this->frechCombox2->FormattingEnabled = true;
			this->frechCombox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox2->Location = System::Drawing::Point(428, 143);
			this->frechCombox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox2->Name = L"frechCombox2";
			this->frechCombox2->Size = System::Drawing::Size(98, 26);
			this->frechCombox2->TabIndex = 65;
			this->frechCombox2->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox2_SelectedIndexChanged);
			// 
			// frechCombox3
			// 
			this->frechCombox3->FormattingEnabled = true;
			this->frechCombox3->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox3->Location = System::Drawing::Point(428, 189);
			this->frechCombox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox3->Name = L"frechCombox3";
			this->frechCombox3->Size = System::Drawing::Size(98, 26);
			this->frechCombox3->TabIndex = 66;
			this->frechCombox3->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox3_SelectedIndexChanged);
			// 
			// frechCombox4
			// 
			this->frechCombox4->FormattingEnabled = true;
			this->frechCombox4->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox4->Location = System::Drawing::Point(428, 235);
			this->frechCombox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox4->Name = L"frechCombox4";
			this->frechCombox4->Size = System::Drawing::Size(98, 26);
			this->frechCombox4->TabIndex = 67;
			this->frechCombox4->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox4_SelectedIndexChanged);
			// 
			// frechCombox5
			// 
			this->frechCombox5->FormattingEnabled = true;
			this->frechCombox5->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox5->Location = System::Drawing::Point(428, 280);
			this->frechCombox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox5->Name = L"frechCombox5";
			this->frechCombox5->Size = System::Drawing::Size(98, 26);
			this->frechCombox5->TabIndex = 68;
			this->frechCombox5->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox5_SelectedIndexChanged);
			// 
			// frechCombox6
			// 
			this->frechCombox6->FormattingEnabled = true;
			this->frechCombox6->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox6->Location = System::Drawing::Point(428, 326);
			this->frechCombox6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox6->Name = L"frechCombox6";
			this->frechCombox6->Size = System::Drawing::Size(98, 26);
			this->frechCombox6->TabIndex = 69;
			this->frechCombox6->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox6_SelectedIndexChanged);
			// 
			// frechCombox7
			// 
			this->frechCombox7->FormattingEnabled = true;
			this->frechCombox7->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox7->Location = System::Drawing::Point(428, 371);
			this->frechCombox7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox7->Name = L"frechCombox7";
			this->frechCombox7->Size = System::Drawing::Size(98, 26);
			this->frechCombox7->TabIndex = 70;
			this->frechCombox7->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox7_SelectedIndexChanged);
			// 
			// frechCombox8
			// 
			this->frechCombox8->FormattingEnabled = true;
			this->frechCombox8->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox8->Location = System::Drawing::Point(428, 417);
			this->frechCombox8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox8->Name = L"frechCombox8";
			this->frechCombox8->Size = System::Drawing::Size(98, 26);
			this->frechCombox8->TabIndex = 71;
			this->frechCombox8->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox8_SelectedIndexChanged);
			// 
			// frechCombox9
			// 
			this->frechCombox9->FormattingEnabled = true;
			this->frechCombox9->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox9->Location = System::Drawing::Point(428, 463);
			this->frechCombox9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox9->Name = L"frechCombox9";
			this->frechCombox9->Size = System::Drawing::Size(98, 26);
			this->frechCombox9->TabIndex = 72;
			this->frechCombox9->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox9_SelectedIndexChanged);
			// 
			// frechCombox10
			// 
			this->frechCombox10->FormattingEnabled = true;
			this->frechCombox10->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox10->Location = System::Drawing::Point(428, 508);
			this->frechCombox10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox10->Name = L"frechCombox10";
			this->frechCombox10->Size = System::Drawing::Size(98, 26);
			this->frechCombox10->TabIndex = 73;
			this->frechCombox10->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox10_SelectedIndexChanged);
			// 
			// frechCombox11
			// 
			this->frechCombox11->FormattingEnabled = true;
			this->frechCombox11->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox11->Location = System::Drawing::Point(428, 554);
			this->frechCombox11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox11->Name = L"frechCombox11";
			this->frechCombox11->Size = System::Drawing::Size(98, 26);
			this->frechCombox11->TabIndex = 74;
			this->frechCombox11->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox11_SelectedIndexChanged);
			// 
			// frechCombox12
			// 
			this->frechCombox12->FormattingEnabled = true;
			this->frechCombox12->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox12->Location = System::Drawing::Point(428, 599);
			this->frechCombox12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox12->Name = L"frechCombox12";
			this->frechCombox12->Size = System::Drawing::Size(98, 26);
			this->frechCombox12->TabIndex = 75;
			this->frechCombox12->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox12_SelectedIndexChanged);
			// 
			// frechCombox13
			// 
			this->frechCombox13->FormattingEnabled = true;
			this->frechCombox13->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox13->Location = System::Drawing::Point(428, 645);
			this->frechCombox13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox13->Name = L"frechCombox13";
			this->frechCombox13->Size = System::Drawing::Size(98, 26);
			this->frechCombox13->TabIndex = 76;
			this->frechCombox13->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox13_SelectedIndexChanged);
			// 
			// frechCombox14
			// 
			this->frechCombox14->FormattingEnabled = true;
			this->frechCombox14->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox14->Location = System::Drawing::Point(428, 691);
			this->frechCombox14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox14->Name = L"frechCombox14";
			this->frechCombox14->Size = System::Drawing::Size(98, 26);
			this->frechCombox14->TabIndex = 77;
			this->frechCombox14->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox14_SelectedIndexChanged);
			// 
			// frechCombox15
			// 
			this->frechCombox15->FormattingEnabled = true;
			this->frechCombox15->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox15->Location = System::Drawing::Point(428, 736);
			this->frechCombox15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox15->Name = L"frechCombox15";
			this->frechCombox15->Size = System::Drawing::Size(98, 26);
			this->frechCombox15->TabIndex = 78;
			this->frechCombox15->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox15_SelectedIndexChanged);
			// 
			// frechCombox16
			// 
			this->frechCombox16->FormattingEnabled = true;
			this->frechCombox16->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Counter"});
			this->frechCombox16->Location = System::Drawing::Point(428, 782);
			this->frechCombox16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->frechCombox16->Name = L"frechCombox16";
			this->frechCombox16->Size = System::Drawing::Size(98, 26);
			this->frechCombox16->TabIndex = 79;
			this->frechCombox16->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::frechCombox16_SelectedIndexChanged);
			// 
			// InputNumTextBox1
			// 
			this->InputNumTextBox1->Location = System::Drawing::Point(964, 94);
			this->InputNumTextBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox1->Name = L"InputNumTextBox1";
			this->InputNumTextBox1->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox1->TabIndex = 10;
			this->InputNumTextBox1->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox1_TextChanged);
			// 
			// InputNumTextBox2
			// 
			this->InputNumTextBox2->Location = System::Drawing::Point(964, 139);
			this->InputNumTextBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox2->Name = L"InputNumTextBox2";
			this->InputNumTextBox2->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox2->TabIndex = 80;
			this->InputNumTextBox2->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox2_TextChanged);
			// 
			// InputNumTextBox3
			// 
			this->InputNumTextBox3->Location = System::Drawing::Point(964, 185);
			this->InputNumTextBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox3->Name = L"InputNumTextBox3";
			this->InputNumTextBox3->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox3->TabIndex = 81;
			this->InputNumTextBox3->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox3_TextChanged);
			// 
			// InputNumTextBox4
			// 
			this->InputNumTextBox4->Location = System::Drawing::Point(964, 230);
			this->InputNumTextBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox4->Name = L"InputNumTextBox4";
			this->InputNumTextBox4->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox4->TabIndex = 82;
			this->InputNumTextBox4->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox4_TextChanged);
			// 
			// InputNumTextBox5
			// 
			this->InputNumTextBox5->Location = System::Drawing::Point(964, 276);
			this->InputNumTextBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox5->Name = L"InputNumTextBox5";
			this->InputNumTextBox5->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox5->TabIndex = 83;
			this->InputNumTextBox5->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox5_TextChanged);
			// 
			// InputNumTextBox6
			// 
			this->InputNumTextBox6->Location = System::Drawing::Point(964, 322);
			this->InputNumTextBox6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox6->Name = L"InputNumTextBox6";
			this->InputNumTextBox6->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox6->TabIndex = 84;
			this->InputNumTextBox6->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox6_TextChanged);
			// 
			// InputNumTextBox7
			// 
			this->InputNumTextBox7->Location = System::Drawing::Point(964, 367);
			this->InputNumTextBox7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox7->Name = L"InputNumTextBox7";
			this->InputNumTextBox7->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox7->TabIndex = 85;
			this->InputNumTextBox7->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox7_TextChanged);
			// 
			// InputNumTextBox8
			// 
			this->InputNumTextBox8->Location = System::Drawing::Point(964, 413);
			this->InputNumTextBox8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox8->Name = L"InputNumTextBox8";
			this->InputNumTextBox8->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox8->TabIndex = 86;
			this->InputNumTextBox8->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox8_TextChanged);
			// 
			// InputNumTextBox9
			// 
			this->InputNumTextBox9->Location = System::Drawing::Point(964, 458);
			this->InputNumTextBox9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox9->Name = L"InputNumTextBox9";
			this->InputNumTextBox9->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox9->TabIndex = 87;
			this->InputNumTextBox9->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox9_TextChanged);
			// 
			// InputNumTextBox10
			// 
			this->InputNumTextBox10->Location = System::Drawing::Point(964, 504);
			this->InputNumTextBox10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox10->Name = L"InputNumTextBox10";
			this->InputNumTextBox10->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox10->TabIndex = 88;
			this->InputNumTextBox10->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox10_TextChanged);
			// 
			// InputNumTextBox11
			// 
			this->InputNumTextBox11->Location = System::Drawing::Point(964, 550);
			this->InputNumTextBox11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox11->Name = L"InputNumTextBox11";
			this->InputNumTextBox11->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox11->TabIndex = 89;
			this->InputNumTextBox11->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox11_TextChanged);
			// 
			// InputNumTextBox12
			// 
			this->InputNumTextBox12->Location = System::Drawing::Point(964, 595);
			this->InputNumTextBox12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox12->Name = L"InputNumTextBox12";
			this->InputNumTextBox12->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox12->TabIndex = 90;
			this->InputNumTextBox12->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox12_TextChanged);
			// 
			// InputNumTextBox13
			// 
			this->InputNumTextBox13->Location = System::Drawing::Point(964, 641);
			this->InputNumTextBox13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox13->Name = L"InputNumTextBox13";
			this->InputNumTextBox13->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox13->TabIndex = 91;
			this->InputNumTextBox13->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox13_TextChanged);
			// 
			// InputNumTextBox14
			// 
			this->InputNumTextBox14->Location = System::Drawing::Point(964, 686);
			this->InputNumTextBox14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox14->Name = L"InputNumTextBox14";
			this->InputNumTextBox14->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox14->TabIndex = 92;
			this->InputNumTextBox14->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox14_TextChanged);
			// 
			// InputNumTextBox15
			// 
			this->InputNumTextBox15->Location = System::Drawing::Point(964, 732);
			this->InputNumTextBox15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox15->Name = L"InputNumTextBox15";
			this->InputNumTextBox15->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox15->TabIndex = 93;
			this->InputNumTextBox15->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox15_TextChanged);
			// 
			// InputNumTextBox16
			// 
			this->InputNumTextBox16->Location = System::Drawing::Point(964, 780);
			this->InputNumTextBox16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InputNumTextBox16->Name = L"InputNumTextBox16";
			this->InputNumTextBox16->Size = System::Drawing::Size(64, 28);
			this->InputNumTextBox16->TabIndex = 94;
			this->InputNumTextBox16->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::InputNumTextBox16_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(312, 54);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(1034, 18);
			this->label18->TabIndex = 95;
			this->label18->Text = L"模拟通道      转速通道          共进行()组倍频计算      设置第()组     ()倍频    波动范围 (±)   名称     通道确认" 
				L"";
			// 
			// NmtextBox16
			// 
			this->NmtextBox16->Location = System::Drawing::Point(659, 779);
			this->NmtextBox16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox16->Name = L"NmtextBox16";
			this->NmtextBox16->Size = System::Drawing::Size(52, 28);
			this->NmtextBox16->TabIndex = 111;
			this->NmtextBox16->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox16_TextChanged);
			// 
			// NmtextBox15
			// 
			this->NmtextBox15->Location = System::Drawing::Point(659, 733);
			this->NmtextBox15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox15->Name = L"NmtextBox15";
			this->NmtextBox15->Size = System::Drawing::Size(52, 28);
			this->NmtextBox15->TabIndex = 110;
			this->NmtextBox15->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox15_TextChanged);
			// 
			// NmtextBox14
			// 
			this->NmtextBox14->Location = System::Drawing::Point(659, 687);
			this->NmtextBox14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox14->Name = L"NmtextBox14";
			this->NmtextBox14->Size = System::Drawing::Size(52, 28);
			this->NmtextBox14->TabIndex = 109;
			this->NmtextBox14->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox14_TextChanged);
			// 
			// NmtextBox13
			// 
			this->NmtextBox13->Location = System::Drawing::Point(659, 642);
			this->NmtextBox13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox13->Name = L"NmtextBox13";
			this->NmtextBox13->Size = System::Drawing::Size(52, 28);
			this->NmtextBox13->TabIndex = 108;
			this->NmtextBox13->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox13_TextChanged);
			// 
			// NmtextBox12
			// 
			this->NmtextBox12->Location = System::Drawing::Point(659, 596);
			this->NmtextBox12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox12->Name = L"NmtextBox12";
			this->NmtextBox12->Size = System::Drawing::Size(52, 28);
			this->NmtextBox12->TabIndex = 107;
			this->NmtextBox12->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox12_TextChanged);
			// 
			// NmtextBox11
			// 
			this->NmtextBox11->Location = System::Drawing::Point(659, 551);
			this->NmtextBox11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox11->Name = L"NmtextBox11";
			this->NmtextBox11->Size = System::Drawing::Size(52, 28);
			this->NmtextBox11->TabIndex = 106;
			this->NmtextBox11->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox11_TextChanged);
			// 
			// NmtextBox10
			// 
			this->NmtextBox10->Location = System::Drawing::Point(659, 505);
			this->NmtextBox10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox10->Name = L"NmtextBox10";
			this->NmtextBox10->Size = System::Drawing::Size(52, 28);
			this->NmtextBox10->TabIndex = 105;
			this->NmtextBox10->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox10_TextChanged);
			// 
			// NmtextBox9
			// 
			this->NmtextBox9->Location = System::Drawing::Point(659, 459);
			this->NmtextBox9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox9->Name = L"NmtextBox9";
			this->NmtextBox9->Size = System::Drawing::Size(52, 28);
			this->NmtextBox9->TabIndex = 104;
			this->NmtextBox9->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox9_TextChanged);
			// 
			// NmtextBox8
			// 
			this->NmtextBox8->Location = System::Drawing::Point(659, 414);
			this->NmtextBox8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox8->Name = L"NmtextBox8";
			this->NmtextBox8->Size = System::Drawing::Size(52, 28);
			this->NmtextBox8->TabIndex = 103;
			this->NmtextBox8->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox8_TextChanged);
			// 
			// NmtextBox7
			// 
			this->NmtextBox7->Location = System::Drawing::Point(659, 368);
			this->NmtextBox7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox7->Name = L"NmtextBox7";
			this->NmtextBox7->Size = System::Drawing::Size(52, 28);
			this->NmtextBox7->TabIndex = 102;
			this->NmtextBox7->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox7_TextChanged);
			// 
			// NmtextBox6
			// 
			this->NmtextBox6->Location = System::Drawing::Point(659, 323);
			this->NmtextBox6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox6->Name = L"NmtextBox6";
			this->NmtextBox6->Size = System::Drawing::Size(52, 28);
			this->NmtextBox6->TabIndex = 101;
			this->NmtextBox6->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox6_TextChanged);
			// 
			// NmtextBox5
			// 
			this->NmtextBox5->Location = System::Drawing::Point(659, 277);
			this->NmtextBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox5->Name = L"NmtextBox5";
			this->NmtextBox5->Size = System::Drawing::Size(52, 28);
			this->NmtextBox5->TabIndex = 100;
			this->NmtextBox5->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox5_TextChanged);
			// 
			// NmtextBox4
			// 
			this->NmtextBox4->Location = System::Drawing::Point(659, 231);
			this->NmtextBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox4->Name = L"NmtextBox4";
			this->NmtextBox4->Size = System::Drawing::Size(52, 28);
			this->NmtextBox4->TabIndex = 99;
			this->NmtextBox4->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox4_TextChanged);
			// 
			// NmtextBox3
			// 
			this->NmtextBox3->Location = System::Drawing::Point(659, 186);
			this->NmtextBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox3->Name = L"NmtextBox3";
			this->NmtextBox3->Size = System::Drawing::Size(52, 28);
			this->NmtextBox3->TabIndex = 98;
			this->NmtextBox3->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox3_TextChanged);
			// 
			// NmtextBox2
			// 
			this->NmtextBox2->Location = System::Drawing::Point(659, 140);
			this->NmtextBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox2->Name = L"NmtextBox2";
			this->NmtextBox2->Size = System::Drawing::Size(52, 28);
			this->NmtextBox2->TabIndex = 97;
			this->NmtextBox2->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox2_TextChanged);
			// 
			// NmtextBox1
			// 
			this->NmtextBox1->Location = System::Drawing::Point(659, 94);
			this->NmtextBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NmtextBox1->Name = L"NmtextBox1";
			this->NmtextBox1->Size = System::Drawing::Size(52, 28);
			this->NmtextBox1->TabIndex = 96;
			this->NmtextBox1->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NmtextBox1_TextChanged);
			// 
			// ChTextbox16
			// 
			this->ChTextbox16->Location = System::Drawing::Point(833, 779);
			this->ChTextbox16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox16->Name = L"ChTextbox16";
			this->ChTextbox16->Size = System::Drawing::Size(57, 28);
			this->ChTextbox16->TabIndex = 127;
			this->ChTextbox16->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox16_TextChanged);
			// 
			// ChTextbox15
			// 
			this->ChTextbox15->Location = System::Drawing::Point(833, 733);
			this->ChTextbox15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox15->Name = L"ChTextbox15";
			this->ChTextbox15->Size = System::Drawing::Size(57, 28);
			this->ChTextbox15->TabIndex = 126;
			this->ChTextbox15->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox15_TextChanged);
			// 
			// ChTextbox14
			// 
			this->ChTextbox14->Location = System::Drawing::Point(833, 687);
			this->ChTextbox14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox14->Name = L"ChTextbox14";
			this->ChTextbox14->Size = System::Drawing::Size(57, 28);
			this->ChTextbox14->TabIndex = 125;
			this->ChTextbox14->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox14_TextChanged);
			// 
			// ChTextbox13
			// 
			this->ChTextbox13->Location = System::Drawing::Point(833, 642);
			this->ChTextbox13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox13->Name = L"ChTextbox13";
			this->ChTextbox13->Size = System::Drawing::Size(57, 28);
			this->ChTextbox13->TabIndex = 124;
			this->ChTextbox13->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox13_TextChanged);
			// 
			// ChTextbox12
			// 
			this->ChTextbox12->Location = System::Drawing::Point(833, 596);
			this->ChTextbox12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox12->Name = L"ChTextbox12";
			this->ChTextbox12->Size = System::Drawing::Size(57, 28);
			this->ChTextbox12->TabIndex = 123;
			this->ChTextbox12->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox12_TextChanged);
			// 
			// ChTextbox11
			// 
			this->ChTextbox11->Location = System::Drawing::Point(833, 551);
			this->ChTextbox11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox11->Name = L"ChTextbox11";
			this->ChTextbox11->Size = System::Drawing::Size(57, 28);
			this->ChTextbox11->TabIndex = 122;
			this->ChTextbox11->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox11_TextChanged);
			// 
			// ChTextbox10
			// 
			this->ChTextbox10->Location = System::Drawing::Point(833, 505);
			this->ChTextbox10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox10->Name = L"ChTextbox10";
			this->ChTextbox10->Size = System::Drawing::Size(57, 28);
			this->ChTextbox10->TabIndex = 121;
			this->ChTextbox10->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox10_TextChanged);
			// 
			// ChTextbox9
			// 
			this->ChTextbox9->Location = System::Drawing::Point(833, 459);
			this->ChTextbox9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox9->Name = L"ChTextbox9";
			this->ChTextbox9->Size = System::Drawing::Size(57, 28);
			this->ChTextbox9->TabIndex = 120;
			this->ChTextbox9->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox9_TextChanged);
			// 
			// ChTextbox8
			// 
			this->ChTextbox8->Location = System::Drawing::Point(833, 414);
			this->ChTextbox8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox8->Name = L"ChTextbox8";
			this->ChTextbox8->Size = System::Drawing::Size(57, 28);
			this->ChTextbox8->TabIndex = 119;
			this->ChTextbox8->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox8_TextChanged);
			// 
			// ChTextbox7
			// 
			this->ChTextbox7->Location = System::Drawing::Point(833, 368);
			this->ChTextbox7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox7->Name = L"ChTextbox7";
			this->ChTextbox7->Size = System::Drawing::Size(57, 28);
			this->ChTextbox7->TabIndex = 118;
			this->ChTextbox7->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox7_TextChanged);
			// 
			// ChTextbox6
			// 
			this->ChTextbox6->Location = System::Drawing::Point(833, 323);
			this->ChTextbox6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox6->Name = L"ChTextbox6";
			this->ChTextbox6->Size = System::Drawing::Size(57, 28);
			this->ChTextbox6->TabIndex = 117;
			this->ChTextbox6->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox6_TextChanged);
			// 
			// ChTextbox5
			// 
			this->ChTextbox5->Location = System::Drawing::Point(833, 277);
			this->ChTextbox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox5->Name = L"ChTextbox5";
			this->ChTextbox5->Size = System::Drawing::Size(57, 28);
			this->ChTextbox5->TabIndex = 116;
			this->ChTextbox5->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox5_TextChanged);
			// 
			// ChTextbox4
			// 
			this->ChTextbox4->Location = System::Drawing::Point(833, 231);
			this->ChTextbox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox4->Name = L"ChTextbox4";
			this->ChTextbox4->Size = System::Drawing::Size(57, 28);
			this->ChTextbox4->TabIndex = 115;
			this->ChTextbox4->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox4_TextChanged);
			// 
			// ChTextbox3
			// 
			this->ChTextbox3->Location = System::Drawing::Point(833, 186);
			this->ChTextbox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox3->Name = L"ChTextbox3";
			this->ChTextbox3->Size = System::Drawing::Size(57, 28);
			this->ChTextbox3->TabIndex = 114;
			this->ChTextbox3->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox3_TextChanged);
			// 
			// ChTextbox2
			// 
			this->ChTextbox2->Location = System::Drawing::Point(833, 140);
			this->ChTextbox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox2->Name = L"ChTextbox2";
			this->ChTextbox2->Size = System::Drawing::Size(57, 28);
			this->ChTextbox2->TabIndex = 113;
			this->ChTextbox2->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox2_TextChanged);
			// 
			// ChTextbox1
			// 
			this->ChTextbox1->Location = System::Drawing::Point(833, 94);
			this->ChTextbox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChTextbox1->Name = L"ChTextbox1";
			this->ChTextbox1->Size = System::Drawing::Size(57, 28);
			this->ChTextbox1->TabIndex = 112;
			this->ChTextbox1->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ChTextbox1_TextChanged);
			// 
			// 初始化设置
			// 
			this->初始化设置->Location = System::Drawing::Point(66, 38);
			this->初始化设置->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->初始化设置->Name = L"初始化设置";
			this->初始化设置->Size = System::Drawing::Size(151, 50);
			this->初始化设置->TabIndex = 128;
			this->初始化设置->Text = L"初始化设置";
			this->初始化设置->UseVisualStyleBackColor = true;
			this->初始化设置->Click += gcnew System::EventHandler(this, &SetupUserControl::InitSetup_Click);
			// 
			// ExinputText16
			// 
			this->ExinputText16->Location = System::Drawing::Point(1060, 779);
			this->ExinputText16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText16->Name = L"ExinputText16";
			this->ExinputText16->Size = System::Drawing::Size(64, 28);
			this->ExinputText16->TabIndex = 144;
			this->ExinputText16->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText16_TextChanged);
			// 
			// ExinputText15
			// 
			this->ExinputText15->Location = System::Drawing::Point(1060, 733);
			this->ExinputText15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText15->Name = L"ExinputText15";
			this->ExinputText15->Size = System::Drawing::Size(64, 28);
			this->ExinputText15->TabIndex = 143;
			this->ExinputText15->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText15_TextChanged);
			// 
			// ExinputText14
			// 
			this->ExinputText14->Location = System::Drawing::Point(1060, 687);
			this->ExinputText14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText14->Name = L"ExinputText14";
			this->ExinputText14->Size = System::Drawing::Size(64, 28);
			this->ExinputText14->TabIndex = 142;
			this->ExinputText14->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText14_TextChanged);
			// 
			// ExinputText13
			// 
			this->ExinputText13->Location = System::Drawing::Point(1060, 642);
			this->ExinputText13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText13->Name = L"ExinputText13";
			this->ExinputText13->Size = System::Drawing::Size(64, 28);
			this->ExinputText13->TabIndex = 141;
			this->ExinputText13->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText13_TextChanged);
			// 
			// ExinputText12
			// 
			this->ExinputText12->Location = System::Drawing::Point(1060, 596);
			this->ExinputText12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText12->Name = L"ExinputText12";
			this->ExinputText12->Size = System::Drawing::Size(64, 28);
			this->ExinputText12->TabIndex = 140;
			this->ExinputText12->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText12_TextChanged);
			// 
			// ExinputText11
			// 
			this->ExinputText11->Location = System::Drawing::Point(1060, 551);
			this->ExinputText11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText11->Name = L"ExinputText11";
			this->ExinputText11->Size = System::Drawing::Size(64, 28);
			this->ExinputText11->TabIndex = 139;
			this->ExinputText11->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText11_TextChanged);
			// 
			// ExinputText10
			// 
			this->ExinputText10->Location = System::Drawing::Point(1060, 505);
			this->ExinputText10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText10->Name = L"ExinputText10";
			this->ExinputText10->Size = System::Drawing::Size(64, 28);
			this->ExinputText10->TabIndex = 138;
			this->ExinputText10->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText10_TextChanged);
			// 
			// ExinputText9
			// 
			this->ExinputText9->Location = System::Drawing::Point(1060, 459);
			this->ExinputText9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText9->Name = L"ExinputText9";
			this->ExinputText9->Size = System::Drawing::Size(64, 28);
			this->ExinputText9->TabIndex = 137;
			this->ExinputText9->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText9_TextChanged);
			// 
			// ExinputText8
			// 
			this->ExinputText8->Location = System::Drawing::Point(1060, 414);
			this->ExinputText8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText8->Name = L"ExinputText8";
			this->ExinputText8->Size = System::Drawing::Size(64, 28);
			this->ExinputText8->TabIndex = 136;
			this->ExinputText8->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText8_TextChanged);
			// 
			// ExinputText7
			// 
			this->ExinputText7->Location = System::Drawing::Point(1060, 368);
			this->ExinputText7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText7->Name = L"ExinputText7";
			this->ExinputText7->Size = System::Drawing::Size(64, 28);
			this->ExinputText7->TabIndex = 135;
			this->ExinputText7->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText7_TextChanged);
			// 
			// ExinputText6
			// 
			this->ExinputText6->Location = System::Drawing::Point(1060, 323);
			this->ExinputText6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText6->Name = L"ExinputText6";
			this->ExinputText6->Size = System::Drawing::Size(64, 28);
			this->ExinputText6->TabIndex = 134;
			this->ExinputText6->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText6_TextChanged);
			// 
			// ExinputText5
			// 
			this->ExinputText5->Location = System::Drawing::Point(1060, 277);
			this->ExinputText5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText5->Name = L"ExinputText5";
			this->ExinputText5->Size = System::Drawing::Size(64, 28);
			this->ExinputText5->TabIndex = 133;
			this->ExinputText5->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText5_TextChanged);
			// 
			// ExinputText4
			// 
			this->ExinputText4->Location = System::Drawing::Point(1060, 231);
			this->ExinputText4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText4->Name = L"ExinputText4";
			this->ExinputText4->Size = System::Drawing::Size(64, 28);
			this->ExinputText4->TabIndex = 132;
			this->ExinputText4->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText4_TextChanged);
			// 
			// ExinputText3
			// 
			this->ExinputText3->Location = System::Drawing::Point(1060, 186);
			this->ExinputText3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText3->Name = L"ExinputText3";
			this->ExinputText3->Size = System::Drawing::Size(64, 28);
			this->ExinputText3->TabIndex = 131;
			this->ExinputText3->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText3_TextChanged);
			// 
			// ExinputText2
			// 
			this->ExinputText2->Location = System::Drawing::Point(1060, 140);
			this->ExinputText2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText2->Name = L"ExinputText2";
			this->ExinputText2->Size = System::Drawing::Size(64, 28);
			this->ExinputText2->TabIndex = 130;
			this->ExinputText2->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText2_TextChanged);
			// 
			// ExinputText1
			// 
			this->ExinputText1->Location = System::Drawing::Point(1060, 94);
			this->ExinputText1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExinputText1->Name = L"ExinputText1";
			this->ExinputText1->Size = System::Drawing::Size(64, 28);
			this->ExinputText1->TabIndex = 129;
			this->ExinputText1->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::ExinputText1_TextChanged);
			// 
			// Chnum16
			// 
			this->Chnum16->Location = System::Drawing::Point(897, 776);
			this->Chnum16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum16->Name = L"Chnum16";
			this->Chnum16->Size = System::Drawing::Size(28, 35);
			this->Chnum16->TabIndex = 160;
			this->Chnum16->Text = L"+";
			this->Chnum16->UseVisualStyleBackColor = true;
			this->Chnum16->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum16_Click);
			// 
			// Chnum15
			// 
			this->Chnum15->Location = System::Drawing::Point(897, 731);
			this->Chnum15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum15->Name = L"Chnum15";
			this->Chnum15->Size = System::Drawing::Size(28, 35);
			this->Chnum15->TabIndex = 159;
			this->Chnum15->Text = L"+";
			this->Chnum15->UseVisualStyleBackColor = true;
			this->Chnum15->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum15_Click);
			// 
			// Chnum14
			// 
			this->Chnum14->Location = System::Drawing::Point(897, 685);
			this->Chnum14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum14->Name = L"Chnum14";
			this->Chnum14->Size = System::Drawing::Size(28, 35);
			this->Chnum14->TabIndex = 158;
			this->Chnum14->Text = L"+";
			this->Chnum14->UseVisualStyleBackColor = true;
			this->Chnum14->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum14_Click);
			// 
			// Chnum13
			// 
			this->Chnum13->Location = System::Drawing::Point(897, 639);
			this->Chnum13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum13->Name = L"Chnum13";
			this->Chnum13->Size = System::Drawing::Size(28, 35);
			this->Chnum13->TabIndex = 157;
			this->Chnum13->Text = L"+";
			this->Chnum13->UseVisualStyleBackColor = true;
			this->Chnum13->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum13_Click);
			// 
			// Chnum12
			// 
			this->Chnum12->Location = System::Drawing::Point(897, 594);
			this->Chnum12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum12->Name = L"Chnum12";
			this->Chnum12->Size = System::Drawing::Size(28, 35);
			this->Chnum12->TabIndex = 156;
			this->Chnum12->Text = L"+";
			this->Chnum12->UseVisualStyleBackColor = true;
			this->Chnum12->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum12_Click);
			// 
			// Chnum11
			// 
			this->Chnum11->Location = System::Drawing::Point(897, 548);
			this->Chnum11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum11->Name = L"Chnum11";
			this->Chnum11->Size = System::Drawing::Size(28, 35);
			this->Chnum11->TabIndex = 155;
			this->Chnum11->Text = L"+";
			this->Chnum11->UseVisualStyleBackColor = true;
			this->Chnum11->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum11_Click);
			// 
			// Chnum10
			// 
			this->Chnum10->Location = System::Drawing::Point(897, 503);
			this->Chnum10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum10->Name = L"Chnum10";
			this->Chnum10->Size = System::Drawing::Size(28, 35);
			this->Chnum10->TabIndex = 154;
			this->Chnum10->Text = L"+";
			this->Chnum10->UseVisualStyleBackColor = true;
			this->Chnum10->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum10_Click);
			// 
			// Chnum9
			// 
			this->Chnum9->Location = System::Drawing::Point(897, 457);
			this->Chnum9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum9->Name = L"Chnum9";
			this->Chnum9->Size = System::Drawing::Size(28, 35);
			this->Chnum9->TabIndex = 153;
			this->Chnum9->Text = L"+";
			this->Chnum9->UseVisualStyleBackColor = true;
			this->Chnum9->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum9_Click);
			// 
			// Chnum8
			// 
			this->Chnum8->Location = System::Drawing::Point(897, 411);
			this->Chnum8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum8->Name = L"Chnum8";
			this->Chnum8->Size = System::Drawing::Size(28, 35);
			this->Chnum8->TabIndex = 152;
			this->Chnum8->Text = L"+";
			this->Chnum8->UseVisualStyleBackColor = true;
			this->Chnum8->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum8_Click);
			// 
			// Chnum7
			// 
			this->Chnum7->Location = System::Drawing::Point(897, 366);
			this->Chnum7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum7->Name = L"Chnum7";
			this->Chnum7->Size = System::Drawing::Size(28, 35);
			this->Chnum7->TabIndex = 151;
			this->Chnum7->Text = L"+";
			this->Chnum7->UseVisualStyleBackColor = true;
			this->Chnum7->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum7_Click);
			// 
			// Chnum6
			// 
			this->Chnum6->Location = System::Drawing::Point(897, 320);
			this->Chnum6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum6->Name = L"Chnum6";
			this->Chnum6->Size = System::Drawing::Size(28, 35);
			this->Chnum6->TabIndex = 150;
			this->Chnum6->Text = L"+";
			this->Chnum6->UseVisualStyleBackColor = true;
			this->Chnum6->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum6_Click);
			// 
			// Chnum5
			// 
			this->Chnum5->Location = System::Drawing::Point(897, 275);
			this->Chnum5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum5->Name = L"Chnum5";
			this->Chnum5->Size = System::Drawing::Size(28, 35);
			this->Chnum5->TabIndex = 149;
			this->Chnum5->Text = L"+";
			this->Chnum5->UseVisualStyleBackColor = true;
			this->Chnum5->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum5_Click);
			// 
			// Chnum4
			// 
			this->Chnum4->Location = System::Drawing::Point(897, 229);
			this->Chnum4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum4->Name = L"Chnum4";
			this->Chnum4->Size = System::Drawing::Size(28, 35);
			this->Chnum4->TabIndex = 148;
			this->Chnum4->Text = L"+";
			this->Chnum4->UseVisualStyleBackColor = true;
			this->Chnum4->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum4_Click);
			// 
			// Chnum3
			// 
			this->Chnum3->Location = System::Drawing::Point(897, 183);
			this->Chnum3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum3->Name = L"Chnum3";
			this->Chnum3->Size = System::Drawing::Size(28, 35);
			this->Chnum3->TabIndex = 147;
			this->Chnum3->Text = L"+";
			this->Chnum3->UseVisualStyleBackColor = true;
			this->Chnum3->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum3_Click);
			// 
			// Chnum2
			// 
			this->Chnum2->Location = System::Drawing::Point(897, 138);
			this->Chnum2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum2->Name = L"Chnum2";
			this->Chnum2->Size = System::Drawing::Size(28, 35);
			this->Chnum2->TabIndex = 146;
			this->Chnum2->Text = L"+";
			this->Chnum2->UseVisualStyleBackColor = true;
			this->Chnum2->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum2_Click);
			// 
			// Chnum1
			// 
			this->Chnum1->Location = System::Drawing::Point(897, 91);
			this->Chnum1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Chnum1->Name = L"Chnum1";
			this->Chnum1->Size = System::Drawing::Size(28, 35);
			this->Chnum1->TabIndex = 145;
			this->Chnum1->Text = L"+";
			this->Chnum1->UseVisualStyleBackColor = true;
			this->Chnum1->Click += gcnew System::EventHandler(this, &SetupUserControl::Chnum1_Click);
			// 
			// NameBox16
			// 
			this->NameBox16->Location = System::Drawing::Point(1164, 778);
			this->NameBox16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox16->Name = L"NameBox16";
			this->NameBox16->Size = System::Drawing::Size(74, 28);
			this->NameBox16->TabIndex = 176;
			this->NameBox16->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox16_TextChanged);
			// 
			// NameBox15
			// 
			this->NameBox15->Location = System::Drawing::Point(1164, 732);
			this->NameBox15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox15->Name = L"NameBox15";
			this->NameBox15->Size = System::Drawing::Size(74, 28);
			this->NameBox15->TabIndex = 175;
			this->NameBox15->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox15_TextChanged);
			// 
			// NameBox14
			// 
			this->NameBox14->Location = System::Drawing::Point(1164, 686);
			this->NameBox14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox14->Name = L"NameBox14";
			this->NameBox14->Size = System::Drawing::Size(74, 28);
			this->NameBox14->TabIndex = 174;
			this->NameBox14->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox14_TextChanged);
			// 
			// NameBox13
			// 
			this->NameBox13->Location = System::Drawing::Point(1164, 641);
			this->NameBox13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox13->Name = L"NameBox13";
			this->NameBox13->Size = System::Drawing::Size(74, 28);
			this->NameBox13->TabIndex = 173;
			this->NameBox13->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox13_TextChanged);
			// 
			// NameBox12
			// 
			this->NameBox12->Location = System::Drawing::Point(1164, 595);
			this->NameBox12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox12->Name = L"NameBox12";
			this->NameBox12->Size = System::Drawing::Size(74, 28);
			this->NameBox12->TabIndex = 172;
			this->NameBox12->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox12_TextChanged);
			// 
			// NameBox11
			// 
			this->NameBox11->Location = System::Drawing::Point(1164, 550);
			this->NameBox11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox11->Name = L"NameBox11";
			this->NameBox11->Size = System::Drawing::Size(74, 28);
			this->NameBox11->TabIndex = 171;
			this->NameBox11->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox11_TextChanged);
			// 
			// NameBox10
			// 
			this->NameBox10->Location = System::Drawing::Point(1164, 504);
			this->NameBox10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox10->Name = L"NameBox10";
			this->NameBox10->Size = System::Drawing::Size(74, 28);
			this->NameBox10->TabIndex = 170;
			this->NameBox10->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox10_TextChanged);
			// 
			// NameBox9
			// 
			this->NameBox9->Location = System::Drawing::Point(1164, 458);
			this->NameBox9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox9->Name = L"NameBox9";
			this->NameBox9->Size = System::Drawing::Size(74, 28);
			this->NameBox9->TabIndex = 169;
			this->NameBox9->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox9_TextChanged);
			// 
			// NameBox8
			// 
			this->NameBox8->Location = System::Drawing::Point(1164, 413);
			this->NameBox8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox8->Name = L"NameBox8";
			this->NameBox8->Size = System::Drawing::Size(74, 28);
			this->NameBox8->TabIndex = 168;
			this->NameBox8->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox8_TextChanged);
			// 
			// NameBox7
			// 
			this->NameBox7->Location = System::Drawing::Point(1164, 367);
			this->NameBox7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox7->Name = L"NameBox7";
			this->NameBox7->Size = System::Drawing::Size(74, 28);
			this->NameBox7->TabIndex = 167;
			this->NameBox7->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox7_TextChanged);
			// 
			// NameBox6
			// 
			this->NameBox6->Location = System::Drawing::Point(1164, 322);
			this->NameBox6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox6->Name = L"NameBox6";
			this->NameBox6->Size = System::Drawing::Size(74, 28);
			this->NameBox6->TabIndex = 166;
			this->NameBox6->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox6_TextChanged);
			// 
			// NameBox5
			// 
			this->NameBox5->Location = System::Drawing::Point(1164, 276);
			this->NameBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox5->Name = L"NameBox5";
			this->NameBox5->Size = System::Drawing::Size(74, 28);
			this->NameBox5->TabIndex = 165;
			this->NameBox5->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox5_TextChanged);
			// 
			// NameBox4
			// 
			this->NameBox4->Location = System::Drawing::Point(1164, 230);
			this->NameBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox4->Name = L"NameBox4";
			this->NameBox4->Size = System::Drawing::Size(74, 28);
			this->NameBox4->TabIndex = 164;
			this->NameBox4->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox4_TextChanged);
			// 
			// NameBox3
			// 
			this->NameBox3->Location = System::Drawing::Point(1164, 185);
			this->NameBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox3->Name = L"NameBox3";
			this->NameBox3->Size = System::Drawing::Size(74, 28);
			this->NameBox3->TabIndex = 163;
			this->NameBox3->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox3_TextChanged);
			// 
			// NameBox2
			// 
			this->NameBox2->Location = System::Drawing::Point(1164, 139);
			this->NameBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox2->Name = L"NameBox2";
			this->NameBox2->Size = System::Drawing::Size(74, 28);
			this->NameBox2->TabIndex = 162;
			this->NameBox2->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox2_TextChanged);
			// 
			// NameBox1
			// 
			this->NameBox1->Location = System::Drawing::Point(1164, 94);
			this->NameBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NameBox1->Name = L"NameBox1";
			this->NameBox1->Size = System::Drawing::Size(74, 28);
			this->NameBox1->TabIndex = 161;
			this->NameBox1->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::NameBox1_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"间隔计算", L"连续计算"});
			this->comboBox1->Location = System::Drawing::Point(9, 29);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(106, 26);
			this->comboBox1->TabIndex = 195;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::comboBox1_SelectedIndexChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(7, 71);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(62, 18);
			this->label19->TabIndex = 197;
			this->label19->Text = L"每间隔";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 96);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 28);
			this->textBox1->TabIndex = 196;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::textBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->SignelBox);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(42, 130);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Size = System::Drawing::Size(239, 246);
			this->groupBox1->TabIndex = 198;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"采集模式";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &SetupUserControl::groupBox1_Enter);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(96, 208);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(89, 18);
			this->label22->TabIndex = 201;
			this->label22->Text = L"次输出1次";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(91, 107);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(89, 18);
			this->label21->TabIndex = 200;
			this->label21->Text = L"秒计算1次";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(7, 163);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(134, 18);
			this->label20->TabIndex = 199;
			this->label20->Text = L"原始信号每触发";
			// 
			// SignelBox
			// 
			this->SignelBox->Location = System::Drawing::Point(10, 198);
			this->SignelBox->Name = L"SignelBox";
			this->SignelBox->Size = System::Drawing::Size(78, 28);
			this->SignelBox->TabIndex = 198;
			this->SignelBox->TextChanged += gcnew System::EventHandler(this, &SetupUserControl::Signel_TextChanged);
			// 
			// listViewInfo
			// 
			this->listViewInfo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader2, 
				this->columnHeader3, this->columnHeader4});
			this->listViewInfo->Location = System::Drawing::Point(42, 440);
			this->listViewInfo->Name = L"listViewInfo";
			this->listViewInfo->Size = System::Drawing::Size(228, 359);
			this->listViewInfo->TabIndex = 200;
			this->listViewInfo->UseCompatibleStateImageBehavior = false;
			this->listViewInfo->View = System::Windows::Forms::View::Details;
			this->listViewInfo->SelectedIndexChanged += gcnew System::EventHandler(this, &SetupUserControl::listViewInfo_SelectedIndexChanged);
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"组";
			this->columnHeader2->Width = 50;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"倍频";
			this->columnHeader3->Width = 61;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"波动范围";
			this->columnHeader4->Width = 121;
			// 
			// Print
			// 
			this->Print->Location = System::Drawing::Point(1271, 95);
			this->Print->Name = L"Print";
			this->Print->Size = System::Drawing::Size(75, 27);
			this->Print->TabIndex = 202;
			this->Print->Text = L"A1确认";
			this->Print->UseVisualStyleBackColor = true;
			this->Print->Click += gcnew System::EventHandler(this, &SetupUserControl::Print_Information);
			// 
			// Print2
			// 
			this->Print2->Location = System::Drawing::Point(1271, 137);
			this->Print2->Name = L"Print2";
			this->Print2->Size = System::Drawing::Size(75, 28);
			this->Print2->TabIndex = 203;
			this->Print2->Text = L"A2确认";
			this->Print2->UseVisualStyleBackColor = true;
			this->Print2->Click += gcnew System::EventHandler(this, &SetupUserControl::Print2_Information);
			// 
			// Print3
			// 
			this->Print3->Location = System::Drawing::Point(1271, 188);
			this->Print3->Name = L"Print3";
			this->Print3->Size = System::Drawing::Size(75, 27);
			this->Print3->TabIndex = 204;
			this->Print3->Text = L"A3确认";
			this->Print3->UseVisualStyleBackColor = true;
			this->Print3->Click += gcnew System::EventHandler(this, &SetupUserControl::Print3_Information);
			// 
			// Print4
			// 
			this->Print4->Location = System::Drawing::Point(1271, 231);
			this->Print4->Name = L"Print4";
			this->Print4->Size = System::Drawing::Size(75, 27);
			this->Print4->TabIndex = 205;
			this->Print4->Text = L"A4确认";
			this->Print4->UseVisualStyleBackColor = true;
			this->Print4->Click += gcnew System::EventHandler(this, &SetupUserControl::Print4_Information);
			// 
			// Print5
			// 
			this->Print5->Location = System::Drawing::Point(1271, 276);
			this->Print5->Name = L"Print5";
			this->Print5->Size = System::Drawing::Size(75, 28);
			this->Print5->TabIndex = 206;
			this->Print5->Text = L"A5确认";
			this->Print5->UseVisualStyleBackColor = true;
			this->Print5->Click += gcnew System::EventHandler(this, &SetupUserControl::Print5_Information);
			// 
			// Print6
			// 
			this->Print6->Location = System::Drawing::Point(1271, 322);
			this->Print6->Name = L"Print6";
			this->Print6->Size = System::Drawing::Size(75, 28);
			this->Print6->TabIndex = 207;
			this->Print6->Text = L"A6确认";
			this->Print6->UseVisualStyleBackColor = true;
			this->Print6->Click += gcnew System::EventHandler(this, &SetupUserControl::Print6_Information);
			// 
			// Print7
			// 
			this->Print7->Location = System::Drawing::Point(1271, 367);
			this->Print7->Name = L"Print7";
			this->Print7->Size = System::Drawing::Size(75, 28);
			this->Print7->TabIndex = 208;
			this->Print7->Text = L"A7确认";
			this->Print7->UseVisualStyleBackColor = true;
			this->Print7->Click += gcnew System::EventHandler(this, &SetupUserControl::Print7_Information);
			// 
			// Print8
			// 
			this->Print8->Location = System::Drawing::Point(1271, 410);
			this->Print8->Name = L"Print8";
			this->Print8->Size = System::Drawing::Size(75, 30);
			this->Print8->TabIndex = 209;
			this->Print8->Text = L"A8确认";
			this->Print8->UseVisualStyleBackColor = true;
			this->Print8->Click += gcnew System::EventHandler(this, &SetupUserControl::Print8_Information);
			// 
			// Print9
			// 
			this->Print9->Location = System::Drawing::Point(1271, 463);
			this->Print9->Name = L"Print9";
			this->Print9->Size = System::Drawing::Size(75, 23);
			this->Print9->TabIndex = 210;
			this->Print9->Text = L"B1确认";
			this->Print9->UseVisualStyleBackColor = true;
			this->Print9->Click += gcnew System::EventHandler(this, &SetupUserControl::Print9_Information);
			// 
			// Print10
			// 
			this->Print10->Location = System::Drawing::Point(1271, 504);
			this->Print10->Name = L"Print10";
			this->Print10->Size = System::Drawing::Size(75, 23);
			this->Print10->TabIndex = 211;
			this->Print10->Text = L"B2确认";
			this->Print10->UseVisualStyleBackColor = true;
			this->Print10->Click += gcnew System::EventHandler(this, &SetupUserControl::Print10_Information);
			// 
			// Print11
			// 
			this->Print11->Location = System::Drawing::Point(1271, 549);
			this->Print11->Name = L"Print11";
			this->Print11->Size = System::Drawing::Size(75, 23);
			this->Print11->TabIndex = 212;
			this->Print11->Text = L"B3确认";
			this->Print11->UseVisualStyleBackColor = true;
			this->Print11->Click += gcnew System::EventHandler(this, &SetupUserControl::Print11_Information);
			// 
			// Print12
			// 
			this->Print12->Location = System::Drawing::Point(1271, 595);
			this->Print12->Name = L"Print12";
			this->Print12->Size = System::Drawing::Size(75, 23);
			this->Print12->TabIndex = 213;
			this->Print12->Text = L"B4确认";
			this->Print12->UseVisualStyleBackColor = true;
			this->Print12->Click += gcnew System::EventHandler(this, &SetupUserControl::Print12_Information);
			// 
			// Print13
			// 
			this->Print13->Location = System::Drawing::Point(1271, 640);
			this->Print13->Name = L"Print13";
			this->Print13->Size = System::Drawing::Size(75, 23);
			this->Print13->TabIndex = 214;
			this->Print13->Text = L"B5确认";
			this->Print13->UseVisualStyleBackColor = true;
			this->Print13->Click += gcnew System::EventHandler(this, &SetupUserControl::Print13_Information);
			// 
			// Print14
			// 
			this->Print14->Location = System::Drawing::Point(1271, 686);
			this->Print14->Name = L"Print14";
			this->Print14->Size = System::Drawing::Size(75, 23);
			this->Print14->TabIndex = 215;
			this->Print14->Text = L"B6确认";
			this->Print14->UseVisualStyleBackColor = true;
			this->Print14->Click += gcnew System::EventHandler(this, &SetupUserControl::Print14_Information);
			// 
			// Print15
			// 
			this->Print15->Location = System::Drawing::Point(1271, 732);
			this->Print15->Name = L"Print15";
			this->Print15->Size = System::Drawing::Size(75, 23);
			this->Print15->TabIndex = 216;
			this->Print15->Text = L"B7确认";
			this->Print15->UseVisualStyleBackColor = true;
			this->Print15->Click += gcnew System::EventHandler(this, &SetupUserControl::Print15_Information);
			// 
			// Print16
			// 
			this->Print16->Location = System::Drawing::Point(1271, 782);
			this->Print16->Name = L"Print16";
			this->Print16->Size = System::Drawing::Size(75, 23);
			this->Print16->TabIndex = 217;
			this->Print16->Text = L"B8确认";
			this->Print16->UseVisualStyleBackColor = true;
			this->Print16->Click += gcnew System::EventHandler(this, &SetupUserControl::Print16_Information);
			// 
			// ChNameBox
			// 
			this->ChNameBox->Location = System::Drawing::Point(51, 404);
			this->ChNameBox->Name = L"ChNameBox";
			this->ChNameBox->ReadOnly = true;
			this->ChNameBox->Size = System::Drawing::Size(68, 28);
			this->ChNameBox->TabIndex = 218;
			// 
			// ChName
			// 
			this->ChName->AutoSize = true;
			this->ChName->Location = System::Drawing::Point(49, 383);
			this->ChName->Name = L"ChName";
			this->ChName->Size = System::Drawing::Size(71, 18);
			this->ChName->TabIndex = 219;
			this->ChName->Text = L"Ch.Name";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(128, 384);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(62, 18);
			this->label23->TabIndex = 220;
			this->label23->Text = L"Ch.Sum";
			// 
			// SUM
			// 
			this->SUM->Location = System::Drawing::Point(126, 404);
			this->SUM->Name = L"SUM";
			this->SUM->ReadOnly = true;
			this->SUM->Size = System::Drawing::Size(68, 28);
			this->SUM->TabIndex = 221;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(198, 383);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(62, 18);
			this->label24->TabIndex = 222;
			this->label24->Text = L"Ch.Fre";
			// 
			// ChFre
			// 
			this->ChFre->Location = System::Drawing::Point(201, 404);
			this->ChFre->Name = L"ChFre";
			this->ChFre->ReadOnly = true;
			this->ChFre->Size = System::Drawing::Size(68, 28);
			this->ChFre->TabIndex = 223;
			// 
			// SetupUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Controls->Add(this->ChFre);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->SUM);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->ChName);
			this->Controls->Add(this->ChNameBox);
			this->Controls->Add(this->Print16);
			this->Controls->Add(this->Print15);
			this->Controls->Add(this->Print14);
			this->Controls->Add(this->Print13);
			this->Controls->Add(this->Print12);
			this->Controls->Add(this->Print11);
			this->Controls->Add(this->Print10);
			this->Controls->Add(this->Print9);
			this->Controls->Add(this->Print8);
			this->Controls->Add(this->Print7);
			this->Controls->Add(this->Print6);
			this->Controls->Add(this->Print5);
			this->Controls->Add(this->Print4);
			this->Controls->Add(this->Print3);
			this->Controls->Add(this->Print2);
			this->Controls->Add(this->Print);
			this->Controls->Add(this->listViewInfo);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->NameBox16);
			this->Controls->Add(this->NameBox15);
			this->Controls->Add(this->NameBox14);
			this->Controls->Add(this->NameBox13);
			this->Controls->Add(this->NameBox12);
			this->Controls->Add(this->NameBox11);
			this->Controls->Add(this->NameBox10);
			this->Controls->Add(this->NameBox9);
			this->Controls->Add(this->NameBox8);
			this->Controls->Add(this->NameBox7);
			this->Controls->Add(this->NameBox6);
			this->Controls->Add(this->NameBox5);
			this->Controls->Add(this->NameBox4);
			this->Controls->Add(this->NameBox3);
			this->Controls->Add(this->NameBox2);
			this->Controls->Add(this->NameBox1);
			this->Controls->Add(this->Chnum16);
			this->Controls->Add(this->Chnum15);
			this->Controls->Add(this->Chnum14);
			this->Controls->Add(this->Chnum13);
			this->Controls->Add(this->Chnum12);
			this->Controls->Add(this->Chnum11);
			this->Controls->Add(this->Chnum10);
			this->Controls->Add(this->Chnum9);
			this->Controls->Add(this->Chnum8);
			this->Controls->Add(this->Chnum7);
			this->Controls->Add(this->Chnum6);
			this->Controls->Add(this->Chnum5);
			this->Controls->Add(this->Chnum4);
			this->Controls->Add(this->Chnum3);
			this->Controls->Add(this->Chnum2);
			this->Controls->Add(this->Chnum1);
			this->Controls->Add(this->ExinputText16);
			this->Controls->Add(this->ExinputText15);
			this->Controls->Add(this->ExinputText14);
			this->Controls->Add(this->ExinputText13);
			this->Controls->Add(this->ExinputText12);
			this->Controls->Add(this->ExinputText11);
			this->Controls->Add(this->ExinputText10);
			this->Controls->Add(this->ExinputText9);
			this->Controls->Add(this->ExinputText8);
			this->Controls->Add(this->ExinputText7);
			this->Controls->Add(this->ExinputText6);
			this->Controls->Add(this->ExinputText5);
			this->Controls->Add(this->ExinputText4);
			this->Controls->Add(this->ExinputText3);
			this->Controls->Add(this->ExinputText2);
			this->Controls->Add(this->ExinputText1);
			this->Controls->Add(this->初始化设置);
			this->Controls->Add(this->ChTextbox16);
			this->Controls->Add(this->ChTextbox15);
			this->Controls->Add(this->ChTextbox14);
			this->Controls->Add(this->ChTextbox13);
			this->Controls->Add(this->ChTextbox12);
			this->Controls->Add(this->ChTextbox11);
			this->Controls->Add(this->ChTextbox10);
			this->Controls->Add(this->ChTextbox9);
			this->Controls->Add(this->ChTextbox8);
			this->Controls->Add(this->ChTextbox7);
			this->Controls->Add(this->ChTextbox6);
			this->Controls->Add(this->ChTextbox5);
			this->Controls->Add(this->ChTextbox4);
			this->Controls->Add(this->ChTextbox3);
			this->Controls->Add(this->ChTextbox2);
			this->Controls->Add(this->ChTextbox1);
			this->Controls->Add(this->NmtextBox16);
			this->Controls->Add(this->NmtextBox15);
			this->Controls->Add(this->NmtextBox14);
			this->Controls->Add(this->NmtextBox13);
			this->Controls->Add(this->NmtextBox12);
			this->Controls->Add(this->NmtextBox11);
			this->Controls->Add(this->NmtextBox10);
			this->Controls->Add(this->NmtextBox9);
			this->Controls->Add(this->NmtextBox8);
			this->Controls->Add(this->NmtextBox7);
			this->Controls->Add(this->NmtextBox6);
			this->Controls->Add(this->NmtextBox5);
			this->Controls->Add(this->NmtextBox4);
			this->Controls->Add(this->NmtextBox3);
			this->Controls->Add(this->NmtextBox2);
			this->Controls->Add(this->NmtextBox1);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->InputNumTextBox16);
			this->Controls->Add(this->InputNumTextBox15);
			this->Controls->Add(this->InputNumTextBox14);
			this->Controls->Add(this->InputNumTextBox13);
			this->Controls->Add(this->InputNumTextBox12);
			this->Controls->Add(this->InputNumTextBox11);
			this->Controls->Add(this->InputNumTextBox10);
			this->Controls->Add(this->InputNumTextBox9);
			this->Controls->Add(this->InputNumTextBox8);
			this->Controls->Add(this->InputNumTextBox7);
			this->Controls->Add(this->InputNumTextBox6);
			this->Controls->Add(this->InputNumTextBox5);
			this->Controls->Add(this->InputNumTextBox4);
			this->Controls->Add(this->InputNumTextBox3);
			this->Controls->Add(this->InputNumTextBox2);
			this->Controls->Add(this->InputNumTextBox1);
			this->Controls->Add(this->frechCombox16);
			this->Controls->Add(this->frechCombox15);
			this->Controls->Add(this->frechCombox14);
			this->Controls->Add(this->frechCombox13);
			this->Controls->Add(this->frechCombox12);
			this->Controls->Add(this->frechCombox11);
			this->Controls->Add(this->frechCombox10);
			this->Controls->Add(this->frechCombox9);
			this->Controls->Add(this->frechCombox8);
			this->Controls->Add(this->frechCombox7);
			this->Controls->Add(this->frechCombox6);
			this->Controls->Add(this->frechCombox5);
			this->Controls->Add(this->frechCombox4);
			this->Controls->Add(this->frechCombox3);
			this->Controls->Add(this->frechCombox2);
			this->Controls->Add(this->frechCombox1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DELE16);
			this->Controls->Add(this->ADD16);
			this->Controls->Add(this->DELE15);
			this->Controls->Add(this->ADD15);
			this->Controls->Add(this->DELE14);
			this->Controls->Add(this->ADD14);
			this->Controls->Add(this->DELE13);
			this->Controls->Add(this->ADD13);
			this->Controls->Add(this->DELE12);
			this->Controls->Add(this->ADD12);
			this->Controls->Add(this->DELE11);
			this->Controls->Add(this->ADD11);
			this->Controls->Add(this->DELE10);
			this->Controls->Add(this->ADD10);
			this->Controls->Add(this->DELE9);
			this->Controls->Add(this->ADD9);
			this->Controls->Add(this->DELE8);
			this->Controls->Add(this->ADD8);
			this->Controls->Add(this->DELE7);
			this->Controls->Add(this->ADD7);
			this->Controls->Add(this->DELE6);
			this->Controls->Add(this->ADD6);
			this->Controls->Add(this->DELE5);
			this->Controls->Add(this->ADD5);
			this->Controls->Add(this->DELE4);
			this->Controls->Add(this->ADD4);
			this->Controls->Add(this->DELE3);
			this->Controls->Add(this->ADD3);
			this->Controls->Add(this->DELE2);
			this->Controls->Add(this->ADD2);
			this->Controls->Add(this->DELE1);
			this->Controls->Add(this->ADD1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"SetupUserControl";
			this->Size = System::Drawing::Size(1893, 1160);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DELE1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[0]-=1;
					 if(plugin->ChAllNum[0]<0)plugin->ChAllNum[0]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[0]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox1->Text=cstr1;
					 plugin->m_Exfremult[0][plugin->ChAllNum[0]+1]=0;
					 plugin->m_freqmult[0][plugin->ChAllNum[0]+1]=0;
					 plugin->cstring[0][plugin->ChAllNum[0]+1]="0";
				 }
			 }
	private: System::Void DELE2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[1]-=1;
					 if(plugin->ChAllNum[1]<0)plugin->ChAllNum[1]=0;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[1]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox2->Text=cstr1;
					 plugin->m_Exfremult[1][plugin->ChAllNum[1]+1]=0;
					 plugin->m_freqmult[1][plugin->ChAllNum[1]+1]=0;
					 plugin->cstring[1][plugin->ChAllNum[1]+1]="0";
					 ReMountChannels();
				 }
			 }
	private: System::Void DELE3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[2]-=1;
					 if(plugin->ChAllNum[2]<0)plugin->ChAllNum[2]=0;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[2]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox3->Text=cstr1;
					 plugin->m_Exfremult[2][plugin->ChAllNum[2]+1]=0;
					 plugin->m_freqmult[2][plugin->ChAllNum[2]+1]=0;
					 plugin->cstring[2][plugin->ChAllNum[2]+1]="0";
					 ReMountChannels();
				 }
			 }
			 System::Void DELE4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[3]-=1;
					 if(plugin->ChAllNum[3]<0)plugin->ChAllNum[3]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[3]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox4->Text=cstr1;
					 plugin->m_Exfremult[3][plugin->ChAllNum[3]+1]=0;
					 plugin->m_freqmult[3][plugin->ChAllNum[3]+1]=0;
					 plugin->cstring[3][plugin->ChAllNum[3]+1]="0";
				 }
			 }
			 System::Void DELE5_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[4]-=1;
					 if(plugin->ChAllNum[4]<0)plugin->ChAllNum[4]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[4]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox5->Text=cstr1;
					 plugin->m_Exfremult[4][plugin->ChAllNum[4]+1]=0;
					 plugin->m_freqmult[4][plugin->ChAllNum[4]+1]=0;
					 plugin->cstring[4][plugin->ChAllNum[4]+1]="0";
				 }
			 }
			 System::Void DELE6_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[5]-=1;
					 if(plugin->ChAllNum[5]<0)plugin->ChAllNum[5]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[5]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox6->Text=cstr1;
					 plugin->m_Exfremult[5][plugin->ChAllNum[5]+1]=0;
					 plugin->m_freqmult[5][plugin->ChAllNum[5]+1]=0;
					 plugin->cstring[5][plugin->ChAllNum[5]+1]="0";

				 }
			 }
	         System::Void DELE7_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[6]-=1;
					 if(plugin->ChAllNum[6]<0)plugin->ChAllNum[6]=0;				 
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[6]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox7->Text=cstr1;
					 plugin->m_Exfremult[6][plugin->ChAllNum[6]+1]=0;
					 plugin->m_freqmult[6][plugin->ChAllNum[6]+1]=0;
					 plugin->cstring[6][plugin->ChAllNum[6]+1]="0";

				 }
			 }
			 System::Void DELE8_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[7]-=1;
					 if(plugin->ChAllNum[7]<0)plugin->ChAllNum[7]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[7]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox8->Text=cstr1;
					 plugin->m_Exfremult[7][plugin->ChAllNum[7]+1]=0;
					 plugin->m_freqmult[7][plugin->ChAllNum[7]+1]=0;
					 plugin->cstring[7][plugin->ChAllNum[7]+1]="0";
				 }
			 }
			 System::Void DELE9_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[8]-=1;
					 if(plugin->ChAllNum[8]<0)plugin->ChAllNum[8]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[8]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox9->Text=cstr1;
					 plugin->m_Exfremult[8][plugin->ChAllNum[8]+1]=0;
					 plugin->m_freqmult[8][plugin->ChAllNum[8]+1]=0;
					 plugin->cstring[8][plugin->ChAllNum[8]+1]="0";
				 }
			 }
			 System::Void DELE10_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[9]-=1;
					 if(plugin->ChAllNum[9]<0)plugin->ChAllNum[9]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[9]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox10->Text=cstr1;
					 plugin->m_Exfremult[9][plugin->ChAllNum[9]+1]=0;
					 plugin->m_freqmult[9][plugin->ChAllNum[9]+1]=0;
					 plugin->cstring[9][plugin->ChAllNum[9]+1]="0";
				 }
			 }
			 System::Void DELE11_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[10]-=1;
					 if(plugin->ChAllNum[10]<0)plugin->ChAllNum[10]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[10]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox11->Text=cstr1;
					 plugin->m_Exfremult[10][plugin->ChAllNum[10]+1]=0;
					 plugin->m_freqmult[10][plugin->ChAllNum[10]+1]=0;
					 plugin->cstring[10][plugin->ChAllNum[10]+1]="0";
				 }
			 }
			 System::Void DELE12_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[11]-=1;
					 if(plugin->ChAllNum[11]<0)plugin->ChAllNum[11]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[11]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox12->Text=cstr1;
					 plugin->m_Exfremult[11][plugin->ChAllNum[11]+1]=0;
					 plugin->m_freqmult[11][plugin->ChAllNum[11]+1]=0;
					 plugin->cstring[11][plugin->ChAllNum[11]+1]="0";
				 }
			 }
			 System::Void DELE13_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[12]-=1;
					 if(plugin->ChAllNum[12]<0)plugin->ChAllNum[12]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[12]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox13->Text=cstr1;
					 plugin->m_Exfremult[12][plugin->ChAllNum[12]+1]=0;
					 plugin->m_freqmult[12][plugin->ChAllNum[12]+1]=0;
					 plugin->cstring[12][plugin->ChAllNum[12]+1]="0";
				 }
			 }
			 System::Void DELE14_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[13]-=1;
					 if(plugin->ChAllNum[13]<0)plugin->ChAllNum[13]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[13]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox14->Text=cstr1;
					 plugin->m_Exfremult[13][plugin->ChAllNum[13]+1]=0;
					 plugin->m_freqmult[13][plugin->ChAllNum[13]+1]=0;
					 plugin->cstring[13][plugin->ChAllNum[13]+1]="0";

				 }
			 }
			 System::Void DELE15_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[14]-=1;
					 if(plugin->ChAllNum[14]<0)plugin->ChAllNum[14]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[14]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox15->Text=cstr1;
					 plugin->m_Exfremult[14][plugin->ChAllNum[14]+1]=0;
					 plugin->m_freqmult[14][plugin->ChAllNum[14]+1]=0;
					 plugin->cstring[14][plugin->ChAllNum[14]+1]="0";

				 }
			 }
			 System::Void DELE16_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[15]-=1;
					 if(plugin->ChAllNum[15]<0)plugin->ChAllNum[15]=0;
					 ReMountChannels();
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[15]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox16->Text=cstr1;
					 plugin->m_Exfremult[15][plugin->ChAllNum[15]+1]=0;
					 plugin->m_freqmult[15][plugin->ChAllNum[15]+1]=0;
					 plugin->cstring[15][plugin->ChAllNum[15]+1]="0";

				 }
			 }
	private: System::Void ADD1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[0]+=1;
					 if(plugin->ChAllNum[0]>49)plugin->ChAllNum[0]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[0]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox1->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[1]+=1;
					 if(plugin->ChAllNum[1]>49)plugin->ChAllNum[1]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[1]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox2->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[2]+=1;
					 if(plugin->ChAllNum[2]>49)plugin->ChAllNum[2]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[2]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox3->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[3]+=1;
					 if(plugin->ChAllNum[3]>49)plugin->ChAllNum[3]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[3]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox4->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD5_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[4]+=1;
					 if(plugin->ChAllNum[4]>49)plugin->ChAllNum[4]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[4]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox5->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD6_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[5]+=1;
					 if(plugin->ChAllNum[5]>49)plugin->ChAllNum[5]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[5]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox6->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD7_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[6]+=1;
					 if(plugin->ChAllNum[6]>49)plugin->ChAllNum[6]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[6]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox7->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD8_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[7]+=1;
					 if(plugin->ChAllNum[7]>49)plugin->ChAllNum[7]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[7]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox8->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD9_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[8]+=1;
					 if(plugin->ChAllNum[8]>49)plugin->ChAllNum[8]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[8]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox9->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD10_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[9]+=1;
					 if(plugin->ChAllNum[9]>49)plugin->ChAllNum[9]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[9]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox10->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD11_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[10]+=1;
					 if(plugin->ChAllNum[10]>49)plugin->ChAllNum[10]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[10]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox11->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD12_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[11]+=1;
					 if(plugin->ChAllNum[11]>49)plugin->ChAllNum[11]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[11]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox12->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD13_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[12]+=1;
					 if(plugin->ChAllNum[12]>49)plugin->ChAllNum[12]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[12]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox13->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD14_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[13]+=1;
					 if(plugin->ChAllNum[13]>49)plugin->ChAllNum[13]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[13]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox14->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD15_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[14]+=1;
					 if(plugin->ChAllNum[14]>49)plugin->ChAllNum[14]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[14]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox15->Text=cstr1;
					 ReMountChannels();
				 }
			 }
			 System::Void ADD16_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 plugin->ChAllNum[15]+=1;
					 if(plugin->ChAllNum[15]>49)plugin->ChAllNum[15]=49;
					 CString Stri;
					 Stri.Format(_T("%d"),plugin->ChAllNum[15]);
					 String^ cstr1= gcnew String(Stri);
					 NmtextBox16->Text=cstr1;
					 ReMountChannels();
				 }
			 }	  
	private:System::Void InitSetup_Click(System::Object^  sender, System::EventArgs^  e) {
				if (plugin != nullptr)
				{
					for (int i=0;i<16;i++)
					{
						for(int j=0;j<50;j++)
						{
							plugin->cstring[i][j]="0";
							plugin->m_freqmult[i][j]=0;
							plugin->m_Exfremult[i][j]=0;
							switch(i)
							{
							case 0:plugin->m_bstr[i][j]="A1_temp";break;
							case 1:plugin->m_bstr[i][j]="A2_temp";break;
							case 2:plugin->m_bstr[i][j]="A3_temp";break;
							case 3:plugin->m_bstr[i][j]="A4_temp";break;
							case 4:plugin->m_bstr[i][j]="A5_temp";break;
							case 5:plugin->m_bstr[i][j]="A6_temp";break;
							case 6:plugin->m_bstr[i][j]="A7_temp";break;
							case 7:plugin->m_bstr[i][j]="A8_temp";break;
							case 8:plugin->m_bstr[i][j]="A9_temp";break;
							case 9:plugin->m_bstr[i][j]="A10_temp";break;
							case 10:plugin->m_bstr[i][j]="A11_temp";break;
							case 11:plugin->m_bstr[i][j]="A12_temp";break;
							case 12:plugin->m_bstr[i][j]="A13_temp";break;
							case 13:plugin->m_bstr[i][j]="A14_temp";break;
							case 14:plugin->m_bstr[i][j]="A15_temp";break;
							case 15:plugin->m_bstr[i][j]="A16_temp";break;
							}
						}
						for(int m=0;m<plugin->ChAllNum[i];m++)
						{
							plugin->m_chIndex[i]=m;
							Put_Name(i,plugin->m_bstr[i][0]);
						}

						plugin->ChAllNum[i]=0;//通道zu总
						CString Stri;
						Stri.Format(_T("%d"),plugin->ChAllNum[i]);
						String^ cstr= gcnew String(Stri);
						plugin->m_chIndex[i]=0;//tongdaoxuhao
						CString Stril;
						Stril.Format(_T("%d"),plugin->m_chIndex[i]);
						String^ cstr1= gcnew String(Stril);
						switch(i)
						{
						case 0:NmtextBox1->Text=cstr;
							//frechCombox1->Items->Clear();  //频率通道清楚
							//frechCombox1->Enabled=FALSE;   //禁止选选择;
							ChTextbox1->Text=cstr1;
							InputNumTextBox1->Text="0";
							ExinputText1->Text="0";
							NameBox1->Text="A1_temp";
							break;
						case 1:
							//frechCombox2->Items->Clear();
						    //frechCombox2->Enabled=FALSE;
							NmtextBox2->Text=cstr;
							ChTextbox2->Text=cstr1;
							InputNumTextBox2->Text="0";
							ExinputText2->Text="0";
							NameBox2->Text="A2_temp";
							break;
						case 2:
							//frechCombox3->Items->Clear();
						    //frechCombox3->Enabled=FALSE;
							NmtextBox3->Text=cstr;
							ChTextbox3->Text=cstr1;
							InputNumTextBox3->Text="0";
							ExinputText3->Text="0";
							NameBox3->Text="A3_temp";
							break;
						case 3:
							//frechCombox4->Items->Clear();
						    //frechCombox4->Enabled=FALSE;
							NmtextBox4->Text=cstr;
							ChTextbox4->Text=cstr1;
							InputNumTextBox4->Text="0";
							ExinputText4->Text="0";
							NameBox4->Text="A4_temp";
							break;
						case 4:
							//frechCombox5->Items->Clear();
						    //frechCombox5->Enabled=FALSE;
							NmtextBox5->Text=cstr;
							ChTextbox5->Text=cstr1;
							InputNumTextBox5->Text="0";
							ExinputText5->Text="0";
							NameBox5->Text="A5_temp";
							break;
						case 5:
							//frechCombox6->Items->Clear();
						    //frechCombox6->Enabled=FALSE;
							NmtextBox6->Text=cstr;
							ChTextbox6->Text=cstr1;
							InputNumTextBox6->Text="0";
							ExinputText6->Text="0";
							NameBox6->Text="A6_temp";
							break;
						case 6:
							//frechCombox7->Items->Clear();
						    //frechCombox7->Enabled=FALSE;
							NmtextBox7->Text=cstr;
							ChTextbox7->Text=cstr1;
							InputNumTextBox7->Text="0";
							ExinputText7->Text="0";
							NameBox7->Text="A7_temp";
							break;
						case 7:
							//frechCombox8->Items->Clear();
						    //frechCombox8->Enabled=FALSE;
							NmtextBox8->Text=cstr;
							ChTextbox8->Text=cstr1;
							InputNumTextBox8->Text="0";
							ExinputText8->Text="0";
							NameBox8->Text="A8_temp";
							break;
						case 8:
							//frechCombox9->Items->Clear();
						    //frechCombox9->Enabled=FALSE;
							NmtextBox9->Text=cstr;
							ChTextbox9->Text=cstr1;
							InputNumTextBox9->Text="0";
							ExinputText9->Text="0";
							NameBox9->Text="B1_temp";
							break;
						case 9:
							//frechCombox10->Items->Clear();
						    //frechCombox10->Enabled=FALSE;
							NmtextBox10->Text=cstr;
							ChTextbox10->Text=cstr1;
							InputNumTextBox10->Text="0";
							ExinputText10->Text="0";
							NameBox10->Text="B2_temp";
							break;
						case 10:
							//frechCombox11->Items->Clear();
						    //frechCombox11->Enabled=FALSE;
							NmtextBox11->Text=cstr;
							ChTextbox11->Text=cstr1;
							InputNumTextBox11->Text="0";
							ExinputText11->Text="0";
							NameBox11->Text="B3_temp";
							break;
						case 11:
							//frechCombox12->Items->Clear();
						    //frechCombox12->Enabled=FALSE;
							NmtextBox12->Text=cstr;
							ChTextbox12->Text=cstr1;
							InputNumTextBox12->Text="0";
							ExinputText12->Text="0";
							NameBox12->Text="B4_temp";
							break;
						case 12:
							//frechCombox13->Items->Clear();
						    //frechCombox13->Enabled=FALSE;
							NmtextBox13->Text=cstr;
							ChTextbox13->Text=cstr1;
							InputNumTextBox13->Text="0";
							ExinputText13->Text="0";
							NameBox13->Text="B5_temp";
							break;
						case 13:
							//frechCombox14->Items->Clear();
						    //frechCombox14->Enabled=FALSE;
							NmtextBox14->Text=cstr;
							ChTextbox14->Text=cstr1;
							InputNumTextBox14->Text="0";
							ExinputText14->Text="0";
							NameBox14->Text="B6_temp";
							break;
						case 14:
							//frechCombox15->Items->Clear();
						    //frechCombox15->Enabled=FALSE;
							NmtextBox15->Text=cstr;
							ChTextbox15->Text=cstr1;
							InputNumTextBox15->Text="0";
							ExinputText15->Text="0";
							NameBox15->Text="B7_temp";
							break;
						case 15:
							//frechCombox16->Items->Clear();
						    //frechCombox16->Enabled=FALSE;
							NmtextBox16->Text=cstr;
							ChTextbox16->Text=cstr1;
							InputNumTextBox16->Text="0";
							ExinputText16->Text="0";
							NameBox16->Text="B8_temp";
							break;
						}					    
					}
					plugin->DeleMountChannels();
					plugin->MountChannels();
				}
			}
	private: System::Void ChTextbox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox1->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;
					 tempind=_tstoi(tempStr);
					 if(tempind<plugin->ChAllNum[0]&&tempind>=0)
					 {  
						 plugin->m_chIndex[0]=tempind;

						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[0][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox1->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[0][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText1->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[0][tempind]);
						 NameBox1->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox1->Text="0";

					 }
				 } 
			 }
	private: System::Void ChTextbox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox2->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;
					 tempind=_tstoi(tempStr);
					 if(tempind<plugin->ChAllNum[1]&&tempind>=0)
					 {
						 plugin->m_chIndex[1]=tempind;
						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[1][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox2->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[1][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText2->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[1][tempind]);
						 NameBox2->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox2->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox3->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;
					 tempind=_tstoi(tempStr);
					 if(tempind>=0&&tempind<plugin->ChAllNum[2])
					 {
						 plugin->m_chIndex[2]=tempind;

						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[2][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox3->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[2][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText3->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[2][tempind]);
						 NameBox3->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox3->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox4->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;
					 tempind=_tstoi(tempStr);				  
					 if(tempind>=0&&tempind<plugin->ChAllNum[3])
					 {
						 plugin->m_chIndex[3]=tempind;

						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[3][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox4->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[3][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText4->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[3][tempind]);
						 NameBox4->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox4->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox5->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;	
					 tempind=_tstoi(tempStr);				
					 if(tempind>=0&&tempind<plugin->ChAllNum[4])
					 {
						 plugin->m_chIndex[4]=tempind;

						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[4][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox5->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[4][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText5->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[4][tempind]);
						 NameBox5->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox5->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox6->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;
					 tempind=_tstoi(tempStr);
					 if(tempind>=0&&tempind<plugin->ChAllNum[5])
					 {
						 plugin->m_chIndex[5]=tempind;

						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[5][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox6->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[5][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText6->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[5][tempind]);
						 NameBox6->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox6->Text="0";

					 }
				 } 
			 }
	private: System::Void ChTextbox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox7->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;		
					 tempind=_tstoi(tempStr);			
					 if(tempind>=0&&tempind<plugin->ChAllNum[6])
					 {
						 plugin->m_chIndex[6]=tempind;

						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[6][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox7->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[6][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText7->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[6][tempind]);
						 NameBox7->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox7->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox8->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;				
					 tempind=_tstoi(tempStr);
					 if(tempind>=0&&tempind<plugin->ChAllNum[7])
					 {
						 plugin->m_chIndex[7]=tempind;

						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[7][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox8->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[7][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText8->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[7][tempind]);
						 NameBox8->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox8->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox9->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;
					 tempind=_tstoi(tempStr);				  
					 if(tempind>=0&&tempind<plugin->ChAllNum[8])
					 {
						 plugin->m_chIndex[8]=tempind;
						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[8][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox9->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[8][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText9->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[8][tempind]);
						 NameBox9->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox9->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox10->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;
					 tempind=_tstoi(tempStr);			 
					 if(tempind>=0&&tempind<plugin->ChAllNum[9])
					 {
						 plugin->m_chIndex[9]=tempind;
						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[9][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox10->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[9][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText10->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[9][tempind]);
						 NameBox10->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox10->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox11->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;
					 tempind=_tstoi(tempStr);
					 if(tempind>=0&&tempind<plugin->ChAllNum[10])
					 {
						 plugin->m_chIndex[10]=tempind;
						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[10][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox11->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[10][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText11->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[10][tempind]);
						 NameBox11->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox11->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox12->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;
					 tempind=_tstoi(tempStr);			  
					 if(tempind>=0&&tempind<plugin->ChAllNum[11])
					 {
						 plugin->m_chIndex[11]=tempind;
						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[11][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox12->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[11][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText12->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[11][tempind]);
						 NameBox12->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox12->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox13->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;			
					 tempind=_tstoi(tempStr);			 
					 if(tempind>=0&&tempind<plugin->ChAllNum[12])
					 {
						 plugin->m_chIndex[12]=tempind;

						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[12][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox13->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[12][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText12->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[12][tempind]);
						 NameBox13->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox13->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox14->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;				
					 tempind=_tstoi(tempStr);
					 if(tempind>=0&&tempind<plugin->ChAllNum[13])
					 {
						 plugin->m_chIndex[13]=tempind;

						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[13][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox14->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[13][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText14->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[13][tempind]);
						 NameBox14->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox14->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox15->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;				
					 tempind=_tstoi(tempStr);			 
					 if(tempind>=0&&tempind<plugin->ChAllNum[14])
					 {
						 plugin->m_chIndex[14]=tempind;
						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[14][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox15->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[14][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText15->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[14][tempind]);
						 NameBox15->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox15->Text="0";
					 }
				 } 
			 }
	private: System::Void ChTextbox16_TextChanged(System::Object^  sender, System::EventArgs^  e){
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ChTextbox16->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
					 int tempind=0;
					 CString  tempStr=bstr;				
					 tempind=_tstoi(tempStr);				
					 if(tempind>=0&&tempind<plugin->ChAllNum[15])
					 {
						 plugin->m_chIndex[15]=tempind;

						 CString Stric;
						 Stric.Format(_T("%.3f"),plugin->m_freqmult[15][tempind]);
						 String^ cstr1= gcnew String(Stric);
						 InputNumTextBox16->Text=cstr1;
						 CString Stri;
						 Stri.Format(_T("%.3f"),plugin->m_Exfremult[15][tempind]);
						 String^ cstr2= gcnew String(Stri);
						 ExinputText16->Text=cstr2;
						 String^ cstr3=gcnew String(plugin->m_bstr[15][tempind]);
						 NameBox16->Text=cstr3;
					 }
					 else
					 {
						 ChTextbox16->Text="0";
					 }
				 } 
			 }
	private: System::Void frechCombox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {   
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox1->Enabled=FALSE;   //禁止选选择;
					 }
					 else
					 {
						 plugin->m_CounterIndex[0]=frechCombox1->SelectedIndex;
					 }					 
				 }
			 }
	private: System::Void frechCombox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox2->Enabled=FALSE;   //禁止选选择;
					 }
					 else
					 plugin->m_CounterIndex[1]=frechCombox2->SelectedIndex;
				 }
			 }
	private: System::Void frechCombox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox3->Enabled=FALSE;   //禁止选选择;
					 }
					 else
                      plugin->m_CounterIndex[2]=frechCombox3->SelectedIndex;
				 }
			 }
	private: System::Void frechCombox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox4->Enabled=FALSE;   //禁止选选择;
					 }
					 else
                      plugin->m_CounterIndex[3]=frechCombox4->SelectedIndex; 
				 }
			 }
	private: System::Void frechCombox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox5->Enabled=FALSE;   //禁止选选择;
					 }
					 else
				     plugin->m_CounterIndex[4]=frechCombox5->SelectedIndex; 
				 }
			 }
	private: System::Void frechCombox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox6->Enabled=FALSE;   //禁止选选择;
					 }
					 else
		                 plugin->m_CounterIndex[5]=frechCombox6->SelectedIndex; 
				 }
			 }
	private: System::Void frechCombox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox7->Enabled=FALSE;   //禁止选选择;
					 }
					 else
                      plugin->m_CounterIndex[6]=frechCombox7->SelectedIndex; 
				 }
			 }
	private: System::Void frechCombox8_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {  
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox8->Enabled=FALSE;   //禁止选选择;
					 }
					 else
                     plugin->m_CounterIndex[7]=frechCombox8->SelectedIndex; 		 
				 }
			 }
	private: System::Void frechCombox9_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox9->Enabled=FALSE;   //禁止选选择;
					 }
					 else
		              plugin->m_CounterIndex[8]=frechCombox9->SelectedIndex; 
				 }
			 }
	private: System::Void frechCombox10_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox10->Enabled=FALSE;   //禁止选选择;
					 }
					 else
                      plugin->m_CounterIndex[9]=frechCombox10->SelectedIndex;  
				 }
			 }
	private: System::Void frechCombox11_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox11->Enabled=FALSE;   //禁止选选择;
					 }
					 else
                      plugin->m_CounterIndex[10]=frechCombox11->SelectedIndex; 
				 }
			 }
	private: System::Void frechCombox12_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox12->Enabled=FALSE;   //禁止选选择;
					 }
					 else
                      plugin->m_CounterIndex[11]=frechCombox12->SelectedIndex; 
				 }
			 }
	private: System::Void frechCombox13_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox13->Enabled=FALSE;   //禁止选选择;
					 }
					 else
                      plugin->m_CounterIndex[12]=frechCombox13->SelectedIndex; 
				 }
			 }
	private: System::Void frechCombox14_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 { 
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox14->Enabled=FALSE;   //禁止选选择;
					 }
					 else
					 plugin->m_CounterIndex[13]=frechCombox14->SelectedIndex; 
				 }
			 }
	private: System::Void frechCombox15_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox15->Enabled=FALSE;   //禁止选选择;
					 }
					 else
                     plugin->m_CounterIndex[14]=frechCombox15->SelectedIndex; 
				 }
			 }
	private: System::Void frechCombox16_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_CounterNum==0)
					 {
						 frechCombox16->Enabled=FALSE;   //禁止选选择;
					 }
					 else
                      plugin->m_CounterIndex[15]=frechCombox16->SelectedIndex; 
				 }
			 }
	private: System::Void InputNumTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {   
					 if(plugin->m_chIndex[0]<plugin->ChAllNum[0]&&plugin->m_chIndex[0]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox1->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;	 
						 int Itemp=plugin->m_chIndex[0];
						 plugin->cstring[0][Itemp]=tempStr;
						 tempfre=_tstof(tempStr);
						 plugin->m_freqmult[0][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[1]<plugin->ChAllNum[1]&&plugin->m_chIndex[1]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox2->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[1];
						 plugin->cstring[1][Itemp]=tempStr;
						 plugin->m_freqmult[1][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[2]<plugin->ChAllNum[2]&&plugin->m_chIndex[2]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox3->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[2];
						 plugin->cstring[2][Itemp]=tempStr;
						 plugin->m_freqmult[2][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[3]<plugin->ChAllNum[3]&&plugin->m_chIndex[3]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox4->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[3];
						 plugin->cstring[3][Itemp]=tempStr;
						 plugin->m_freqmult[3][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[4]<plugin->ChAllNum[4]&&plugin->m_chIndex[4]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox5->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[4];
						 plugin->cstring[4][Itemp]=tempStr;
						 plugin->m_freqmult[4][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[5]<plugin->ChAllNum[5]&&plugin->m_chIndex[5]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox6->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[5];
						 plugin->cstring[5][Itemp]=tempStr;
						 plugin->m_freqmult[5][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[6]<plugin->ChAllNum[6]&&plugin->m_chIndex[6]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox7->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[6];
						 plugin->cstring[6][Itemp]=tempStr;
						 plugin->m_freqmult[6][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[7]<plugin->ChAllNum[7]&&plugin->m_chIndex[7]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox8->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[7];
						 plugin-> cstring[7][Itemp]=tempStr;
						 plugin->m_freqmult[7][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[8]<plugin->ChAllNum[8]&&plugin->m_chIndex[8]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox9->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[8];
						 plugin->cstring[8][Itemp]=tempStr;
						 plugin->m_freqmult[8][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[9]<plugin->ChAllNum[9]&&plugin->m_chIndex[9]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox10->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[9];
						 plugin->cstring[9][Itemp]=tempStr;
						 plugin->m_freqmult[9][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[10]<plugin->ChAllNum[10]&&plugin->m_chIndex[10]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox11->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[10];
						 plugin->cstring[10][Itemp]=tempStr;
						 plugin->m_freqmult[10][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[11]<plugin->ChAllNum[11]&&plugin->m_chIndex[11]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox12->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[11];
						 plugin-> cstring[11][Itemp]=tempStr;
						 plugin->m_freqmult[11][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[12]<plugin->ChAllNum[12]&&plugin->m_chIndex[12]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox13->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[12];
						 plugin->cstring[12][Itemp]=tempStr;
						 plugin->m_freqmult[12][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[13]<plugin->ChAllNum[13]&&plugin->m_chIndex[13]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox14->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[13];
						 plugin->cstring[13][Itemp]=tempStr;
						 plugin->m_freqmult[13][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[14]<plugin->ChAllNum[14]&&plugin->m_chIndex[14]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox15->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[14];
						 plugin->cstring[14][Itemp]=tempStr;
						 plugin->m_freqmult[14][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void InputNumTextBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[15]<plugin->ChAllNum[15]&&plugin->m_chIndex[15]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(InputNumTextBox16->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));				 			
						 float tempfre=0;
						 CString  tempStr=bstr;					
						 tempfre=_tstof(tempStr);
						 int Itemp=plugin->m_chIndex[15];
						 plugin->cstring[15][Itemp]=tempStr;
						 plugin->m_freqmult[15][Itemp]=tempfre;
					 }
				 }
			 }
	private: System::Void Chnum1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(1);
				 }
			 }
	private: System::Void Chnum2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(2);
				 }
			 }
	private: System::Void Chnum3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(3);
				 }
			 }
	private: System::Void Chnum4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(4);
				 }
			 }
	private: System::Void Chnum5_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(5);
				 }
			 }
	private: System::Void Chnum6_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(6);
				 }
			 }
	private: System::Void Chnum7_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(7);
				 }
			 }
	private: System::Void Chnum8_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(8);
				 }
			 }
	private: System::Void Chnum9_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(9);
				 }
			 }
	private: System::Void Chnum10_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(10);
				 }
			 }
	private: System::Void Chnum11_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(11);
				 }
			 }
	private: System::Void Chnum12_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(12);
				 }
			 }
	private: System::Void Chnum13_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(13);
				 }
			 }
	private: System::Void Chnum14_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(14);
				 }
			 }
	private: System::Void Chnum15_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(15);
				 }
			 }
	private: System::Void Chnum16_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (plugin != nullptr)
				 {
					 ChNum_TextChanged(16);
				 }
			 }
	private: System::Void ChNum_TextChanged(int chId)
			 {
				 plugin->m_chIndex[chId-1]+=1;
				 if(plugin->m_chIndex[chId-1]>=plugin->ChAllNum[chId-1])
					 plugin->m_chIndex[chId-1]=0;
				 CString Stri;
				 Stri.Format(_T("%d"),plugin->m_chIndex[chId-1]);
				 String^ cstr= gcnew String(Stri);
				 CString Stric;
				 Stric.Format(_T("%.3f"),plugin->m_freqmult[chId-1][plugin->m_chIndex[chId-1]]);
				 String^ cstr1= gcnew String(Stric);

				 CString Stril;
				 String^ cstr2;
				 String^ cstr3;
				 switch(chId)
				 {
				 case 1:InputNumTextBox1->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[0][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText1->Text=cstr2;
					 ChTextbox1->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[0][plugin->m_chIndex[chId-1]]);
					 NameBox1->Text=cstr3;
					 break;					  
				 case 2:InputNumTextBox2->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[1][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText2->Text=cstr2;
					 ChTextbox2->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[1][plugin->m_chIndex[chId-1]]);
					 NameBox2->Text=cstr3;
					 break;
				 case 3:InputNumTextBox3->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[2][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText3->Text=cstr2;
					 ChTextbox3->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[2][plugin->m_chIndex[chId-1]]);
					 NameBox3->Text=cstr3;
					 break;
				 case 4:InputNumTextBox4->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[3][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText4->Text=cstr2;
					 ChTextbox4->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[3][plugin->m_chIndex[chId-1]]);
					 NameBox4->Text=cstr3;
					 break;
				 case 5:InputNumTextBox5->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[4][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText5->Text=cstr2;
					 ChTextbox5->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[4][plugin->m_chIndex[chId-1]]);
					 NameBox5->Text=cstr3;
					 break;
				 case 6:InputNumTextBox6->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[5][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText6->Text=cstr2;
					 ChTextbox6->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[5][plugin->m_chIndex[chId-1]]);
					 NameBox6->Text=cstr3;
					 break;
				 case 7:InputNumTextBox7->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[6][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText7->Text=cstr2;
					 ChTextbox7->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[6][plugin->m_chIndex[chId-1]]);
					 NameBox7->Text=cstr3;

					 break;
				 case 8:InputNumTextBox8->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[7][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText8->Text=cstr2;
					 ChTextbox8->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[7][plugin->m_chIndex[chId-1]]);
					 NameBox8->Text=cstr3;
					 break;
				 case 9:InputNumTextBox9->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[8][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText9->Text=cstr2;
					 ChTextbox9->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[8][plugin->m_chIndex[chId-1]]);
					 NameBox9->Text=cstr3;
					 break;
				 case 10:InputNumTextBox10->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[9][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText10->Text=cstr2;
					 ChTextbox10->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[9][plugin->m_chIndex[chId-1]]);
					 NameBox10->Text=cstr3;
					 break;
				 case 11:InputNumTextBox11->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[10][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText11->Text=cstr2;
					 ChTextbox11->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[10][plugin->m_chIndex[chId-1]]);
					 NameBox11->Text=cstr3;
					 break;
				 case 12:InputNumTextBox12->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[11][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText12->Text=cstr2;
					 ChTextbox12->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[11][plugin->m_chIndex[chId-1]]);
					 NameBox12->Text=cstr3;
					 break;
				 case 13:InputNumTextBox13->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[12][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText13->Text=cstr2;
					 ChTextbox13->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[12][plugin->m_chIndex[chId-1]]);
					 NameBox13->Text=cstr3;
					 break;
				 case 14:InputNumTextBox14->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[13][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText14->Text=cstr2;
					 ChTextbox14->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[13][plugin->m_chIndex[chId-1]]);
					 NameBox14->Text=cstr3;
					 break;
				 case 15:InputNumTextBox15->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[14][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText15->Text=cstr2;
					 ChTextbox15->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[14][plugin->m_chIndex[chId-1]]);
					 NameBox15->Text=cstr3;
					 break;
				 case 16:InputNumTextBox16->Text=cstr1;

					 Stril.Format(_T("%.3f"),plugin->m_Exfremult[15][plugin->m_chIndex[chId-1]]);
					 cstr2= gcnew String(Stril);
					 ExinputText16->Text=cstr2;
					 ChTextbox16->Text=cstr;
					 cstr3=gcnew String(plugin->m_bstr[15][plugin->m_chIndex[chId-1]]);
					 NameBox16->Text=cstr3;
					 break;
				 }

			 }
	private: System::Void NmtextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox1->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[0]=INum;
					 else if(INum<0)ChNum_Text(INum,1);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox2->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[1]=INum;
					 else if(INum<0)ChNum_Text(INum,2);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox3->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[2]=INum;
					 else if(INum<0)ChNum_Text(INum,3);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox4->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[3]=INum;
					 else if(INum<0)ChNum_Text(INum,4);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox5->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[4]=INum;
					 else if(INum<0)ChNum_Text(INum,5);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox6->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[5]=INum;
					 else if(INum<0)ChNum_Text(INum,6);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox7->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[6]=INum;
					 else if(INum<0)ChNum_Text(INum,7);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox8->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[7]=INum;
					 else if(INum<0)ChNum_Text(INum,8);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox9->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[8]=INum;
					 else if(INum<0)ChNum_Text(INum,9);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox10->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[9]=INum;
					 else if(INum<0)ChNum_Text(INum,10);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox11->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[10]=INum;
					 else if(INum<0)ChNum_Text(INum,11);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox12->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[11]=INum;
					 else if(INum<0)ChNum_Text(INum,12);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox13->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[12]=INum;
					 else if(INum<0)ChNum_Text(INum,13);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox14->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[13]=INum;
					 else if(INum<0)ChNum_Text(INum,14);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox15->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[14]=INum;
					 else if(INum<0)ChNum_Text(INum,15);
					 ReMountChannels();
				 }
			 }
	private: System::Void NmtextBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NmtextBox16->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 long INum=0;
					 CString tempstr=bstr;
					 INum=_tstoi(tempstr);
					 if(0<=INum)
						 plugin->ChAllNum[15]=INum;
					 else if(INum<0)ChNum_Text(INum,16);
					 ReMountChannels();
				 }
			 }
	private: System::Void ExinputText1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[0]<plugin->ChAllNum[0]&&plugin->m_chIndex[0]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText1->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[0];
						 if(0.0<=INum)
							 plugin->m_Exfremult[0][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[1]<plugin->ChAllNum[1]&&plugin->m_chIndex[1]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText2->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 int Itemp=plugin->m_chIndex[1];
						 INum=_tstof(tempstr);
						 if(0.0<=INum)
							 plugin->m_Exfremult[1][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[2]<plugin->ChAllNum[2]&&plugin->m_chIndex[2]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText3->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 int Itemp=plugin->m_chIndex[2];
						 INum=_tstof(tempstr);
						 if(0.0<=INum)
							 plugin->m_Exfremult[2][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[3]<plugin->ChAllNum[3]&&plugin->m_chIndex[3]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText4->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[3];
						 if(0.0<=INum)
							 plugin->m_Exfremult[3][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[3]<plugin->ChAllNum[3]&&plugin->m_chIndex[3]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText5->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[4];
						 if(0.0<=INum)
							 plugin->m_Exfremult[4][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[5]<plugin->ChAllNum[5]&&plugin->m_chIndex[5]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText6->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[5];
						 if(0.0<=INum)
							 plugin->m_Exfremult[5][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[6]<plugin->ChAllNum[6]&&plugin->m_chIndex[6]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText7->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[6];
						 if(0.0<=INum)
							 plugin->m_Exfremult[6][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[7]<plugin->ChAllNum[7]&&plugin->m_chIndex[7]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText8->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[7];
						 if(0.0<=INum)
							 plugin->m_Exfremult[7][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[8]<plugin->ChAllNum[8]&&plugin->m_chIndex[8]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText9->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[8];
						 if(0.0<=INum)
							 plugin->m_Exfremult[8][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[9]<plugin->ChAllNum[9]&&plugin->m_chIndex[9]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText10->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[9];
						 if(0.0<=INum)
							 plugin->m_Exfremult[9][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[10]<plugin->ChAllNum[10]&&plugin->m_chIndex[10]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText10->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[10];
						 if(0.0<=INum)
							 plugin->m_Exfremult[10][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[11]<plugin->ChAllNum[11]&&plugin->m_chIndex[11]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText12->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[11];
						 if(0.0<=INum)
							 plugin->m_Exfremult[11][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[12]<plugin->ChAllNum[12]&&plugin->m_chIndex[12]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText13->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[12];
						 if(0.0<=INum)
							 plugin->m_Exfremult[12][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[13]<plugin->ChAllNum[13]&&plugin->m_chIndex[13]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText14->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[13];
						 if(0.0<=INum)
							 plugin->m_Exfremult[13][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[14]<plugin->ChAllNum[14]&&plugin->m_chIndex[14]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText15->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[14];
						 if(0.0<=INum)
							 plugin->m_Exfremult[14][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void ExinputText16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 if(plugin->m_chIndex[15]<plugin->ChAllNum[15]&&plugin->m_chIndex[15]>=0)
					 {
						 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(ExinputText16->Text);
						 CComBSTR bstr;
						 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
						 float INum=0;
						 CString tempstr=bstr;
						 INum=_tstof(tempstr);
						 int Itemp=plugin->m_chIndex[15];
						 if(0.0<=INum)
							 plugin->m_Exfremult[15][Itemp]=INum;
					 }
				 } 
			 }
	private: System::Void NameBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox1->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 Put_Name(0,bstr);
				 }
			 }
	private: System::Void NameBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox2->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 Put_Name(1,bstr);
				 }
			 }
	private: System::Void NameBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox3->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 Put_Name(2,bstr);
				 }
			 }
	private: System::Void NameBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox4->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));	
					 Put_Name(3,bstr);
				 }
			 }
	private: System::Void NameBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox5->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));	
					 Put_Name(4,bstr);
				 }
			 }
	private: System::Void NameBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox6->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));	
					 Put_Name(5,bstr);
				 }
			 }
	private: System::Void NameBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox7->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 Put_Name(6,bstr);
				 }
			 }
	private: System::Void NameBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox8->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));	
					 Put_Name(7,bstr);
				 }
			 }
	private: System::Void NameBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox9->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 Put_Name(8,bstr);
				 }
			 }
	private: System::Void NameBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox10->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 Put_Name(9,bstr);
				 }
			 }
	private: System::Void NameBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox11->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 Put_Name(10,bstr);
				 }
			 }
	private: System::Void NameBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox12->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));	
					 Put_Name(11,bstr);
				 }
			 }
	private: System::Void NameBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox13->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));	
					 Put_Name(12,bstr);
				 }
			 }
	private: System::Void NameBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox14->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));
					 Put_Name(13,bstr);
				 }
			 }
	private: System::Void NameBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {
					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox15->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));	
					 Put_Name(14,bstr);
				 }
			 }
	private: System::Void NameBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (!selfChange&&plugin != nullptr)
				 {

					 IntPtr ptr = Runtime::InteropServices::Marshal::StringToBSTR(NameBox16->Text);
					 CComBSTR bstr;
					 bstr.Attach(static_cast<BSTR>(ptr.ToPointer()));	
					 Put_Name(15,bstr);
				 }
			 }
	private: System::Void Put_Name(int chId,CComBSTR ss)
			 {
				 if(plugin->m_chIndex[chId]<plugin->ChAllNum[chId]&&plugin->m_chIndex[chId]>=0)
				 {
					 plugin->m_bstr[chId][plugin->m_chIndex[chId]]=ss;
					 plugin->MountAutoChannels(chId,plugin->m_chIndex[chId]);
					 for(int m=0;m<3;m++)
					 {
						 CComBSTR bstr=ss;
						 switch(m)
						 {
						   case 0:bstr+="FA";break;
						   case 1:bstr+="F";break;
						   case 2:bstr+="FRMS";break;
						 }
						 plugin->m_pCh[chId][22+(plugin->m_chIndex[chId])*3+m]->put_Name(bstr);
					 }
				 }

			 }
	private: System::Void ReMountChannels()
			 {
				 plugin->DeleMountChannels();
				 plugin->MountChannels();
				 plugin->MountChannelExs();
			 }
	private: System::Void ChNum_Text(int  n,int chId)
			 {
				 CString Stri;
				 Stri.Format(_T("%d"),plugin->ChAllNum[chId-1]);
				 String^ cstr1= gcnew String(Stri);
				 switch(chId)
				 {
				 case 1:NmtextBox1->Text=cstr1;break;
				 case 2:NmtextBox2->Text=cstr1;break;
				 case 3:NmtextBox3->Text=cstr1;break;
				 case 4:NmtextBox4->Text=cstr1;break;
				 case 5:NmtextBox5->Text=cstr1;break;
				 case 6:NmtextBox6->Text=cstr1;break;
				 case 7:NmtextBox7->Text=cstr1;break;
				 case 8:NmtextBox8->Text=cstr1;break;
				 case 9:NmtextBox9->Text=cstr1;break;
				 case 10:NmtextBox10->Text=cstr1;break;
				 case 11:NmtextBox11->Text=cstr1;break;
				 case 12:NmtextBox12->Text=cstr1;break;
				 case 13:NmtextBox13->Text=cstr1;break;
				 case 14:NmtextBox14->Text=cstr1;break;
				 case 15:NmtextBox15->Text=cstr1;break;
				 case 16:NmtextBox16->Text=cstr1;break;
				 }
			 }
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (!selfChange&&plugin != nullptr)
			 {   
			    switch(comboBox1->SelectedIndex)
				{
				case 0:plugin->m_CountType=间隔计算;
					   textBox1->Enabled=FALSE;
					break;
				case 1:plugin->m_CountType=连续计算;
					   textBox1->Enabled=TRUE;
					break;
				default:plugin->m_CountType=间隔计算;
					   textBox1->Enabled=FALSE;
					break;
				}
			 }
		 }
    private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
    private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				if (!selfChange&&plugin != nullptr)
				{
					CString tempstr=textBox1->Text;
					float fNum=_tstof(tempstr);
					if(fNum<1.0)fNum=1.0;
					plugin->m_fPointTime=fNum;
				}
			}
	private: System::Void Signel_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				  if (!selfChange&&plugin != nullptr)
				  {
					  CString tempstr=SignelBox->Text;
					  int iNum=_tstoi(tempstr);
					  if(iNum<2)iNum=1;
					  plugin->m_iSignalOutPoint=iNum;
				  }
			  }
    private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
	private: System::Void FindAllCounter(){
				 plugin->m_CounterNum=plugin->GetAllCounterChannel();
				 if(plugin->m_CounterNum==0)
				 {
					 frechCombox1->Enabled=FALSE;
					 frechCombox2->Enabled=FALSE;
					 frechCombox3->Enabled=FALSE;
					 frechCombox4->Enabled=FALSE;
					 frechCombox5->Enabled=FALSE;
					 frechCombox6->Enabled=FALSE;
					 frechCombox7->Enabled=FALSE;
					 frechCombox8->Enabled=FALSE;
					 frechCombox9->Enabled=FALSE;
					 frechCombox10->Enabled=FALSE;
					 frechCombox11->Enabled=FALSE;
					 frechCombox12->Enabled=FALSE;
					 frechCombox13->Enabled=FALSE;
					 frechCombox14->Enabled=FALSE;
					 frechCombox15->Enabled=FALSE;
					 frechCombox16->Enabled=FALSE;
				 }
				 else{
					 for(int i=1;i<=16;i++)
					 {	
						 switch(i)
						 {
						 case 1:frechCombox1->Enabled=TRUE;frechCombox1->Items->Clear();break;
						 case 2:frechCombox2->Enabled=TRUE;frechCombox2->Items->Clear();break;
						 case 3:frechCombox3->Enabled=TRUE;frechCombox3->Items->Clear();break;
						 case 4:frechCombox4->Enabled=TRUE;frechCombox4->Items->Clear();break;
						 case 5:frechCombox5->Enabled=TRUE;frechCombox5->Items->Clear();break;
						 case 6:frechCombox6->Enabled=TRUE;frechCombox6->Items->Clear();break;
						 case 7:frechCombox7->Enabled=TRUE;frechCombox7->Items->Clear();break;
						 case 8:frechCombox8->Enabled=TRUE;frechCombox8->Items->Clear();break;
						 case 9:frechCombox9->Enabled=TRUE;frechCombox9->Items->Clear();break;
						 case 10:frechCombox10->Enabled=TRUE;frechCombox10->Items->Clear();break;
						 case 11:frechCombox11->Enabled=TRUE;frechCombox11->Items->Clear();break;
						 case 12:frechCombox12->Enabled=TRUE;frechCombox12->Items->Clear();break;
						 case 13:frechCombox13->Enabled=TRUE;frechCombox13->Items->Clear();break;
						 case 14:frechCombox14->Enabled=TRUE;frechCombox14->Items->Clear();break;
						 case 15:frechCombox15->Enabled=TRUE;frechCombox15->Items->Clear();break;
						 case 16:frechCombox16->Enabled=TRUE;frechCombox16->Items->Clear();break;
						 }

						 for(int j=0;j<plugin->m_CounterNum;++j)
						 {
							 BSTR bstr;
							 plugin->m_pChCounter[j]->get_Name(&bstr);
							 CString strName=bstr;
							 String^ cstr=gcnew String(strName);
							 switch(i)
							 {
							 case 1:frechCombox1->Items->Insert(j,cstr);
								 break;
							 case 2:frechCombox2->Items->Insert(j,cstr);break;
							 case 3:frechCombox3->Items->Insert(j,cstr);break;
							 case 4:frechCombox4->Items->Insert(j,cstr);break;
							 case 5:frechCombox5->Items->Insert(j,cstr);break;
							 case 6:frechCombox6->Items->Insert(j,cstr);break;
							 case 7:frechCombox7->Items->Insert(j,cstr);break;
							 case 8:frechCombox8->Items->Insert(j,cstr);break;
							 case 9:frechCombox9->Items->Insert(j,cstr);break;
							 case 10:frechCombox10->Items->Insert(j,cstr);break;
							 case 11:frechCombox11->Items->Insert(j,cstr);break;
							 case 12:frechCombox12->Items->Insert(j,cstr);break;
							 case 13:frechCombox13->Items->Insert(j,cstr);break;
							 case 14:frechCombox14->Items->Insert(j,cstr);break;
							 case 15:frechCombox15->Items->Insert(j,cstr);break;
							 case 16:frechCombox16->Items->Insert(j,cstr);break;
							 }
						 }
					 }
				 }
			 }
	private: System::Void Print_Information(System::Object^  sender, System::EventArgs^  e) {
				if (!selfChange&&plugin != nullptr)
				{
					bool bPrint =plugin->IsPrintInfo[0];
					bPrint=~bPrint;
					if(bPrint)
					{
						for(int i=0;i<CHANNELNUM;i++)
							plugin->IsPrintInfo[i]=FALSE;
						plugin->IsPrintInfo[0]=TRUE;
						PrintChannelSetInformation(0);
					}
					else
					{
						plugin->IsPrintInfo[0]=FALSE;
					}
				}
			}
	private: System::Void Print2_Information(System::Object^  sender, System::EventArgs^  e) {
					 if (!selfChange&&plugin != nullptr)
					 {
						 bool bPrint =plugin->IsPrintInfo[1];
						 bPrint=~bPrint;
						 if(bPrint)
						 {
							 for(int i=0;i<CHANNELNUM;i++)
								 plugin->IsPrintInfo[i]=FALSE;
							 plugin->IsPrintInfo[1]=TRUE;
							 PrintChannelSetInformation(1);
						 }
						 else
						 {
							 plugin->IsPrintInfo[1]=FALSE;
						 }
					 }
				 }
	private: System::Void Print3_Information(System::Object^  sender, System::EventArgs^  e) {
					 if (!selfChange&&plugin != nullptr)
					 {
						 bool bPrint =plugin->IsPrintInfo[2];
						 bPrint=~bPrint;
						 if(bPrint)
						 {
							 for(int i=0;i<CHANNELNUM;i++)
								 plugin->IsPrintInfo[i]=FALSE;
							 plugin->IsPrintInfo[0]=TRUE;
							 PrintChannelSetInformation(2);
						 }
						 else
						 {
							 plugin->IsPrintInfo[2]=FALSE;
						 }
					 }
				 }
	private: System::Void Print4_Information(System::Object^  sender, System::EventArgs^  e) {
					 if (!selfChange&&plugin != nullptr)
					 {
						 bool bPrint =plugin->IsPrintInfo[3];
						 bPrint=~bPrint;
						 if(bPrint)
						 {
							 for(int i=0;i<CHANNELNUM;i++)
								 plugin->IsPrintInfo[i]=FALSE;
							 plugin->IsPrintInfo[3]=TRUE;
							 PrintChannelSetInformation(3);
						 }
						 else
						 {
							 plugin->IsPrintInfo[3]=FALSE;
						 }
					 }
				 }	
	private: System::Void Print5_Information(System::Object^  sender, System::EventArgs^  e) {
					 if (!selfChange&&plugin != nullptr)
					 {
						 bool bPrint =plugin->IsPrintInfo[4];
						 bPrint=~bPrint;
						 if(bPrint)
						 {
							 for(int i=0;i<CHANNELNUM;i++)
								 plugin->IsPrintInfo[i]=FALSE;
							 plugin->IsPrintInfo[4]=TRUE;
							 PrintChannelSetInformation(4);
						 }
						 else
						 {
							 plugin->IsPrintInfo[4]=FALSE;
						 }
					 }
				 }
	private: System::Void Print6_Information(System::Object^  sender, System::EventArgs^  e) {
					 if (!selfChange&&plugin != nullptr)
					 {
						 bool bPrint =plugin->IsPrintInfo[5];
						 bPrint=~bPrint;
						 if(bPrint)
						 {
							 for(int i=0;i<CHANNELNUM;i++)
								 plugin->IsPrintInfo[i]=FALSE;
							 plugin->IsPrintInfo[5]=TRUE;
							 PrintChannelSetInformation(5);
						 }
						 else
						 {
							 plugin->IsPrintInfo[5]=FALSE;
						 }
					 }
				 }
	private: System::Void Print7_Information(System::Object^  sender, System::EventArgs^  e) {
					 if (!selfChange&&plugin != nullptr)
					 {
						 bool bPrint =plugin->IsPrintInfo[0];
						 bPrint=~bPrint;
						 if(bPrint)
						 {
							 for(int i=0;i<CHANNELNUM;i++)
								 plugin->IsPrintInfo[i]=FALSE;
							 plugin->IsPrintInfo[6]=TRUE;
							 PrintChannelSetInformation(6);
						 }
						 else
						 {
							 plugin->IsPrintInfo[6]=FALSE;
						 }
					 }
				 }
	private: System::Void Print8_Information(System::Object^  sender, System::EventArgs^  e) {
					 if (!selfChange&&plugin != nullptr)
					 {
						 bool bPrint =plugin->IsPrintInfo[7];
						 bPrint=~bPrint;
						 if(bPrint)
						 {
							 for(int i=0;i<CHANNELNUM;i++)
								 plugin->IsPrintInfo[i]=FALSE;
							 plugin->IsPrintInfo[7]=TRUE;
							 PrintChannelSetInformation(7);
						 }
						 else
						 {
							 plugin->IsPrintInfo[7]=FALSE;
						 }
					 }
				 }
	private: System::Void Print9_Information(System::Object^  sender, System::EventArgs^  e) {
						 if (!selfChange&&plugin != nullptr)
						 {
							 bool bPrint =plugin->IsPrintInfo[8];
							 bPrint=~bPrint;
							 if(bPrint)
							 {
								 for(int i=0;i<CHANNELNUM;i++)
									 plugin->IsPrintInfo[i]=FALSE;
								 plugin->IsPrintInfo[8]=TRUE;
								 PrintChannelSetInformation(8);
							 }
							 else
							 {
								 plugin->IsPrintInfo[8]=FALSE;
							 }
						 }
					 }
	private: System::Void Print10_Information(System::Object^  sender, System::EventArgs^  e) {
						 if (!selfChange&&plugin != nullptr)
						 {
							 bool bPrint =plugin->IsPrintInfo[9];
							 bPrint=~bPrint;
							 if(bPrint)
							 {
								 for(int i=0;i<CHANNELNUM;i++)
									 plugin->IsPrintInfo[i]=FALSE;
								 plugin->IsPrintInfo[9]=TRUE;
								 PrintChannelSetInformation(9);
							 }
							 else
							 {
								 plugin->IsPrintInfo[9]=FALSE;
							 }
						 }
					 }
	private: System::Void Print11_Information(System::Object^  sender, System::EventArgs^  e) {
						 if (!selfChange&&plugin != nullptr)
						 {
							 bool bPrint =plugin->IsPrintInfo[10];
							 bPrint=~bPrint;
							 if(bPrint)
							 {
								 for(int i=0;i<CHANNELNUM;i++)
									 plugin->IsPrintInfo[i]=FALSE;
								 plugin->IsPrintInfo[10]=TRUE;
								 PrintChannelSetInformation(10);
							 }
							 else
							 {
								 plugin->IsPrintInfo[10]=FALSE;
							 }
						 }
					 }
	private: System::Void Print12_Information(System::Object^  sender, System::EventArgs^  e) {
						 if (!selfChange&&plugin != nullptr)
						 {
							 bool bPrint =plugin->IsPrintInfo[11];
							 bPrint=~bPrint;
							 if(bPrint)
							 {
								 for(int i=0;i<CHANNELNUM;i++)
									 plugin->IsPrintInfo[i]=FALSE;
								 plugin->IsPrintInfo[11]=TRUE;
								 PrintChannelSetInformation(11);
							 }
							 else
							 {
								 plugin->IsPrintInfo[11]=FALSE;
							 }
						 }
					 }
	private: System::Void Print13_Information(System::Object^  sender, System::EventArgs^  e) {
						 if (!selfChange&&plugin != nullptr)
						 {
							 bool bPrint =plugin->IsPrintInfo[12];
							 bPrint=~bPrint;
							 if(bPrint)
							 {
								 for(int i=0;i<CHANNELNUM;i++)
									 plugin->IsPrintInfo[i]=FALSE;
								 plugin->IsPrintInfo[12]=TRUE;
								 PrintChannelSetInformation(12);
							 }
							 else
							 {
								 plugin->IsPrintInfo[12]=FALSE;
							 }
						 }
					 }
	private: System::Void Print14_Information(System::Object^  sender, System::EventArgs^  e) {
							 if (!selfChange&&plugin != nullptr)
							 {
								 bool bPrint =plugin->IsPrintInfo[13];
								 bPrint=~bPrint;
								 if(bPrint)
								 {
									 for(int i=0;i<CHANNELNUM;i++)
										 plugin->IsPrintInfo[i]=FALSE;
									 plugin->IsPrintInfo[13]=TRUE;
									 PrintChannelSetInformation(13);
								 }
								 else
								 {
									 plugin->IsPrintInfo[13]=FALSE;
								 }
							 }
						 }
	private: System::Void Print15_Information(System::Object^  sender, System::EventArgs^  e) {
						 if (!selfChange&&plugin != nullptr)
						 {
							 bool bPrint =plugin->IsPrintInfo[14];
							 bPrint=~bPrint;
							 if(bPrint)
							 {
								 for(int i=0;i<CHANNELNUM;i++)
									 plugin->IsPrintInfo[i]=FALSE;
								 plugin->IsPrintInfo[14]=TRUE;
								 PrintChannelSetInformation(14);
							 }
							 else
							 {
								 plugin->IsPrintInfo[14]=FALSE;
							 }
						 }
					 }
	private: System::Void Print16_Information(System::Object^  sender, System::EventArgs^  e) {
						 if (!selfChange&&plugin != nullptr)
						 {
							 bool bPrint =plugin->IsPrintInfo[15];
							 bPrint=~bPrint;
							 if(bPrint)
							 {
								 for(int i=0;i<CHANNELNUM;i++)
									 plugin->IsPrintInfo[i]=FALSE;
								 plugin->IsPrintInfo[15]=TRUE;
								 PrintChannelSetInformation(15);
							 }
							 else
							 {
								 plugin->IsPrintInfo[15]=FALSE;
							 }
						 }
					 }
    private: System::Void PrintChannelSetInformation(int chId)
			 {
				 listViewInfo->Items->Clear();
				 CString stri;
				 String^ cstr;
				 SUM->Clear();				 
				 if(chId>=8)
				 {
					 stri.Format(_T("%d"),chId-7);
				     cstr="BI_"+gcnew String(stri);
				 }
				 else 
				 {
					 stri.Format(_T("%d"),chId+1);
					 cstr="AI_"+gcnew String(stri);
				 }				 
				 ChNameBox->Text=cstr;
				 stri.Format(_T("%d"),plugin->ChAllNum[chId]);
				 cstr = gcnew String(stri); 
				 SUM->Text=cstr;
				 BSTR bstr;
				 plugin->m_pChCounter[plugin->m_CounterIndex[chId]]->get_Name(&bstr);
				 stri=bstr;
				 cstr = gcnew String(stri);
				 ChFre->Text=cstr;
				 for(int i=0;i<plugin->ChAllNum[chId];i++)
				 {
					 stri.Format(_T("%d"),i);
					 cstr = gcnew String(stri); 
					 listViewInfo->Items->Add(cstr);
					 ListViewItem^ lvi=listViewInfo->Items[i];				 
					 stri.Format(_T("%.3f"),plugin->m_freqmult[chId][i]);
					 cstr = gcnew String(stri); 
					 lvi->SubItems->Add(cstr);
					 stri.Format(_T("%.3f"),plugin->m_Exfremult[chId][i]);
					 cstr = gcnew String(stri); 
					 lvi->SubItems->Add(cstr);
				 }
			 }
	private: System::Void listViewInfo_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
