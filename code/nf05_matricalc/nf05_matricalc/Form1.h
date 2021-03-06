#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "struct_matrice.h"
#include "action_base.h"
#include "manipulation.h"

#pragma once

namespace nf05_matricalc {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			
			// variables initialization

			margin = 10;

			nbMatrices = 0;
			matrices = (struct Matrice *) malloc(sizeof(struct Matrice));
		}

	private:
		// variables for dynamic design uses
		int margin;
		
		// variables for computing uses
		int nbMatrices;
	private: System::Windows::Forms::ComboBox^  cbManip1;


	private: System::Windows::Forms::Label^  labelManipulation1;
	private: System::Windows::Forms::ComboBox^  cbMatrice1;
	private: System::Windows::Forms::Button^  btnCalculer;
	private: System::Windows::Forms::Label^  labelMatrice1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  cbMatrice2_2;
	private: System::Windows::Forms::ComboBox^  cbManip2;
	private: System::Windows::Forms::ComboBox^  cbMatrice2_1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  labelManipulation2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnCalcul3;
	private: System::Windows::Forms::TextBox^  tbChiffre;
	private: System::Windows::Forms::ComboBox^  cbManip3;
	private: System::Windows::Forms::ComboBox^  cbMatrice3_1;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  cbMatrice4;

	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::ComboBox^  cbMatrice5_2;
	private: System::Windows::Forms::ComboBox^  cbMatrice5_1;







			 struct Matrice * matrices;

	protected:
		/// <summary>
		/// clear resources
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tab_control;
	protected: 

	protected: 
	private: System::Windows::Forms::TabPage^  tab_computing;
	private: System::Windows::Forms::TabPage^  tab_creation;
	private: System::Windows::Forms::Button^  btn_create;
	private: System::Windows::Forms::TextBox^  tb_nb_columns;

	private: System::Windows::Forms::Label^  label_nb_columns;
	private: System::Windows::Forms::TextBox^  tb_nb_rows;

	private: System::Windows::Forms::Label^  label_nb_rows;
	private: System::Windows::Forms::TabPage^  tab_list;
	private: System::Windows::Forms::TabPage^  tab_io;
	private: System::Windows::Forms::Button^  btn_validate;
	private: System::Windows::Forms::Panel^  container_creation;

	private:
		/// <summary>
		/// variables for Designer
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  btn_reset;
	private: System::Windows::Forms::TextBox^  tb_name;

	private: System::Windows::Forms::Label^  label_name;

	private: System::Windows::Forms::Panel^  container_display;

	private: System::Windows::Forms::TextBox^  tb_matrice_display;

	private: System::Windows::Forms::Label^  label_equal;
	private: System::Windows::Forms::Label^  label_matrice_name;
	private: System::Windows::Forms::Button^  btn_clear;
	private: System::Windows::Forms::Button^  btn_delete;
	private: System::Windows::Forms::ListBox^  lb_matrice_list;
	private: System::Windows::Forms::GroupBox^  gb_load;
	private: System::Windows::Forms::Button^  btn_load;
	private: System::Windows::Forms::TextBox^  tb_path_load;
	private: System::Windows::Forms::GroupBox^  gb_save;
	private: System::Windows::Forms::Button^  btn_save;
	private: System::Windows::Forms::TextBox^  tb_path_save;
	private: System::Windows::Forms::SaveFileDialog^  save_dialog;
	private: System::Windows::Forms::OpenFileDialog^  load_dialog;
	private: System::Windows::Forms::TextBox^  tb_result;
	private: System::Windows::Forms::Label^  label_output;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// method to initialize the window
		/// </summary>
		void InitializeComponent(void)
		{
			this->tab_control = (gcnew System::Windows::Forms::TabControl());
			this->tab_computing = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->cbMatrice5_2 = (gcnew System::Windows::Forms::ComboBox());
			this->cbMatrice5_1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbMatrice4 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnCalcul3 = (gcnew System::Windows::Forms::Button());
			this->tbChiffre = (gcnew System::Windows::Forms::TextBox());
			this->cbManip3 = (gcnew System::Windows::Forms::ComboBox());
			this->cbMatrice3_1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cbMatrice2_2 = (gcnew System::Windows::Forms::ComboBox());
			this->cbManip2 = (gcnew System::Windows::Forms::ComboBox());
			this->cbMatrice2_1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelManipulation2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelMatrice1 = (gcnew System::Windows::Forms::Label());
			this->btnCalculer = (gcnew System::Windows::Forms::Button());
			this->cbManip1 = (gcnew System::Windows::Forms::ComboBox());
			this->labelManipulation1 = (gcnew System::Windows::Forms::Label());
			this->cbMatrice1 = (gcnew System::Windows::Forms::ComboBox());
			this->tb_result = (gcnew System::Windows::Forms::TextBox());
			this->label_output = (gcnew System::Windows::Forms::Label());
			this->tab_creation = (gcnew System::Windows::Forms::TabPage());
			this->btn_reset = (gcnew System::Windows::Forms::Button());
			this->tb_name = (gcnew System::Windows::Forms::TextBox());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->btn_validate = (gcnew System::Windows::Forms::Button());
			this->container_creation = (gcnew System::Windows::Forms::Panel());
			this->btn_create = (gcnew System::Windows::Forms::Button());
			this->tb_nb_columns = (gcnew System::Windows::Forms::TextBox());
			this->label_nb_columns = (gcnew System::Windows::Forms::Label());
			this->tb_nb_rows = (gcnew System::Windows::Forms::TextBox());
			this->label_nb_rows = (gcnew System::Windows::Forms::Label());
			this->tab_list = (gcnew System::Windows::Forms::TabPage());
			this->container_display = (gcnew System::Windows::Forms::Panel());
			this->tb_matrice_display = (gcnew System::Windows::Forms::TextBox());
			this->label_equal = (gcnew System::Windows::Forms::Label());
			this->label_matrice_name = (gcnew System::Windows::Forms::Label());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->lb_matrice_list = (gcnew System::Windows::Forms::ListBox());
			this->tab_io = (gcnew System::Windows::Forms::TabPage());
			this->gb_load = (gcnew System::Windows::Forms::GroupBox());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->tb_path_load = (gcnew System::Windows::Forms::TextBox());
			this->gb_save = (gcnew System::Windows::Forms::GroupBox());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->tb_path_save = (gcnew System::Windows::Forms::TextBox());
			this->save_dialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->load_dialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tab_control->SuspendLayout();
			this->tab_computing->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tab_creation->SuspendLayout();
			this->tab_list->SuspendLayout();
			this->container_display->SuspendLayout();
			this->tab_io->SuspendLayout();
			this->gb_load->SuspendLayout();
			this->gb_save->SuspendLayout();
			this->SuspendLayout();
			// 
			// tab_control
			// 
			this->tab_control->Controls->Add(this->tab_computing);
			this->tab_control->Controls->Add(this->tab_creation);
			this->tab_control->Controls->Add(this->tab_list);
			this->tab_control->Controls->Add(this->tab_io);
			this->tab_control->Location = System::Drawing::Point(12, 12);
			this->tab_control->Name = L"tab_control";
			this->tab_control->SelectedIndex = 0;
			this->tab_control->Size = System::Drawing::Size(760, 537);
			this->tab_control->TabIndex = 0;
			this->tab_control->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tab_control_SelectedIndexChanged);
			// 
			// tab_computing
			// 
			this->tab_computing->Controls->Add(this->groupBox5);
			this->tab_computing->Controls->Add(this->groupBox4);
			this->tab_computing->Controls->Add(this->groupBox3);
			this->tab_computing->Controls->Add(this->groupBox2);
			this->tab_computing->Controls->Add(this->label1);
			this->tab_computing->Controls->Add(this->groupBox1);
			this->tab_computing->Controls->Add(this->tb_result);
			this->tab_computing->Controls->Add(this->label_output);
			this->tab_computing->Location = System::Drawing::Point(4, 22);
			this->tab_computing->Name = L"tab_computing";
			this->tab_computing->Padding = System::Windows::Forms::Padding(3);
			this->tab_computing->Size = System::Drawing::Size(752, 511);
			this->tab_computing->TabIndex = 0;
			this->tab_computing->Text = L"Manipulation";
			this->tab_computing->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->btn5);
			this->groupBox5->Controls->Add(this->cbMatrice5_2);
			this->groupBox5->Controls->Add(this->cbMatrice5_1);
			this->groupBox5->Location = System::Drawing::Point(18, 362);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(428, 87);
			this->groupBox5->TabIndex = 35;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Ax=b";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(168, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 13);
			this->label10->TabIndex = 34;
			this->label10->Text = L"b :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 25);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 13);
			this->label9->TabIndex = 33;
			this->label9->Text = L"A :";
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(338, 46);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 23);
			this->btn5->TabIndex = 32;
			this->btn5->Text = L"calculer";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// cbMatrice5_2
			// 
			this->cbMatrice5_2->FormattingEnabled = true;
			this->cbMatrice5_2->Location = System::Drawing::Point(171, 48);
			this->cbMatrice5_2->Name = L"cbMatrice5_2";
			this->cbMatrice5_2->Size = System::Drawing::Size(121, 21);
			this->cbMatrice5_2->TabIndex = 31;
			// 
			// cbMatrice5_1
			// 
			this->cbMatrice5_1->FormattingEnabled = true;
			this->cbMatrice5_1->Location = System::Drawing::Point(6, 48);
			this->cbMatrice5_1->Name = L"cbMatrice5_1";
			this->cbMatrice5_1->Size = System::Drawing::Size(121, 21);
			this->cbMatrice5_1->TabIndex = 30;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->btn4);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->cbMatrice4);
			this->groupBox4->Location = System::Drawing::Point(18, 301);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(429, 55);
			this->groupBox4->TabIndex = 29;
			this->groupBox4->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(217, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 13);
			this->label8->TabIndex = 29;
			this->label8->Text = L"inverse";
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(338, 26);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(75, 23);
			this->btn4->TabIndex = 28;
			this->btn4->Text = L"calculer";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 27;
			this->label7->Text = L"matrice";
			// 
			// cbMatrice4
			// 
			this->cbMatrice4->FormattingEnabled = true;
			this->cbMatrice4->Location = System::Drawing::Point(6, 28);
			this->cbMatrice4->Name = L"cbMatrice4";
			this->cbMatrice4->Size = System::Drawing::Size(121, 21);
			this->cbMatrice4->TabIndex = 26;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->btnCalcul3);
			this->groupBox3->Controls->Add(this->tbChiffre);
			this->groupBox3->Controls->Add(this->cbManip3);
			this->groupBox3->Controls->Add(this->cbMatrice3_1);
			this->groupBox3->Location = System::Drawing::Point(18, 196);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(430, 99);
			this->groupBox3->TabIndex = 25;
			this->groupBox3->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 56);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"chiffre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"matrice";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(168, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"puissance, multiplication avec un chiffre";
			// 
			// btnCalcul3
			// 
			this->btnCalcul3->Location = System::Drawing::Point(338, 69);
			this->btnCalcul3->Name = L"btnCalcul3";
			this->btnCalcul3->Size = System::Drawing::Size(75, 23);
			this->btnCalcul3->TabIndex = 21;
			this->btnCalcul3->Text = L"calculer";
			this->btnCalcul3->UseVisualStyleBackColor = true;
			this->btnCalcul3->Click += gcnew System::EventHandler(this, &Form1::btnCalcul3_Click);
			// 
			// tbChiffre
			// 
			this->tbChiffre->Location = System::Drawing::Point(6, 72);
			this->tbChiffre->Name = L"tbChiffre";
			this->tbChiffre->Size = System::Drawing::Size(119, 20);
			this->tbChiffre->TabIndex = 20;
			// 
			// cbManip3
			// 
			this->cbManip3->FormattingEnabled = true;
			this->cbManip3->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"puissance", L"multiplication avec chiffre"});
			this->cbManip3->Location = System::Drawing::Point(171, 53);
			this->cbManip3->Name = L"cbManip3";
			this->cbManip3->Size = System::Drawing::Size(121, 21);
			this->cbManip3->TabIndex = 19;
			// 
			// cbMatrice3_1
			// 
			this->cbMatrice3_1->FormattingEnabled = true;
			this->cbMatrice3_1->Location = System::Drawing::Point(6, 32);
			this->cbMatrice3_1->Name = L"cbMatrice3_1";
			this->cbMatrice3_1->Size = System::Drawing::Size(119, 21);
			this->cbMatrice3_1->TabIndex = 18;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->cbMatrice2_2);
			this->groupBox2->Controls->Add(this->cbManip2);
			this->groupBox2->Controls->Add(this->cbMatrice2_1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->labelManipulation2);
			this->groupBox2->Location = System::Drawing::Point(18, 88);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(430, 102);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(338, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"calculer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// cbMatrice2_2
			// 
			this->cbMatrice2_2->FormattingEnabled = true;
			this->cbMatrice2_2->Location = System::Drawing::Point(6, 75);
			this->cbMatrice2_2->Name = L"cbMatrice2_2";
			this->cbMatrice2_2->Size = System::Drawing::Size(119, 21);
			this->cbMatrice2_2->TabIndex = 15;
			// 
			// cbManip2
			// 
			this->cbManip2->FormattingEnabled = true;
			this->cbManip2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"addition", L"soustraction", L"multiplication"});
			this->cbManip2->Location = System::Drawing::Point(171, 56);
			this->cbManip2->Name = L"cbManip2";
			this->cbManip2->Size = System::Drawing::Size(121, 21);
			this->cbManip2->TabIndex = 14;
			// 
			// cbMatrice2_1
			// 
			this->cbMatrice2_1->FormattingEnabled = true;
			this->cbMatrice2_1->Location = System::Drawing::Point(6, 32);
			this->cbMatrice2_1->Name = L"cbMatrice2_1";
			this->cbMatrice2_1->Size = System::Drawing::Size(118, 21);
			this->cbMatrice2_1->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"matrice 2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"matrice 1";
			// 
			// labelManipulation2
			// 
			this->labelManipulation2->AutoSize = true;
			this->labelManipulation2->Location = System::Drawing::Point(168, 32);
			this->labelManipulation2->Name = L"labelManipulation2";
			this->labelManipulation2->Size = System::Drawing::Size(173, 13);
			this->labelManipulation2->TabIndex = 10;
			this->labelManipulation2->Text = L"addition, soustraction, multiplication";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Opérations:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelMatrice1);
			this->groupBox1->Controls->Add(this->btnCalculer);
			this->groupBox1->Controls->Add(this->cbManip1);
			this->groupBox1->Controls->Add(this->labelManipulation1);
			this->groupBox1->Controls->Add(this->cbMatrice1);
			this->groupBox1->Location = System::Drawing::Point(16, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(432, 63);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			// 
			// labelMatrice1
			// 
			this->labelMatrice1->AutoSize = true;
			this->labelMatrice1->Location = System::Drawing::Point(170, 16);
			this->labelMatrice1->Name = L"labelMatrice1";
			this->labelMatrice1->Size = System::Drawing::Size(90, 13);
			this->labelMatrice1->TabIndex = 7;
			this->labelMatrice1->Text = L"matrice à calculer";
			// 
			// btnCalculer
			// 
			this->btnCalculer->Location = System::Drawing::Point(340, 32);
			this->btnCalculer->Name = L"btnCalculer";
			this->btnCalculer->Size = System::Drawing::Size(75, 23);
			this->btnCalculer->TabIndex = 6;
			this->btnCalculer->Text = L"calculer";
			this->btnCalculer->UseVisualStyleBackColor = true;
			this->btnCalculer->Click += gcnew System::EventHandler(this, &Form1::btnCalculer_Click);
			// 
			// cbManip1
			// 
			this->cbManip1->FormattingEnabled = true;
			this->cbManip1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"norme", L"trace", L"déterminant"});
			this->cbManip1->Location = System::Drawing::Point(6, 32);
			this->cbManip1->Name = L"cbManip1";
			this->cbManip1->Size = System::Drawing::Size(121, 21);
			this->cbManip1->TabIndex = 5;
			// 
			// labelManipulation1
			// 
			this->labelManipulation1->AutoSize = true;
			this->labelManipulation1->Location = System::Drawing::Point(3, 16);
			this->labelManipulation1->Name = L"labelManipulation1";
			this->labelManipulation1->Size = System::Drawing::Size(136, 13);
			this->labelManipulation1->TabIndex = 4;
			this->labelManipulation1->Text = L"norme, trace et déterminant";
			// 
			// cbMatrice1
			// 
			this->cbMatrice1->FormattingEnabled = true;
			this->cbMatrice1->Location = System::Drawing::Point(173, 32);
			this->cbMatrice1->Name = L"cbMatrice1";
			this->cbMatrice1->Size = System::Drawing::Size(121, 21);
			this->cbMatrice1->TabIndex = 3;
			// 
			// tb_result
			// 
			this->tb_result->AcceptsReturn = true;
			this->tb_result->AcceptsTab = true;
			this->tb_result->Enabled = false;
			this->tb_result->Location = System::Drawing::Point(500, 21);
			this->tb_result->Multiline = true;
			this->tb_result->Name = L"tb_result";
			this->tb_result->Size = System::Drawing::Size(246, 484);
			this->tb_result->TabIndex = 2;
			// 
			// label_output
			// 
			this->label_output->AutoSize = true;
			this->label_output->Location = System::Drawing::Point(497, 5);
			this->label_output->Name = L"label_output";
			this->label_output->Size = System::Drawing::Size(49, 13);
			this->label_output->TabIndex = 1;
			this->label_output->Text = L"Résultat:";
			// 
			// tab_creation
			// 
			this->tab_creation->Controls->Add(this->btn_reset);
			this->tab_creation->Controls->Add(this->tb_name);
			this->tab_creation->Controls->Add(this->label_name);
			this->tab_creation->Controls->Add(this->btn_validate);
			this->tab_creation->Controls->Add(this->container_creation);
			this->tab_creation->Controls->Add(this->btn_create);
			this->tab_creation->Controls->Add(this->tb_nb_columns);
			this->tab_creation->Controls->Add(this->label_nb_columns);
			this->tab_creation->Controls->Add(this->tb_nb_rows);
			this->tab_creation->Controls->Add(this->label_nb_rows);
			this->tab_creation->Location = System::Drawing::Point(4, 22);
			this->tab_creation->Name = L"tab_creation";
			this->tab_creation->Padding = System::Windows::Forms::Padding(3);
			this->tab_creation->Size = System::Drawing::Size(752, 511);
			this->tab_creation->TabIndex = 1;
			this->tab_creation->Text = L"Création matrice";
			this->tab_creation->UseVisualStyleBackColor = true;
			// 
			// btn_reset
			// 
			this->btn_reset->Location = System::Drawing::Point(576, 471);
			this->btn_reset->Name = L"btn_reset";
			this->btn_reset->Size = System::Drawing::Size(75, 23);
			this->btn_reset->TabIndex = 9;
			this->btn_reset->Text = L"Réinitialiser";
			this->btn_reset->UseVisualStyleBackColor = true;
			this->btn_reset->Click += gcnew System::EventHandler(this, &Form1::btn_reset_Click);
			// 
			// tb_name
			// 
			this->tb_name->Location = System::Drawing::Point(48, 4);
			this->tb_name->Name = L"tb_name";
			this->tb_name->Size = System::Drawing::Size(100, 20);
			this->tb_name->TabIndex = 8;
			this->tb_name->Text = L"une_matrice";
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Location = System::Drawing::Point(7, 7);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(35, 13);
			this->label_name->TabIndex = 7;
			this->label_name->Text = L"Nom=";
			// 
			// btn_validate
			// 
			this->btn_validate->Enabled = false;
			this->btn_validate->Location = System::Drawing::Point(667, 471);
			this->btn_validate->Name = L"btn_validate";
			this->btn_validate->Size = System::Drawing::Size(75, 23);
			this->btn_validate->TabIndex = 6;
			this->btn_validate->Text = L"Valider";
			this->btn_validate->UseVisualStyleBackColor = true;
			this->btn_validate->Click += gcnew System::EventHandler(this, &Form1::btn_validate_Click);
			// 
			// container_creation
			// 
			this->container_creation->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->container_creation->Location = System::Drawing::Point(10, 38);
			this->container_creation->Name = L"container_creation";
			this->container_creation->Size = System::Drawing::Size(732, 427);
			this->container_creation->TabIndex = 5;
			// 
			// btn_create
			// 
			this->btn_create->Location = System::Drawing::Point(455, 2);
			this->btn_create->Name = L"btn_create";
			this->btn_create->Size = System::Drawing::Size(75, 23);
			this->btn_create->TabIndex = 4;
			this->btn_create->Text = L"Créer";
			this->btn_create->UseVisualStyleBackColor = true;
			this->btn_create->Click += gcnew System::EventHandler(this, &Form1::btn_create_Click);
			// 
			// tb_nb_columns
			// 
			this->tb_nb_columns->Location = System::Drawing::Point(380, 4);
			this->tb_nb_columns->Name = L"tb_nb_columns";
			this->tb_nb_columns->Size = System::Drawing::Size(40, 20);
			this->tb_nb_columns->TabIndex = 3;
			this->tb_nb_columns->Text = L"2";
			// 
			// label_nb_columns
			// 
			this->label_nb_columns->AutoSize = true;
			this->label_nb_columns->Location = System::Drawing::Point(300, 7);
			this->label_nb_columns->Name = L"label_nb_columns";
			this->label_nb_columns->Size = System::Drawing::Size(73, 13);
			this->label_nb_columns->TabIndex = 2;
			this->label_nb_columns->Text = L"Nb colonnes=";
			// 
			// tb_nb_rows
			// 
			this->tb_nb_rows->Location = System::Drawing::Point(236, 4);
			this->tb_nb_rows->Name = L"tb_nb_rows";
			this->tb_nb_rows->Size = System::Drawing::Size(40, 20);
			this->tb_nb_rows->TabIndex = 1;
			this->tb_nb_rows->Text = L"2";
			// 
			// label_nb_rows
			// 
			this->label_nb_rows->AutoSize = true;
			this->label_nb_rows->Location = System::Drawing::Point(172, 7);
			this->label_nb_rows->Name = L"label_nb_rows";
			this->label_nb_rows->Size = System::Drawing::Size(57, 13);
			this->label_nb_rows->TabIndex = 0;
			this->label_nb_rows->Text = L"Nb lignes=";
			// 
			// tab_list
			// 
			this->tab_list->Controls->Add(this->container_display);
			this->tab_list->Controls->Add(this->btn_clear);
			this->tab_list->Controls->Add(this->btn_delete);
			this->tab_list->Controls->Add(this->lb_matrice_list);
			this->tab_list->Location = System::Drawing::Point(4, 22);
			this->tab_list->Name = L"tab_list";
			this->tab_list->Size = System::Drawing::Size(752, 511);
			this->tab_list->TabIndex = 2;
			this->tab_list->Text = L"Liste";
			this->tab_list->UseVisualStyleBackColor = true;
			// 
			// container_display
			// 
			this->container_display->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->container_display->Controls->Add(this->tb_matrice_display);
			this->container_display->Controls->Add(this->label_equal);
			this->container_display->Controls->Add(this->label_matrice_name);
			this->container_display->Location = System::Drawing::Point(234, 3);
			this->container_display->Name = L"container_display";
			this->container_display->Size = System::Drawing::Size(515, 472);
			this->container_display->TabIndex = 3;
			// 
			// tb_matrice_display
			// 
			this->tb_matrice_display->AcceptsReturn = true;
			this->tb_matrice_display->AcceptsTab = true;
			this->tb_matrice_display->Enabled = false;
			this->tb_matrice_display->Location = System::Drawing::Point(87, 17);
			this->tb_matrice_display->Multiline = true;
			this->tb_matrice_display->Name = L"tb_matrice_display";
			this->tb_matrice_display->Size = System::Drawing::Size(408, 435);
			this->tb_matrice_display->TabIndex = 2;
			this->tb_matrice_display->Text = L"Affichage de la matrice choisie";
			// 
			// label_equal
			// 
			this->label_equal->AutoSize = true;
			this->label_equal->Location = System::Drawing::Point(68, 20);
			this->label_equal->Name = L"label_equal";
			this->label_equal->Size = System::Drawing::Size(13, 13);
			this->label_equal->TabIndex = 1;
			this->label_equal->Text = L"=";
			// 
			// label_matrice_name
			// 
			this->label_matrice_name->AutoSize = true;
			this->label_matrice_name->Location = System::Drawing::Point(20, 20);
			this->label_matrice_name->Name = L"label_matrice_name";
			this->label_matrice_name->Size = System::Drawing::Size(42, 13);
			this->label_matrice_name->TabIndex = 0;
			this->label_matrice_name->Text = L"Matrice";
			// 
			// btn_clear
			// 
			this->btn_clear->Location = System::Drawing::Point(130, 485);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(75, 23);
			this->btn_clear->TabIndex = 2;
			this->btn_clear->Text = L"Vider la liste";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &Form1::btn_clear_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(3, 485);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 23);
			this->btn_delete->TabIndex = 1;
			this->btn_delete->Text = L"Supprimer";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Form1::btn_delete_Click);
			// 
			// lb_matrice_list
			// 
			this->lb_matrice_list->FormattingEnabled = true;
			this->lb_matrice_list->Location = System::Drawing::Point(3, 3);
			this->lb_matrice_list->Name = L"lb_matrice_list";
			this->lb_matrice_list->Size = System::Drawing::Size(202, 472);
			this->lb_matrice_list->TabIndex = 0;
			this->lb_matrice_list->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lb_matrice_list_SelectedIndexChanged);
			// 
			// tab_io
			// 
			this->tab_io->Controls->Add(this->gb_load);
			this->tab_io->Controls->Add(this->gb_save);
			this->tab_io->Location = System::Drawing::Point(4, 22);
			this->tab_io->Name = L"tab_io";
			this->tab_io->Size = System::Drawing::Size(752, 511);
			this->tab_io->TabIndex = 3;
			this->tab_io->Text = L"Persistance";
			this->tab_io->UseVisualStyleBackColor = true;
			// 
			// gb_load
			// 
			this->gb_load->Controls->Add(this->btn_load);
			this->gb_load->Controls->Add(this->tb_path_load);
			this->gb_load->Location = System::Drawing::Point(3, 261);
			this->gb_load->Name = L"gb_load";
			this->gb_load->Size = System::Drawing::Size(746, 247);
			this->gb_load->TabIndex = 1;
			this->gb_load->TabStop = false;
			this->gb_load->Text = L"Charger";
			// 
			// btn_load
			// 
			this->btn_load->Location = System::Drawing::Point(488, 117);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(75, 23);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Charger";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &Form1::btn_load_Click);
			// 
			// tb_path_load
			// 
			this->tb_path_load->Location = System::Drawing::Point(182, 119);
			this->tb_path_load->Name = L"tb_path_load";
			this->tb_path_load->Size = System::Drawing::Size(300, 20);
			this->tb_path_load->TabIndex = 0;
			this->tb_path_load->Text = L"Parcourir...";
			this->tb_path_load->Click += gcnew System::EventHandler(this, &Form1::tb_path_load_Click);
			// 
			// gb_save
			// 
			this->gb_save->Controls->Add(this->btn_save);
			this->gb_save->Controls->Add(this->tb_path_save);
			this->gb_save->Location = System::Drawing::Point(3, 3);
			this->gb_save->Name = L"gb_save";
			this->gb_save->Size = System::Drawing::Size(746, 247);
			this->gb_save->TabIndex = 0;
			this->gb_save->TabStop = false;
			this->gb_save->Text = L"Sauvegarder";
			// 
			// btn_save
			// 
			this->btn_save->Location = System::Drawing::Point(488, 117);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(75, 23);
			this->btn_save->TabIndex = 1;
			this->btn_save->Text = L"Sauvegarder";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &Form1::btn_save_Click);
			// 
			// tb_path_save
			// 
			this->tb_path_save->Location = System::Drawing::Point(182, 119);
			this->tb_path_save->Name = L"tb_path_save";
			this->tb_path_save->Size = System::Drawing::Size(300, 20);
			this->tb_path_save->TabIndex = 0;
			this->tb_path_save->Text = L"Parcourir...";
			this->tb_path_save->Click += gcnew System::EventHandler(this, &Form1::tb_path_save_Click);
			// 
			// save_dialog
			// 
			this->save_dialog->DefaultExt = L"dat";
			this->save_dialog->Title = L"Sauvegarder les matrices";
			// 
			// load_dialog
			// 
			this->load_dialog->FileName = L"openFileDialog1";
			this->load_dialog->Filter = L"DAT(*.dat)|*.dat|Tous les fichiers(*.*)|*.*";
			this->load_dialog->Title = L"Charger les matrices";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->tab_control);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Matricalc - GAO X. & WANG Y. & ZHU J.";
			this->tab_control->ResumeLayout(false);
			this->tab_computing->ResumeLayout(false);
			this->tab_computing->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tab_creation->ResumeLayout(false);
			this->tab_creation->PerformLayout();
			this->tab_list->ResumeLayout(false);
			this->container_display->ResumeLayout(false);
			this->container_display->PerformLayout();
			this->tab_io->ResumeLayout(false);
			this->gb_load->ResumeLayout(false);
			this->gb_load->PerformLayout();
			this->gb_save->ResumeLayout(false);
			this->gb_save->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	/* Utils */
	private: char* String2Ptr(String^ str) {
				 return (char*)(void*) Marshal::StringToHGlobalAnsi(str);
			 }

	/* Utils */
	private: String^ Ptr2String(char *ptr) {
				 return Marshal::PtrToStringAnsi(static_cast<IntPtr>(ptr));
			 }

	private: void String2StdString(String^ str, std::string output) {
				 const char *ptr = (const char *) Marshal::StringToHGlobalAnsi(str).ToPointer();
				 output = ptr;
				 Marshal::FreeHGlobal(IntPtr((void*) ptr));
			 }

	private: String^ MatriceToString(struct Matrice matrice) {
				 String^ matriceString = "";
				 int i,j;

				 // Construire une chaine de caractère structurée des éléments de la matrice
				 for (i = 0; i < matrice.taille_ligne; i++) {

					 for (j = 0; j < matrice.taille_col; j++) {

						 matriceString += matrice.matrice[i][j];

						 // Ajouter une tabulation entre chaque colonne d'une ligne
						 matriceString += "\r\t";
					 
					 }

					 // Ajouter un retour chariot entre chaque ligne de la matrice
					 matriceString += "\r\n";

				 }

				 return matriceString;
			 }

	private: void updateCb(System::Windows::Forms::ComboBox^ cb){
				 int i;

				 // Notifier la mise à jour de la liste
				 cb->BeginUpdate();

				 // Supprimer tous les éléments précédemment placés dans la liste
				 cb->Items->Clear();

				 // Obtenir tous les noms des matrices et les rajouter à la liste
				 for (i = 0; i < this->nbMatrices; i++) {

					 // Faire attention à la conversion d'un char* du C en String^ du C++
					 // En utilisant la fonction PtrToStringAnsi de System::Runtime::InteropServices::Marshal
					 cb->Items->Add(Ptr2String(matrices[i].nom));
				 }

				 // Notifier la fin de la mise à jour
				 cb->EndUpdate();
			 }

	private: void updateList(){
				 int i;

				 // Notifier la mise à jour de la liste
				 this->lb_matrice_list->BeginUpdate();

				 // Supprimer tous les éléments précédemment placés dans la liste
				 this->lb_matrice_list->Items->Clear();

				 // Obtenir tous les noms des matrices et les rajouter à la liste
				 for (i = 0; i < this->nbMatrices; i++) {

					 // Faire attention à la conversion d'un char* du C en String^ du C++
					 // En utilisant la fonction PtrToStringAnsi de System::Runtime::InteropServices::Marshal
					 this->lb_matrice_list->Items->Add(Ptr2String(matrices[i].nom));
				 }

				 // Notifier la fin de la mise à jour
				 this->lb_matrice_list->EndUpdate();

				 this->tb_matrice_display->Text = "";
			 }

	/* Switch tab on tab_control */
	// Traiter le changement de contenu quand le tab est changé, surtout sur le tab de la liste des matrices
	private: System::Void tab_control_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 // Détecter le changement de tab à celui contenant la liste des matrices
				 if (this->tab_control->SelectedTab == this->tab_list) {
					 // Mettre à jour la liste des matrices
					 updateList();
				 }
				 // Détecter le changement de tab à celui contenant la manipulation
				 else if (this->tab_control->SelectedTab == this->tab_computing){
					 // Mettre à jour la liste des matrices pour calculer
					 updateCb(this->cbMatrice1);
					 updateCb(this->cbMatrice2_1);
					 updateCb(this->cbMatrice2_2);
					 updateCb(this->cbMatrice3_1);
					 updateCb(this->cbMatrice4);
					 updateCb(this->cbMatrice5_1);
					 updateCb(this->cbMatrice5_2);
				 }
			 }

	/* Click on btn_create on tab_create */
	// Traiter le clic en bouton "Créer" en générant dynamiquement les boîtes à entrée d'une matrice
	private: System::Void btn_create_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 int nbRows,nbColumns;
				 int i,j;
				 int x,y;

				 // Obtenir le nombre de lignes et le nombre de colonnes en vérifiant que ce soient tous entiers
				 if (!System::Int32::TryParse(this->tb_nb_rows->Text, nbRows) || !System::Int32::TryParse(this->tb_nb_columns->Text, nbColumns)) {
					 MessageBox::Show("Le nombre de lignes et le nombre de colonnes doivent impérativement être entiers.");
					 return;
				 }

				 // Limiter le nombre maximal de lignes et de colonnes
				 // Pour simplifier le design et pour garantir la performance du calcul
				 if (nbRows > 9 || nbColumns > 9) {
					 if (nbRows > 9) {
						 nbRows = nbRows > 9 ? 9 : nbRows;
						 this->tb_nb_rows->Text = "" + nbRows;
					 }

					 if (nbColumns > 9) {
						 nbColumns = nbColumns > 9 ? 9 : nbColumns;
						 this->tb_nb_columns->Text = "" + nbColumns;
					 }
					 
					 nbColumns = nbColumns > 9 ? 9 : nbColumns;
					 MessageBox::Show("Le nombre de lignes ou le nombre de colonnes est plus grand que 9.\n\nEn raison de performance et de simplicité, permettons d'entrer un nombre <= 9, svp.");
				 }

				 // Nettoyer à chaque fois un nouveau clic s'est effectué
				 this->container_creation->Controls->Clear();

				 for (i = 0; i < nbRows; i++) {

					 // Calculer la position verticale pour chaque ligne
					 y = i * (20 + margin) + 4;

					 for (j = 0; j < nbColumns; j++) {

						 // Calculer la position horizontale pour chaque colonne
						 x = j * (40 + margin) + 4;

						 // Générer une nouvelle boîte à entrée et assigner les attributs correspondants
						 System::Windows::Forms::TextBox^  textBoxNew = (gcnew System::Windows::Forms::TextBox());
						 textBoxNew->Location = System::Drawing::Point(x, y);
						 textBoxNew->Name = "tb_" + i.ToString() + "_" + j.ToString();
						 textBoxNew->Size = System::Drawing::Size(40, 20);
						 textBoxNew->TabIndex = 0;

						 // Ajouter la boîté générée au Panel
						 this->container_creation->Controls->Add(textBoxNew);
					 }
				 }

				 // Activer le bouton "Valider"
				 this->btn_validate->Enabled = true;
			 }

	/* Click on btn_reset on tab_create */
	// Traiter le clic en bouton "Réinitialiser"
	private: System::Void btn_reset_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 // Supprimer toutes les boîtes à entrée pour la nouvelle matrice
				 this->container_creation->Controls->Clear();

				 // Réinitialiser les boîtes pour les informations de base
				 this->tb_name->Text = L"une_matrice";
				 this->tb_nb_rows->Text = L"2";
				 this->tb_nb_columns->Text = L"2";

				 // Désactiver le bouton "Valider"
				 this->btn_validate->Enabled = false;
			 }

	/* Click on btn_validate on tab_create */
	// Traiter le clic en bouton "Valider" en ajoutant la nouvelle matrice dans la liste
	private: System::Void btn_validate_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 // Obtenir le nombre de lignes et le nombre de colonnes
				 //   Ici, pour la simplicité, 
				 //   permettons de ne pas avoir besoin de casser la tête sur la validation des 2 nombres
				 //   car la vérification est faite au niveau du clic en bouton "Créer"
				 int nbRows = Convert::ToInt32(this->tb_nb_rows->Text);
				 int nbColumns = Convert::ToInt32(this->tb_nb_columns->Text);
				 int i,j;

				 // Allouer un espace pour la nouvelle matrice
				 struct Matrice* matrice = (struct Matrice *) malloc(sizeof(struct Matrice));

				 // Assigner les attributs selon les entrées
				 //   De même manière que dans l'affichage de la liste,
				 //   on fait attention à la conversion d'une String^ en char*
				 matrice->nom = String2Ptr(this->tb_name->Text);
				 matrice->taille_ligne = nbRows;
				 matrice->taille_col = nbColumns;

				 // Allouer des espace pour le tableau de matrice (1ère dimensions sur 2)
				 matrice->matrice = (float **) malloc(nbRows * sizeof(float *));

				 for (i = 0; i < nbRows; i++) {

					 // Allouer des espace pour le tableau de matrice (2ième dimensions sur 2)
					 matrice->matrice[i] = (float *) malloc(nbColumns * sizeof(float));

					 // Obtenir chaque élément de la matrice
					 for (j = 0; j < nbColumns; j++) {
						 double element;

						 // Régénérer le nom dynamique de chaque boîte à entrée
						 String^ name = "tb_" + i.ToString() + "_" + j.ToString();

						 // Valider de l'élément pour qu'il soit numérique
						 if (!System::Double::TryParse(this->container_creation->Controls[name]->Text, element)) {
							 MessageBox::Show("Tous les éléments de la matrice doivent impérativement être numériques.");
							 return;
						 }

						 // Enregistrer l'élément dans le tableau de matrice
						 matrice->matrice[i][j] = (float) element;
					 }
				 }

				 // Ajouter la nouvelle matrice dans la liste
				 this->matrices[nbMatrices] = *matrice;
				 this->nbMatrices++;

				 // Notifier l'utilisateur que la matrice a bien été créée
				 MessageBox::Show("La matrice a été créée avec succès.");
			 }

	/* Click on btn_delete of tab_list */
	// Traiter le clic en bouton "Supprimer" en supprimant une matrice sélectionnée de la liste
	private: System::Void btn_delete_Click(System::Object^  sender, System::EventArgs^  e) {

				 // Confirmer la suppression par utilisateur
				 System::Windows::Forms::DialogResult confirmation = \
					 MessageBox::Show("Vous êtes sûr de supprimer cette matrice?\nCette opération n'est pas réversible.", "Attention", MessageBoxButtons::YesNo);

				 if (confirmation == System::Windows::Forms::DialogResult::Yes) {
					 // Récupérer le nom de la matrice choisie
					 String^ nom = this->lb_matrice_list->SelectedItem->ToString();

					 // Récupérer l'indexe de la matrice choisie dans la liste
					 int index = this->lb_matrice_list->SelectedIndex;

					 // Supprimer la matrice
					 this->nbMatrices = supprimer(this->matrices, index, this->nbMatrices);

					 // Mettre à jour la liste des matrices
					 updateList();

					 // Notifier l'utilisateur
					 MessageBox::Show("La matrice \"" + nom + "\" a bien été supprimée.");
				 }
			 }

	/* Click on btn_clear of tab_list */
	// Traiter le clic en bouton "Vider" en supprimant toutes les matrices de la liste
	private: System::Void btn_clear_Click(System::Object^  sender, System::EventArgs^  e) {

				 // Confirmer la suppression des toutes par utilisateur
				 System::Windows::Forms::DialogResult confirmation = \
					 MessageBox::Show("Vous êtes sûr de vider la liste des matrices?\nCette opération n'est pas réversible.", "Attention", MessageBoxButtons::YesNo);

				 if (confirmation == System::Windows::Forms::DialogResult::Yes) {
					  // Vider la matrice
					 this->nbMatrices = vider(this->matrices);

					 // Mettre à jour la liste des matrices
					 updateList();

					 // Notifier l'utilisateur
					 MessageBox::Show("La liste des matrices a bien été vidée." );
				 }
			 }

	/* Select item on lb_matrice_list on tab_list */
	// Traiter la sélection d'une matrice de la liste en affichant la matrice
	private: System::Void lb_matrice_list_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->lb_matrice_list->SelectedIndex == -1) {
					 return;
				 }

				 // Obtenir la matrice sélectionnée
				 struct Matrice selectedMatrice = matrices[this->lb_matrice_list->SelectedIndex];

				 // Afficher la matrice dans la boîte à affichage (désactivée à l'entrée par défaut)
				 this->tb_matrice_display->Text = MatriceToString(selectedMatrice);
			 }

	/* Click on tb_path_save of tab_io */
	// Traiter le clic en boîte à entrée "Parcourir pour sauvegarder", 
	//   en sortant le dialogue de sauvegarde pour que l'utilisateur indique le nom du fichier
	private: System::Void tb_path_save_Click(System::Object^  sender, System::EventArgs^  e) {

				 // Sortir le dialogue de sauvegarde et attendre que l'utilisateur clique en "OK"
				 if(save_dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

					 // Enregistrer le chemin du fichier à sauvegarder dans la boîte à entrée
					 this->tb_path_save->Text = save_dialog->FileName;
				 }
			 }

	/* Click on tb_path_load of tab_io */
	// Traiter le clic en boîte à entrée "Parcourir pour charger", 
	//   en sortant le dialogue d'ouverture pour que l'utilisateur choisisse le fichier à charger
	private: System::Void tb_path_load_Click(System::Object^  sender, System::EventArgs^  e) {

				 // Sortir le dialogue d'ouverture et attendre que l'utilisateur clique en "OK"
				 if(load_dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

					 // Enregistrer le chemin du fichier à charger dans la boîte à entrée
					 this->tb_path_load->Text = load_dialog->FileName;
				 }
			 }

	/* Click on btn_save on tab_io */
	// Traiter le clic en bouton "Sauvegarder" en écrivant les variables de matrice dans le fichier
	private: System::Void btn_save_Click(System::Object^  sender, System::EventArgs^  e) {
				 // Pointeur du fichier
				 FILE *ptr;

				 // Ne pas ouvrir le fichier si le chemin est incorrect
				 if (this->tb_path_save->Text == "Parcourir..." || this->tb_path_save->Text == "") {

					 // Informer l'utilisateur que le chemin n'est pas valide
					 MessageBox::Show("Veuillez indiquer le fichier à sauvegarder.");
					 return;
				 }

				 // Ouvrir le fichier pour écrire selon le chemin
				 ptr = fopen(String2Ptr(this->tb_path_save->Text), "w");

				 // Ecrire les matrices dans le fichier
				 enregistrer(ptr, this->matrices, this->nbMatrices);

				 // Fermer le fichier
				 fclose(ptr);

				 // Notifier l'utilisateur que les matrices ont été enregistrées
				 MessageBox::Show("Les matrices ont bien été sauvegardées dans \"" + this->tb_path_save->Text + "\".");
			 }

	/* Click on btn_load on tab_io */
	// Traiter le clic en bouton "Charger" en lisant les variables de matrice dans le fichier
	private: System::Void btn_load_Click(System::Object^  sender, System::EventArgs^  e) {
				 // Pointeur du fichier
				 FILE *ptr;

				 // Ne pas ouvrir le fichier si le chemin est incorrect
				 if (this->tb_path_load->Text == "Parcourir..." || this->tb_path_load->Text == "") {

					 // Informer l'utilisateur que le chemin n'est pas valide
					 MessageBox::Show("Veuillez indiquer le fichier à sauvegarder.");
					 return;
				 }

				 this->matrices = (struct Matrice *) malloc(sizeof(struct Matrice));

				 ptr = fopen(String2Ptr(this->tb_path_load->Text), "r");
				 this->nbMatrices = lire(ptr, this->matrices);
				 fclose(ptr);

				 MessageBox::Show("Le fichier a été chargé avec succès.\n" + "Nombre de matrices chargées: " + this->nbMatrices + ".");
			 }

private: System::Void btnCalculer_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Tirer le type de manipulation
			 int indexManip;
			  //Tirer la matrice à opérer
			 int indexMatrice;
			 float resultat;
			 indexManip = cbManip1->SelectedIndex ;
			 indexMatrice = cbMatrice1->SelectedIndex;

			 //Vérifier et calculer le résultat
			if (validition_carre(matrices[indexMatrice])==1){
			 switch (indexManip) {
				case 0:
						resultat = Norme(matrices[indexMatrice]);
						break;
				case 1:
						resultat = Trace(matrices[indexMatrice]);
						break;
				case 2:
						resultat = determinant(matrices[indexMatrice]);						
						break;
				default:
						MessageBox::Show("L'opération est inconnue");
						break;
			}			
			this->tb_result->Text = "" + resultat;
		  }
			else{
				MessageBox::Show("La matrice n'est pas carré, nous ne pouvons pas faire cette opération.");
			}
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Tirer le type de manipulation
			 int indexManip;
			  //Tirer la matrice à opérer
			 int indexMatrice1;
			 int indexMatrice2;
			 struct Matrice* resultat = (struct Matrice*) malloc(sizeof(struct Matrice));
			 indexManip = cbManip2->SelectedIndex ;
			 indexMatrice1 = cbMatrice2_1->SelectedIndex;
			 indexMatrice2 = cbMatrice2_2->SelectedIndex;

			 //Vérifier et calculer le résultat
			 switch (indexManip) {
				case 0:
						resultat = addition(&matrices[indexMatrice1],&matrices[indexMatrice2]);
						break;
				case 1:
						resultat = soustraction(&matrices[indexMatrice1],&matrices[indexMatrice2]);
						break;
				case 2:
						resultat =  multiplication1(&matrices[indexMatrice1],&matrices[indexMatrice2]);		
						break;
				default:
						MessageBox::Show("L'opération est inconnue");
						break;
			}		 
			if (resultat == NULL){
				MessageBox::Show("Les tailles de ces deux matrices ne sont pas cohérents.");
			}
			else{				
				// Afficher la matrice dans la boîte à affichage 
				 this->tb_result->Text = MatriceToString(*resultat);
			}
		 }


private: System::Void btnCalcul3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Tirer le type de manipulation
			 int indexManip;
			  //Tirer la matrice à opérer
			 int indexMatrice;
			 //Tirer le chiffre
			 float m;
			 double m_1;
			 int p;			 
			 struct Matrice* resultat = (struct Matrice*) malloc(sizeof(struct Matrice));

			 indexManip = cbManip3->SelectedIndex ;
			 indexMatrice = cbMatrice3_1->SelectedIndex;
			  switch (indexManip) {
				case 0:
					if (validition_carre(matrices[indexMatrice])==1){
						p = Convert::ToInt32(this->tbChiffre->Text);
						resultat =  &puissance(matrices[indexMatrice], p);
					}
					else{
						MessageBox::Show("La taille de cette matrice ne peut pas faire cette opération, il faut une matrice carrée.");
					}
					break;					
				case 1:
					m_1 = Convert::ToDouble(this->tbChiffre->Text);
					m = (float)m_1;
					resultat = &multiplication2(matrices[indexMatrice], m);
					break;
				default:
					MessageBox::Show("L'opération est inconnue");
					break;
			}
			this->tb_result->Text = MatriceToString(*resultat);
		 }


private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Tirer la matrice à opérer
			  int indexMatrice, n, i, j;
			  float** a;

			  indexMatrice = cbMatrice4->SelectedIndex;
			  struct Matrice* resultat = (struct Matrice*) malloc(sizeof(struct Matrice));
			  if (validition_carre(matrices[indexMatrice])==1){
				  /*
				  n = matrices[indexMatrice].taille_ligne;
				  a = (float **) malloc(n * sizeof(float *));
				  for ( i = 0 ; i < n ; i++ ){
						a[i] = (float *) malloc(n * sizeof(float));
						for ( j = 0 ; j < n ; j++ ){
								a[i][j] =  matrices[indexMatrice].matrice[i][j];
						}
					}
					*/
						resultat =  inverse(matrices[indexMatrice].matrice, matrices[indexMatrice].taille_ligne);
				}
			 else{
						MessageBox::Show("La taille de cette matrice ne peut pas faire cette opération, il faut une matrice carrée.");
				}
			 this->tb_result->Text = MatriceToString(*resultat);
		 }

private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			   //Tirer la matrice à opérer
			 int indexMatrice1;
			 int indexMatrice2;
			 int validation;
			 struct Matrice* resultat = (struct Matrice*) malloc(sizeof(struct Matrice));
			 indexMatrice1 = cbMatrice5_1->SelectedIndex;
			 indexMatrice2 = cbMatrice5_2->SelectedIndex;
			 validation = validation_de_solution(matrices[indexMatrice1], matrices[indexMatrice2]);
			 switch (validation){
			 case 0:
				 MessageBox::Show("Il n'y a pas de solution !\nCode: " + 0);
				 break;
			 case -1:
				  MessageBox::Show("Il n'y a pas de solution !\nCode: " + -1);
				  break;
			 case 2:
				  MessageBox::Show("Il y a plusieurs solutions !\nCode: " + 2);
				  break;
			 case 1:
				  resultat = Matrice_Lineaire(matrices[indexMatrice1], matrices[indexMatrice2]);
				  this->tb_result->Text = MatriceToString(*resultat);
				  break;
			 }
		 }
};
}

